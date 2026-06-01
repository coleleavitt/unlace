/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9B790
// Address: 0x0009B790

//----- (0009B790) --------------------------------------------------------
unsigned int __fastcall sub_9B790(int a1, const char *a2, int a3, int a4)
{
  int v4; // edi
  size_t v5; // eax
  int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // edi
  size_t v9; // esi
  _BYTE *v10; // eax
  void **v11; // edx
  int v12; // edx
  unsigned int utf8_char; // eax
  char *v14; // eax
  char v15; // cl
  void *v16; // eax
  int v17; // edi
  int v18; // ecx
  unsigned int v19; // ecx
  void *v20; // eax
  void **v22; // [esp+8h] [ebp-44h]
  const void *v24; // [esp+14h] [ebp-38h]
  int v25; // [esp+1Ch] [ebp-30h]
  char *v26; // [esp+24h] [ebp-28h] BYREF
  _BYTE v27[16]; // [esp+28h] [ebp-24h] BYREF
  unsigned int v28; // [esp+38h] [ebp-14h]

  v28 = __readgsdword(0x14u);
  v4 = a3;
  v22 = (void **)a1;
  if ( a3 == -1 )
  {
    v5 = strlen(a2);
    a1 = (int)v22;
    v4 = v5;
  }
  v6 = a4;
  if ( v4 >= a4 )
    v6 = v4;
  v7 = v6 + 16;
  if ( *(_DWORD *)(a1 + 8) < v7 )
    *v22 = qvector_reserve(a1, *(void **)a1, v7, 1u);
  v26 = (char *)a2;
  v25 = v4;
  if ( v4 > 0 )
  {
    v8 = (unsigned int)a2;
    while ( 2 )
    {
      utf8_char = get_utf8_char(&v26);
      if ( utf8_char == -1 || utf8_char == 0 )
      {
        v14 = v26++;
        utf8_char = (unsigned __int8)*v14;
      }
      v15 = 97;
      switch ( utf8_char )
      {
        case 7u:
          goto LABEL_26;
        case 8u:
          v15 = 98;
          goto LABEL_26;
        case 9u:
          v15 = 116;
          goto LABEL_26;
        case 0xAu:
          v15 = 110;
          goto LABEL_26;
        case 0xBu:
          v15 = 118;
          goto LABEL_26;
        case 0xCu:
          v15 = 102;
          goto LABEL_26;
        case 0xDu:
          v15 = 114;
          goto LABEL_26;
        case 0x22u:
          v15 = 34;
          goto LABEL_26;
        case 0x5Cu:
          v15 = 92;
LABEL_26:
          v27[1] = v15;
          v27[0] = 92;
          v9 = 2;
          goto LABEL_27;
        default:
          if ( is_cp_graphical(utf8_char) )
          {
            v9 = (size_t)&v26[-v8];
            v10 = (_BYTE *)v8;
          }
          else
          {
            v9 = 0;
            v10 = v27;
            v11 = v22;
            if ( v8 >= (unsigned int)v26 )
              goto LABEL_29;
            v9 = 0;
            do
            {
              v12 = *(unsigned __int8 *)v8++;
              v9 += qsnprintf(&v27[v9], 16 - v9, (char *)&qword_13ACD8 - 318551, v12);
            }
            while ( v8 < (unsigned int)v26 );
LABEL_27:
            v10 = v27;
          }
          v11 = v22;
LABEL_29:
          v24 = v10;
          v16 = v11[1];
          v17 = (int)v16 - 1;
          if ( a4 > 0 )
          {
            v18 = (int)v16 - 1;
            if ( !v16 )
              v18 = 0;
            if ( v9 + v18 >= a4 )
              return __readgsdword(0x14u);
          }
          if ( !v16 )
            v17 = 0;
          v19 = v17 + v9 + 1;
          v20 = *v11;
          if ( (unsigned int)v11[2] < v19 )
          {
            v20 = qvector_reserve((int)v11, v20, v17 + v9 + 1, 1u);
            v19 = v17 + v9 + 1;
            v11 = v22;
            *v22 = v20;
          }
          v11[1] = (void *)v19;
          *((_BYTE *)v20 + v17 + v9) = 0;
          memmove((char *)*v11 + v17, v24, v9);
          v8 = (unsigned int)v26;
          if ( v26 - a2 >= v25 )
            return __readgsdword(0x14u);
          continue;
      }
    }
  }
  return __readgsdword(0x14u);
}
// 13ACD8: using guessed type __int64 qword_13ACD8;
