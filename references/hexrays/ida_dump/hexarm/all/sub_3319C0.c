__int64 __fastcall sub_3319C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v7; // eax
  __int64 v8; // r9
  unsigned int v9; // ebx
  _QWORD *v10; // rax
  __int64 v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  char v19; // al
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  char *v25; // rax
  char *v26; // rdx
  char v27; // r12
  _BYTE *v28; // r8
  _BYTE *v29; // rax
  _BYTE *v30; // rcx
  void *v31; // rcx
  void *v32; // rdi
  size_t v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // r13
  unsigned __int64 v37; // rax
  __int64 v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rdx
  __m128i v41; // xmm0
  int v42; // eax
  __int64 v43; // rdi
  int dtype_size; // eax
  __int64 ph; // rax
  int v46; // ecx
  int v47; // eax
  __int64 v48; // r12
  __int64 func; // rax
  __int64 regvar; // rax
  int v51; // eax
  __int64 v52; // [rsp+0h] [rbp-288h]
  __int64 v53; // [rsp+0h] [rbp-288h]
  __int64 v54; // [rsp+0h] [rbp-288h]
  size_t n; // [rsp+8h] [rbp-280h]
  size_t na; // [rsp+8h] [rbp-280h]
  size_t nb; // [rsp+8h] [rbp-280h]
  size_t nc; // [rsp+8h] [rbp-280h]
  size_t nf; // [rsp+8h] [rbp-280h]
  __int64 nd; // [rsp+8h] [rbp-280h]
  size_t ne; // [rsp+8h] [rbp-280h]
  void *src; // [rsp+10h] [rbp-278h]
  void *srca; // [rsp+10h] [rbp-278h]
  void *srcb; // [rsp+10h] [rbp-278h]
  void *srcc; // [rsp+10h] [rbp-278h]
  void *srcd; // [rsp+10h] [rbp-278h]
  __int64 v67; // [rsp+18h] [rbp-270h]
  __int64 v68; // [rsp+18h] [rbp-270h]
  __int64 v69; // [rsp+18h] [rbp-270h]
  _BYTE *v70; // [rsp+18h] [rbp-270h]
  unsigned int v71; // [rsp+20h] [rbp-268h] BYREF
  char v72[4]; // [rsp+24h] [rbp-264h] BYREF
  __int64 v73; // [rsp+28h] [rbp-260h] BYREF
  __int64 v74; // [rsp+30h] [rbp-258h] BYREF
  __m128i v75; // [rsp+38h] [rbp-250h] BYREF
  __int128 v76; // [rsp+50h] [rbp-238h] BYREF
  char *v77; // [rsp+60h] [rbp-228h] BYREF
  __int128 v78; // [rsp+68h] [rbp-220h]
  __int64 v79; // [rsp+78h] [rbp-210h]
  __int128 v80; // [rsp+80h] [rbp-208h]
  _OWORD v81[3]; // [rsp+90h] [rbp-1F8h] BYREF
  __int64 v82; // [rsp+C0h] [rbp-1C8h]
  int v83; // [rsp+C8h] [rbp-1C0h]
  __int64 v84; // [rsp+D0h] [rbp-1B8h]
  char v85; // [rsp+D8h] [rbp-1B0h]
  __int128 v86; // [rsp+E0h] [rbp-1A8h] BYREF
  __int64 v87; // [rsp+F0h] [rbp-198h]
  __int64 v88; // [rsp+F8h] [rbp-190h]
  __int64 v89; // [rsp+100h] [rbp-188h]
  _BYTE v90[320]; // [rsp+108h] [rbp-180h] BYREF
  _QWORD v91[8]; // [rsp+248h] [rbp-40h] BYREF

  v91[0] = __readfsqword(0x28u);
  v7 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, __int64))callui)(92, a2, a3, a4, a5, a6);
  if ( v7 == -1 )
    return 0;
  v9 = v7;
  v87 = -1;
  v86 = -1;
  v10 = v90;
  v88 = 0;
  v89 = 0;
  do
  {
    *(_WORD *)v10 = 0;
    v10 += 5;
    *((_WORD *)v10 - 19) = 0;
    *((_WORD *)v10 - 18) = 0;
    *((_DWORD *)v10 - 2) = 0;
    *((_WORD *)v10 - 17) = 0;
    *((_OWORD *)v10 - 2) = 0;
    *(v10 - 2) = 0;
  }
  while ( v91 != v10 );
  callui(11, &v76, v91, 0, 0, v8, v52, n, src, v67);
  v11 = v76;
  if ( !(unsigned int)decode_insn(&v86, v76, v12, v13, v14, v15, 0.0) )
    return 0;
  v19 = v90[40 * v9 + 1];
  if ( v19 != 1 )
  {
    if ( (unsigned __int8)(v19 - 5) <= 2u || !(unsigned __int8)callui(41, &v71, v72, v16, v17, v18, v53, na, srca, v68) )
      return 0;
    nc = callui(42, &v71, v21, v22, v23, v24, v54, nb, srcb, v69);
    v25 = (char *)tag_advance(nc, v71);
    if ( nc < (unsigned __int64)v25 )
    {
      while ( 1 )
      {
        v27 = *v25;
        if ( *v25 <= 31 || v27 == 33 )
        {
          if ( ((v27 - 25) & 0xF7) != 0 )
            return 0;
          goto LABEL_16;
        }
        v26 = v25 - 1;
        if ( v25 - 1 == (char *)nc )
          break;
        --v25;
      }
      v27 = *(v25 - 1);
      if ( ((v27 - 25) & 0xF7) == 0 )
        return 0;
    }
    else
    {
      v27 = *v25;
      if ( ((*v25 - 25) & 0xF7) == 0 )
      {
LABEL_16:
        if ( (char *)nc == v25 )
          return 0;
        v26 = v25;
        if ( *(v25 - 1) != 1 )
          return 0;
        goto LABEL_18;
      }
      v26 = v25;
    }
    if ( v27 != 32 )
      return 0;
LABEL_18:
    v28 = v26 + 1;
    if ( (v26[1] & 0xFD) == 0 )
      return 0;
    v29 = v26 + 1;
    do
      v30 = v29++;
    while ( (*v29 & 0xFD) != 0 );
    if ( v28 == v29 )
      return 0;
    v31 = (void *)(v30 - v26);
    v32 = nullptr;
    v74 = 0;
    v33 = (size_t)v31;
    v75 = 0;
    v34 = (__int64)v31 + 1;
    if ( v31 != (void *)-1LL )
    {
      srcc = v31;
      v70 = v28;
      ne = (size_t)v31 + 1;
      v74 = qvector_reserve(&v74, 0, v34, 1);
      v28 = v70;
      v32 = (void *)v74;
      v33 = (size_t)srcc;
      v34 = ne;
    }
    v75.m128i_i64[0] = v34;
    nf = v33;
    memmove(v32, v28, v33);
    *(_BYTE *)(v74 + nf) = 0;
    if ( v27 == 33 )
    {
      v48 = v74;
      func = get_func(v11);
      regvar = find_regvar(func, v11, v11 + 1, 0, v48);
      if ( regvar )
        v48 = *(_QWORD *)(regvar + 16);
      if ( (unsigned __int8)parse_reg_name(&v76, v48) )
      {
        v51 = v76;
        *(_DWORD *)(a1 + 36) = 1;
        *(_DWORD *)(a1 + 24) = v51;
        *(_DWORD *)(a1 + 32) = DWORD1(v76);
LABEL_35:
        v39 = *(_QWORD *)(a1 + 16);
        v40 = v74;
        v41 = _mm_loadu_si128(&v75);
        v74 = *(_QWORD *)a1;
        v38 = v74;
        *(_QWORD *)a1 = v40;
        v75.m128i_i64[1] = v39;
        *(__m128i *)(a1 + 8) = v41;
        if ( v38 )
        {
          v75.m128i_i64[0] = 0;
          qfree(v38);
        }
        goto LABEL_38;
      }
    }
    else
    {
      v35 = get_func(v11);
      v73 = 0;
      if ( (unsigned __int8)get_func_frame(&v73, v35) )
      {
        v36 = v75.m128i_i64[0];
        v77 = nullptr;
        v79 = 0;
        v82 = 1;
        v83 = -1;
        v84 = 0;
        v85 = 0;
        v76 = 0;
        v78 = 0;
        v80 = 0;
        v81[0] = 0;
        if ( v75.m128i_i64[0] )
        {
          nd = v75.m128i_i64[0] - 1;
          if ( v75.m128i_i64[0] != 1 )
          {
            srcd = (void *)v74;
            v77 = (char *)qvector_reserve(&v77, 0, v75.m128i_i64[0], 1);
            *(_QWORD *)&v78 = v36;
            memmove(v77, srcd, nd);
            v77[v36 - 1] = 0;
          }
        }
        if ( (unsigned int)find_tinfo_udt_member(&v76, v73, 3) != -1 )
        {
          v37 = v76;
          *(_DWORD *)(a1 + 36) = 0;
          *(_QWORD *)(a1 + 24) = v37 >> 3;
          *(_DWORD *)(a1 + 32) = get_dtype_size((unsigned __int8)v90[40 * v9 + 5]);
          clear_tinfo_t(v81);
          if ( v79 )
          {
            *(_QWORD *)&v80 = 0;
            qfree(v79);
          }
          if ( v77 )
          {
            *(_QWORD *)&v78 = 0;
            qfree(v77);
          }
          clear_tinfo_t(&v73);
          goto LABEL_35;
        }
        clear_tinfo_t(v81);
        if ( v79 )
        {
          *(_QWORD *)&v80 = 0;
          qfree(v79);
        }
        if ( v77 )
        {
          *(_QWORD *)&v78 = 0;
          qfree(v77);
        }
      }
      clear_tinfo_t(&v73);
    }
    if ( v74 )
    {
      v75.m128i_i64[0] = 0;
      qfree(v74);
    }
    return 0;
  }
  v42 = *(unsigned __int16 *)&v90[40 * v9 + 6];
  *(_DWORD *)(a1 + 36) = 1;
  v43 = (unsigned __int8)v90[40 * v9 + 5];
  *(_DWORD *)(a1 + 24) = v42;
  dtype_size = get_dtype_size(v43);
  *(_DWORD *)(a1 + 32) = dtype_size;
  v38 = 51;
  sub_CF9B0(0x33u, a1, *(unsigned __int16 *)&v90[40 * v9 + 6], dtype_size, 0xFFFFFFFFLL);
LABEL_38:
  *(_DWORD *)(a1 + 36) &= 0xFFFFFFF9;
  ph = get_ph(v38);
  v46 = *(_DWORD *)(ph + 104);
  if ( (unsigned __int16)v88 >= v46 && (unsigned __int16)v88 < *(int *)(ph + 108) && v9 <= 7 )
  {
    v47 = *(_DWORD *)(*(_QWORD *)(ph + 112) + 16LL * ((unsigned __int16)v88 - v46) + 8);
    if ( (dword_429E60[v9] & v47) != 0 )
      *(_DWORD *)(a1 + 36) |= 4u;
    if ( (dword_429E40[v9] & v47) != 0 )
      *(_DWORD *)(a1 + 36) |= 2u;
  }
  return 1;
}
