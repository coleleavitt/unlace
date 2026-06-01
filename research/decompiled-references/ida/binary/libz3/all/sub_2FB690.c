__int64 __fastcall sub_2FB690(__int64 a1, __int64 a2, int *a3, unsigned __int64 *a4)
{
  char **exception; // rbx
  unsigned __int64 v9; // r15
  _QWORD *v10; // rbx
  __int64 v11; // rax
  unsigned __int64 v12; // rsi
  int v13; // r9d
  __int64 v14; // r8
  _QWORD *v15; // rcx
  __int64 v16; // rdx
  _QWORD *v17; // rdi
  _QWORD *v18; // rax
  int v19; // edx
  unsigned __int64 v20; // rdi
  __int64 v21; // r9
  _QWORD *v22; // rsi
  _QWORD *v23; // rax
  int v24; // edx
  unsigned int v25; // r12d
  __int64 v26; // rdi
  __int64 v27; // rbx
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rdx
  int v32; // eax
  __int64 v33; // rax
  int v34; // edx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  int v38; // edi
  __int64 v39; // rax
  __m128i v40; // xmm0
  __m128i v41; // xmm0
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rax
  int v45; // r8d
  unsigned int v46; // r10d
  unsigned __int64 v47; // r15
  __int64 v48; // r9
  unsigned __int64 v49; // rsi
  __int64 v50; // rax
  _QWORD *v51; // rdi
  _QWORD *v52; // rax
  _QWORD *v53; // rcx
  int v54; // edx
  int v55; // edx
  __int64 v56; // rax
  _QWORD *v57; // rax
  __int64 v58; // rcx
  int v59; // r10d
  int v60; // r8d
  _QWORD *v61; // rdx
  void *v62; // rdi
  int v63; // ecx
  size_t v64; // [rsp+0h] [rbp-C8h]
  int v65; // [rsp+0h] [rbp-C8h]
  unsigned int v66; // [rsp+0h] [rbp-C8h]
  unsigned int v67; // [rsp+Ch] [rbp-BCh]
  int v68; // [rsp+Ch] [rbp-BCh]
  int v69; // [rsp+Ch] [rbp-BCh]
  int v70; // [rsp+10h] [rbp-B8h]
  int v71; // [rsp+10h] [rbp-B8h]
  __int64 v72; // [rsp+10h] [rbp-B8h]
  int v73; // [rsp+18h] [rbp-B0h]
  size_t v74; // [rsp+18h] [rbp-B0h]
  int v75; // [rsp+18h] [rbp-B0h]
  __int64 v76; // [rsp+20h] [rbp-A8h] BYREF
  __m128i v77; // [rsp+28h] [rbp-A0h] BYREF
  __int64 v78; // [rsp+38h] [rbp-90h]
  __m128i v79; // [rsp+40h] [rbp-88h] BYREF
  __int64 v80; // [rsp+50h] [rbp-78h]
  __int64 v81; // [rsp+58h] [rbp-70h]
  __int64 v82; // [rsp+60h] [rbp-68h] BYREF
  __int64 v83; // [rsp+68h] [rbp-60h]
  char v84; // [rsp+70h] [rbp-58h]
  unsigned __int64 v85; // [rsp+78h] [rbp-50h]
  int v86; // [rsp+80h] [rbp-48h]

  if ( !(unsigned __int8)sub_15D2CB0(*(_QWORD *)a1, a2) )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_2EB560(&v76, "Soft constraint should be Boolean");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, &v76);
    sub_233E40((__int64)&v76);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v9 = *a4;
  v10 = *(_QWORD **)(a1 + 96);
  v11 = *(unsigned int *)(a1 + 104);
  if ( *a4 )
  {
    if ( (*a4 & 7) == 1 )
      v12 = v9 >> 3;
    else
      LODWORD(v12) = *(_DWORD *)(v9 - 8);
  }
  else
  {
    LODWORD(v12) = -1640531495;
  }
  v13 = v11 - 1;
  v14 = 24 * v11;
  v15 = &v10[3 * v11];
  v16 = 3LL * ((unsigned int)v12 & ((_DWORD)v11 - 1));
  v17 = &v10[v16];
  if ( v16 != 3 * v11 )
  {
    v18 = &v10[v16];
    do
    {
      v19 = *((_DWORD *)v18 + 1);
      if ( v19 == 2 )
      {
        if ( (_DWORD)v12 == *(_DWORD *)v18 && v18[1] == v9 )
          goto LABEL_12;
      }
      else if ( !v19 )
      {
        goto LABEL_46;
      }
      v18 += 3;
    }
    while ( v15 != v18 );
  }
  if ( v10 != v17 )
  {
    v33 = *(_QWORD *)(a1 + 96);
    while ( 1 )
    {
      v34 = *(_DWORD *)(v33 + 4);
      if ( v34 != 2 )
        break;
      if ( (_DWORD)v12 == *(_DWORD *)v33 )
      {
        if ( *(_QWORD *)(v33 + 8) == v9 )
          goto LABEL_12;
        v33 += 24;
        if ( v17 == (_QWORD *)v33 )
          goto LABEL_46;
      }
      else
      {
LABEL_41:
        v33 += 24;
        if ( v17 == (_QWORD *)v33 )
          goto LABEL_46;
      }
    }
    if ( !v34 )
      goto LABEL_46;
    goto LABEL_41;
  }
LABEL_46:
  v35 = *(_QWORD *)a1;
  LODWORD(v76) = 2;
  v77.m128i_i64[0] = 0;
  v77.m128i_i64[1] = v35;
  v78 = v35;
  v79 = 0u;
  v80 = 0;
  v81 = 0;
  v82 = 1;
  v83 = 0;
  sub_182CBA0(qword_1C7F2C0, &v82);
  v36 = *(_QWORD *)(a1 + 152);
  BYTE4(v82) &= ~1u;
  LODWORD(v82) = 1;
  v84 = 0;
  v85 = v9;
  v86 = 0;
  if ( !v36 || (v37 = *(unsigned int *)(v36 - 4), v38 = 0, (_DWORD)v37 == *(_DWORD *)(v36 - 8)) )
  {
    sub_2FDD40(a1 + 152);
    v36 = *(_QWORD *)(a1 + 152);
    v38 = v86;
    v37 = *(unsigned int *)(v36 - 4);
  }
  v39 = v36 + 104 * v37;
  *(_DWORD *)v39 = v76;
  v40 = _mm_loadu_si128(&v77);
  v77.m128i_i64[0] = 0;
  *(__m128i *)(v39 + 8) = v40;
  *(_QWORD *)(v39 + 24) = v78;
  v41 = _mm_load_si128(&v79);
  v79.m128i_i64[0] = 0;
  *(__m128i *)(v39 + 32) = v41;
  v79.m128i_i64[1] = 0;
  *(_DWORD *)(v39 + 48) = v80;
  *(_BYTE *)(v39 + 52) = BYTE4(v80) & 3 | *(_BYTE *)(v39 + 52) & 0xFC;
  v42 = v81;
  v81 = 0;
  *(_QWORD *)(v39 + 56) = v42;
  *(_DWORD *)(v39 + 64) = v82;
  *(_BYTE *)(v39 + 68) = BYTE4(v82) & 3 | *(_BYTE *)(v39 + 68) & 0xFC;
  v43 = v83;
  v83 = 0;
  *(_QWORD *)(v39 + 72) = v43;
  LOBYTE(v43) = v84;
  *(_DWORD *)(v39 + 96) = v38;
  *(_BYTE *)(v39 + 80) = v43;
  *(_QWORD *)(v39 + 88) = v85;
  ++*(_DWORD *)(v36 - 4);
  sub_2FC7D0(&v76);
  v44 = *(_QWORD *)(a1 + 152);
  if ( v44 )
    v45 = *(_DWORD *)(v44 - 4) - 1;
  else
    v45 = -1;
  v46 = *(_DWORD *)(a1 + 104);
  v47 = *a4;
  if ( 3 * v46 < 4 * (*(_DWORD *)(a1 + 108) + *(_DWORD *)(a1 + 112)) )
  {
    v73 = v45;
    v70 = 2 * v46;
    v67 = 2 * v46;
    v64 = 48LL * v46;
    v57 = (_QWORD *)sub_186B270(v64);
    v58 = v67;
    v59 = v70;
    v60 = v73;
    v10 = v57;
    v61 = &v57[v64 / 8];
    if ( v67 )
    {
      do
      {
        *v57 = 0;
        v57 += 3;
        *(v57 - 2) = 0;
      }
      while ( v57 != v61 );
    }
    v74 = v64;
    v71 = v60;
    v68 = v59;
    v65 = v58;
    sub_2FF5A0(*(_QWORD *)(a1 + 96), *(unsigned int *)(a1 + 104), v10, v58);
    v62 = *(void **)(a1 + 96);
    v63 = v65;
    v46 = v68;
    v45 = v71;
    v48 = v74;
    if ( v62 )
    {
      v75 = v65;
      v72 = v48;
      v69 = v45;
      v66 = v46;
      sub_186B220(v62);
      v63 = v75;
      v48 = v72;
      v45 = v69;
      v46 = v66;
    }
    *(_QWORD *)(a1 + 96) = v10;
    *(_DWORD *)(a1 + 104) = v63;
    *(_DWORD *)(a1 + 112) = 0;
  }
  else
  {
    v10 = *(_QWORD **)(a1 + 96);
    v48 = 24LL * v46;
  }
  if ( v47 )
  {
    if ( (v47 & 7) == 1 )
      v49 = v47 >> 3;
    else
      LODWORD(v49) = *(_DWORD *)(v47 - 8);
  }
  else
  {
    LODWORD(v49) = -1640531495;
  }
  v50 = 24LL * ((unsigned int)v49 & (v46 - 1));
  v51 = &v10[(unsigned __int64)v50 / 8];
  if ( v50 == v48 )
  {
    v53 = nullptr;
LABEL_69:
    if ( v51 == v10 )
    {
LABEL_89:
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v52 = v10;
    while ( 1 )
    {
      v55 = *((_DWORD *)v52 + 1);
      if ( v55 == 2 )
      {
        if ( (_DWORD)v49 == *(_DWORD *)v52 && v47 == v52[1] )
          goto LABEL_63;
      }
      else
      {
        if ( !v55 )
          goto LABEL_78;
        v53 = v52;
      }
      v52 += 3;
      if ( v51 == v52 )
        goto LABEL_89;
    }
  }
  v52 = &v10[(unsigned __int64)v50 / 8];
  v53 = nullptr;
  while ( 1 )
  {
    v54 = *((_DWORD *)v52 + 1);
    if ( v54 != 2 )
      break;
    if ( (_DWORD)v49 == *(_DWORD *)v52 && v52[1] == v47 )
    {
LABEL_63:
      v52[1] = v47;
      *((_DWORD *)v52 + 4) = v45;
      *((_DWORD *)v52 + 1) = 2;
      goto LABEL_81;
    }
LABEL_59:
    v52 += 3;
    if ( (_QWORD *)((char *)v10 + v48) == v52 )
      goto LABEL_69;
  }
  if ( v54 )
  {
    v53 = v52;
    goto LABEL_59;
  }
LABEL_78:
  if ( v53 )
    --*(_DWORD *)(a1 + 112);
  else
    v53 = v52;
  v53[1] = v47;
  *((_DWORD *)v53 + 4) = v45;
  *((_DWORD *)v53 + 1) = 2;
  *(_DWORD *)v53 = v49;
  ++*(_DWORD *)(a1 + 108);
LABEL_81:
  v56 = *(unsigned int *)(a1 + 104);
  v9 = *a4;
  v13 = v56 - 1;
  v14 = 24 * v56;
  v15 = &v10[3 * v56];
LABEL_12:
  if ( v9 )
  {
    if ( (v9 & 7) == 1 )
      v20 = v9 >> 3;
    else
      LODWORD(v20) = *(_DWORD *)(v9 - 8);
  }
  else
  {
    LODWORD(v20) = -1640531495;
  }
  v21 = (unsigned int)v20 & v13;
  v22 = &v10[3 * v21];
  if ( 24 * v21 == v14 )
  {
LABEL_30:
    while ( v22 != v10 )
    {
      v32 = *((_DWORD *)v10 + 1);
      if ( v32 == 2 )
      {
        if ( (_DWORD)v20 == *(_DWORD *)v10 && v10[1] == v9 )
        {
          v23 = v10;
          goto LABEL_22;
        }
      }
      else if ( !v32 )
      {
        break;
      }
      v10 += 3;
    }
LABEL_93:
    BUG();
  }
  v23 = &v10[3 * v21];
  while ( 2 )
  {
    v24 = *((_DWORD *)v23 + 1);
    if ( v24 != 2 )
    {
      if ( !v24 )
        goto LABEL_93;
LABEL_18:
      v23 += 3;
      if ( v23 == v15 )
        goto LABEL_30;
      continue;
    }
    break;
  }
  if ( (_DWORD)v20 != *(_DWORD *)v23 || v23[1] != v9 )
    goto LABEL_18;
LABEL_22:
  v25 = *((_DWORD *)v23 + 4);
  if ( *a3 )
  {
    v26 = *(_QWORD *)(a1 + 152);
    v76 = a2;
    v27 = 104LL * v25;
    v28 = v27 + v26;
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    sub_2F13A0((_QWORD *)(v28 + 32), &v76);
    sub_2F0130((int **)(*(_QWORD *)(a1 + 152) + v27 + 40), a3);
    v29 = *(_QWORD *)(a1 + 72);
    if ( !v29 || (v30 = *(unsigned int *)(v29 - 4), (_DWORD)v30 == *(_DWORD *)(v29 - 8)) )
    {
      sub_2FD3F0(a1 + 72);
      v29 = *(_QWORD *)(a1 + 72);
      v30 = *(unsigned int *)(v29 - 4);
    }
    *(_DWORD *)(v29 + 4 * v30) = v25;
    ++*(_DWORD *)(v29 - 4);
  }
  return v25;
}

