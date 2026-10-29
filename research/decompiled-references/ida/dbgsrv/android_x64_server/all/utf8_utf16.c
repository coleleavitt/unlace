/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: utf8_utf16
// Address: 0x00000000000B6CD0

//----- (00000000000B6CD0) ----------------------------------------------------
char __fastcall utf8_utf16(__int64 a1, char *a2, int a3)
{
  int v3; // r13d
  int v4; // eax
  char result; // al
  int v6; // eax
  int v7; // r15d
  unsigned int utf8_char; // r14d
  __int64 v9; // rax
  __int64 v10; // r13
  _WORD *v11; // rax
  __int64 v12; // rax
  __int64 v13; // r12
  char *v14; // rax
  char *v15; // rcx
  __int64 v16; // rax
  char *v17; // rax
  int v18; // [rsp+4h] [rbp-44h]
  char *v19[8]; // [rsp+8h] [rbp-40h] BYREF

  v3 = a3;
  v19[1] = (char *)__readfsqword(0x28u);
  v4 = 16;
  if ( a3 > 0 )
    v4 = a3;
  v19[0] = a2;
  if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)v4 )
    *(_QWORD *)a1 = qvector_reserve(a1, *(char **)a1, v4, 2u);
  result = 1;
  if ( v3 )
  {
    v6 = 1;
    v18 = v3;
    while ( 1 )
    {
      v7 = v6;
      utf8_char = get_utf8_char(v19);
      if ( !utf8_char )
        break;
      if ( utf8_char == -1 )
        return 0;
      if ( utf8_char <= 0xFFFF )
        goto LABEL_16;
      utf8_char -= 0x10000;
      v9 = *(_QWORD *)(a1 + 8);
      v10 = v9 - 1;
      if ( !v9 )
        v10 = 0;
      if ( *(_QWORD *)(a1 + 16) >= (unsigned __int64)(v10 + 2) )
      {
        v11 = *(_WORD **)a1;
      }
      else
      {
        v11 = qvector_reserve(a1, *(char **)a1, v10 + 2, 2u);
        *(_QWORD *)a1 = v11;
      }
      *(_QWORD *)(a1 + 8) = v10 + 2;
      v11[v10] = (utf8_char >> 10) & 0x3FF | 0xD800;
      *(_WORD *)(*(_QWORD *)a1 + 2 * v10 + 2) = 0;
      LOWORD(utf8_char) = utf8_char & 0x3FF | 0xDC00;
      v16 = *(_QWORD *)(a1 + 8);
      v13 = v16 - 1;
      if ( !v16 )
        v13 = 0;
      if ( *(_QWORD *)(a1 + 16) >= (unsigned __int64)(v13 + 2) )
      {
        v17 = *(char **)a1;
      }
      else
      {
        v17 = (char *)qvector_reserve(a1, *(char **)a1, v13 + 2, 2u);
        *(_QWORD *)a1 = v17;
      }
      *(_QWORD *)(a1 + 8) = v13 + 2;
      v15 = &v17[2 * v13];
      v3 = v18;
LABEL_29:
      v6 = v7 + 1;
      *(_WORD *)v15 = utf8_char;
      *(_WORD *)(*(_QWORD *)a1 + 2 * v13 + 2) = 0;
      if ( v3 >= 0 && v7 >= v3 )
        return 1;
    }
    if ( v3 < 0 )
      return 1;
    ++v19[0];
LABEL_16:
    v12 = *(_QWORD *)(a1 + 8);
    v13 = v12 - 1;
    if ( !v12 )
      v13 = 0;
    if ( *(_QWORD *)(a1 + 16) >= (unsigned __int64)(v13 + 2) )
    {
      v14 = *(char **)a1;
    }
    else
    {
      v14 = (char *)qvector_reserve(a1, *(char **)a1, v13 + 2, 2u);
      *(_QWORD *)a1 = v14;
    }
    *(_QWORD *)(a1 + 8) = v13 + 2;
    v15 = &v14[2 * v13];
    goto LABEL_29;
  }
  return result;
}
