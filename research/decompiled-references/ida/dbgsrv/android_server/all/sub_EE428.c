/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_EE428
// Address: 0x00000000000EE428

//----- (00000000000EE428) ----------------------------------------------------
__int64 __fastcall sub_EE428(_QWORD *a1, char *s)
{
  __int64 v4; // x1
  unsigned int *FDE; // x0
  unsigned int *v7; // x21
  _DWORD *v8; // x1
  __int64 v9; // x20
  __int64 v10; // x0
  char *v11; // x2
  _DWORD *i; // x0
  char *v13; // x2
  unsigned int *v14; // x22
  _BYTE *v15; // x23
  char *v16; // x0
  __int64 v17; // t1
  char *v18; // x0
  char *v19; // x0
  char *v20; // x1
  char *v21; // x0
  __int64 v22; // x1
  char *v23; // x24
  __int64 v24; // x24
  _BYTE *j; // x23
  int v26; // w1
  char v27; // w26
  char *v28; // x0
  int v29; // w0
  int v30; // w2
  char *v31; // x22
  char *v32; // x2
  int v33; // w23
  char *v34; // x0
  char *v35; // x0
  char *v36; // [xsp+68h] [xbp+68h]
  char *v37; // [xsp+68h] [xbp+68h]
  __int64 v38; // [xsp+78h] [xbp+78h] BYREF
  __int64 v39; // [xsp+80h] [xbp+80h] BYREF
  unsigned __int64 v40; // [xsp+88h] [xbp+88h] BYREF

  memset(s, 0, 0x680u);
  v4 = a1[99];
  a1[106] = 0;
  a1[100] = 0;
  if ( !v4 )
    return 5;
  FDE = Unwind_Find_FDE(v4 + (a1[104] >> 63) - 1LL, a1 + 101);
  v7 = FDE;
  if ( !FDE )
  {
    v8 = (_DWORD *)a1[99];
    if ( *v8 == -763358872 && v8[1] == -738197503 )
    {
      v9 = a1[98];
      *((_QWORD *)s + 198) = 31;
      *((_DWORD *)s + 400) = 1;
      *((_QWORD *)s + 197) = 304;
      v10 = 8;
      v11 = s;
      do
      {
        *((_DWORD *)v11 + 2) = 1;
        *(_QWORD *)v11 = v10;
        v11 += 16;
        v10 += 8;
      }
      while ( v10 != 256 );
      for ( i = (_DWORD *)(v9 + 592); *i; i = (_DWORD *)((char *)i + (unsigned int)i[1]) )
      {
        if ( *i == 1179680769 )
        {
          v13 = s + 1024;
          do
          {
            *((_DWORD *)v13 + 2) = 1;
            *(_QWORD *)v13 = &v13[-1312 - v9 - (_QWORD)s + (_QWORD)i];
            v13 += 16;
          }
          while ( v13 != s + 1536 );
        }
      }
      s[1651] = 1;
      *((_QWORD *)s + 62) = 256;
      *((_DWORD *)s + 126) = 1;
      *((_DWORD *)s + 386) = 4;
      *((_QWORD *)s + 192) = *(_QWORD *)(v9 + 568) - (v9 + 304);
      *((_QWORD *)s + 205) = 96;
      return 0;
    }
    return 5;
  }
  v14 = (unsigned int *)((char *)FDE - (int)FDE[1] + 4);
  *((_QWORD *)s + 201) = a1[103];
  v15 = (char *)v14 + 9;
  v16 = (char *)v14 + strlen((const char *)v14 + 9) + 10;
  if ( *((_BYTE *)v14 + 9) == 101 && *((_BYTE *)v14 + 10) == 104 )
  {
    v17 = *(_QWORD *)v16;
    v16 += 8;
    v15 = (char *)v14 + 11;
    *((_QWORD *)s + 207) = v17;
  }
  if ( *((unsigned __int8 *)v14 + 8) > 3u )
  {
    if ( *v16 != 8 || v16[1] )
      return 3;
    v16 += 2;
  }
  v18 = sub_ED9E0(v16, &v38);
  *((_QWORD *)s + 204) = v38;
  v19 = sub_EDA08(v18, &v39);
  v20 = v19;
  *((_QWORD *)s + 203) = v39;
  if ( *((_BYTE *)v14 + 8) == 1 )
  {
    v21 = v19 + 1;
    v22 = (unsigned __int8)*v20;
  }
  else
  {
    v21 = sub_ED9E0(v19, &v38);
    v22 = v38;
  }
  *((_QWORD *)s + 205) = v22;
  s[1649] = -1;
  v23 = nullptr;
  if ( *v15 == 122 )
  {
    ++v15;
    v21 = sub_ED9E0(v21, &v38);
    v24 = v38;
    s[1650] = 1;
    v23 = &v21[v24];
  }
  for ( j = v15 + 1; ; ++j )
  {
    v26 = (unsigned __int8)*(j - 1);
    if ( !*(j - 1) )
      break;
    switch ( v26 )
    {
      case 'L':
        s[1649] = *v21;
LABEL_33:
        ++v21;
        continue;
      case 'R':
        s[1648] = *v21;
        goto LABEL_33;
      case 'P':
        v27 = *v21;
        v36 = v21 + 1;
        v28 = (char *)sub_EDEB8(*v21, (__int64)a1);
        v21 = sub_EDA48(v27, v28, v36, &v40);
        *((_QWORD *)s + 202) = v40;
        break;
      case 'S':
        s[1651] = 1;
        break;
      default:
        v21 = v23;
        goto LABEL_43;
    }
  }
  if ( v23 )
    v21 = v23;
LABEL_43:
  if ( !v21 )
    return 3;
  sub_EDF30(v21, (unsigned __int64)v14 + *v14 + 4, a1, s);
  v29 = (unsigned __int8)s[1648];
  if ( v29 == 255 )
  {
    v30 = 0;
  }
  else
  {
    switch ( v29 & 7 )
    {
      case 0:
      case 4:
        v30 = 8;
        break;
      case 2:
        v30 = 2;
        break;
      case 3:
        v30 = 4;
        break;
      default:
        abort();
    }
  }
  v31 = nullptr;
  v32 = (char *)v7 + (unsigned int)(2 * v30) + 8;
  if ( s[1650] )
  {
    v32 = sub_ED9E0(v32, &v40);
    v31 = &v32[v40];
  }
  v33 = (unsigned __int8)s[1649];
  if ( v33 != 255 )
  {
    v37 = v32;
    v34 = (char *)sub_EDEB8(v33, (__int64)a1);
    v32 = sub_EDA48(v33, v34, v37, &v40);
    a1[100] = v40;
  }
  if ( v31 )
    v35 = v31;
  else
    v35 = v32;
  sub_EDF30(v35, (unsigned __int64)v7 + *v7 + 4, a1, s);
  return 0;
}
