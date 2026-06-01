/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8A68C
// Address: 0x0008A68C

//----- (0008A68C) --------------------------------------------------------
bool __fastcall sub_8A68C(char *s1, void (__fastcall *a2)(_BYTE *), int a3)
{
  int v3; // r11
  int v7; // r10
  bool v8; // zf
  int v9; // r1
  int v10; // r3
  bool v11; // zf
  int v12; // r10
  size_t v13; // r0
  __int64 v14; // r2
  int v15; // r1
  int v16; // r10
  size_t v17; // r0
  int *v18; // r2
  int *v20; // r6
  int v21; // r2
  int v22; // r3
  void (__fastcall *v23)(_BYTE *); // r3
  const char *v24; // r0
  unsigned int v25; // r3
  bool v26; // cc
  unsigned int v27; // r3
  const char *v28; // r2
  int v29; // r3
  int v30; // t1
  int v31; // r1
  __int64 *v32; // lr
  __int64 v33; // r2
  bool v34; // cc
  unsigned int v35; // t1
  unsigned int v36; // r1
  bool v37; // cc
  __int64 v38; // [sp+0h] [bp+0h] BYREF
  _DWORD v39[2]; // [sp+Ch] [bp+Ch] BYREF
  int v40; // [sp+14h] [bp+14h]
  const char *v41; // [sp+18h] [bp+18h]
  __int64 *v42; // [sp+1Ch] [bp+1Ch]
  int v43; // [sp+20h] [bp+20h]
  int v44; // [sp+24h] [bp+24h]
  __int64 *v45; // [sp+28h] [bp+28h]
  int v46; // [sp+2Ch] [bp+2Ch]
  size_t v47; // [sp+30h] [bp+30h]
  int v48; // [sp+34h] [bp+34h]
  int v49; // [sp+38h] [bp+38h]
  int v50; // [sp+3Ch] [bp+3Ch]
  int v51; // [sp+40h] [bp+40h]
  int v52; // [sp+44h] [bp+44h]
  _BYTE v53[256]; // [sp+48h] [bp+48h] BYREF
  int v54; // [sp+148h] [bp+148h]
  char v55; // [sp+14Ch] [bp+14Ch]
  void (__fastcall *v56)(_BYTE *); // [sp+150h] [bp+150h]
  int v57; // [sp+154h] [bp+154h]
  int v58; // [sp+158h] [bp+158h]
  int v59; // [sp+15Ch] [bp+15Ch]
  int v60; // [sp+160h] [bp+160h]
  int v61; // [sp+164h] [bp+164h]
  int v62; // [sp+168h] [bp+168h]
  int v63; // [sp+16Ch] [bp+16Ch]
  int v64; // [sp+170h] [bp+170h]
  __int64 *v65; // [sp+174h] [bp+174h]
  int v66; // [sp+178h] [bp+178h]
  int v67; // [sp+17Ch] [bp+17Ch] BYREF
  __int64 *v68; // [sp+180h] [bp+180h]
  int v69; // [sp+184h] [bp+184h]
  _DWORD v70[3]; // [sp+188h] [bp+188h] BYREF

  v3 = (unsigned __int8)*s1;
  if ( v3 == 95 && s1[1] == 90 )
  {
    v12 = 1;
  }
  else
  {
    if ( strncmp(s1, "_GLOBAL_", 8u) )
      goto LABEL_20;
    v7 = (unsigned __int8)s1[8];
    v8 = v7 == 95;
    if ( v7 != 95 )
      v8 = v7 == 46;
    v9 = v8;
    if ( v7 == 36 )
      v9 |= 1u;
    if ( v9 )
    {
      v10 = (unsigned __int8)s1[9];
      v11 = v10 == 73;
      if ( v10 != 73 )
        v11 = v10 == 68;
      if ( v11 )
      {
        if ( s1[10] == 95 )
        {
          if ( v10 == 73 )
            v12 = 2;
          else
            v12 = 3;
        }
        else
        {
          v12 = 0;
        }
      }
      else
      {
        v12 = 0;
      }
    }
    else
    {
LABEL_20:
      v12 = 0;
    }
  }
  v13 = strlen(s1);
  HIDWORD(v14) = 2 * v13;
  v39[0] = s1;
  v41 = s1;
  LODWORD(v14) = &v38;
  v42 = &v38;
  v45 = &v38;
  v47 = v13;
  v39[1] = &s1[v13];
  v44 = 2 * v13;
  v40 = 17;
  v43 = 0;
  v46 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  if ( v12 == 1 )
  {
    if ( v3 != 95 || s1[1] != 90 )
      return 0;
    v41 = s1 + 2;
    v20 = sub_864F4((int)v39, 1);
    if ( (v40 & 1) != 0 )
    {
      while ( 1 )
      {
        v24 = v41;
        v21 = *(unsigned __int8 *)v41;
        if ( v21 != 46 )
          break;
        v25 = *((unsigned __int8 *)v41 + 1);
        v26 = v25 > 0x5F;
        if ( v25 != 95 )
          v26 = v25 - 97 > 0x19;
        if ( v26 )
        {
          if ( v25 - 48 > 9 )
            goto LABEL_65;
          v27 = *(unsigned __int8 *)v41;
          v28 = v41;
        }
        else
        {
          v27 = *((unsigned __int8 *)v41 + 2);
          v28 = v41 + 2;
          v34 = v27 > 0x5F;
          if ( v27 != 95 )
            v34 = v27 - 97 > 0x19;
          if ( !v34 )
          {
            do
            {
              v35 = *(unsigned __int8 *)++v28;
              v27 = v35;
              v36 = v35 - 97;
              v37 = v35 > 0x5F;
              if ( v35 != 95 )
                v37 = v36 > 0x19;
            }
            while ( !v37 );
          }
        }
LABEL_51:
        if ( v27 == 46 )
        {
          do
          {
            if ( (unsigned int)*((unsigned __int8 *)v28 + 1) - 48 > 9 )
              break;
            v27 = *((unsigned __int8 *)v28 + 2);
            v28 += 2;
            if ( v27 - 48 > 9 )
              goto LABEL_51;
            do
            {
              v30 = *(unsigned __int8 *)++v28;
              v29 = v30;
            }
            while ( (unsigned int)(v30 - 48) <= 9 );
          }
          while ( v29 == 46 );
        }
        v31 = v43;
        v41 = v28;
        if ( v43 < v44
          && (v32 = v42,
              LODWORD(v33) = v28 - v24,
              HIDWORD(v33) = &v42[2 * v43],
              *(_DWORD *)(HIDWORD(v33) + 4) = 0,
              v43 = v31 + 1,
              (_DWORD)v33) )
        {
          *(_DWORD *)(HIDWORD(v33) + 4) = 0;
          LODWORD(v32[2 * v31]) = 0;
          *(_DWORD *)(HIDWORD(v33) + 8) = v24;
          *(_DWORD *)(HIDWORD(v33) + 12) = v33;
        }
        else
        {
          HIDWORD(v33) = 0;
        }
        LODWORD(v33) = v20;
        v20 = (int *)sub_84094((int)v39, 77, v33);
      }
    }
    else
    {
LABEL_65:
      v21 = *(unsigned __int8 *)v41;
    }
  }
  else if ( v12 )
  {
    v15 = (unsigned __int8)s1[11];
    if ( v12 == 2 )
      v16 = 67;
    else
      v16 = 68;
    v41 = s1 + 11;
    if ( v15 == 95 && s1[12] == 90 )
    {
      v41 = s1 + 13;
      v18 = sub_864F4((int)v39, 0);
    }
    else
    {
      v38 = v14;
      v17 = strlen(s1 + 11);
      v18 = (int *)v38;
      if ( SHIDWORD(v38) > 0 && (*(_DWORD *)(v38 + 4) = 0, v43 = 1, v17) )
      {
        *v18 = 0;
        v18[2] = (int)(s1 + 11);
        v18[3] = v17;
      }
      else
      {
        v18 = nullptr;
      }
    }
    v20 = (int *)sub_84094((int)v39, v16, (unsigned int)v18);
    v41 += strlen(v41);
    v21 = *(unsigned __int8 *)v41;
  }
  else
  {
    v20 = sub_85668((int)v39);
    v21 = *(unsigned __int8 *)v41;
  }
  v22 = (int)v20;
  if ( v20 )
    v22 = 1;
  if ( v21 )
    v22 = 0;
  if ( !v22 )
    return 0;
  v57 = a3;
  v56 = a2;
  v54 = 0;
  v55 = 0;
  v58 = 0;
  v59 = 0;
  v62 = 0;
  v63 = 0;
  v60 = 0;
  v61 = 0;
  v64 = 0;
  v65 = nullptr;
  v66 = 0;
  v67 = 0;
  v68 = nullptr;
  v69 = 0;
  v70[0] = 0;
  sub_84160((int)v70, &v67, v20);
  v70[1] = 0;
  v65 = &v38;
  v70[0] *= v67;
  v68 = &v38;
  sub_86B38((int)v53, 17, (int)v20);
  v23 = v56;
  v53[v54] = 0;
  v23(v53);
  return v60 == 0;
}
