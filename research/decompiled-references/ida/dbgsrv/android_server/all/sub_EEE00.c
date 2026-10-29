/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_EEE00
// Address: 0x00000000000EEE00

//----- (00000000000EEE00) ----------------------------------------------------
__int64 __fastcall sub_EEE00(__int64 *src, __int64 *a2)
{
  int v4; // w0
  char *v5; // x0
  __int64 v6; // x23
  char **v7; // x26
  _BYTE *v8; // x22
  __int64 v9; // x20
  __int64 GR; // x0
  char *v11; // x1
  char *v12; // x0
  char *v13; // x0
  __int64 v14; // x0
  unsigned __int64 v15; // x1
  __int64 result; // x0
  __int64 v17; // [xsp+70h] [xbp+70h] BYREF
  __int64 v18; // [xsp+78h] [xbp+78h] BYREF
  _QWORD dest[110]; // [xsp+80h] [xbp+80h] BYREF
  char v20; // [xsp+3F7h] [xbp+3F7h]

  memcpy(dest, src, 0x3C0u);
  if ( ((dest[104] & 0x4000000000000000LL) == 0 || !v20) && !dest[31] )
    sub_EDC4C((__int64)dest, src[98], &v17);
  if ( (src[104] & 0x4000000000000000LL) != 0 )
    *((_BYTE *)src + 887) = 0;
  v4 = *((_DWORD *)a2 + 400);
  src[31] = 0;
  if ( v4 == 1 )
  {
    v6 = Unwind_GetGR((__int64)dest, *((_DWORD *)a2 + 396)) + a2[197];
  }
  else
  {
    if ( v4 != 2 )
LABEL_17:
      abort();
    v5 = sub_ED9E0((char *)a2[199], &v18);
    v6 = sub_EE84C(v5, (unsigned __int64)&v5[v18], (__int64)dest, 0);
  }
  src[98] = v6;
  v7 = (char **)a2;
  v8 = src + 107;
  v9 = 0;
  while ( 2 )
  {
    switch ( *((_DWORD *)v7 + 2) )
    {
      case 1:
        GR = (__int64)&(*v7)[v6];
        goto LABEL_20;
      case 2:
        v11 = *v7;
        if ( *((_BYTE *)&dest[107] + (int)*v7) )
        {
          GR = Unwind_GetGR((__int64)dest, (int)v11);
LABEL_16:
          if ( (unsigned __int8)byte_169340[v9] > 8u )
            goto LABEL_17;
          *v8 = 1;
        }
        else
        {
          GR = dest[(int)v11];
LABEL_20:
          if ( (src[104] & 0x4000000000000000LL) != 0 )
            *v8 = 0;
        }
        src[v9] = GR;
LABEL_26:
        ++v9;
        v7 += 2;
        ++v8;
        if ( v9 != 98 )
          continue;
        v14 = src[104];
        v15 = v14 | 0x8000000000000000LL;
        result = v14 & 0x7FFFFFFFFFFFFFFFLL;
        if ( *((_BYTE *)a2 + 1651) )
          result = v15;
        src[104] = result;
        return result;
      case 3:
        v12 = sub_ED9E0(*v7, &v18);
        GR = sub_EE84C(v12, (unsigned __int64)&v12[v18], (__int64)dest, v6);
        goto LABEL_20;
      case 4:
        GR = (__int64)&(*v7)[v6];
        goto LABEL_16;
      case 5:
        v13 = sub_ED9E0(*v7, &v18);
        GR = sub_EE84C(v13, (unsigned __int64)&v13[v18], (__int64)dest, v6);
        goto LABEL_16;
      default:
        goto LABEL_26;
    }
  }
}
// 168FE0: using guessed type __int64 qword_168FE0[5];
