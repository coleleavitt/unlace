/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: utf8_utf16
// Address: 0x0000000100074000

//----- (0000000100074000) ----------------------------------------------------
char __fastcall utf8_utf16(__int64 a1, char *a2, int a3)
{
  bool v4; // cc
  unsigned __int64 v5; // rdx
  char result; // al
  int v7; // r12d
  unsigned int utf8_char; // r13d
  _WORD *v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  bool v13; // cf
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // r15
  __int64 v20; // rbx
  int v21; // [rsp+4h] [rbp-3Ch]
  char *v22; // [rsp+8h] [rbp-38h] BYREF

  v22 = a2;
  v4 = a3 <= 0;
  v5 = 16;
  v21 = a3;
  if ( !v4 )
    v5 = (unsigned int)a3;
  if ( *(_QWORD *)(a1 + 16) < v5 )
    *(_QWORD *)a1 = qvector_reserve(a1, *(void **)a1, v5, 2u);
  result = 1;
  if ( v21 )
  {
    v7 = 1;
    while ( 1 )
    {
      utf8_char = get_utf8_char(&v22);
      if ( !utf8_char )
        break;
      if ( utf8_char == -1 )
        return 0;
      v10 = *(_WORD **)a1;
      v11 = *(_QWORD *)(a1 + 16);
      if ( utf8_char <= 0xFFFF )
        goto LABEL_22;
      v12 = *(_QWORD *)(a1 + 8);
      v13 = v12 == 0;
      v14 = v12 - 1;
      v15 = 0;
      if ( !v13 )
        v15 = v14;
      if ( v11 < v15 + 2 )
      {
        v10 = qvector_reserve(a1, *(void **)a1, v15 + 2, 2u);
        *(_QWORD *)a1 = v10;
      }
      *(_QWORD *)(a1 + 8) = v15 + 2;
      v10[v15] = ((utf8_char + 983040) >> 10) & 0x3FF | 0xD800;
      *(_WORD *)(*(_QWORD *)a1 + 2 * v15 + 2) = 0;
      v16 = *(_QWORD *)(a1 + 8);
      v13 = v16 == 0;
      v17 = v16 - 1;
      v18 = 0;
      if ( !v13 )
        v18 = v17;
      v10 = *(_WORD **)a1;
      v19 = v18 + 2;
      if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v18 + 2) )
      {
        v10 = qvector_reserve(a1, *(void **)a1, v18 + 2, 2u);
        *(_QWORD *)a1 = v10;
      }
      LOWORD(utf8_char) = utf8_char & 0x3FF | 0xDC00;
LABEL_8:
      *(_QWORD *)(a1 + 8) = v19;
      v10[v18] = utf8_char;
      *(_WORD *)(*(_QWORD *)a1 + 2 * v18 + 2) = 0;
      if ( !((v21 < 0) | (v7++ < v21)) )
        return 1;
    }
    if ( v21 < 0 )
      return 1;
    ++v22;
    v10 = *(_WORD **)a1;
    v11 = *(_QWORD *)(a1 + 16);
LABEL_22:
    v20 = *(_QWORD *)(a1 + 8);
    v13 = v20 == 0;
    v18 = v20 - 1;
    if ( v13 )
      v18 = 0;
    v19 = v18 + 2;
    if ( v11 < v18 + 2 )
    {
      v10 = qvector_reserve(a1, v10, v18 + 2, 2u);
      *(_QWORD *)a1 = v10;
    }
    goto LABEL_8;
  }
  return result;
}
