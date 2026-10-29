/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_CFE40
// Address: 0x00000000000CFE40

//----- (00000000000CFE40) ----------------------------------------------------
unsigned __int64 __fastcall sub_CFE40(__int64 a1, char a2, char a3, char *a4, __int64 a5)
{
  char *LanguageSpecificData; // rax
  char *v8; // rbp
  __int64 IP; // r12
  __int64 RegionStart; // r14
  unsigned __int64 v11; // rax
  unsigned __int8 *v12; // rcx
  char *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rdi
  char v16; // dl
  unsigned __int64 v17; // rsi
  __int64 v18; // r12
  char *v19; // rbp
  char v20; // al
  __int64 v21; // rcx
  unsigned int v22; // edx
  char v23; // si
  unsigned __int64 v24; // rdi
  unsigned __int8 v25; // r14
  char *v26; // rdx
  unsigned __int64 v27; // rbx
  unsigned __int64 v28; // r12
  unsigned __int64 v29; // r15
  unsigned __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // rax
  char v33; // si
  unsigned __int64 v34; // rdi
  unsigned __int64 v35; // r8
  char *v36; // r15
  __int64 v37; // rbx
  unsigned __int64 v38; // rcx
  __int64 v39; // r13
  char v40; // al
  unsigned __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // r13
  _QWORD *v44; // rax
  char *v45; // rcx
  __int64 v46; // rsi
  char v47; // al
  char v48; // al
  char *v49; // rax
  __int64 v50; // rbp
  char *v51; // r12
  __int64 v52; // rcx
  __int64 v53; // rdx
  char v54; // al
  unsigned __int64 v55; // rsi
  unsigned __int64 v56; // rax
  char v57; // al
  unsigned __int64 v58; // rcx
  __int64 v59; // rax
  char *v60; // rdx
  char v61; // si
  unsigned __int64 v62; // rdi
  __int64 v63; // rdx
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v67; // rcx
  char *v68; // rax
  unsigned __int8 v69; // [rsp+6h] [rbp-A2h]
  char v71; // [rsp+10h] [rbp-98h]
  char *v74; // [rsp+20h] [rbp-88h]
  char *v75; // [rsp+28h] [rbp-80h]
  char *v76; // [rsp+30h] [rbp-78h]
  unsigned __int64 v77; // [rsp+30h] [rbp-78h]
  unsigned __int64 v78; // [rsp+38h] [rbp-70h]
  char *v79; // [rsp+38h] [rbp-70h]
  __int64 v80; // [rsp+40h] [rbp-68h]
  char *v81; // [rsp+48h] [rbp-60h]
  unsigned int v82; // [rsp+54h] [rbp-54h]
  char *v83; // [rsp+58h] [rbp-50h] BYREF
  char *v84; // [rsp+60h] [rbp-48h] BYREF
  char *v85[8]; // [rsp+68h] [rbp-40h] BYREF

  v85[1] = (char *)__readfsqword(0x28u);
  *(_OWORD *)(a1 + 16) = 0;
  *(_OWORD *)a1 = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 40) = 3;
  if ( (a2 & 1) == 0 )
  {
    if ( (a2 & 2) != 0 )
    {
      if ( (a2 & 0xC) == 0xC )
      {
        *(_DWORD *)(a1 + 40) = 2;
        return __readfsqword(0x28u);
      }
      goto LABEL_8;
    }
LABEL_5:
    *(_DWORD *)(a1 + 40) = 3;
    return __readfsqword(0x28u);
  }
  if ( (a2 & 0xE) != 0 )
    goto LABEL_5;
LABEL_8:
  LanguageSpecificData = (char *)Unwind_GetLanguageSpecificData(a5);
  v84 = LanguageSpecificData;
  if ( !LanguageSpecificData )
  {
    *(_DWORD *)(a1 + 40) = 8;
    return __readfsqword(0x28u);
  }
  v8 = LanguageSpecificData;
  v71 = a3;
  *(_QWORD *)(a1 + 16) = LanguageSpecificData;
  IP = Unwind_GetIP(a5);
  RegionStart = Unwind_GetRegionStart(a5);
  v84 = v8 + 1;
  v11 = sub_D0950(&v84, *v8);
  if ( !v11 )
    v11 = RegionStart;
  v12 = (unsigned __int8 *)v84;
  v13 = ++v84;
  v69 = *v12;
  v78 = v11;
  if ( *v12 == 0xFF )
  {
    v81 = nullptr;
  }
  else
  {
    v14 = 0;
    v15 = 0;
    do
    {
      v16 = *v13;
      v17 = (unsigned __int64)(*v13++ & 0x7F) << v14;
      v15 |= v17;
      v14 += 7;
    }
    while ( v16 < 0 );
    v84 = v13;
    v81 = &v13[v15];
  }
  v18 = ~RegionStart + IP;
  v19 = v13 + 1;
  v84 = v13 + 1;
  v20 = *v13;
  v21 = 0;
  v22 = 0;
  do
  {
    v23 = *v19;
    v24 = (unsigned __int64)(*v19++ & 0x7F) << v21;
    v22 |= v24;
    v21 += 7;
  }
  while ( v23 < 0 );
  v84 = v19;
  v80 = v22;
  v76 = &v19[v22];
  v83 = v19;
  v25 = v20;
  v26 = v19;
  v27 = v18;
  while ( 1 )
  {
    if ( v26 >= v76 )
LABEL_26:
      sub_D0500(v71, a4);
    v28 = sub_D0950(&v83, v25);
    v29 = sub_D0950(&v83, v25);
    v30 = sub_D0950(&v83, v25);
    v26 = v83;
    v31 = 0;
    v32 = 0;
    do
    {
      v33 = *v26;
      v34 = (unsigned __int64)(*v26++ & 0x7F) << v31;
      v32 |= v34;
      v31 += 7;
    }
    while ( v33 < 0 );
    v83 = v26;
    if ( v28 <= v27 && v27 < v28 + v29 )
      break;
    if ( v27 < v28 )
      goto LABEL_26;
  }
  if ( !v30 )
  {
LABEL_85:
    *(_DWORD *)(a1 + 40) = 8;
    return __readfsqword(0x28u);
  }
  v35 = v78 + v30;
  if ( !v32 )
  {
    if ( (a2 & 6) == 2 )
    {
      v65 = a1;
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 24) = v35;
      goto LABEL_84;
    }
    goto LABEL_85;
  }
  v36 = &v19[v32 - 1 + v80];
  v74 = a4 + 32;
  v37 = (v69 + 6) & 0xF;
  v82 = (0x747u >> ((v69 + 6) & 0xF)) & 1;
  v75 = v36;
  v77 = v35;
  while ( 1 )
  {
    v38 = 0;
    v39 = 0;
    do
    {
      v40 = *v36;
      v41 = (unsigned __int64)(*v36++ & 0x7F) << v38;
      v39 |= v41;
      v38 += 7LL;
    }
    while ( v40 < 0 );
    v42 = -1LL << v38;
    if ( (v40 & 0x40) == 0 )
      v42 = 0;
    if ( v38 >= 0x40 )
      v42 = 0;
    v43 = v42 | v39;
    if ( v43 <= 0 )
      break;
    v85[0] = v81;
    if ( !v81 || (unsigned __int8)v37 > 0xAu || !(_WORD)v82 )
      goto LABEL_26;
    v85[0] = &v81[-(v43 << LOBYTE(qword_118B90[v37]))];
    v44 = (_QWORD *)sub_D0950(v85, v69);
    if ( v44 )
    {
      v35 = v77;
      if ( !v71 )
        goto LABEL_74;
      v45 = a4 + 32;
      if ( *(_QWORD *)a4 == 0x434C4E47432B2B01LL )
        v45 = *((char **)a4 - 12);
      v85[0] = v45;
      if ( !v45 || (v46 = *((_QWORD *)a4 - 11)) == 0 )
        sub_D0500(1, a4);
      v47 = (*(__int64 (__fastcall **)(_QWORD *, __int64, char **, _QWORD, unsigned __int64))(*v44 + 32LL))(
              v44,
              v46,
              v85,
              *v44,
              v77);
      v35 = v77;
      if ( !v47 )
        goto LABEL_74;
      v48 = a2;
      if ( (a2 & 1) != 0 )
      {
        v67 = a1;
        *(_QWORD *)a1 = v43;
        *(_QWORD *)(a1 + 8) = v75;
        *(_QWORD *)(a1 + 24) = v77;
        v68 = v85[0];
LABEL_90:
        *(_QWORD *)(v67 + 32) = v68;
        *(_DWORD *)(v67 + 40) = 6;
        return __readfsqword(0x28u);
      }
      goto LABEL_73;
    }
    v35 = v77;
    if ( (a2 & 5) != 0 )
      goto LABEL_87;
    if ( (a2 & 8) == 0 )
      goto LABEL_26;
LABEL_74:
    v58 = 0;
    v59 = 0;
    v60 = v36;
    do
    {
      v61 = *v60;
      v62 = (unsigned __int64)(*v60++ & 0x7F) << v58;
      v59 |= v62;
      v58 += 7LL;
    }
    while ( v61 < 0 );
    v63 = -1LL << v58;
    if ( (v61 & 0x40) == 0 )
      v63 = 0;
    if ( v58 >= 0x40 )
      v63 = 0;
    v64 = v63 | v59;
    if ( !v64 )
      goto LABEL_85;
    v36 += v64;
    v75 = v36;
  }
  if ( v43 >= 0 )
  {
    if ( (a2 & 6) == 2 )
      goto LABEL_87;
    goto LABEL_74;
  }
  if ( !v71 )
  {
    if ( (a2 & 5) != 0 )
    {
LABEL_87:
      v67 = a1;
      *(_QWORD *)a1 = v43;
      *(_QWORD *)(a1 + 8) = v75;
      *(_QWORD *)(a1 + 24) = v35;
      if ( *(_QWORD *)a4 == 0x434C4E47432B2B01LL )
        v74 = *((char **)a4 - 12);
      v68 = v74;
      goto LABEL_90;
    }
    if ( (a2 & 8) == 0 )
      goto LABEL_95;
    goto LABEL_74;
  }
  v49 = a4 + 32;
  if ( *(_QWORD *)a4 == 0x434C4E47432B2B01LL )
    v49 = *((char **)a4 - 12);
  if ( !v49 || (v50 = *((_QWORD *)a4 - 11)) == 0 )
    sub_D0500(1, a4);
  v79 = v49;
  if ( !v81 )
LABEL_95:
    sub_D0500(0, a4);
  v51 = &v81[~v43];
  v52 = 0;
  v53 = 0;
  while ( 1 )
  {
    do
    {
      v54 = *v51;
      v55 = (unsigned __int64)(*v51++ & 0x7F) << v52;
      v53 |= v55;
      v52 += 7;
    }
    while ( v54 < 0 );
    if ( !v53 )
      break;
    v85[0] = v81;
    if ( (unsigned __int8)v37 > 0xAu || !(_WORD)v82 )
      goto LABEL_92;
    v85[0] = &v81[-(v53 << LOBYTE(qword_118B90[v37]))];
    v56 = sub_D0950(v85, v69);
    v85[0] = v79;
    v57 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, char **))(*(_QWORD *)v56 + 32LL))(v56, v50, v85);
    v52 = 0;
    v53 = 0;
    v35 = v77;
    if ( v57 )
      goto LABEL_74;
  }
  v48 = a2;
  if ( (a2 & 1) == 0 )
  {
LABEL_73:
    if ( (v48 & 8) == 0 )
LABEL_92:
      sub_D0500(1, a4);
    goto LABEL_74;
  }
  v65 = a1;
  *(_QWORD *)a1 = v43;
  *(_QWORD *)(a1 + 8) = v75;
  *(_QWORD *)(a1 + 24) = v35;
  *(_QWORD *)(a1 + 32) = v79;
LABEL_84:
  *(_DWORD *)(v65 + 40) = 6;
  return __readfsqword(0x28u);
}
// 118B90: using guessed type __int64 qword_118B90[12];
