__int64 __fastcall sub_404740(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  _QWORD *v4; // rdx
  __int64 v5; // rsi
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
  __int64 v19; // rdi
  __int64 v20; // rax
  __m128i *v21; // r15
  __int64 v22; // rbp
  __m128i *v23; // r14
  unsigned __int64 v24; // rdx
  __m128i *v25; // rbp
  unsigned __int64 v26; // rdx
  __int64 v27; // rcx
  __m128i *j; // rax
  __int64 v29; // rbp
  unsigned __int64 v30; // r12
  void *v31; // r13
  __m128i v32; // xmm0
  __int8 v34; // al
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rdx
  int v38; // ecx
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
  __int64 v50; // rbp
  __int64 v51; // r12
  __int64 v52; // rax
  void *v53; // rax
  __int64 v54; // rdi
  __m128i v55; // [rsp+0h] [rbp-138h] BYREF
  int v56; // [rsp+14h] [rbp-124h]
  __int64 *v57; // [rsp+18h] [rbp-120h]
  __int64 v58; // [rsp+20h] [rbp-118h] BYREF
  __int128 v59; // [rsp+28h] [rbp-110h]
  __int64 v60; // [rsp+38h] [rbp-100h]
  __int128 v61; // [rsp+40h] [rbp-F8h]
  __int64 v62; // [rsp+50h] [rbp-E8h]
  __int128 v63; // [rsp+58h] [rbp-E0h]
  __int64 v64; // [rsp+68h] [rbp-D0h]
  __int128 v65; // [rsp+70h] [rbp-C8h]
  __int64 v66; // [rsp+80h] [rbp-B8h]
  __int128 v67; // [rsp+88h] [rbp-B0h]
  __int64 v68; // [rsp+98h] [rbp-A0h]
  __int64 v69; // [rsp+A0h] [rbp-98h]
  __int128 v70; // [rsp+A8h] [rbp-90h]
  __int128 v71; // [rsp+B8h] [rbp-80h]
  int v72; // [rsp+C8h] [rbp-70h]
  __int64 v73; // [rsp+D0h] [rbp-68h]
  __int64 v74; // [rsp+D8h] [rbp-60h]
  unsigned __int64 v75; // [rsp+E0h] [rbp-58h]
  __int64 v76; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v77; // [rsp+F8h] [rbp-40h]

  v77 = __readfsqword(0x28u);
  v59 = 0;
  v61 = 0;
  v63 = 0;
  v65 = 0;
  v67 = 0;
  v70 = 0;
  v58 = 0;
  v2 = a1[1];
  v60 = 0;
  v62 = 0;
  v3 = *(_QWORD *)(v2 + 920);
  v64 = 0;
  v66 = 0;
  v57 = (__int64 *)(v3 + 104);
  v68 = v3 + 104;
  v69 = 0;
  v71 = -1;
  v4 = (_QWORD *)a1[106];
  v5 = a1[105];
  v72 = -1;
  v73 = 0;
  v74 = v2;
  v75 = 0;
  v76 = 0;
  sub_4037C0((__int64)&v58, v5, v4);
  v55.m128i_i8[0] = sub_3E9F80((__int64)&v58);
  if ( !v55.m128i_i8[0] )
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
          v56 = 0;
          v10 = 0;
          v11 = 0;
          do
          {
            v15 = 16 * v11;
            v16 = *(_QWORD *)(*(_QWORD *)(v3 + 104) + v15);
            if ( (get_flags_ex() & 0x10000) == 0 )
            {
              for ( i = get_first_fcref_to(); ; i = get_next_fcref_to() )
              {
                v18 = i;
                if ( i >= v16 )
                  break;
                v19 = a1[1];
                v55.m128i_i64[0] = v19 + 8;
                v20 = sub_32DAE0(v19);
                if ( (unsigned __int8)sub_32F4A0(v19 + 8, v20) )
                {
                  *(_QWORD *)(*(_QWORD *)(v3 + 104) + v15 + 8) = (int)sub_3DEE70(v57, v18);
                  v12 = 0;
                  goto LABEL_7;
                }
              }
            }
            v12 = v56;
LABEL_7:
            v13 = *(_QWORD *)(v3 + 104) + v15;
            ++v10;
            v14 = *(_QWORD *)(v13 + 8) + v12;
            *(_QWORD *)(v13 + 8) = v14;
            v11 = v10;
            v56 = v14;
          }
          while ( (unsigned __int64)v10 < *(_QWORD *)(v3 + 112) );
        }
        *(_DWORD *)(a1[100] + 976LL) = v71;
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
      sub_3E1390(v21, (unsigned __int64 *)v23, 2LL * (int)v24);
      if ( v22 > 256 )
      {
        v25 = v21 + 16;
        sub_3E0D70(v21, v21 + 16);
        do
        {
          v26 = v25->m128i_i64[0];
          v27 = v25->m128i_i64[1];
          j = v25;
          if ( v25->m128i_i64[0] < (unsigned __int64)v25[-1].m128i_i64[0] )
          {
            for ( j = v25 - 1; ; --j )
            {
              j[1] = _mm_loadu_si128(j);
              if ( v26 >= j[-1].m128i_i64[0] )
                break;
            }
          }
          ++v25;
          j->m128i_i64[0] = v26;
          j->m128i_i64[1] = v27;
        }
        while ( v25 != v23 );
        goto LABEL_80;
      }
    }
    else
    {
      sub_3E1390(v21, (unsigned __int64 *)v23, -2);
    }
    sub_3E0D70(v21, v23);
LABEL_80:
    v9 = *(_QWORD *)(v3 + 112);
    goto LABEL_53;
  }
  v34 = sub_3EA0F0((__int64)&v58, (_QWORD *)a1[106]);
  v35 = a1[1];
  v55.m128i_i8[0] = v34;
  v36 = *(_QWORD *)(v35 + 24);
  v37 = *(_QWORD *)(v35 + 8);
  v38 = v36;
  if ( v37 )
    v38 = *(_DWORD *)(v37 + 128) + v36 + 1;
  v9 = *(_QWORD *)(v3 + 112);
  if ( v38 > 1 )
  {
    v21 = *(__m128i **)(v3 + 104);
    v22 = 16 * v9;
    v23 = &v21[v9];
    if ( v23 != v21 )
      goto LABEL_16;
  }
LABEL_53:
  if ( !v55.m128i_i8[0] )
    goto LABEL_4;
  v39 = v9 - 1;
  if ( (int)v9 - 1 >= 0 )
  {
    LOBYTE(v56) = v55.m128i_i8[0];
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
      memmove((void *)(v45 + v41), (const void *)(v41 + 16 * (v40 + 1)), 16 * (v9 - (v40 + 1)));
      v46 = (_QWORD *)(*(_QWORD *)(v3 + 104) + v43);
      *(_QWORD *)(v3 + 112) -= (16 * (v40 - v42)) >> 4;
      if ( (__int64)v46[1] > 8 )
      {
        v47 = a1[1];
        if ( *(_QWORD *)(v47 + 488) == -1 )
          *(_QWORD *)(v47 + 488) = *v46;
        LOBYTE(v56) = 0;
      }
      if ( v39 == -1 )
        break;
      v9 = *(_QWORD *)(v3 + 112);
    }
    v48 = *(_QWORD *)(a1[100] + 192LL);
    if ( !v48 )
    {
      if ( (_BYTE)v56 )
        goto LABEL_32;
      goto LABEL_73;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 8LL))(v48);
    v49 = (_BYTE)v56 == 0;
    *(_QWORD *)(a1[100] + 192LL) = 0;
    if ( !v49 )
      goto LABEL_32;
LABEL_25:
    v29 = *(_QWORD *)(a1[100] + 192LL);
    if ( v29 )
    {
      v30 = *(_QWORD *)(v3 + 112);
      v31 = 0;
      if ( v30 )
      {
        v31 = (void *)qalloc_or_throw();
        memcpy(v31, *(const void **)(v3 + 104), 16 * v30);
      }
      v32 = _mm_unpacklo_epi64((__m128i)v30, (__m128i)v30);
      if ( *(_QWORD *)(v29 + 8) )
      {
        *(_QWORD *)(v29 + 16) = 0;
        v55 = v32;
        qfree();
        v32 = _mm_load_si128(&v55);
      }
      *(_QWORD *)(v29 + 8) = v31;
      *(__m128i *)(v29 + 16) = v32;
LABEL_31:
      v55.m128i_i8[0] = 0;
      goto LABEL_32;
    }
LABEL_73:
    v50 = operator new(0x30u);
    *(_QWORD *)v50 = &unk_4EBB58;
    install_user_defined_prefix();
    *(_QWORD *)(v50 + 8) = 0;
    *(_QWORD *)v50 = &off_4E8A20;
    *(_OWORD *)(v50 + 16) = 0;
    v51 = *(_QWORD *)(v3 + 112);
    if ( v51 )
    {
      v53 = (void *)qalloc_or_throw();
      *(_QWORD *)(v50 + 8) = v53;
      *(_QWORD *)(v50 + 24) = v51;
      memcpy(v53, *(const void **)(v3 + 104), 16 * v51);
      *(_QWORD *)(v50 + 16) = v51;
    }
    v52 = a1[100];
    *(_QWORD *)(v50 + 32) = -1;
    *(_DWORD *)(v50 + 40) = -1;
    *(_QWORD *)(v52 + 192) = v50;
    goto LABEL_31;
  }
  v54 = *(_QWORD *)(a1[100] + 192LL);
  if ( v54 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 8LL))(v54);
    *(_QWORD *)(a1[100] + 192LL) = 0;
  }
LABEL_32:
  Clp_deleteModel();
  if ( v75 )
  {
    if ( v76 )
    {
      sub_3E1BE0((__int64 *)(*(_QWORD *)v75 & 0xFFFFFFFFFFFFFFFCLL));
      *(_QWORD *)v75 = v75 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v75 & 3LL;
      *(__m128i *)(v75 + 8) = _mm_unpacklo_epi64((__m128i)v75, (__m128i)v75);
      *(_QWORD *)v75 &= ~1uLL;
      *(_QWORD *)v75 |= 2uLL;
      v76 = 0;
    }
    else
    {
      *(_QWORD *)v75 = *(_QWORD *)v75 & 3LL | v75 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(v75 + 8) = _mm_unpacklo_epi64((__m128i)v75, (__m128i)v75);
      *(_QWORD *)v75 &= ~1uLL;
      *(_QWORD *)v75 |= 2uLL;
    }
    if ( v75 )
      qfree();
  }
  if ( v69 )
  {
    *(_QWORD *)&v70 = 0;
    qfree();
  }
  if ( v66 )
  {
    *(_QWORD *)&v67 = 0;
    qfree();
  }
  if ( v64 )
  {
    *(_QWORD *)&v65 = 0;
    qfree();
  }
  if ( v62 )
  {
    *(_QWORD *)&v63 = 0;
    qfree();
  }
  if ( v60 )
  {
    *(_QWORD *)&v61 = 0;
    qfree();
  }
  if ( v58 )
  {
    *(_QWORD *)&v59 = 0;
    qfree();
  }
  return v55.m128i_u8[0];
}
