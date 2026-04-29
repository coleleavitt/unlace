__int64 __fastcall sub_40F2C0(
        _QWORD *a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v10; // rax
  __int64 v11; // rbx
  _QWORD *v12; // rdx
  __int64 v13; // rsi
  double v14; // xmm4_8
  double v15; // xmm5_8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  int v20; // r15d
  __int64 v21; // rbp
  __int64 v22; // rax
  __int64 v23; // rbp
  __int64 v24; // rax
  __int64 v25; // rbp
  unsigned __int64 v26; // r14
  unsigned __int64 i; // rax
  unsigned __int64 v28; // r12
  _QWORD *v29; // rdi
  unsigned __int64 v30; // rax
  __m128i *v31; // r15
  __int64 v32; // rbp
  __m128i *v33; // r14
  unsigned __int64 v34; // rdx
  __m128i *v35; // rbp
  unsigned __int64 v36; // rdx
  __int64 v37; // rcx
  __m128i *j; // rax
  __int64 v39; // rbp
  unsigned __int64 v40; // r12
  void *v41; // r13
  __m128i v42; // xmm0
  __int8 v44; // al
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rdx
  int v48; // ecx
  int v49; // r15d
  __int64 v50; // r12
  __int64 v51; // rdi
  __int64 v52; // r14
  __int64 v53; // rbp
  __int64 v54; // rax
  __int64 v55; // rax
  _QWORD *v56; // rbp
  __int64 v57; // rax
  __int64 v58; // rdi
  bool v59; // zf
  __int64 v60; // rbp
  __int64 v61; // r12
  __int64 v62; // rax
  void *v63; // rax
  __int64 v64; // rdi
  __m128i v65; // [rsp+0h] [rbp-138h] BYREF
  int v66; // [rsp+14h] [rbp-124h]
  __int64 *v67; // [rsp+18h] [rbp-120h]
  __int64 v68; // [rsp+20h] [rbp-118h] BYREF
  __int128 v69; // [rsp+28h] [rbp-110h]
  __int64 v70; // [rsp+38h] [rbp-100h]
  __int128 v71; // [rsp+40h] [rbp-F8h]
  __int64 v72; // [rsp+50h] [rbp-E8h]
  __int128 v73; // [rsp+58h] [rbp-E0h]
  __int64 v74; // [rsp+68h] [rbp-D0h]
  __int128 v75; // [rsp+70h] [rbp-C8h]
  __int64 v76; // [rsp+80h] [rbp-B8h]
  __int128 v77; // [rsp+88h] [rbp-B0h]
  __int64 v78; // [rsp+98h] [rbp-A0h]
  __int64 v79; // [rsp+A0h] [rbp-98h]
  __int128 v80; // [rsp+A8h] [rbp-90h]
  __int128 v81; // [rsp+B8h] [rbp-80h]
  int v82; // [rsp+C8h] [rbp-70h]
  __int64 v83; // [rsp+D0h] [rbp-68h]
  __int64 v84; // [rsp+D8h] [rbp-60h]
  unsigned __int64 v85; // [rsp+E0h] [rbp-58h]
  __int64 v86; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v87; // [rsp+F8h] [rbp-40h]

  v87 = __readfsqword(0x28u);
  v69 = 0;
  v71 = 0;
  v73 = 0;
  v75 = 0;
  v77 = 0;
  v80 = 0;
  v68 = 0;
  v10 = a1[1];
  v70 = 0;
  v72 = 0;
  v11 = *(_QWORD *)(v10 + 920);
  v74 = 0;
  v76 = 0;
  v67 = (__int64 *)(v11 + 104);
  v78 = v11 + 104;
  v79 = 0;
  v81 = -1;
  v12 = (_QWORD *)a1[106];
  v13 = a1[105];
  v82 = -1;
  v83 = 0;
  v84 = v10;
  v85 = 0;
  v86 = 0;
  sub_40E340((__int64)&v68, v13, v12);
  v65.m128i_i8[0] = sub_3F4B50((__int64)&v68, (__m128)-1LL, a3, a4, a5, v14, v15, a8, a9);
  if ( !v65.m128i_i8[0] )
  {
    v16 = a1[1];
    v17 = *(_QWORD *)(v16 + 8);
    v18 = *(_QWORD *)(v16 + 24);
    v19 = *(_QWORD *)(v11 + 112);
    if ( v17 )
    {
      if ( *(_DWORD *)(v17 + 128) + (int)v18 + 1 <= 1 )
      {
LABEL_4:
        if ( v19 )
        {
          v66 = 0;
          v20 = 0;
          v21 = 0;
          do
          {
            v25 = 16 * v21;
            v26 = *(_QWORD *)(*(_QWORD *)(v11 + 104) + v25);
            if ( (get_flags_ex() & 0x10000) == 0 )
            {
              for ( i = get_first_fcref_to(); ; i = get_next_fcref_to() )
              {
                v28 = i;
                if ( i >= v26 )
                  break;
                v29 = (_QWORD *)a1[1];
                v65.m128i_i64[0] = (__int64)(v29 + 1);
                v30 = sub_330F80(v29, i);
                if ( (unsigned __int8)sub_332920((__int64)(v29 + 1), v30) )
                {
                  *(_QWORD *)(*(_QWORD *)(v11 + 104) + v25 + 8) = (int)sub_3E9AE0(v67, v28);
                  v22 = 0;
                  goto LABEL_7;
                }
              }
            }
            v22 = v66;
LABEL_7:
            v23 = *(_QWORD *)(v11 + 104) + v25;
            ++v20;
            v24 = *(_QWORD *)(v23 + 8) + v22;
            *(_QWORD *)(v23 + 8) = v24;
            v21 = v20;
            v66 = v24;
          }
          while ( (unsigned __int64)v20 < *(_QWORD *)(v11 + 112) );
        }
        *(_DWORD *)(a1[100] + 984LL) = v81;
        goto LABEL_25;
      }
    }
    else if ( (int)v18 <= 1 )
    {
      goto LABEL_4;
    }
    v31 = *(__m128i **)(v11 + 104);
    v32 = 16 * v19;
    v33 = &v31[v19];
    if ( v33 == v31 )
      goto LABEL_4;
LABEL_16:
    if ( v32 >> 4 )
    {
      _BitScanReverse64(&v34, v32 >> 4);
      sub_3EBFD0(v31, (unsigned __int64 *)v33, 2LL * (int)v34);
      if ( v32 > 256 )
      {
        v35 = v31 + 16;
        sub_3EB9B0(v31, v31 + 16);
        do
        {
          v36 = v35->m128i_i64[0];
          v37 = v35->m128i_i64[1];
          j = v35;
          if ( v35->m128i_i64[0] < (unsigned __int64)v35[-1].m128i_i64[0] )
          {
            for ( j = v35 - 1; ; --j )
            {
              j[1] = _mm_loadu_si128(j);
              if ( v36 >= j[-1].m128i_i64[0] )
                break;
            }
          }
          ++v35;
          j->m128i_i64[0] = v36;
          j->m128i_i64[1] = v37;
        }
        while ( v35 != v33 );
        goto LABEL_80;
      }
    }
    else
    {
      sub_3EBFD0(v31, (unsigned __int64 *)v33, -2);
    }
    sub_3EB9B0(v31, v33);
LABEL_80:
    v19 = *(_QWORD *)(v11 + 112);
    goto LABEL_53;
  }
  v44 = sub_3F4CB0((__int64)&v68, (_QWORD *)a1[106]);
  v45 = a1[1];
  v65.m128i_i8[0] = v44;
  v46 = *(_QWORD *)(v45 + 24);
  v47 = *(_QWORD *)(v45 + 8);
  v48 = v46;
  if ( v47 )
    v48 = *(_DWORD *)(v47 + 128) + v46 + 1;
  v19 = *(_QWORD *)(v11 + 112);
  if ( v48 > 1 )
  {
    v31 = *(__m128i **)(v11 + 104);
    v32 = 16 * v19;
    v33 = &v31[v19];
    if ( v33 != v31 )
      goto LABEL_16;
  }
LABEL_53:
  if ( !v65.m128i_i8[0] )
    goto LABEL_4;
  v49 = v19 - 1;
  if ( (int)v19 - 1 >= 0 )
  {
    LOBYTE(v66) = v65.m128i_i8[0];
    while ( 1 )
    {
      v50 = v49;
      v51 = *(_QWORD *)(v11 + 104);
      v52 = v49;
      v53 = 16LL * v49;
      v54 = v51 + 16LL * (v49 - 1) - v53;
      while ( 1 )
      {
        if ( !v49 )
        {
          v53 = 0;
          v55 = 16;
          v49 = -1;
          v52 = 0;
          goto LABEL_61;
        }
        --v49;
        if ( *(_QWORD *)(v51 + v53 + 8) != *(_QWORD *)(v54 + v53 + 8) )
          break;
        v53 -= 16;
        --v52;
      }
      v55 = 16 * (v52 + 1);
LABEL_61:
      memmove((void *)(v55 + v51), (const void *)(v51 + 16 * (v50 + 1)), 16 * (v19 - (v50 + 1)));
      v56 = (_QWORD *)(*(_QWORD *)(v11 + 104) + v53);
      *(_QWORD *)(v11 + 112) -= (16 * (v50 - v52)) >> 4;
      if ( (__int64)v56[1] > 8 )
      {
        v57 = a1[1];
        if ( *(_QWORD *)(v57 + 488) == -1 )
          *(_QWORD *)(v57 + 488) = *v56;
        LOBYTE(v66) = 0;
      }
      if ( v49 == -1 )
        break;
      v19 = *(_QWORD *)(v11 + 112);
    }
    v58 = *(_QWORD *)(a1[100] + 192LL);
    if ( !v58 )
    {
      if ( (_BYTE)v66 )
        goto LABEL_32;
      goto LABEL_73;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 8LL))(v58);
    v59 = (_BYTE)v66 == 0;
    *(_QWORD *)(a1[100] + 192LL) = 0;
    if ( !v59 )
      goto LABEL_32;
LABEL_25:
    v39 = *(_QWORD *)(a1[100] + 192LL);
    if ( v39 )
    {
      v40 = *(_QWORD *)(v11 + 112);
      v41 = nullptr;
      if ( v40 )
      {
        v41 = (void *)qalloc_or_throw();
        memcpy(v41, *(const void **)(v11 + 104), 16 * v40);
      }
      v42 = _mm_unpacklo_epi64((__m128i)v40, (__m128i)v40);
      if ( *(_QWORD *)(v39 + 8) )
      {
        *(_QWORD *)(v39 + 16) = 0;
        v65 = v42;
        qfree();
        v42 = _mm_load_si128(&v65);
      }
      *(_QWORD *)(v39 + 8) = v41;
      *(__m128i *)(v39 + 16) = v42;
LABEL_31:
      v65.m128i_i8[0] = 0;
      goto LABEL_32;
    }
LABEL_73:
    v60 = operator new(0x30u);
    *(_QWORD *)v60 = &unk_4ECB98;
    install_user_defined_prefix(2, v60, a1[100]);
    *(_QWORD *)(v60 + 8) = 0;
    *(_QWORD *)v60 = &off_4E99A0;
    *(_OWORD *)(v60 + 16) = 0;
    v61 = *(_QWORD *)(v11 + 112);
    if ( v61 )
    {
      v63 = (void *)qalloc_or_throw();
      *(_QWORD *)(v60 + 8) = v63;
      *(_QWORD *)(v60 + 24) = v61;
      memcpy(v63, *(const void **)(v11 + 104), 16 * v61);
      *(_QWORD *)(v60 + 16) = v61;
    }
    v62 = a1[100];
    *(_QWORD *)(v60 + 32) = -1;
    *(_DWORD *)(v60 + 40) = -1;
    *(_QWORD *)(v62 + 192) = v60;
    goto LABEL_31;
  }
  v64 = *(_QWORD *)(a1[100] + 192LL);
  if ( v64 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v64 + 8LL))(v64);
    *(_QWORD *)(a1[100] + 192LL) = 0;
  }
LABEL_32:
  Clp_deleteModel();
  if ( v85 )
  {
    if ( v86 )
    {
      sub_3EC820((__int64 *)(*(_QWORD *)v85 & 0xFFFFFFFFFFFFFFFCLL));
      *(_QWORD *)v85 = v85 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v85 & 3LL;
      *(__m128i *)(v85 + 8) = _mm_unpacklo_epi64((__m128i)v85, (__m128i)v85);
      *(_QWORD *)v85 &= ~1uLL;
      *(_QWORD *)v85 |= 2uLL;
      v86 = 0;
    }
    else
    {
      *(_QWORD *)v85 = *(_QWORD *)v85 & 3LL | v85 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(v85 + 8) = _mm_unpacklo_epi64((__m128i)v85, (__m128i)v85);
      *(_QWORD *)v85 &= ~1uLL;
      *(_QWORD *)v85 |= 2uLL;
    }
    if ( v85 )
      qfree();
  }
  if ( v79 )
  {
    *(_QWORD *)&v80 = 0;
    qfree();
  }
  if ( v76 )
  {
    *(_QWORD *)&v77 = 0;
    qfree();
  }
  if ( v74 )
  {
    *(_QWORD *)&v75 = 0;
    qfree();
  }
  if ( v72 )
  {
    *(_QWORD *)&v73 = 0;
    qfree();
  }
  if ( v70 )
  {
    *(_QWORD *)&v71 = 0;
    qfree();
  }
  if ( v68 )
  {
    *(_QWORD *)&v69 = 0;
    qfree();
  }
  return v65.m128i_u8[0];
}
