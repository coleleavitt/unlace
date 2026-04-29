__int64 __fastcall sub_40F2C0(_QWORD *a1)
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
  _QWORD *v19; // rdi
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __m128i *v25; // r15
  __int64 v26; // rbp
  __m128i *v27; // r14
  unsigned __int64 v28; // rdx
  __m128i *v29; // rbp
  unsigned __int64 v30; // rdx
  __int64 v31; // rcx
  __m128i *j; // rax
  __int64 v33; // rbp
  unsigned __int64 v34; // r12
  void *v35; // r13
  __int64 v36; // rdi
  __m128i v37; // xmm0
  __int8 v39; // al
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rdx
  int v43; // ecx
  int v44; // r15d
  __int64 v45; // r12
  __int64 v46; // rdi
  __int64 v47; // r14
  __int64 v48; // rbp
  __int64 v49; // rax
  __int64 v50; // rax
  _QWORD *v51; // rbp
  __int64 v52; // rax
  __int64 v53; // rdi
  bool v54; // zf
  __int64 v55; // rbp
  __int64 v56; // r12
  __int64 v57; // rax
  void *v58; // rax
  __int64 v59; // rdi
  __m128i v60; // [rsp+0h] [rbp-138h] BYREF
  __int64 v61; // [rsp+10h] [rbp-128h]
  __int64 *v62; // [rsp+18h] [rbp-120h]
  __int64 v63; // [rsp+20h] [rbp-118h] BYREF
  __int128 v64; // [rsp+28h] [rbp-110h]
  __int64 v65; // [rsp+38h] [rbp-100h]
  __int128 v66; // [rsp+40h] [rbp-F8h]
  __int64 v67; // [rsp+50h] [rbp-E8h]
  __int128 v68; // [rsp+58h] [rbp-E0h]
  __int64 v69; // [rsp+68h] [rbp-D0h]
  __int128 v70; // [rsp+70h] [rbp-C8h]
  __int64 v71; // [rsp+80h] [rbp-B8h]
  __int128 v72; // [rsp+88h] [rbp-B0h]
  __int64 v73; // [rsp+98h] [rbp-A0h]
  __int64 v74; // [rsp+A0h] [rbp-98h]
  __int128 v75; // [rsp+A8h] [rbp-90h]
  __int128 v76; // [rsp+B8h] [rbp-80h]
  int v77; // [rsp+C8h] [rbp-70h]
  __int64 v78; // [rsp+D0h] [rbp-68h]
  __int64 v79; // [rsp+D8h] [rbp-60h]
  unsigned __int64 v80; // [rsp+E0h] [rbp-58h]
  __int64 v81; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v82; // [rsp+F8h] [rbp-40h]

  v82 = __readfsqword(0x28u);
  v64 = 0;
  v66 = 0;
  v68 = 0;
  v70 = 0;
  v72 = 0;
  v75 = 0;
  v63 = 0;
  v2 = a1[1];
  v65 = 0;
  v67 = 0;
  v3 = *(_QWORD *)(v2 + 920);
  v69 = 0;
  v71 = 0;
  v62 = (__int64 *)(v3 + 104);
  v73 = v3 + 104;
  v74 = 0;
  v76 = -1;
  v4 = (_QWORD *)a1[106];
  v5 = a1[105];
  v77 = -1;
  v78 = 0;
  v79 = v2;
  v80 = 0;
  v81 = 0;
  sub_40E340(&v63, v5, v4);
  v60.m128i_i8[0] = sub_3F4B50((__int64)&v63);
  if ( !v60.m128i_i8[0] )
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
          HIDWORD(v61) = 0;
          v10 = 0;
          v11 = 0;
          do
          {
            v15 = 16 * v11;
            v16 = *(_QWORD *)(*(_QWORD *)(v3 + 104) + v15);
            if ( (get_flags_ex(v16, 4) & 0x10000) == 0 )
            {
              for ( i = get_first_fcref_to(v16);
                    ;
                    i = get_next_fcref_to(
                          v16,
                          v18,
                          v21,
                          v22,
                          v23,
                          v24,
                          v60.m128i_i64[0],
                          v60.m128i_i64[1],
                          v61,
                          v62,
                          v63) )
              {
                v18 = i;
                if ( i >= v16 )
                  break;
                v19 = (_QWORD *)a1[1];
                v60.m128i_i64[0] = (__int64)(v19 + 1);
                v20 = sub_330F80(v19, i);
                if ( (unsigned __int8)sub_332920(v19 + 1, v20) )
                {
                  *(_QWORD *)(*(_QWORD *)(v3 + 104) + v15 + 8) = (int)sub_3E9AE0(v62, v18);
                  v12 = 0;
                  goto LABEL_7;
                }
              }
            }
            v12 = SHIDWORD(v61);
LABEL_7:
            v13 = *(_QWORD *)(v3 + 104) + v15;
            ++v10;
            v14 = *(_QWORD *)(v13 + 8) + v12;
            *(_QWORD *)(v13 + 8) = v14;
            v11 = v10;
            HIDWORD(v61) = v14;
          }
          while ( (unsigned __int64)v10 < *(_QWORD *)(v3 + 112) );
        }
        *(_DWORD *)(a1[100] + 984LL) = v76;
        goto LABEL_25;
      }
    }
    else if ( (int)v8 <= 1 )
    {
      goto LABEL_4;
    }
    v25 = *(__m128i **)(v3 + 104);
    v26 = 16 * v9;
    v27 = &v25[v9];
    if ( v27 == v25 )
      goto LABEL_4;
LABEL_16:
    if ( v26 >> 4 )
    {
      _BitScanReverse64(&v28, v26 >> 4);
      sub_3EBFD0(v25, (unsigned __int64 *)v27, 2LL * (int)v28);
      if ( v26 > 256 )
      {
        v29 = v25 + 16;
        sub_3EB9B0(v25, v25 + 16);
        do
        {
          v30 = v29->m128i_i64[0];
          v31 = v29->m128i_i64[1];
          j = v29;
          if ( v29->m128i_i64[0] < (unsigned __int64)v29[-1].m128i_i64[0] )
          {
            for ( j = v29 - 1; ; --j )
            {
              j[1] = _mm_loadu_si128(j);
              if ( v30 >= j[-1].m128i_i64[0] )
                break;
            }
          }
          ++v29;
          j->m128i_i64[0] = v30;
          j->m128i_i64[1] = v31;
        }
        while ( v29 != v27 );
        goto LABEL_80;
      }
    }
    else
    {
      sub_3EBFD0(v25, (unsigned __int64 *)v27, -2);
    }
    sub_3EB9B0(v25, v27);
LABEL_80:
    v9 = *(_QWORD *)(v3 + 112);
    goto LABEL_53;
  }
  v39 = sub_3F4CB0((__int64)&v63, (_QWORD *)a1[106]);
  v40 = a1[1];
  v60.m128i_i8[0] = v39;
  v41 = *(_QWORD *)(v40 + 24);
  v42 = *(_QWORD *)(v40 + 8);
  v43 = v41;
  if ( v42 )
    v43 = *(_DWORD *)(v42 + 128) + v41 + 1;
  v9 = *(_QWORD *)(v3 + 112);
  if ( v43 > 1 )
  {
    v25 = *(__m128i **)(v3 + 104);
    v26 = 16 * v9;
    v27 = &v25[v9];
    if ( v27 != v25 )
      goto LABEL_16;
  }
LABEL_53:
  if ( !v60.m128i_i8[0] )
    goto LABEL_4;
  v44 = v9 - 1;
  if ( (int)v9 - 1 >= 0 )
  {
    BYTE4(v61) = v60.m128i_i8[0];
    while ( 1 )
    {
      v45 = v44;
      v46 = *(_QWORD *)(v3 + 104);
      v47 = v44;
      v48 = 16LL * v44;
      v49 = v46 + 16LL * (v44 - 1) - v48;
      while ( 1 )
      {
        if ( !v44 )
        {
          v48 = 0;
          v50 = 16;
          v44 = -1;
          v47 = 0;
          goto LABEL_61;
        }
        --v44;
        if ( *(_QWORD *)(v46 + v48 + 8) != *(_QWORD *)(v49 + v48 + 8) )
          break;
        v48 -= 16;
        --v47;
      }
      v50 = 16 * (v47 + 1);
LABEL_61:
      memmove((void *)(v50 + v46), (const void *)(v46 + 16 * (v45 + 1)), 16 * (v9 - (v45 + 1)));
      v51 = (_QWORD *)(*(_QWORD *)(v3 + 104) + v48);
      *(_QWORD *)(v3 + 112) -= (16 * (v45 - v47)) >> 4;
      if ( (__int64)v51[1] > 8 )
      {
        v52 = a1[1];
        if ( *(_QWORD *)(v52 + 488) == -1 )
          *(_QWORD *)(v52 + 488) = *v51;
        BYTE4(v61) = 0;
      }
      if ( v44 == -1 )
        break;
      v9 = *(_QWORD *)(v3 + 112);
    }
    v53 = *(_QWORD *)(a1[100] + 192LL);
    if ( !v53 )
    {
      if ( BYTE4(v61) )
        goto LABEL_32;
      goto LABEL_73;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 8LL))(v53);
    v54 = BYTE4(v61) == 0;
    *(_QWORD *)(a1[100] + 192LL) = 0;
    if ( !v54 )
      goto LABEL_32;
LABEL_25:
    v33 = *(_QWORD *)(a1[100] + 192LL);
    if ( v33 )
    {
      v34 = *(_QWORD *)(v3 + 112);
      v35 = nullptr;
      if ( v34 )
      {
        v35 = (void *)qalloc_or_throw(16 * v34);
        memcpy(v35, *(const void **)(v3 + 104), 16 * v34);
      }
      v36 = *(_QWORD *)(v33 + 8);
      v37 = _mm_unpacklo_epi64((__m128i)v34, (__m128i)v34);
      if ( v36 )
      {
        *(_QWORD *)(v33 + 16) = 0;
        v60 = v37;
        qfree(v36);
        v37 = _mm_load_si128(&v60);
      }
      *(_QWORD *)(v33 + 8) = v35;
      *(__m128i *)(v33 + 16) = v37;
LABEL_31:
      v60.m128i_i8[0] = 0;
      goto LABEL_32;
    }
LABEL_73:
    v55 = operator new(0x30u);
    *(_QWORD *)v55 = &unk_4ECB98;
    install_user_defined_prefix(2, v55, a1[100]);
    *(_QWORD *)(v55 + 8) = 0;
    *(_QWORD *)v55 = &off_4E99A0;
    *(_OWORD *)(v55 + 16) = 0;
    v56 = *(_QWORD *)(v3 + 112);
    if ( v56 )
    {
      v58 = (void *)qalloc_or_throw(16 * v56);
      *(_QWORD *)(v55 + 8) = v58;
      *(_QWORD *)(v55 + 24) = v56;
      memcpy(v58, *(const void **)(v3 + 104), 16 * v56);
      *(_QWORD *)(v55 + 16) = v56;
    }
    v57 = a1[100];
    *(_QWORD *)(v55 + 32) = -1;
    *(_DWORD *)(v55 + 40) = -1;
    *(_QWORD *)(v57 + 192) = v55;
    goto LABEL_31;
  }
  v59 = *(_QWORD *)(a1[100] + 192LL);
  if ( v59 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 8LL))(v59);
    *(_QWORD *)(a1[100] + 192LL) = 0;
  }
LABEL_32:
  Clp_deleteModel(v78);
  if ( v80 )
  {
    if ( v81 )
    {
      sub_3EC820((__int64 *)(*(_QWORD *)v80 & 0xFFFFFFFFFFFFFFFCLL));
      *(_QWORD *)v80 = v80 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v80 & 3LL;
      *(__m128i *)(v80 + 8) = _mm_unpacklo_epi64((__m128i)v80, (__m128i)v80);
      *(_QWORD *)v80 &= ~1uLL;
      *(_QWORD *)v80 |= 2uLL;
      v81 = 0;
    }
    else
    {
      *(_QWORD *)v80 = *(_QWORD *)v80 & 3LL | v80 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(v80 + 8) = _mm_unpacklo_epi64((__m128i)v80, (__m128i)v80);
      *(_QWORD *)v80 &= ~1uLL;
      *(_QWORD *)v80 |= 2uLL;
    }
    if ( v80 )
      qfree(v80);
  }
  if ( v74 )
  {
    *(_QWORD *)&v75 = 0;
    qfree(v74);
  }
  if ( v71 )
  {
    *(_QWORD *)&v72 = 0;
    qfree(v71);
  }
  if ( v69 )
  {
    *(_QWORD *)&v70 = 0;
    qfree(v69);
  }
  if ( v67 )
  {
    *(_QWORD *)&v68 = 0;
    qfree(v67);
  }
  if ( v65 )
  {
    *(_QWORD *)&v66 = 0;
    qfree(v65);
  }
  if ( v63 )
  {
    *(_QWORD *)&v64 = 0;
    qfree(v63);
  }
  return v60.m128i_u8[0];
}
