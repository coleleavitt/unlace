/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100071100
// Address: 0x0000000100071100

//----- (0000000100071100) ----------------------------------------------------
__int64 __fastcall sub_100071100(__int64 a1, const char *a2, signed __int64 a3, __int64 a4)
{
  signed __int64 v5; // r15
  __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r14
  unsigned int utf8_char; // eax
  char *v10; // rax
  __int64 v11; // rdx
  char v12; // al
  size_t v13; // r13
  __int64 v14; // rax
  bool v15; // cf
  __int64 v16; // rax
  __int64 v17; // r12
  unsigned __int64 v18; // r15
  _BYTE *v19; // rax
  int v20; // ecx
  __int64 v22; // [rsp+8h] [rbp-68h]
  __int64 v23; // [rsp+10h] [rbp-60h]
  char *v24; // [rsp+28h] [rbp-48h] BYREF
  _BYTE __src[16]; // [rsp+30h] [rbp-40h] BYREF
  __int64 savedregs; // [rsp+70h] [rbp+0h] BYREF

  v5 = a3;
  if ( a3 == -1 )
    v5 = strlen(a2);
  v6 = a4;
  if ( v5 > a4 )
    v6 = v5;
  v7 = v6 + 16;
  if ( *(_QWORD *)(a1 + 16) < v7 )
    *(_QWORD *)a1 = qvector_reserve(a1, *(void **)a1, v7, 1u);
  v24 = (char *)a2;
  if ( v5 > 0 )
  {
    v8 = (unsigned __int64)a2;
    v23 = v5;
    v22 = a4;
    do
    {
      utf8_char = get_utf8_char(&v24);
      if ( utf8_char + 1 <= 1 )
      {
        v10 = v24++;
        utf8_char = (unsigned __int8)*v10;
      }
      v11 = a1;
      switch ( utf8_char )
      {
        case 7u:
          v12 = 97;
          goto LABEL_22;
        case 8u:
          v12 = 98;
          goto LABEL_22;
        case 9u:
          v12 = 116;
          goto LABEL_22;
        case 0xAu:
          v12 = 110;
          goto LABEL_22;
        case 0xBu:
          v12 = 118;
          goto LABEL_22;
        case 0xCu:
          v12 = 102;
          goto LABEL_22;
        case 0xDu:
          v12 = 114;
          goto LABEL_22;
        case 0x22u:
          v12 = 34;
          goto LABEL_22;
        case 0x5Cu:
          v12 = 92;
LABEL_22:
          __src[1] = v12;
          __src[0] = 92;
          v13 = 2;
          v8 = (unsigned __int64)__src;
          break;
        default:
          if ( is_cp_graphical(utf8_char) )
          {
            v13 = (size_t)&v24[-v8];
          }
          else if ( v8 >= (unsigned __int64)v24 )
          {
            v8 = (unsigned __int64)__src;
            v13 = 0;
          }
          else
          {
            v13 = 0;
            do
            {
              v20 = *(unsigned __int8 *)v8++;
              v13 += qsnprintf((char *)&savedregs + v13 - 64, 16 - v13, "\\x%02X", v20);
            }
            while ( v8 < (unsigned __int64)v24 );
            v8 = (unsigned __int64)__src;
          }
          v11 = a1;
          break;
      }
      v14 = *(_QWORD *)(v11 + 8);
      v15 = v14 == 0;
      v16 = v14 - 1;
      v17 = 0;
      if ( !v15 )
        v17 = v16;
      v18 = v17 + v13;
      if ( a4 > 0 && v18 >= a4 )
        break;
      v19 = *(_BYTE **)v11;
      if ( *(_QWORD *)(v11 + 16) < v18 + 1 )
      {
        v19 = qvector_reserve(a1, *(void **)v11, v18 + 1, 1u);
        v11 = a1;
        *(_QWORD *)a1 = v19;
      }
      *(_QWORD *)(v11 + 8) = v18 + 1;
      v19[v18] = 0;
      memmove((void *)(*(_QWORD *)v11 + v17), (const void *)v8, v13);
      v8 = (unsigned __int64)v24;
      a4 = v22;
    }
    while ( v24 - a2 < v23 );
  }
  return __stack_chk_guard;
}
