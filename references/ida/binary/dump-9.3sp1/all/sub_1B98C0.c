__int64 __fastcall sub_1B98C0(__int128 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rbx
  __int64 v3; // r15
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // r12
  _DWORD *v8; // rax
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 flags; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  char v14; // r13
  _QWORD *v15; // r9
  _DWORD *v16; // rdx
  _DWORD *v17; // rax
  __int64 *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rsi
  void *v21; // rax
  __int64 v22; // rcx
  size_t v23; // r9
  void *v24; // r13
  unsigned __int64 v25; // r10
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // r13d
  __int64 v31; // rsi
  __int128 v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rdx
  int v41; // eax
  __int64 v42; // rbp
  _QWORD *v43; // r13
  __int64 v44; // rcx
  __int64 v45; // rbp
  __int64 v46; // rbx
  int v47; // r12d
  __int64 *v48; // rax
  __int64 v49; // rdi
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r14
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  int v56; // r9d
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  int v60; // r9d
  int v61; // eax
  int v62; // [rsp+10h] [rbp-D8h]
  unsigned int v63; // [rsp+10h] [rbp-D8h]
  unsigned int v64; // [rsp+10h] [rbp-D8h]
  char v65; // [rsp+17h] [rbp-D1h]
  size_t n; // [rsp+18h] [rbp-D0h]
  __int64 na; // [rsp+18h] [rbp-D0h]
  size_t v68; // [rsp+20h] [rbp-C8h]
  unsigned __int64 v69; // [rsp+20h] [rbp-C8h]
  unsigned __int64 v70; // [rsp+28h] [rbp-C0h]
  size_t v71; // [rsp+28h] [rbp-C0h]
  __int64 v72; // [rsp+38h] [rbp-B0h] BYREF
  unsigned __int8 *v73; // [rsp+40h] [rbp-A8h] BYREF
  unsigned __int64 v74; // [rsp+48h] [rbp-A0h]
  void *src; // [rsp+50h] [rbp-98h] BYREF
  __int128 v76; // [rsp+58h] [rbp-90h]
  __int64 v77; // [rsp+70h] [rbp-78h] BYREF
  __int128 v78; // [rsp+78h] [rbp-70h]
  _DWORD *v79; // [rsp+88h] [rbp-60h] BYREF
  __int128 v80; // [rsp+90h] [rbp-58h]
  unsigned __int64 v81; // [rsp+A8h] [rbp-40h]

  v1 = *((_QWORD *)&a1 + 1) + 64LL;
  v2 = a1;
  v81 = __readfsqword(0x28u);
  v3 = *((_QWORD *)&a1 + 1);
  v72 = *((_QWORD *)&a1 + 1);
  *((_QWORD *)&a1 + 1) += 64LL;
  v4 = sub_129440(a1, (__int64)&v72, 0);
  if ( !v4 )
    return 0;
  if ( *(_DWORD *)v4 != 2 )
    return 0;
  if ( *(_BYTE *)(v4 + 48) != 4 )
    return 0;
  v6 = *(_QWORD *)(v4 + 56);
  if ( *(_DWORD *)v6 != 12 )
    return 0;
  v7 = v6 + 32;
  *((_QWORD *)&a1 + 1) = v6 + 48;
  if ( *(_BYTE *)(v6 + 32) != 10 )
  {
    if ( *(_BYTE *)(v6 + 48) != 10 )
      return 0;
    *((_QWORD *)&a1 + 1) = v6 + 32;
    v7 = v6 + 48;
  }
  v8 = (_DWORD *)sub_129440(a1, (__int64)&v72, 0);
  if ( !v8 )
    return 0;
  if ( *v8 != 14 )
    return 0;
  if ( !sub_11C8A0((__int64)v8, &v73) )
    return 0;
  if ( *(_BYTE *)v7 != 10 )
    return 0;
  if ( *(_DWORD *)(v7 + 4) > *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL) + 84LL) )
    return 0;
  v9 = *(_QWORD *)(v7 + 8);
  if ( *(_BYTE *)v9 != 6 )
    return 0;
  v62 = 0;
  v79 = nullptr;
  v78 = 0;
  v80 = 0;
  v10 = *(_QWORD *)(v9 + 8);
  v77 = 0;
  v65 = 0;
  while ( 1 )
  {
    if ( !(unsigned __int8)get_data_value()
      || (v12 = *(_QWORD *)(v2 + 64), v13 = sub_330F80(v12), (v14 = sub_332920(v12 + 8, v13)) == 0) )
    {
LABEL_43:
      if ( v65 )
      {
        result = 4294967279LL;
        goto LABEL_53;
      }
      if ( !(_QWORD)v80
        || (*((_QWORD *)&v32 + 1) = v72,
            *(_QWORD *)&v32 = v2,
            !(unsigned __int8)sub_155D40(v32, (__int64)v73, v72, v3, 0)) )
      {
        result = 0;
        goto LABEL_53;
      }
      sub_123A40((__int64)&src, v73, v33, v34);
      sub_11CA10((char *)(v3 + 32), (char *)&src);
      sub_11CDA0(v1);
      sub_11CDA0(v3 + 48);
      v37 = j__qalloc_or_throw(48, (__int64)&src, v35, v36);
      *(_QWORD *)v37 = 0;
      v38 = v77;
      *(_OWORD *)(v37 + 8) = 0;
      *(_QWORD *)v37 = v38;
      v39 = v78;
      *(_QWORD *)(v37 + 24) = 0;
      *(_QWORD *)(v37 + 8) = v39;
      v40 = *((_QWORD *)&v78 + 1);
      *(_OWORD *)(v37 + 32) = 0;
      *(_QWORD *)(v37 + 16) = v40;
      v77 = 0;
      *(_QWORD *)(v37 + 24) = v79;
      v79 = nullptr;
      *(_QWORD *)(v37 + 32) = v80;
      v78 = 0;
      *(_QWORD *)(v37 + 40) = *((_QWORD *)&v80 + 1);
      *(_DWORD *)v3 = 53;
      *(_BYTE *)(v3 + 48) = 12;
      *(_QWORD *)(v3 + 56) = v37;
      v80 = 0;
      sub_167810(v2, v3, 6);
      v41 = *(_DWORD *)(v2 + 24);
      BYTE1(v41) &= ~2u;
      LOBYTE(v41) = v41 | 0x80;
      *(_DWORD *)(v2 + 24) = v41;
      if ( *(_DWORD *)v3 )
      {
        v42 = *(_QWORD *)(*(_QWORD *)(v2 + 64) + 520LL);
        if ( v42 )
        {
          while ( 1 )
          {
            if ( v2 != v42 )
            {
              v43 = *(_QWORD **)(v42 + 56);
              if ( v43 )
              {
                if ( sub_125B90(
                       *(unsigned __int8 **)(v42 + 56),
                       *(_QWORD *)(*(_QWORD *)(v2 + 64) + 1504LL),
                       (unsigned int *)v3,
                       0) )
                {
                  break;
                }
              }
            }
            v42 = *(_QWORD *)(v42 + 8);
            if ( !v42 )
              goto LABEL_52;
          }
          if ( v43 == *(_QWORD **)(v42 + 48) )
            goto LABEL_68;
          if ( !sub_1201A0(v43, *(_QWORD *)(*(_QWORD *)(v2 + 64) + 1504LL)) )
          {
            v52 = sub_68FC0(*(_QWORD *)(v2 + 64), *(_DWORD *)(v42 + 72) + 1, v50, v51);
            sub_A33C0(v42, (__int64)v43);
            sub_A3160(v52, v43, 0);
            *(_DWORD *)(v52 + 24) |= 2u;
            sub_B57E0(v42, (__int64)v43, v53, v54, v55, v56);
            sub_B57E0(v52, (__int64)v43, v57, v58, v59, v60);
            v42 = v52;
LABEL_68:
            sub_11D5A0(v3);
            *(_DWORD *)v3 = 55;
            v61 = *(_DWORD *)(v42 + 72);
            *(_BYTE *)(v3 + 32) = 7;
            *(_DWORD *)(v3 + 40) = v61;
          }
        }
      }
LABEL_52:
      sub_A2520(v2, (__int64)"RESOLVE_TABLE_JUMP");
      sub_11CDA0((__int64)&src);
      result = 1;
      goto LABEL_53;
    }
    v15 = sub_670B0(*(_QWORD *)(v2 + 64), v74);
    if ( !v15 )
      break;
    v16 = &v79[v80];
    if ( v79 == v16 )
      goto LABEL_35;
    v17 = v79;
    while ( *((_DWORD *)v15 + 18) != *v17 )
    {
      if ( v16 == ++v17 )
        goto LABEL_35;
    }
    if ( v16 == v17 )
    {
LABEL_35:
      n = (size_t)v15;
      src = nullptr;
      v76 = 0;
      v21 = (void *)qvector_reserve((__int64)&src, 0, 1, 8);
      v23 = n;
      src = v21;
      *((_QWORD *)v21 + v76) = v62;
      v24 = nullptr;
      v25 = v76 + 1;
      *(_QWORD *)&v76 = v76 + 1;
      if ( (_QWORD)v76 )
      {
        v71 = n;
        v69 = v25;
        na = 8 * v25;
        v24 = (void *)qalloc_or_throw(8 * v25, 0, 8 * v25, v22);
        memcpy(v24, src, na);
        v23 = v71;
        v25 = v69;
      }
      v26 = v78;
      v27 = v77;
      if ( *((_QWORD *)&v78 + 1) < (unsigned __int64)(v78 + 1) )
      {
        v70 = v25;
        v68 = v23;
        v77 = qvector_reserve((__int64)&v77, v77, v78 + 1, 24);
        v27 = v77;
        v25 = v70;
        v26 = v78;
        v23 = v68;
      }
      v28 = v27 + 24 * v26;
      *(_QWORD *)v28 = v24;
      *(__m128i *)(v28 + 8) = _mm_unpacklo_epi64((__m128i)v25, (__m128i)v25);
      v29 = v80;
      v30 = *(_DWORD *)(v23 + 72);
      *(_QWORD *)&v78 = v78 + 1;
      v31 = (__int64)v79;
      if ( *((_QWORD *)&v80 + 1) < (unsigned __int64)(v80 + 1) )
      {
        v79 = (_DWORD *)qvector_reserve((__int64)&v79, (__int64)v79, v80 + 1, 4);
        v31 = (__int64)v79;
        v29 = v80;
      }
      *(_DWORD *)(v31 + 4 * v29) = v30;
      *(_QWORD *)&v80 = v80 + 1;
      if ( src )
      {
        *(_QWORD *)&v76 = 0;
        qfree((__int64)src);
      }
    }
    else
    {
      src = (void *)v62;
      v18 = (__int64 *)(v77 + 24LL * (int)(v17 - v79));
      v19 = v18[1];
      v20 = *v18;
      if ( v18[2] < (unsigned __int64)(v19 + 1) )
      {
        v20 = qvector_reserve((__int64)v18, v20, v19 + 1, 8);
        *v18 = v20;
        v19 = v18[1];
      }
      *(_QWORD *)(v20 + 8 * v19) = v62;
      ++v18[1];
    }
LABEL_21:
    v10 += *(int *)(v7 + 4);
    flags = get_flags_ex();
    if ( (flags & 0xD000) != 0 || (~BYTE1(flags) & 6) == 0 )
      goto LABEL_43;
    ++v62;
  }
  if ( *(char *)(*(_QWORD *)(*(_QWORD *)(v2 + 64) + 1504LL) + 49LL) < 0 )
    v74 &= ~1uLL;
  if ( (~((unsigned __int16)get_flags_ex() >> 8) & 6) == 0 )
  {
    add_cref();
    v65 = v14;
    goto LABEL_21;
  }
  *(_QWORD *)(*(_QWORD *)(v2 + 64) + 488LL) = v74;
  result = 4294967292LL;
LABEL_53:
  if ( v79 )
  {
    v63 = result;
    *(_QWORD *)&v80 = 0;
    qfree((__int64)v79);
    result = v63;
  }
  v44 = v77;
  if ( v77 )
  {
    v45 = v78;
    v46 = 0;
    v47 = result;
    if ( (_QWORD)v78 )
    {
      do
      {
        v48 = (__int64 *)(v44 + 24 * v46);
        v49 = *v48;
        if ( *v48 )
        {
          v48[1] = 0;
          qfree(v49);
          v44 = v77;
        }
        ++v46;
      }
      while ( v45 != v46 );
      LODWORD(result) = v47;
    }
    v64 = result;
    *(_QWORD *)&v78 = 0;
    qfree(v44);
    return v64;
  }
  return result;
}
