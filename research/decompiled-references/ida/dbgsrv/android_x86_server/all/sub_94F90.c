/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_94F90
// Address: 0x00094F90

//----- (00094F90) --------------------------------------------------------
unsigned int __cdecl sub_94F90(int a1, int a2, int a3)
{
  __suseconds_t v3; // ecx
  __int64 v4; // rdi
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rax
  __suseconds_t v7; // eax
  unsigned int v8; // edx
  unsigned __int64 v9; // rax
  bool v10; // cf
  int v11; // esi
  __suseconds_t v12; // eax
  unsigned int v13; // edx
  unsigned int v14; // ecx
  int v15; // esi
  int v16; // edi
  unsigned __int64 v17; // kr10_8
  int v18; // edi
  int v19; // eax
  int v20; // eax
  bool v21; // zf
  int v22; // ecx
  unsigned __int32 v23; // esi
  int v24; // eax
  unsigned int v25; // edi
  void *v26; // eax
  __suseconds_t v27; // eax
  unsigned int v28; // edx
  unsigned __int64 v29; // rax
  __suseconds_t v30; // eax
  unsigned int v31; // edx
  int v32; // kr18_4
  unsigned __int64 v33; // kr20_8
  unsigned __int64 v34; // rax
  int v35; // eax
  int v36; // edi
  void *v37; // eax
  unsigned int v38; // esi
  int v40; // [esp+Ch] [ebp-50h]
  unsigned int v41; // [esp+Ch] [ebp-50h]
  int v42; // [esp+Ch] [ebp-50h]
  int v43; // [esp+Ch] [ebp-50h]
  unsigned int v44; // [esp+10h] [ebp-4Ch]
  int v45; // [esp+10h] [ebp-4Ch]
  int v46; // [esp+14h] [ebp-48h]
  int v47; // [esp+14h] [ebp-48h]
  int v48; // [esp+18h] [ebp-44h]
  unsigned int v49; // [esp+18h] [ebp-44h]
  unsigned int v50; // [esp+1Ch] [ebp-40h]
  char v51; // [esp+20h] [ebp-3Ch]
  unsigned int v52; // [esp+24h] [ebp-38h]
  int v53; // [esp+28h] [ebp-34h] BYREF
  unsigned __int32 v54; // [esp+2Ch] [ebp-30h]
  int v55; // [esp+30h] [ebp-2Ch]
  unsigned int v56; // [esp+34h] [ebp-28h] BYREF
  int v57; // [esp+38h] [ebp-24h]
  unsigned __int32 v58; // [esp+3Ch] [ebp-20h]
  int v59; // [esp+40h] [ebp-1Ch]
  unsigned int v60; // [esp+48h] [ebp-14h]

  v60 = __readgsdword(0x14u);
  if ( a3 < 0 )
  {
    LODWORD(v6) = &v56;
  }
  else
  {
    v3 = qtime64();
    LODWORD(v4) = (_DWORD)dword_F4240 * HIDWORD(v6);
    HIDWORD(v4) = ((unsigned __int64)(unsigned int)v3 + 1000LL * a3) >> 32;
    v5 = v4 + __PAIR64__(((unsigned int)dword_F4240 * (unsigned __int64)HIDWORD(v6)) >> 32, v3 + 1000 * a3);
    LODWORD(v6) = &v56;
    if ( v5 )
    {
      v7 = qtime64();
      v9 = (unsigned int)v7 + (unsigned int)dword_F4240 * (unsigned __int64)v8;
      v50 = HIDWORD(v5);
      v10 = v9 < v5;
      v11 = 0;
      v52 = v5;
      if ( v10 && (v11 = (__PAIR64__(v50, v5) - v9) / 0x3E8, v11 < 0) )
      {
        v51 = 0;
        v15 = 0;
        v14 = 0;
      }
      else
      {
        v12 = qtime64();
        v14 = ((unsigned int)dword_F4240 * (unsigned __int64)v13 + (unsigned int)v12 + 1000LL * v11) >> 32;
        v15 = (_DWORD)dword_F4240 * v13 + v12 + 1000 * v11;
        v51 = 0;
      }
      LODWORD(v6) = &v56;
      goto LABEL_9;
    }
  }
  v52 = 0;
  v51 = 1;
  v50 = 0;
  v15 = 0;
  v14 = 0;
LABEL_9:
  HIDWORD(v6) = a1;
  v16 = 4;
  v48 = v15;
  v44 = v14;
  while ( 1 )
  {
    v46 = v6;
    v40 = v16;
    if ( v14 | v15 )
    {
      LODWORD(v6) = qtime64();
      v17 = (unsigned int)v6 + (unsigned int)dword_F4240 * (unsigned __int64)HIDWORD(v6);
      LODWORD(v6) = 0;
      v18 = a1;
      if ( v17 < __PAIR64__(v44, v15) )
        v6 = (__PAIR64__(v44, v48) - v17) / 0x3E8;
    }
    else
    {
      LODWORD(v6) = -1;
      v18 = HIDWORD(v6);
    }
    v19 = (*(int (__cdecl **)(int, _DWORD))(*(_DWORD *)v18 + 24))(v18, v6);
    v14 = v40;
    if ( v19 <= 0 )
      break;
    v20 = (*(int (__cdecl **)(int, int, int))(*(_DWORD *)v18 + 28))(v18, v46, v40);
    v14 = v40;
    if ( v20 <= 0 )
      break;
    HIDWORD(v6) = v18;
    v22 = v40 - v20;
    v21 = v40 == v20;
    LODWORD(v6) = v20 + v46;
    v15 = v48;
    v16 = v22;
    v14 = v44;
    if ( v21 )
      goto LABEL_20;
  }
  if ( v14 == 4 )
    return 0;
LABEL_20:
  v21 = v56 == 0;
  v23 = _byteswap_ulong(v56);
  v56 = v23;
  if ( !v21 )
  {
    v53 = 0;
    v54 = 0;
    v55 = 0;
    v53 = (int)qvector_reserve((int)&v53, nullptr, v23 + 1, 1u);
    memset((void *)(v54 + v53), 0, v23 + 1 - v54);
    v54 = v23 + 1;
    *(_BYTE *)(v53 + v23) = 0;
    if ( v51 )
    {
      v47 = v53;
      v24 = 0;
      v25 = v56;
      goto LABEL_23;
    }
    v27 = qtime64();
    v29 = (unsigned int)v27 + (unsigned int)dword_F4240 * (unsigned __int64)v28;
    if ( v29 >= __PAIR64__(v50, v52) )
    {
      v47 = v53;
      v42 = 0;
      v25 = v56;
    }
    else
    {
      v47 = v53;
      v25 = v56;
      if ( (((__PAIR64__(v50, v52) - v29) / 0x3E8) & 0x80000000) != 0LL )
      {
        v24 = 0;
LABEL_23:
        v41 = 0;
        if ( !v25 )
          goto LABEL_41;
        goto LABEL_32;
      }
      v42 = (__PAIR64__(v50, v52) - v29) / 0x3E8;
    }
    v30 = qtime64();
    v32 = (_DWORD)dword_F4240 * v31 + 1000 * v42 + v30;
    v41 = ((unsigned int)dword_F4240 * (unsigned __int64)v31 + 1000LL * v42 + (unsigned int)v30) >> 32;
    v24 = v32;
    if ( !v25 )
    {
LABEL_41:
      v14 = 0;
LABEL_46:
      if ( v53 )
      {
        v38 = v14;
        v54 = 0;
        qfree((void *)v53);
        v53 = 0;
        v55 = 0;
        return v38;
      }
      return v14;
    }
LABEL_32:
    v49 = v25;
    v45 = v24;
    while ( 1 )
    {
      if ( v41 | v24 )
      {
        LODWORD(v34) = qtime64();
        v33 = (unsigned int)v34 + (unsigned int)dword_F4240 * (unsigned __int64)HIDWORD(v34);
        LODWORD(v34) = 0;
        if ( v33 < __PAIR64__(v41, v45) )
          v34 = (__PAIR64__(v41, v45) - v33) / 0x3E8;
      }
      else
      {
        LODWORD(v34) = -1;
      }
      if ( (*(int (__cdecl **)(int, _DWORD))(*(_DWORD *)a1 + 24))(a1, v34) <= 0 )
        break;
      v35 = (*(int (__cdecl **)(int, int, unsigned int))(*(_DWORD *)a1 + 28))(a1, v47, v25);
      if ( v35 <= 0 )
        break;
      v47 += v35;
      v25 -= v35;
      v24 = v45;
      if ( !v25 )
        goto LABEL_43;
    }
    if ( v49 == v25 )
      goto LABEL_41;
LABEL_43:
    v14 = v54;
    v43 = v53;
    v57 = v53;
    v53 = 0;
    v58 = v54;
    v54 = 0;
    v36 = v55;
    v59 = v55;
    v55 = 0;
    v37 = *(void **)a2;
    if ( *(_DWORD *)a2 )
    {
      *(_DWORD *)(a2 + 4) = 0;
      qfree(v37);
      *(_DWORD *)a2 = 0;
      *(_DWORD *)(a2 + 8) = 0;
      v43 = v57;
      v14 = v58;
      v36 = v59;
    }
    *(_DWORD *)a2 = v43;
    *(_DWORD *)(a2 + 4) = v14;
    *(_DWORD *)(a2 + 8) = v36;
    LOBYTE(v14) = 1;
    goto LABEL_46;
  }
  v26 = *(void **)a2;
  LOBYTE(v14) = 1;
  if ( *(_DWORD *)a2 )
  {
    *(_DWORD *)(a2 + 4) = 0;
    qfree(v26);
    LOBYTE(v14) = 1;
    *(_DWORD *)a2 = 0;
    *(_DWORD *)(a2 + 8) = 0;
  }
  return v14;
}
// 9537F: conditional instruction was optimized away because %0x28.4!=0
// 94FCE: variable 'v6' is possibly undefined
// 95005: variable 'v8' is possibly undefined
// 95056: variable 'v13' is possibly undefined
// 95242: variable 'v28' is possibly undefined
// 952B0: variable 'v31' is possibly undefined
// 952F4: variable 'v34' is possibly undefined
// 95449: variable 'v14' is possibly undefined
// F4240: using guessed type int dword_F4240[37];
