/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_90880
// Address: 0x00090880

//----- (00090880) --------------------------------------------------------
unsigned int __fastcall sub_90880(_DWORD *a1, char a2, int a3, char *a4, int a5)
{
  int v9; // r0
  char *LanguageSpecificData; // r0
  int v12; // r2
  int v13; // r3
  char *v14; // r6
  int v15; // r8
  int RegionStart; // r4
  int v17; // r0
  char *v18; // r2
  char *v19; // r1
  int v20; // r0
  char *v21; // r0
  unsigned int v22; // r5
  unsigned int v23; // r6
  int v24; // r0
  char *v25; // r1
  unsigned int v26; // r9
  int v27; // r11
  int v28; // r10
  int v29; // r0
  bool v30; // cf
  char *v31; // r9
  int v32; // r10
  _DWORD *v33; // r1
  int v34; // r0
  char *v35; // r4
  int v36; // r0
  int v37; // r0
  int v38; // r3
  int v39; // r5
  _DWORD *v40; // r0
  int v41; // r0
  char *v42; // r1
  int v43; // r1
  int v44; // r4
  bool v45; // zf
  char *v46; // r0
  int v47; // [sp+8h] [bp-58h]
  int v48; // [sp+Ch] [bp-54h]
  _QWORD *v49; // [sp+Ch] [bp-54h]
  _DWORD *v50; // [sp+10h] [bp-50h]
  char v51; // [sp+18h] [bp-48h]
  int v52; // [sp+18h] [bp-48h]
  int v53; // [sp+1Ch] [bp-44h]
  int v54; // [sp+20h] [bp-40h]
  char *v55; // [sp+24h] [bp-3Ch]
  int v56; // [sp+28h] [bp-38h]
  char *v57; // [sp+2Ch] [bp-34h]
  _BOOL4 v58; // [sp+2Ch] [bp-34h]
  char *v59; // [sp+30h] [bp-30h] BYREF
  char *v60; // [sp+34h] [bp-2Ch] BYREF
  char *v61; // [sp+38h] [bp-28h] BYREF
  char *v62[2]; // [sp+3Ch] [bp-24h] BYREF

  memset(a1, 0, 0x18u);
  a1[6] = 3;
  if ( (a2 & 1) == 0 )
  {
    if ( (a2 & 2) != 0 )
    {
      if ( (a2 & 0xC) != 0xC )
        goto LABEL_10;
      v9 = 2;
LABEL_6:
      a1[6] = v9;
      return _stack_chk_guard - (unsigned int)v62[1];
    }
LABEL_5:
    v9 = 3;
    goto LABEL_6;
  }
  if ( (a2 & 0xE) != 0 )
    goto LABEL_5;
LABEL_10:
  v54 = a3;
  LanguageSpecificData = (char *)Unwind_GetLanguageSpecificData(a5);
  v62[0] = LanguageSpecificData;
  if ( !LanguageSpecificData )
  {
    v9 = 8;
    goto LABEL_6;
  }
  v55 = a4;
  v14 = LanguageSpecificData;
  v50 = a1;
  a1[3] = LanguageSpecificData;
  v15 = sub_90BA4(a5, 0xFu, v12, v13);
  RegionStart = Unwind_GetRegionStart(a5);
  v62[0] = v14 + 1;
  v17 = sub_90DD0(v62, (unsigned __int8)*v14);
  v18 = v62[0];
  v19 = ++v62[0];
  if ( !v17 )
    v17 = RegionStart;
  v53 = a2 & 1;
  v48 = v17;
  if ( (unsigned __int8)*v18 == 255 )
  {
    v21 = nullptr;
  }
  else
  {
    v20 = sub_90E78(v62);
    v19 = v62[0];
    v21 = &v62[0][v20];
  }
  v56 = (int)v21;
  v62[0] = v19 + 1;
  v22 = (v15 & 0xFFFFFFFE) + ~RegionStart;
  v51 = a2;
  v23 = (unsigned __int8)*v19;
  v24 = sub_90E78(v62);
  v25 = v62[0];
  v61 = v62[0];
  v57 = &v62[0][v24];
  while ( 1 )
  {
    if ( v25 >= v57 )
LABEL_69:
      sub_90BDC(v54, v55);
    v26 = sub_90DD0(&v61, v23);
    v27 = sub_90DD0(&v61, v23);
    v28 = sub_90DD0(&v61, v23);
    v29 = sub_90E78(&v61);
    v30 = v26 >= v22;
    if ( v26 <= v22 )
      v30 = v22 >= v27 + v26;
    if ( !v30 )
      break;
    if ( v22 < v26 )
      goto LABEL_69;
    v25 = v61;
  }
  if ( !v28 )
    goto LABEL_63;
  if ( !v29 )
  {
    if ( (v51 & 6) == 2 )
    {
      v33 = v50;
      *v50 = 0;
      v50[1] = 0;
      v34 = 6;
      v50[4] = v28 + v48;
LABEL_64:
      v33[6] = v34;
      return _stack_chk_guard - (unsigned int)v62[1];
    }
LABEL_63:
    v33 = v50;
    v34 = 8;
    goto LABEL_64;
  }
  v47 = v28 + v48;
  v31 = &v57[v29 - 1];
  v32 = v51 & 8;
  v60 = v31;
  v58 = (v51 & 4) + v53 == 0;
  v49 = v55 + 88;
  v52 = v51 & 6;
  while ( 1 )
  {
    v37 = sub_90F0C(&v60);
    v39 = v37;
    if ( v37 >= 1 )
    {
      if ( !v56 )
        goto LABEL_69;
      v40 = (_DWORD *)(v56 - 4 * v37);
      if ( *v40 && (v41 = *(_DWORD *)((char *)v40 + *v40)) != 0 )
      {
        if ( v54 )
        {
          v42 = v55 + 88;
          if ( *(_QWORD *)v55 == 0x434C4E47432B2B01LL )
            v42 = *((char **)v55 - 10);
          v59 = v42;
          if ( !v42 || (v43 = *((_DWORD *)v55 - 9)) == 0 )
LABEL_70:
            sub_90BDC(1, v55);
          if ( (*(int (__fastcall **)(int, int, char **))(*(_DWORD *)v41 + 16))(v41, v43, &v59) )
          {
            if ( v53 )
            {
              *(_QWORD *)v50 = v39;
              v50[2] = v31;
              v46 = v59;
              v50[4] = v47;
              v50[5] = v46;
              v50[6] = 6;
              return _stack_chk_guard - (unsigned int)v62[1];
            }
LABEL_31:
            if ( !v32 )
              goto LABEL_70;
            goto LABEL_35;
          }
        }
      }
      else
      {
        if ( !v58 )
          goto LABEL_65;
        if ( !v32 )
          goto LABEL_69;
      }
      goto LABEL_35;
    }
    if ( v37 > -1 )
      break;
    if ( v54 )
    {
      v44 = (int)(v55 + 88);
      if ( *(_QWORD *)v55 == 0x434C4E47432B2B01LL )
        v44 = *((_DWORD *)v55 - 10);
      v45 = v44 == 0;
      if ( v44 )
      {
        v38 = *((_DWORD *)v55 - 9);
        v45 = v38 == 0;
      }
      if ( v45 )
        sub_90BDC(1, v55);
      if ( !sub_90EA0(v37, v37 >> 31, v56, v38, v44, v55) )
        goto LABEL_35;
      if ( v53 )
      {
        v50[4] = v47;
        v50[5] = v44;
        v50[6] = 6;
        *(_QWORD *)v50 = v39;
        v50[2] = v31;
        return _stack_chk_guard - (unsigned int)v62[1];
      }
      goto LABEL_31;
    }
    if ( !v58 )
      goto LABEL_65;
    if ( !v32 )
      sub_90BDC(0, v55);
LABEL_35:
    v35 = v60;
    v59 = v60;
    v36 = sub_90F0C(&v59);
    if ( !v36 )
      goto LABEL_63;
    v31 = &v35[v36];
    v60 = &v35[v36];
  }
  if ( v52 != 2 )
    goto LABEL_35;
LABEL_65:
  v50[4] = v47;
  *(_QWORD *)v50 = v39;
  v50[2] = v31;
  if ( *(_QWORD *)v55 == 0x434C4E47432B2B01LL )
    v49 = *((_QWORD **)v55 - 10);
  v50[5] = v49;
  v50[6] = 6;
  return _stack_chk_guard - (unsigned int)v62[1];
}
// 90904: variable 'v12' is possibly undefined
// 90904: variable 'v13' is possibly undefined
// 90A22: variable 'v38' is possibly undefined
