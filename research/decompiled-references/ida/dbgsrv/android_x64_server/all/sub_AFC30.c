/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AFC30
// Address: 0x00000000000AFC30

//----- (00000000000AFC30) ----------------------------------------------------
unsigned __int64 __fastcall sub_AFC30(__int64 a1, const char *a2, signed __int64 a3, signed __int64 a4)
{
  signed __int64 v5; // r15
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rbp
  size_t v8; // r13
  int v9; // ecx
  __int64 v10; // rbx
  unsigned int utf8_char; // eax
  char *v12; // rax
  char v13; // cl
  _QWORD *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // rcx
  unsigned __int64 v18; // r12
  _BYTE *v19; // rax
  __int64 v22; // [rsp+10h] [rbp-58h]
  char *v23; // [rsp+18h] [rbp-50h] BYREF
  _BYTE v24[16]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v25; // [rsp+30h] [rbp-38h]

  v5 = a3;
  v25 = __readfsqword(0x28u);
  if ( a3 == -1 )
    v5 = strlen(a2);
  v22 = a4;
  if ( v5 >= a4 )
    a4 = v5;
  v6 = a4 + 16;
  if ( *(_QWORD *)(a1 + 16) < v6 )
    *(_QWORD *)a1 = qvector_reserve(a1, *(char **)a1, v6, 1u);
  v23 = (char *)a2;
  if ( v5 > 0 )
  {
    v7 = (unsigned __int64)a2;
    do
    {
      utf8_char = get_utf8_char(&v23);
      if ( utf8_char + 1 <= 1 )
      {
        v12 = v23++;
        utf8_char = (unsigned __int8)*v12;
      }
      v10 = v22;
      v13 = 97;
      switch ( utf8_char )
      {
        case 7u:
          goto LABEL_27;
        case 8u:
          v13 = 98;
          goto LABEL_27;
        case 9u:
          v13 = 116;
          goto LABEL_27;
        case 0xAu:
          v13 = 110;
          goto LABEL_27;
        case 0xBu:
          v13 = 118;
          goto LABEL_27;
        case 0xCu:
          v13 = 102;
          goto LABEL_27;
        case 0xDu:
          v13 = 114;
          goto LABEL_27;
        case 0x22u:
          v13 = 34;
          goto LABEL_27;
        case 0x5Cu:
          v13 = 92;
LABEL_27:
          v24[1] = v13;
          v24[0] = 92;
          v7 = (unsigned __int64)v24;
          v8 = 2;
          break;
        default:
          if ( is_cp_graphical(utf8_char) )
          {
            v8 = (size_t)&v23[-v7];
          }
          else if ( v7 >= (unsigned __int64)v23 )
          {
            v7 = (unsigned __int64)v24;
            v8 = 0;
          }
          else
          {
            v8 = 0;
            do
            {
              v9 = *(unsigned __int8 *)v7++;
              v8 += (int)qsnprintf(&v24[v8], 16 - v8, "\\x%02X", v9);
            }
            while ( v7 < (unsigned __int64)v23 );
            v7 = (unsigned __int64)v24;
            v10 = v22;
          }
          break;
      }
      v14 = (_QWORD *)a1;
      v15 = *(_QWORD *)(a1 + 8);
      v16 = v15 - 1;
      if ( v10 > 0 )
      {
        v17 = v15 - 1;
        if ( !v15 )
          v17 = 0;
        if ( v8 + v17 >= v10 )
          break;
      }
      if ( !v15 )
        v16 = 0;
      v18 = v16 + v8 + 1;
      v19 = *(_BYTE **)a1;
      if ( *(_QWORD *)(a1 + 16) < v18 )
      {
        v19 = qvector_reserve(a1, *(char **)a1, v16 + v8 + 1, 1u);
        v14 = (_QWORD *)a1;
        *(_QWORD *)a1 = v19;
      }
      v14[1] = v18;
      v19[v16 + v8] = 0;
      memmove((void *)(*v14 + v16), (const void *)v7, v8);
      v7 = (unsigned __int64)v23;
    }
    while ( v23 - a2 < v5 );
  }
  return __readfsqword(0x28u);
}
