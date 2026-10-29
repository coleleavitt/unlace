/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_70968
// Address: 0x00070968

//----- (00070968) --------------------------------------------------------
int __fastcall sub_70968(void **a1, const char *a2, int a3, int a4)
{
  int v5; // r5
  void **v6; // r1
  size_t v7; // r0
  int v8; // r2
  unsigned int v9; // r2
  unsigned int v10; // r4
  size_t v11; // r5
  _BYTE *v12; // r6
  unsigned int utf8_char; // r0
  unsigned __int8 *v14; // r0
  char v15; // r1
  void **v16; // r3
  void *v17; // r0
  int v18; // r6
  size_t v19; // r2
  unsigned int v20; // r4
  void *v21; // r1
  void *v22; // r0
  int v24; // [sp+Ch] [bp-2Ch]
  int v25; // [sp+10h] [bp-28h]
  const void *v27; // [sp+18h] [bp-20h]
  unsigned __int8 *v29; // [sp+20h] [bp-18h] BYREF
  _BYTE v30[16]; // [sp+24h] [bp-14h] BYREF
  int v31; // [sp+34h] [bp-4h]

  v5 = a3;
  v6 = a1;
  if ( a3 == -1 )
  {
    v7 = strlen(a2);
    v6 = a1;
    v5 = v7;
  }
  v8 = v5;
  if ( v5 <= a4 )
    v8 = a4;
  v9 = v8 + 16;
  if ( (unsigned int)v6[2] < v9 )
    *a1 = qvector_reserve((int)a1, *v6, v9, 1u);
  v29 = (unsigned __int8 *)a2;
  if ( v5 >= 1 )
  {
    v10 = (unsigned int)a2;
    v24 = v5;
    v25 = a4;
    do
    {
      utf8_char = get_utf8_char(&v29);
      if ( utf8_char + 1 <= 1 )
      {
        v14 = v29++;
        utf8_char = *v14;
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
          v12 = v30;
          v30[0] = 92;
          v30[1] = v15;
          v11 = 2;
          break;
        default:
          if ( is_cp_graphical(utf8_char) )
          {
            v11 = (size_t)&v29[-v10];
            v12 = (_BYTE *)v10;
          }
          else
          {
            v11 = 0;
            v12 = v30;
            if ( v10 < (unsigned int)v29 )
            {
              v11 = 0;
              do
              {
                v12 = v30;
                v11 += qsnprintf(&v30[v11], 16 - v11, "\\x%02X");
                ++v10;
              }
              while ( v10 < (unsigned int)v29 );
            }
          }
          break;
      }
      v27 = v12;
      v16 = a1;
      v17 = a1[1];
      v18 = (int)v17 - 1;
      if ( a4 > 0 )
      {
        v19 = v11;
        if ( v17 )
          v19 = v11 + v18;
        if ( v19 >= a4 )
          break;
      }
      if ( !v17 )
        v18 = 0;
      v20 = v18 + v11 + 1;
      v21 = *a1;
      if ( (unsigned int)a1[2] < v20 )
      {
        v22 = qvector_reserve((int)a1, v21, v18 + v11 + 1, 1u);
        v16 = a1;
        v21 = v22;
        *a1 = v22;
      }
      v16[1] = (void *)v20;
      *((_BYTE *)v21 + v18 + v11) = 0;
      memmove((char *)*v16 + v18, v27, v11);
      v10 = (unsigned int)v29;
      a4 = v25;
    }
    while ( v29 - (unsigned __int8 *)a2 < v24 );
  }
  return _stack_chk_guard - v31;
}
