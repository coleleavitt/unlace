unsigned __int64 __fastcall sub_D2380(_QWORD *a1, int a2)
{
  _DWORD *v2; // rax
  int v3; // r13d
  _DWORD *v4; // r15
  char *v5; // rax
  char *v6; // rdx
  char *v7; // rdi
  int v8; // eax
  unsigned int v9; // r14d
  __int64 v10; // rdx
  size_t v11; // r12
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  _QWORD *v15; // r15
  int v16; // eax
  __int64 v17; // rdx
  int v18; // r12d
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rsi
  int v22; // ebx
  int v23; // eax
  int v25; // [rsp+0h] [rbp-140h]
  __int64 v26; // [rsp+8h] [rbp-138h]
  __int64 v27; // [rsp+10h] [rbp-130h]
  __int64 v28; // [rsp+18h] [rbp-128h]
  int v29; // [rsp+20h] [rbp-120h]
  int v30; // [rsp+24h] [rbp-11Ch]
  int *v31; // [rsp+28h] [rbp-118h]
  __int64 v32; // [rsp+30h] [rbp-110h]
  int v33; // [rsp+38h] [rbp-108h]
  int v34; // [rsp+3Ch] [rbp-104h]
  __int64 v35; // [rsp+40h] [rbp-100h]
  int *v36; // [rsp+48h] [rbp-F8h]
  __int64 *v37; // [rsp+50h] [rbp-F0h]
  _QWORD *v38; // [rsp+58h] [rbp-E8h]
  int v39; // [rsp+60h] [rbp-E0h]
  int v40; // [rsp+68h] [rbp-D8h] BYREF
  __int64 v41; // [rsp+70h] [rbp-D0h] BYREF
  void *src; // [rsp+80h] [rbp-C0h] BYREF
  size_t n[3]; // [rsp+88h] [rbp-B8h]
  _DWORD v44[4]; // [rsp+A0h] [rbp-A0h] BYREF
  __int64 v45; // [rsp+B0h] [rbp-90h]
  int v46; // [rsp+B8h] [rbp-88h]
  void *v47; // [rsp+C0h] [rbp-80h]
  __int128 v48; // [rsp+C8h] [rbp-78h]
  __int64 v49; // [rsp+D8h] [rbp-68h]
  __int128 v50; // [rsp+E0h] [rbp-60h]
  __int64 v51; // [rsp+F0h] [rbp-50h] BYREF
  int v52; // [rsp+F8h] [rbp-48h]
  int v53; // [rsp+FCh] [rbp-44h]
  __int64 v54; // [rsp+100h] [rbp-40h]
  unsigned __int64 v55; // [rsp+108h] [rbp-38h]

  v38 = a1;
  v29 = a2;
  v55 = __readfsqword(0x28u);
  v30 = *(_DWORD *)(a1[188] + 80LL);
  v27 = 104LL * a2;
  v2 = (_DWORD *)(a1[54] + v27);
  v3 = v2[22];
  v4 = v2;
  if ( v3 <= v30 && *v2 != 1 )
  {
    if ( !under_debugger )
      sub_383060(52647);
LABEL_44:
    BUG();
  }
  v5 = (char *)a1[57];
  v6 = &v5[4 * a1[58]];
  v7 = v5;
  if ( v5 == v6 )
    goto LABEL_40;
  while ( *(_DWORD *)v7 != a2 )
  {
    v7 += 4;
    if ( v6 == v7 )
      goto LABEL_40;
  }
  if ( v6 == v7 )
  {
LABEL_40:
    if ( !under_debugger )
      sub_383060(52648);
    goto LABEL_44;
  }
  LODWORD(v26) = (_DWORD)v38 + 456;
  memmove(v7, v7 + 4, v6 - v7 - 4);
  --v38[58];
  v8 = v4[6];
  BYTE1(v8) &= 0x7Eu;
  v4[6] = v8 | 0x100000;
  v33 = 0;
  LODWORD(v28) = (unsigned int)sub_D21A0((__int64)v38);
  if ( *v4 == 1 )
    v33 = (int)sub_1C3500(v4) % v30;
  v9 = 0;
  v36 = &v40;
  v37 = &v41;
  while ( v3 > 0 )
  {
    v22 = v30;
    if ( v30 <= v3 )
    {
      if ( !v33 )
        goto LABEL_13;
    }
    else
    {
      v22 = round_down_power2((unsigned int)v3);
      if ( !v33 )
        goto LABEL_13;
    }
    v23 = round_down_power2((unsigned int)(v30 - v33));
    if ( v22 > v23 )
      v22 = v23;
    for ( ; v33 % v22; v22 /= 2 )
      ;
    v33 = (v22 + v33) % v30;
LABEL_13:
    sub_32C270(v36, v38[188], (unsigned int)v22);
    LODWORD(v41) = 0;
    copy_argloc(v37, v4);
    if ( v9 && !(unsigned __int8)sub_1C55E0(v37, v38[188], v9, (unsigned int)v4[22], 1) )
    {
      if ( !under_debugger )
        sub_383060(52649);
      goto LABEL_44;
    }
    v10 = (unsigned int)v4[22];
    if ( (int)v10 > v22 && !(unsigned __int8)sub_1C28A0(v37, v38[188], v10, (unsigned int)v22) )
    {
      if ( !under_debugger )
        sub_383060(52650);
      goto LABEL_44;
    }
    *(_OWORD *)n = 0;
    src = nullptr;
    src = (void *)qvector_reserve(&src, 0, 1, 1);
    n[0] = 1;
    *(_BYTE *)src = 0;
    v44[0] = 0;
    copy_argloc(v44, v37);
    v11 = n[0];
    v45 = -2;
    v46 = 1;
    v47 = nullptr;
    v48 = 0;
    if ( n[0] )
    {
      v47 = (void *)qalloc_or_throw(n[0]);
      *((_QWORD *)&v48 + 1) = v11;
      memcpy(v47, src, v11);
      *(_QWORD *)&v48 = v11;
    }
    v49 = 0;
    v51 = 0;
    v50 = 0;
    copy_tinfo_t(&v51, v36);
    v52 = v22;
    v53 = 0;
    v54 = 0;
    if ( src )
    {
      n[0] = 0;
      qfree(src);
    }
    v15 = v38;
    v16 = sub_1F6560(
            (_DWORD)v38,
            (unsigned int)v44,
            0,
            v12,
            v13,
            v14,
            v25,
            v26,
            v27,
            v28,
            v29,
            (_DWORD)v31,
            (unsigned int)&v51,
            v33,
            (unsigned int)v44,
            (_DWORD)v36,
            (_DWORD)v37,
            (_DWORD)v38,
            v39,
            v40,
            v41);
    v38 = v15;
    v17 = v15[5];
    v18 = v16;
    v4 = (_DWORD *)(v15[54] + v27);
    sub_D1D10(v28, nullptr, v17, v16, v29, 0, v9, v22);
    v19 = 4LL * v34;
    *(_DWORD *)(v38[54] + 104LL * v18 + 24) |= 0x100u;
    v20 = v38[58];
    v21 = v38[57];
    if ( v38[59] < (unsigned __int64)(v20 + 1) )
    {
      v21 = qvector_reserve(v26, v21, v20 + 1, 4);
      v19 = 4LL * v34;
      v38[57] = v21;
      v20 = v38[58];
    }
    v9 += v22;
    v3 -= v22;
    v31 = (int *)(v19 + v21);
    memmove(v31 + 1, v31, 4 * v20 - v19);
    *v31 = v18;
    ++v38[58];
    clear_tinfo_t(v32);
    if ( v49 )
    {
      *(_QWORD *)&v50 = 0;
      qfree(v49);
    }
    if ( v47 )
    {
      *(_QWORD *)&v48 = 0;
      qfree(v47);
    }
    cleanup_argloc(v35);
    cleanup_argloc(v37);
    clear_tinfo_t(v36);
  }
  return v55 - __readfsqword(0x28u);
}
