/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48CDF0
// Address: 0x000000000048CDF0

//----- (000000000048CDF0) ----------------------------------------------------
__int64 __fastcall sub_48CDF0(void **a1, const char *a2, unsigned __int8 *a3, __int64 a4, char a5)
{
  unsigned __int8 *v5; // x21
  unsigned __int8 *v6; // x24
  _BYTE *i; // x1
  unsigned __int64 v10; // x22
  __int64 v11; // x23
  unsigned __int64 v12; // x20
  unsigned int v13; // w19
  unsigned __int8 *v14; // x0
  unsigned __int8 *v15; // x3
  size_t v16; // x4
  __int64 v17; // x0
  void *v18; // x1
  __int64 v19; // x19
  unsigned __int8 v21; // w0
  unsigned __int8 v22; // w2
  unsigned __int8 v23; // w0
  void *v25; // [xsp+68h] [xbp-28h]
  void *v26; // [xsp+68h] [xbp-28h]
  void *ptr; // [xsp+70h] [xbp-20h] BYREF
  unsigned __int64 v28; // [xsp+78h] [xbp-18h]
  unsigned __int64 v29; // [xsp+80h] [xbp-10h]

  v5 = a3;
  v6 = &a3[a4];
  ptr = nullptr;
  v28 = 0;
  v29 = 0;
  if ( a3 < &a3[a4] )
  {
    for ( i = nullptr; ; i = ptr )
    {
      LOWORD(v13) = *v5;
      v14 = v5 + 1;
      if ( (v13 & 0x80) != 0 )
      {
        if ( (v13 & 0xE0) == 0xC0 )
        {
          if ( v6 <= v14 )
            goto LABEL_29;
          v23 = v5[1];
          v5 += 2;
          if ( (v23 & 0xC0) != 0x80
            || (LOWORD(v13) = ((v13 & 0x1F) << 6) | v23 & 0x3F, (unsigned __int16)(v13 - 1) <= 0x7Eu) )
          {
LABEL_24:
            v25 = i;
            *__errno_location() = 84;
            v19 = -1;
            v18 = v25;
            goto LABEL_14;
          }
        }
        else
        {
          if ( (v13 & 0xF0) != 0xE0 )
            goto LABEL_24;
          if ( v6 <= v14 )
            goto LABEL_29;
          v21 = v5[1];
          if ( (v21 & 0xC0) != 0x80 )
            goto LABEL_24;
          if ( v6 <= v5 + 2 )
          {
LABEL_29:
            v26 = i;
            *__errno_location() = 22;
            v19 = -1;
            v18 = v26;
            goto LABEL_14;
          }
          v22 = v5[2];
          v5 += 3;
          if ( (v22 & 0xC0) != 0x80 )
            goto LABEL_24;
          v13 = v22 & 0x3F | (unsigned __int16)((_WORD)v13 << 12) | ((v21 & 0x3F) << 6);
          if ( v13 <= 0x7FF )
            goto LABEL_24;
        }
      }
      else
      {
        ++v5;
      }
      if ( v28 )
      {
        v10 = v28 - 1;
        v11 = v28 + 1;
        v12 = v28 + 2;
        if ( v28 + 2 <= v29 )
          goto LABEL_4;
      }
      else
      {
        v12 = 3;
        v11 = 2;
        v10 = 0;
        if ( v29 >= 3 )
        {
LABEL_4:
          v28 = v12;
          i[v11] = 0;
          *(_WORD *)((char *)ptr + v10) = v13;
          if ( v5 >= v6 )
            goto LABEL_11;
          continue;
        }
      }
      ptr = sub_491288((__int64)&ptr, i, v12, 1u);
      v28 = v12;
      *((_BYTE *)ptr + v11) = 0;
      *(_WORD *)((char *)ptr + v10) = v13;
      if ( v5 >= v6 )
      {
LABEL_11:
        if ( !v28 )
          break;
        v15 = (unsigned __int8 *)ptr;
        v16 = v28 - 1;
        goto LABEL_13;
      }
    }
  }
  v16 = 0;
  v15 = (unsigned __int8 *)&qword_4B2D48;
LABEL_13:
  v17 = sub_4854A8(a1, "UTF-16LE", a2, v15, v16, a5);
  v18 = ptr;
  v19 = v17;
LABEL_14:
  if ( v18 )
  {
    v28 = 0;
    j__free(v18);
  }
  return v19;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
