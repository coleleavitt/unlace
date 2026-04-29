__int64 __fastcall sub_1B9300(__int128 a1)
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
  char i; // al
  unsigned __int64 v12; // rdi
  __int64 flags; // rax
  __int64 v14; // rdi
  __int64 v15; // rax
  char v16; // r13
  _QWORD *v17; // r9
  _DWORD *v18; // rdx
  _DWORD *v19; // rax
  __int64 *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rsi
  void *v23; // rax
  size_t v24; // r9
  void *v25; // r13
  unsigned __int64 v26; // r10
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // r13d
  __int64 v32; // rsi
  __int128 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rdx
  int v38; // eax
  __int64 v39; // rbp
  _QWORD *v40; // r13
  __int64 v41; // rcx
  __int64 v42; // rbp
  __int64 v43; // rbx
  int v44; // r12d
  __int64 *v45; // rax
  __int64 v46; // rdi
  __int64 v47; // r14
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  int v51; // r9d
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  int v55; // r9d
  int v56; // eax
  int v57; // [rsp+10h] [rbp-D8h]
  unsigned int v58; // [rsp+10h] [rbp-D8h]
  unsigned int v59; // [rsp+10h] [rbp-D8h]
  char v60; // [rsp+17h] [rbp-D1h]
  size_t n; // [rsp+18h] [rbp-D0h]
  __int64 na; // [rsp+18h] [rbp-D0h]
  size_t v63; // [rsp+20h] [rbp-C8h]
  unsigned __int64 v64; // [rsp+20h] [rbp-C8h]
  unsigned __int64 v65; // [rsp+28h] [rbp-C0h]
  size_t v66; // [rsp+28h] [rbp-C0h]
  __int64 v67; // [rsp+38h] [rbp-B0h] BYREF
  unsigned __int8 *v68; // [rsp+40h] [rbp-A8h] BYREF
  unsigned __int64 v69; // [rsp+48h] [rbp-A0h] BYREF
  void *src; // [rsp+50h] [rbp-98h] BYREF
  __int128 v71; // [rsp+58h] [rbp-90h]
  __int64 v72; // [rsp+70h] [rbp-78h] BYREF
  __int128 v73; // [rsp+78h] [rbp-70h]
  __int64 v74; // [rsp+88h] [rbp-60h] BYREF
  __int128 v75; // [rsp+90h] [rbp-58h]
  unsigned __int64 v76; // [rsp+A8h] [rbp-40h]

  v1 = *((_QWORD *)&a1 + 1) + 64LL;
  v2 = a1;
  v76 = __readfsqword(0x28u);
  v3 = *((_QWORD *)&a1 + 1);
  v67 = *((_QWORD *)&a1 + 1);
  *((_QWORD *)&a1 + 1) += 64LL;
  v4 = sub_128E80(a1, (__int64)&v67, 0);
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
  v8 = (_DWORD *)sub_128E80(a1, (__int64)&v67, 0);
  if ( !v8 )
    return 0;
  if ( *v8 != 14 )
    return 0;
  if ( !sub_11C2E0((__int64)v8, &v68) )
    return 0;
  if ( *(_BYTE *)v7 != 10 )
    return 0;
  if ( *(_DWORD *)(v7 + 4) > *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL) + 84LL) )
    return 0;
  v9 = *(_QWORD *)(v7 + 8);
  if ( *(_BYTE *)v9 != 6 )
    return 0;
  v57 = 0;
  v74 = 0;
  v73 = 0;
  v75 = 0;
  v10 = *(_QWORD *)(v9 + 8);
  v72 = 0;
  v60 = 0;
  for ( i = get_data_value(&v69, v10, *(int *)(v7 + 4)); ; i = get_data_value(&v69, v10, *(int *)(v7 + 4)) )
  {
    if ( !i || (v14 = *(_QWORD *)(v2 + 64), v15 = sub_3312A0(v14, v69), (v16 = sub_332C60(v14 + 8, v15)) == 0) )
    {
LABEL_43:
      if ( v60 )
      {
        result = 4294967279LL;
        goto LABEL_53;
      }
      if ( !(_QWORD)v75
        || (*((_QWORD *)&v33 + 1) = v67,
            *(_QWORD *)&v33 = v2,
            !(unsigned __int8)sub_155780(v33, (__int64)v68, v67, v3, 0)) )
      {
        result = 0;
        goto LABEL_53;
      }
      sub_123480((__int64)&src, v68);
      sub_11C450((char *)(v3 + 32), (char *)&src);
      sub_11C7E0(v1);
      sub_11C7E0(v3 + 48);
      v34 = j__qalloc_or_throw(48);
      *(_QWORD *)v34 = 0;
      v35 = v72;
      *(_OWORD *)(v34 + 8) = 0;
      *(_QWORD *)v34 = v35;
      v36 = v73;
      *(_QWORD *)(v34 + 24) = 0;
      *(_QWORD *)(v34 + 8) = v36;
      v37 = *((_QWORD *)&v73 + 1);
      *(_OWORD *)(v34 + 32) = 0;
      *(_QWORD *)(v34 + 16) = v37;
      v72 = 0;
      *(_QWORD *)(v34 + 24) = v74;
      v74 = 0;
      *(_QWORD *)(v34 + 32) = v75;
      v73 = 0;
      *(_QWORD *)(v34 + 40) = *((_QWORD *)&v75 + 1);
      *(_DWORD *)v3 = 53;
      *(_BYTE *)(v3 + 48) = 12;
      *(_QWORD *)(v3 + 56) = v34;
      v75 = 0;
      sub_167250(v2, v3, 6);
      v38 = *(_DWORD *)(v2 + 24);
      BYTE1(v38) &= ~2u;
      LOBYTE(v38) = v38 | 0x80;
      *(_DWORD *)(v2 + 24) = v38;
      if ( *(_DWORD *)v3 )
      {
        v39 = *(_QWORD *)(*(_QWORD *)(v2 + 64) + 520LL);
        if ( v39 )
        {
          while ( 1 )
          {
            if ( v2 != v39 )
            {
              v40 = *(_QWORD **)(v39 + 56);
              if ( v40 )
              {
                if ( sub_1255D0(
                       *(unsigned __int8 **)(v39 + 56),
                       *(_QWORD *)(*(_QWORD *)(v2 + 64) + 1504LL),
                       (unsigned int *)v3,
                       0) )
                {
                  break;
                }
              }
            }
            v39 = *(_QWORD *)(v39 + 8);
            if ( !v39 )
              goto LABEL_52;
          }
          if ( v40 == *(_QWORD **)(v39 + 48) )
            goto LABEL_68;
          if ( !sub_11FBE0(v40, *(_QWORD *)(*(_QWORD *)(v2 + 64) + 1504LL)) )
          {
            v47 = sub_68A00(*(_QWORD *)(v2 + 64), *(_DWORD *)(v39 + 72) + 1);
            sub_A2E00(v39, (__int64)v40);
            sub_A2BA0(v47, v40, 0);
            *(_DWORD *)(v47 + 24) |= 2u;
            sub_B5220(v39, (__int64)v40, v48, v49, v50, v51);
            sub_B5220(v47, (__int64)v40, v52, v53, v54, v55);
            v39 = v47;
LABEL_68:
            sub_11CFE0(v3);
            *(_DWORD *)v3 = 55;
            v56 = *(_DWORD *)(v39 + 72);
            *(_BYTE *)(v3 + 32) = 7;
            *(_DWORD *)(v3 + 40) = v56;
          }
        }
      }
LABEL_52:
      sub_A1F60(v2, (__int64)"RESOLVE_TABLE_JUMP");
      sub_11C7E0((__int64)&src);
      result = 1;
      goto LABEL_53;
    }
    v17 = sub_66AB0(*(_QWORD *)(v2 + 64), v69);
    if ( !v17 )
      break;
    v18 = (_DWORD *)(v74 + 4 * v75);
    if ( (_DWORD *)v74 == v18 )
      goto LABEL_35;
    v19 = (_DWORD *)v74;
    while ( *((_DWORD *)v17 + 18) != *v19 )
    {
      if ( v18 == ++v19 )
        goto LABEL_35;
    }
    if ( v18 == v19 )
    {
LABEL_35:
      n = (size_t)v17;
      src = nullptr;
      v71 = 0;
      v23 = (void *)qvector_reserve(&src, 0, 1, 8);
      v24 = n;
      src = v23;
      *((_QWORD *)v23 + v71) = v57;
      v25 = nullptr;
      v26 = v71 + 1;
      *(_QWORD *)&v71 = v71 + 1;
      if ( (_QWORD)v71 )
      {
        v66 = n;
        v64 = v26;
        na = 8 * v26;
        v25 = (void *)qalloc_or_throw(8 * v26);
        memcpy(v25, src, na);
        v24 = v66;
        v26 = v64;
      }
      v27 = v73;
      v28 = v72;
      if ( *((_QWORD *)&v73 + 1) < (unsigned __int64)(v73 + 1) )
      {
        v65 = v26;
        v63 = v24;
        v72 = qvector_reserve(&v72, v72, v73 + 1, 24);
        v28 = v72;
        v26 = v65;
        v27 = v73;
        v24 = v63;
      }
      v29 = v28 + 24 * v27;
      *(_QWORD *)v29 = v25;
      *(__m128i *)(v29 + 8) = _mm_unpacklo_epi64((__m128i)v26, (__m128i)v26);
      v30 = v75;
      v31 = *(_DWORD *)(v24 + 72);
      *(_QWORD *)&v73 = v73 + 1;
      v32 = v74;
      if ( *((_QWORD *)&v75 + 1) < (unsigned __int64)(v75 + 1) )
      {
        v74 = qvector_reserve(&v74, v74, v75 + 1, 4);
        v32 = v74;
        v30 = v75;
      }
      *(_DWORD *)(v32 + 4 * v30) = v31;
      *(_QWORD *)&v75 = v75 + 1;
      if ( src )
      {
        *(_QWORD *)&v71 = 0;
        qfree(src);
      }
    }
    else
    {
      src = (void *)v57;
      v20 = (__int64 *)(v72 + 24LL * (int)(((__int64)v19 - v74) >> 2));
      v21 = v20[1];
      v22 = *v20;
      if ( v20[2] < (unsigned __int64)(v21 + 1) )
      {
        v22 = qvector_reserve(v20, v22, v21 + 1, 8);
        *v20 = v22;
        v21 = v20[1];
      }
      *(_QWORD *)(v22 + 8 * v21) = v57;
      ++v20[1];
    }
LABEL_21:
    v10 += *(int *)(v7 + 4);
    flags = get_flags_ex(v10, 4);
    if ( (flags & 0xD000) != 0 || (~BYTE1(flags) & 6) == 0 )
      goto LABEL_43;
    ++v57;
  }
  v12 = v69;
  if ( *(char *)(*(_QWORD *)(*(_QWORD *)(v2 + 64) + 1504LL) + 49LL) < 0 )
  {
    v12 = v69 & 0xFFFFFFFFFFFFFFFELL;
    v69 &= ~1uLL;
  }
  if ( (~(unsigned __int16)get_flags_ex(v12, 4) & 0x600) == 0 )
  {
    add_cref(*(_QWORD *)(v3 + 24), v69, 51);
    v60 = v16;
    goto LABEL_21;
  }
  *(_QWORD *)(*(_QWORD *)(v2 + 64) + 488LL) = v69;
  result = 4294967292LL;
LABEL_53:
  if ( v74 )
  {
    v58 = result;
    *(_QWORD *)&v75 = 0;
    qfree(v74);
    result = v58;
  }
  v41 = v72;
  if ( v72 )
  {
    v42 = v73;
    v43 = 0;
    v44 = result;
    if ( (_QWORD)v73 )
    {
      do
      {
        v45 = (__int64 *)(v41 + 24 * v43);
        v46 = *v45;
        if ( *v45 )
        {
          v45[1] = 0;
          qfree(v46);
          v41 = v72;
        }
        ++v43;
      }
      while ( v42 != v43 );
      LODWORD(result) = v44;
    }
    v59 = result;
    *(_QWORD *)&v73 = 0;
    qfree(v41);
    return v59;
  }
  return result;
}
