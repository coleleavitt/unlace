/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BDF10
// Address: 0x000BDF10

//----- (000BDF10) --------------------------------------------------------
int __fastcall sub_BDF10(_DWORD *a1, char a2, char a3, _QWORD *a4, int a5)
{
  char *LanguageSpecificData; // eax
  char *v6; // esi
  int RegionStart; // edi
  int v8; // eax
  char *v9; // eax
  char *v10; // edx
  char v11; // cl
  int v12; // eax
  int v13; // ecx
  int v14; // edi
  char v15; // bl
  char *v16; // edi
  int v17; // edx
  char v18; // bl
  char *v19; // edx
  int v20; // ecx
  int v21; // eax
  char v22; // si
  char v23; // cl
  char *v24; // edi
  unsigned int v25; // ecx
  int v26; // eax
  char v27; // dl
  int v28; // esi
  int v29; // esi
  int v30; // eax
  char *v31; // ecx
  int v32; // ecx
  char *v33; // eax
  char *v34; // esi
  int v35; // ecx
  int v36; // eax
  char v37; // dl
  int v38; // eax
  bool v39; // zf
  unsigned int v40; // ecx
  int v41; // eax
  char *v42; // esi
  char v43; // dl
  int v44; // esi
  int v45; // esi
  _DWORD *v47; // eax
  char *v48; // ecx
  char v49; // [esp+1Fh] [ebp-5Dh]
  int v51; // [esp+28h] [ebp-54h]
  char v52; // [esp+28h] [ebp-54h]
  unsigned int v53; // [esp+28h] [ebp-54h]
  int v54; // [esp+28h] [ebp-54h]
  char *v55; // [esp+2Ch] [ebp-50h]
  char v56; // [esp+30h] [ebp-4Ch]
  char *v57; // [esp+30h] [ebp-4Ch]
  int v58; // [esp+34h] [ebp-48h]
  int v59; // [esp+34h] [ebp-48h]
  int v60; // [esp+38h] [ebp-44h]
  int v61; // [esp+38h] [ebp-44h]
  char *v63; // [esp+40h] [ebp-3Ch]
  int v64; // [esp+44h] [ebp-38h]
  int IP; // [esp+48h] [ebp-34h]
  unsigned int v66; // [esp+48h] [ebp-34h]
  int v67; // [esp+48h] [ebp-34h]
  int v68; // [esp+4Ch] [ebp-30h]
  char *v69; // [esp+4Ch] [ebp-30h]
  unsigned int v70; // [esp+50h] [ebp-2Ch]
  char *v71; // [esp+54h] [ebp-28h]
  char *v72; // [esp+5Ch] [ebp-20h] BYREF
  char *v73; // [esp+60h] [ebp-1Ch] BYREF
  char *v74[6]; // [esp+64h] [ebp-18h] BYREF

  a1[1] = 0;
  *a1 = 0;
  a1[3] = 0;
  a1[2] = 0;
  a1[5] = 0;
  a1[4] = 0;
  a1[6] = 3;
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 0xE) == 0 )
      goto LABEL_8;
LABEL_5:
    a1[6] = 3;
    return _stack_chk_guard;
  }
  if ( (a2 & 2) == 0 )
    goto LABEL_5;
  if ( (a2 & 0xC) == 0xC )
  {
    a1[6] = 2;
    return _stack_chk_guard;
  }
LABEL_8:
  LanguageSpecificData = (char *)Unwind_GetLanguageSpecificData(a5);
  v73 = LanguageSpecificData;
  if ( !LanguageSpecificData )
    goto LABEL_85;
  v6 = LanguageSpecificData;
  a1[3] = LanguageSpecificData;
  IP = Unwind_GetIP(a5);
  RegionStart = Unwind_GetRegionStart(a5);
  v51 = ~RegionStart;
  v73 = v6 + 1;
  v8 = sub_BEA40(&v73, *v6);
  if ( !v8 )
    v8 = RegionStart;
  v60 = v8;
  v9 = v73;
  v10 = ++v73;
  v11 = *v9;
  v12 = 0;
  v49 = v11;
  if ( v11 == -1 )
  {
    v63 = nullptr;
  }
  else
  {
    v13 = 0;
    v14 = 0;
    do
    {
      v15 = *v10;
      v14 |= (*v10++ & 0x7F) << v13;
      v13 += 7;
    }
    while ( v15 < 0 );
    v73 = v10;
    v63 = &v10[v14];
  }
  v66 = v51 + IP;
  v16 = v10 + 1;
  v73 = v10 + 1;
  v52 = *v10;
  v17 = 0;
  do
  {
    v18 = *v16;
    v17 |= (*v16++ & 0x7F) << v12;
    v12 += 7;
  }
  while ( v18 < 0 );
  v73 = v16;
  v64 = v17;
  v71 = &v16[v17];
  v72 = v16;
  v56 = v52;
  v19 = v16;
  while ( 1 )
  {
    if ( v19 >= v71 )
    {
LABEL_25:
      v23 = a3;
      goto LABEL_26;
    }
    v53 = sub_BEA40(&v72, v56);
    v68 = sub_BEA40(&v72, v56);
    v58 = sub_BEA40(&v72, v56);
    v20 = 0;
    v19 = v72;
    v21 = 0;
    do
    {
      v22 = *v19;
      v21 |= (*v19++ & 0x7F) << v20;
      v20 += 7;
    }
    while ( v22 < 0 );
    v72 = v19;
    if ( v53 <= v66 && v66 < v53 + v68 )
      break;
    if ( v66 < v53 )
      goto LABEL_25;
  }
  if ( !v58 )
  {
LABEL_82:
    a1[6] = 8;
    return _stack_chk_guard;
  }
  if ( !v21 )
  {
    if ( (a2 & 6) == 2 )
    {
      a1[1] = 0;
      *a1 = 0;
      a1[4] = v60 + v58;
      a1[6] = 6;
      return _stack_chk_guard;
    }
LABEL_85:
    a1[6] = 8;
    return _stack_chk_guard;
  }
  v59 = v60 + v58;
  v24 = &v16[v21 - 1 + v64];
  v54 = (v49 + 6) & 0xF;
  v70 = (0x747u >> ((v49 + 6) & 0xF)) & 1;
  v55 = (char *)(a4 + 4);
  while ( 1 )
  {
    v57 = v24;
    v25 = 0;
    v26 = 0;
    do
    {
      v27 = *v24;
      v26 |= (*v24++ & 0x7F) << v25;
      v25 += 7;
    }
    while ( v27 < 0 );
    v28 = -1 << v25;
    if ( (v27 & 0x40) == 0 )
      v28 = 0;
    if ( v25 >= 0x20 )
      v28 = 0;
    v29 = v26 | v28;
    if ( v29 <= 0 )
      break;
    v74[0] = v63;
    if ( !v63 || (unsigned __int8)v54 > 0xAu || !(_WORD)v70 )
      goto LABEL_25;
    v74[0] = &v63[-(v29 << byte_1094E0[4 * v54])];
    v30 = sub_BEA40(v74, v49);
    if ( v30 )
    {
      if ( a3 )
      {
        v31 = (char *)(a4 + 4);
        if ( *a4 == 0x434C4E47432B2B01LL )
          v31 = *((char **)a4 - 1);
        v74[0] = v31;
        if ( !v31 || (v32 = *((_DWORD *)a4 - 12)) == 0 )
LABEL_94:
          sub_BE5C0(1, a4);
        if ( (*(unsigned __int8 (__cdecl **)(int, int, char **))(*(_DWORD *)v30 + 16))(v30, v32, v74) )
        {
          if ( (a2 & 1) != 0 )
          {
            *(_QWORD *)a1 = v29;
            a1[2] = v57;
            a1[4] = v59;
            a1[5] = v74[0];
            a1[6] = 6;
            return _stack_chk_guard;
          }
          if ( (a2 & 8) == 0 )
            goto LABEL_94;
        }
      }
    }
    else
    {
      if ( (a2 & 5) != 0 )
        goto LABEL_87;
      if ( (a2 & 8) == 0 )
        goto LABEL_25;
    }
LABEL_75:
    v40 = 0;
    v41 = 0;
    v42 = v24;
    do
    {
      v43 = *v42;
      v41 |= (*v42++ & 0x7F) << v40;
      v40 += 7;
    }
    while ( v43 < 0 );
    v44 = -1 << v40;
    if ( (v43 & 0x40) == 0 )
      v44 = 0;
    if ( v40 >= 0x20 )
      v44 = 0;
    v45 = v41 | v44;
    if ( !v45 )
      goto LABEL_82;
    v24 += v45;
  }
  if ( v29 >= 0 )
  {
    if ( (a2 & 6) == 2 )
      goto LABEL_87;
    goto LABEL_75;
  }
  if ( a3 )
  {
    v61 = v29;
    v33 = (char *)(a4 + 4);
    if ( *a4 == 0x434C4E47432B2B01LL )
      v33 = *((char **)a4 - 1);
    if ( !v33 || (v67 = *((_DWORD *)a4 - 12)) == 0 )
      sub_BE5C0(1, a4);
    v69 = v33;
    if ( !v63 )
    {
LABEL_96:
      v23 = 0;
LABEL_26:
      sub_BE5C0(v23, a4);
    }
    v34 = &v63[~v29];
    v35 = 0;
    v36 = 0;
    while ( 1 )
    {
      do
      {
        v37 = *v34;
        v36 |= (*v34++ & 0x7F) << v35;
        v35 += 7;
      }
      while ( v37 < 0 );
      if ( !v36 )
        break;
      v74[0] = v63;
      if ( (unsigned __int8)v54 > 0xAu || !(_WORD)v70 )
        goto LABEL_93;
      v74[0] = &v63[-(v36 << byte_1094E0[4 * v54])];
      v38 = sub_BEA40(v74, v49);
      v74[0] = v69;
      v39 = (*(unsigned __int8 (__cdecl **)(int, int, char **))(*(_DWORD *)v38 + 16))(v38, v67, v74) == 0;
      v35 = 0;
      v36 = 0;
      if ( !v39 )
        goto LABEL_75;
    }
    if ( (a2 & 1) != 0 )
    {
      v47 = a1;
      *(_QWORD *)a1 = v61;
      a1[2] = v57;
      a1[4] = v59;
      v48 = v69;
      goto LABEL_90;
    }
    if ( (a2 & 8) == 0 )
    {
LABEL_93:
      v23 = 1;
      goto LABEL_26;
    }
    goto LABEL_75;
  }
  if ( (a2 & 5) == 0 )
  {
    if ( (a2 & 8) == 0 )
      goto LABEL_96;
    goto LABEL_75;
  }
LABEL_87:
  v47 = a1;
  *(_QWORD *)a1 = v29;
  a1[2] = v57;
  a1[4] = v59;
  if ( *a4 == 0x434C4E47432B2B01LL )
    v55 = *((char **)a4 - 1);
  v48 = v55;
LABEL_90:
  v47[5] = v48;
  v47[6] = 6;
  return _stack_chk_guard;
}
