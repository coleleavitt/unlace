unsigned __int64 __fastcall sub_D2380(_QWORD *a1, int a2)
{
  _DWORD *v2; // rax
  int v3; // r13d
  _DWORD *v4; // r15
  char *v5; // rax
  char *v6; // rdx
  char *v7; // rdi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // r14d
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  size_t v15; // r12
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  _QWORD *v19; // r15
  unsigned int v20; // eax
  __int64 v21; // rdx
  unsigned int v22; // r12d
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rsi
  int v26; // ebx
  int v27; // eax
  int v29; // [rsp+0h] [rbp-140h]
  __int64 v30; // [rsp+8h] [rbp-138h]
  __int64 v31; // [rsp+10h] [rbp-130h]
  __int64 v32; // [rsp+18h] [rbp-128h]
  int v33; // [rsp+20h] [rbp-120h]
  int v34; // [rsp+24h] [rbp-11Ch]
  unsigned int *v35; // [rsp+28h] [rbp-118h]
  int v36; // [rsp+38h] [rbp-108h]
  int v37; // [rsp+3Ch] [rbp-104h]
  int *v38; // [rsp+48h] [rbp-F8h]
  __int64 *v39; // [rsp+50h] [rbp-F0h]
  _QWORD *v40; // [rsp+58h] [rbp-E8h]
  int v41; // [rsp+60h] [rbp-E0h]
  int v42; // [rsp+68h] [rbp-D8h] BYREF
  __int64 v43; // [rsp+70h] [rbp-D0h] BYREF
  void *src; // [rsp+80h] [rbp-C0h] BYREF
  size_t n[3]; // [rsp+88h] [rbp-B8h]
  _DWORD v46[4]; // [rsp+A0h] [rbp-A0h] BYREF
  __int64 v47; // [rsp+B0h] [rbp-90h]
  int v48; // [rsp+B8h] [rbp-88h]
  void *v49; // [rsp+C0h] [rbp-80h]
  __int128 v50; // [rsp+C8h] [rbp-78h]
  __int64 v51; // [rsp+D8h] [rbp-68h]
  __int128 v52; // [rsp+E0h] [rbp-60h]
  __int64 v53; // [rsp+F0h] [rbp-50h] BYREF
  int v54; // [rsp+F8h] [rbp-48h]
  int v55; // [rsp+FCh] [rbp-44h]
  __int64 v56; // [rsp+100h] [rbp-40h]
  unsigned __int64 v57; // [rsp+108h] [rbp-38h]

  v40 = a1;
  v33 = a2;
  v57 = __readfsqword(0x28u);
  v34 = *(_DWORD *)(a1[188] + 80LL);
  v31 = 104LL * a2;
  v2 = (_DWORD *)(a1[54] + v31);
  v3 = v2[22];
  v4 = v2;
  if ( v3 <= v34 && *v2 != 1 )
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
  LODWORD(v30) = (_DWORD)v40 + 456;
  memmove(v7, v7 + 4, v6 - v7 - 4);
  --v40[58];
  v8 = v4[6];
  BYTE1(v8) &= 0x7Eu;
  v4[6] = v8 | 0x100000;
  v36 = 0;
  LODWORD(v32) = (unsigned int)sub_D21A0((__int64)v40, (__int64)(v7 + 4), v9, v10);
  if ( *v4 == 1 )
    v36 = (int)sub_1C3500(v4) % v34;
  v11 = 0;
  v38 = &v42;
  v39 = &v43;
  while ( v3 > 0 )
  {
    v26 = v34;
    if ( v34 <= v3 )
    {
      if ( !v36 )
        goto LABEL_13;
    }
    else
    {
      v26 = round_down_power2();
      if ( !v36 )
        goto LABEL_13;
    }
    v27 = round_down_power2();
    if ( v26 > v27 )
      v26 = v27;
    for ( ; v36 % v26; v26 /= 2 )
      ;
    v36 = (v26 + v36) % v34;
LABEL_13:
    sub_32C270(v38, v40[188], (unsigned int)v26);
    LODWORD(v43) = 0;
    copy_argloc();
    if ( v11 && !(unsigned __int8)sub_1C55E0(v39, v40[188], v11, (unsigned int)v4[22], 1) )
    {
      if ( !under_debugger )
        sub_383060(52649);
      goto LABEL_44;
    }
    v12 = (unsigned int)v4[22];
    if ( (int)v12 > v26 && !(unsigned __int8)sub_1C28A0(v39, v40[188], v12, (unsigned int)v26) )
    {
      if ( !under_debugger )
        sub_383060(52650);
      goto LABEL_44;
    }
    *(_OWORD *)n = 0;
    src = nullptr;
    src = (void *)qvector_reserve((__int64)&src, 0, 1, 1);
    n[0] = 1;
    *(_BYTE *)src = 0;
    v46[0] = 0;
    copy_argloc();
    v15 = n[0];
    v47 = -2;
    v48 = 1;
    v49 = nullptr;
    v50 = 0;
    if ( n[0] )
    {
      v49 = (void *)qalloc_or_throw(n[0], (__int64)v39, v13, v14);
      *((_QWORD *)&v50 + 1) = v15;
      memcpy(v49, src, v15);
      *(_QWORD *)&v50 = v15;
    }
    v51 = 0;
    v53 = 0;
    v52 = 0;
    copy_tinfo_t();
    v54 = v26;
    v55 = 0;
    v56 = 0;
    if ( src )
    {
      n[0] = 0;
      qfree((__int64)src);
    }
    v19 = v40;
    v20 = sub_1F6560(
            (_DWORD)v40,
            (unsigned int)v46,
            0,
            v16,
            v17,
            v18,
            v29,
            v30,
            v31,
            v32,
            v33,
            (_DWORD)v35,
            (unsigned int)&v53,
            v36,
            (unsigned int)v46,
            (_DWORD)v38,
            (_DWORD)v39,
            (_DWORD)v40,
            v41,
            v42,
            v43);
    v40 = v19;
    v21 = v19[5];
    v22 = v20;
    v4 = (_DWORD *)(v19[54] + v31);
    sub_D1D10(v32, 0, v21, v20, v33, 0, v11, v26);
    v23 = 4LL * v37;
    *(_DWORD *)(v40[54] + 104LL * (int)v22 + 24) |= 0x100u;
    v24 = v40[58];
    v25 = v40[57];
    if ( v40[59] < (unsigned __int64)(v24 + 1) )
    {
      v25 = qvector_reserve(v30, v25, v24 + 1, 4);
      v23 = 4LL * v37;
      v40[57] = v25;
      v24 = v40[58];
    }
    v11 += v26;
    v3 -= v26;
    v35 = (unsigned int *)(v23 + v25);
    memmove(v35 + 1, v35, 4 * v24 - v23);
    *v35 = v22;
    ++v40[58];
    clear_tinfo_t();
    if ( v51 )
    {
      *(_QWORD *)&v52 = 0;
      qfree(v51);
    }
    if ( v49 )
    {
      *(_QWORD *)&v50 = 0;
      qfree((__int64)v49);
    }
    cleanup_argloc();
    cleanup_argloc();
    clear_tinfo_t();
  }
  return v57 - __readfsqword(0x28u);
}
