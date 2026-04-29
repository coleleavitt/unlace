__int64 __fastcall sub_40F2C0(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  _QWORD *v4; // rdx
  _QWORD *m128i_i64; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // r15d
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rbp
  unsigned __int64 v16; // r14
  unsigned __int64 i; // rax
  unsigned __int64 v18; // r12
  _QWORD *v19; // rdi
  unsigned __int64 v20; // rax
  __m128i *v21; // r15
  __int64 v22; // rbp
  __m128i *v23; // r14
  unsigned __int64 v24; // rdx
  __m128i *v25; // rbp
  unsigned __int64 v26; // rdx
  __m128i *j; // rax
  __int64 v28; // rdx
  __int64 v29; // rbp
  unsigned __int64 v30; // r12
  void *v31; // r13
  __int64 v32; // rdi
  __m128i v33; // xmm0
  __int8 v35; // al
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdx
  int v39; // r15d
  __int64 v40; // r12
  __int64 v41; // rdi
  __int64 v42; // r14
  __int64 v43; // rbp
  __int64 v44; // rax
  __int64 v45; // rax
  _QWORD *v46; // rbp
  __int64 v47; // rax
  __int64 v48; // rdi
  bool v49; // zf
  __int64 v50; // rsi
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r12
  __int64 v54; // rax
  void *v55; // rax
  __int64 v56; // rdi
  __m128i v57; // [rsp+0h] [rbp-138h] BYREF
  int v58; // [rsp+14h] [rbp-124h]
  __int64 *v59; // [rsp+18h] [rbp-120h]
  __int64 v60; // [rsp+20h] [rbp-118h] BYREF
  __int128 v61; // [rsp+28h] [rbp-110h]
  __int64 v62; // [rsp+38h] [rbp-100h]
  __int128 v63; // [rsp+40h] [rbp-F8h]
  __int64 v64; // [rsp+50h] [rbp-E8h]
  __int128 v65; // [rsp+58h] [rbp-E0h]
  __int64 v66; // [rsp+68h] [rbp-D0h]
  __int128 v67; // [rsp+70h] [rbp-C8h]
  __int64 v68; // [rsp+80h] [rbp-B8h]
  __int128 v69; // [rsp+88h] [rbp-B0h]
  __int64 v70; // [rsp+98h] [rbp-A0h]
  __int64 v71; // [rsp+A0h] [rbp-98h]
  __int128 v72; // [rsp+A8h] [rbp-90h]
  __int128 v73; // [rsp+B8h] [rbp-80h]
  int v74; // [rsp+C8h] [rbp-70h]
  __int64 v75; // [rsp+D0h] [rbp-68h]
  __int64 v76; // [rsp+D8h] [rbp-60h]
  __int64 v77; // [rsp+E0h] [rbp-58h]
  __int64 v78; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v79; // [rsp+F8h] [rbp-40h]

  v79 = __readfsqword(0x28u);
  v61 = 0;
  v63 = 0;
  v65 = 0;
  v67 = 0;
  v69 = 0;
  v72 = 0;
  v60 = 0;
  v2 = a1[1];
  v62 = 0;
  v64 = 0;
  v3 = *(_QWORD *)(v2 + 920);
  v66 = 0;
  v68 = 0;
  v59 = (__int64 *)(v3 + 104);
  v70 = v3 + 104;
  v71 = 0;
  v73 = -1;
  v4 = (_QWORD *)a1[106];
  m128i_i64 = (_QWORD *)a1[105];
  v74 = -1;
  v75 = 0;
  v76 = v2;
  v77 = 0;
  v78 = 0;
  sub_40E340((__int64)&v60, (__int64)m128i_i64, v4);
  v57.m128i_i8[0] = sub_3F4B50((__int64)&v60);
  if ( !v57.m128i_i8[0] )
  {
    v6 = a1[1];
    v7 = *(_QWORD *)(v6 + 8);
    v8 = *(_QWORD *)(v6 + 24);
    v9 = *(_QWORD *)(v3 + 112);
    if ( v7 )
    {
      if ( *(_DWORD *)(v7 + 128) + (int)v8 + 1 <= 1 )
      {
LABEL_4:
        if ( v9 )
        {
          v58 = 0;
          v10 = 0;
          v11 = 0;
          do
          {
            v15 = 16 * v11;
            m128i_i64 = (_QWORD *)&byte_4;
            v16 = *(_QWORD *)(*(_QWORD *)(v3 + 104) + v15);
            if ( (get_flags_ex() & 0x10000) == 0 )
            {
              for ( i = get_first_fcref_to(); ; i = get_next_fcref_to() )
              {
                v18 = i;
                if ( i >= v16 )
                  break;
                v19 = (_QWORD *)a1[1];
                v57.m128i_i64[0] = (__int64)(v19 + 1);
                v20 = sub_330F80(v19, i);
                m128i_i64 = (_QWORD *)v18;
                if ( (unsigned __int8)sub_332920((__int64)(v19 + 1), v20) )
                {
                  *(_QWORD *)(*(_QWORD *)(v3 + 104) + v15 + 8) = (int)sub_3E9AE0(v59, v18);
                  v12 = 0;
                  goto LABEL_7;
                }
              }
            }
            v12 = v58;
LABEL_7:
            v13 = *(_QWORD *)(v3 + 104) + v15;
            ++v10;
            v14 = *(_QWORD *)(v13 + 8) + v12;
            *(_QWORD *)(v13 + 8) = v14;
            v11 = v10;
            v58 = v14;
          }
          while ( (unsigned __int64)v10 < *(_QWORD *)(v3 + 112) );
        }
        v28 = (unsigned int)v73;
        *(_DWORD *)(a1[100] + 984LL) = v73;
        goto LABEL_25;
      }
    }
    else if ( (int)v8 <= 1 )
    {
      goto LABEL_4;
    }
    v21 = *(__m128i **)(v3 + 104);
    v22 = 16 * v9;
    v23 = &v21[v9];
    if ( v23 == v21 )
      goto LABEL_4;
LABEL_16:
    if ( v22 >> 4 )
    {
      _BitScanReverse64(&v24, v22 >> 4);
      sub_3EBFD0(v21, (unsigned __int64 *)v23, 2LL * (int)v24);
      if ( v22 > 256 )
      {
        v25 = v21 + 16;
        m128i_i64 = v21[16].m128i_i64;
        sub_3EB9B0(v21, v21 + 16);
        do
        {
          v26 = v25->m128i_i64[0];
          v7 = v25->m128i_i64[1];
          j = v25;
          if ( v25->m128i_i64[0] < (unsigned __int64)v25[-1].m128i_i64[0] )
          {
            for ( j = v25 - 1; ; --j )
            {
              m128i_i64 = j[-1].m128i_i64;
              j[1] = _mm_loadu_si128(j);
              if ( v26 >= j[-1].m128i_i64[0] )
                break;
            }
          }
          ++v25;
          j->m128i_i64[0] = v26;
          j->m128i_i64[1] = v7;
        }
        while ( v25 != v23 );
        goto LABEL_80;
      }
    }
    else
    {
      sub_3EBFD0(v21, (unsigned __int64 *)v23, -2);
    }
    m128i_i64 = v23->m128i_i64;
    sub_3EB9B0(v21, v23);
LABEL_80:
    v9 = *(_QWORD *)(v3 + 112);
    goto LABEL_53;
  }
  m128i_i64 = (_QWORD *)a1[106];
  v35 = sub_3F4CB0((__int64)&v60, m128i_i64);
  v36 = a1[1];
  v57.m128i_i8[0] = v35;
  v37 = *(_QWORD *)(v36 + 24);
  v38 = *(_QWORD *)(v36 + 8);
  v7 = (unsigned int)v37;
  if ( v38 )
    v7 = (unsigned int)(*(_DWORD *)(v38 + 128) + v37 + 1);
  v9 = *(_QWORD *)(v3 + 112);
  if ( (int)v7 > 1 )
  {
    v21 = *(__m128i **)(v3 + 104);
    v22 = 16 * v9;
    v23 = &v21[v9];
    if ( v23 != v21 )
      goto LABEL_16;
  }
LABEL_53:
  if ( !v57.m128i_i8[0] )
    goto LABEL_4;
  v39 = v9 - 1;
  if ( (int)v9 - 1 >= 0 )
  {
    LOBYTE(v58) = v57.m128i_i8[0];
    while ( 1 )
    {
      v40 = v39;
      v41 = *(_QWORD *)(v3 + 104);
      v42 = v39;
      v43 = 16LL * v39;
      v44 = v41 + 16LL * (v39 - 1) - v43;
      while ( 1 )
      {
        if ( !v39 )
        {
          v43 = 0;
          v45 = 16;
          v39 = -1;
          v42 = 0;
          goto LABEL_61;
        }
        --v39;
        if ( *(_QWORD *)(v41 + v43 + 8) != *(_QWORD *)(v44 + v43 + 8) )
          break;
        v43 -= 16;
        --v42;
      }
      v45 = 16 * (v42 + 1);
LABEL_61:
      m128i_i64 = (_QWORD *)(v41 + 16 * (v40 + 1));
      memmove((void *)(v45 + v41), m128i_i64, 16 * (v9 - (v40 + 1)));
      v46 = (_QWORD *)(*(_QWORD *)(v3 + 104) + v43);
      *(_QWORD *)(v3 + 112) -= (16 * (v40 - v42)) >> 4;
      if ( (__int64)v46[1] > 8 )
      {
        v47 = a1[1];
        if ( *(_QWORD *)(v47 + 488) == -1 )
          *(_QWORD *)(v47 + 488) = *v46;
        LOBYTE(v58) = 0;
      }
      if ( v39 == -1 )
        break;
      v9 = *(_QWORD *)(v3 + 112);
    }
    v48 = *(_QWORD *)(a1[100] + 192LL);
    if ( !v48 )
    {
      if ( (_BYTE)v58 )
        goto LABEL_32;
      goto LABEL_73;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 8LL))(v48);
    v49 = (_BYTE)v58 == 0;
    *(_QWORD *)(a1[100] + 192LL) = 0;
    if ( !v49 )
      goto LABEL_32;
LABEL_25:
    v29 = *(_QWORD *)(a1[100] + 192LL);
    if ( v29 )
    {
      v30 = *(_QWORD *)(v3 + 112);
      v31 = nullptr;
      if ( v30 )
      {
        v31 = (void *)qalloc_or_throw(16 * v30, (__int64)m128i_i64, v28, v7);
        memcpy(v31, *(const void **)(v3 + 104), 16 * v30);
      }
      v32 = *(_QWORD *)(v29 + 8);
      v33 = _mm_unpacklo_epi64((__m128i)v30, (__m128i)v30);
      if ( v32 )
      {
        *(_QWORD *)(v29 + 16) = 0;
        v57 = v33;
        qfree(v32);
        v33 = _mm_load_si128(&v57);
      }
      *(_QWORD *)(v29 + 8) = v31;
      *(__m128i *)(v29 + 16) = v33;
LABEL_31:
      v57.m128i_i8[0] = 0;
      goto LABEL_32;
    }
LABEL_73:
    v50 = operator new(0x30u);
    *(_QWORD *)v50 = &unk_4ECB98;
    install_user_defined_prefix();
    *(_QWORD *)(v50 + 8) = 0;
    *(_QWORD *)v50 = &off_4E99A0;
    *(_OWORD *)(v50 + 16) = 0;
    v53 = *(_QWORD *)(v3 + 112);
    if ( v53 )
    {
      v55 = (void *)qalloc_or_throw(16 * v53, v50, v51, v52);
      *(_QWORD *)(v50 + 8) = v55;
      *(_QWORD *)(v50 + 24) = v53;
      memcpy(v55, *(const void **)(v3 + 104), 16 * v53);
      *(_QWORD *)(v50 + 16) = v53;
    }
    v54 = a1[100];
    *(_QWORD *)(v50 + 32) = -1;
    *(_DWORD *)(v50 + 40) = -1;
    *(_QWORD *)(v54 + 192) = v50;
    goto LABEL_31;
  }
  v56 = *(_QWORD *)(a1[100] + 192LL);
  if ( v56 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 8LL))(v56);
    *(_QWORD *)(a1[100] + 192LL) = 0;
  }
LABEL_32:
  Clp_deleteModel();
  if ( v77 )
  {
    if ( v78 )
    {
      sub_3EC820((__int64 *)(*(_QWORD *)v77 & 0xFFFFFFFFFFFFFFFCLL));
      *(_QWORD *)v77 = v77 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v77 & 3LL;
      *(__m128i *)(v77 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v77, (__m128i)(unsigned __int64)v77);
      *(_QWORD *)v77 &= ~1uLL;
      *(_QWORD *)v77 |= 2uLL;
      v78 = 0;
    }
    else
    {
      *(_QWORD *)v77 = *(_QWORD *)v77 & 3LL | v77 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(v77 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v77, (__m128i)(unsigned __int64)v77);
      *(_QWORD *)v77 &= ~1uLL;
      *(_QWORD *)v77 |= 2uLL;
    }
    if ( v77 )
      qfree(v77);
  }
  if ( v71 )
  {
    *(_QWORD *)&v72 = 0;
    qfree(v71);
  }
  if ( v68 )
  {
    *(_QWORD *)&v69 = 0;
    qfree(v68);
  }
  if ( v66 )
  {
    *(_QWORD *)&v67 = 0;
    qfree(v66);
  }
  if ( v64 )
  {
    *(_QWORD *)&v65 = 0;
    qfree(v64);
  }
  if ( v62 )
  {
    *(_QWORD *)&v63 = 0;
    qfree(v62);
  }
  if ( v60 )
  {
    *(_QWORD *)&v61 = 0;
    qfree(v60);
  }
  return v57.m128i_u8[0];
}
