__int64 __fastcall sub_BAC730(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 k; // r12
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 i; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  unsigned __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  unsigned __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  __int64 j; // rdx
  void *v42; // rax
  char *v43; // r13
  __int64 v44; // rax
  unsigned __int64 v45; // rdx
  __int64 v46; // rax
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rdx
  unsigned __int64 v50; // rcx
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // r14
  unsigned __int64 v55; // rax
  __m128i *v56; // r15
  __int64 v57; // rax
  __int64 *v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  unsigned __int64 v61; // rax
  unsigned __int64 v62; // rax
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // r15
  unsigned __int64 v69; // rdx
  __int64 *v70; // rcx
  __int64 v71; // rcx
  __int64 v72; // r14
  __int64 v73; // r13
  __m128i *v74; // rax
  __m128i *v75; // rax
  unsigned int v76; // edx
  int v77; // esi
  unsigned __int64 v78; // rax
  __int64 v79; // rax
  __m128i *v80; // rax
  unsigned __int64 v81; // rax
  unsigned __int64 v82; // rax
  __int64 v83; // rsi
  __m128i *v84; // rdx
  __int64 v85; // rsi
  __int64 v86; // rdi
  const __m128i *v87; // rdx
  unsigned __int64 v88; // rdx
  __m128i *v89; // [rsp+0h] [rbp-158h]
  __m128i *v90; // [rsp+8h] [rbp-150h]
  void *ptr; // [rsp+10h] [rbp-148h] BYREF
  __int64 v92; // [rsp+18h] [rbp-140h]
  _BYTE v93[312]; // [rsp+20h] [rbp-138h] BYREF

  v7 = *(_QWORD *)(a1 + 120);
  if ( v7 )
  {
    v8 = v7 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v8 )
      goto LABEL_3;
    return 0;
  }
  a2 = *(_QWORD *)(a1 + 96);
  sub_A794E0((__int64 *)(a2 + 88), a2, a3, a4, a5, a6);
  v8 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v8 )
    return 0;
LABEL_3:
  k = *(_QWORD *)(v8 + 64);
  if ( k )
  {
    k = 0;
    goto LABEL_5;
  }
  sub_6E2600(a1, a2, a3, a4, a5, a6);
  v19 = sub_6E2600(a1, a2, v15, v16, v17, v18);
  if ( v19 )
  {
    v24 = sub_B8E970(v19 + 48);
    if ( v24 )
    {
      for ( i = *(_BYTE *)(v24 + 28) & 0x7F; (_BYTE)i != 50; i = *(_BYTE *)(i + 28) & 0x7F )
      {
        i = *(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v24 = i;
        if ( !i )
          break;
      }
    }
  }
  for ( ptr = (void *)sub_BAAD00(a1, a2, i, v21, v22, v23); ; ptr = *((void **)ptr + 16) )
  {
    sub_BA6840((__int64 *)&ptr);
    if ( !ptr )
      break;
    v29 = sub_B8E970((__int64)ptr + 48);
    if ( v29 && (*(_BYTE *)(v29 + 28) & 0x7F) != 0x32 )
    {
      do
      {
        v30 = *(_QWORD *)(v29 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v29 = v30;
      }
      while ( v30 && (*(_BYTE *)(v30 + 28) & 0x7F) != 0x32 );
    }
  }
  sub_6E2600(a1, a2, v25, v26, v27, v28);
  v35 = sub_6E2600(a1, a2, v31, v32, v33, v34);
  if ( v35 )
  {
    v40 = sub_B8E970(v35 + 48);
    if ( v40 )
    {
      for ( j = *(_BYTE *)(v40 + 28) & 0x7F; (_BYTE)j != 50; j = *(_BYTE *)(v36 + 28) & 0x7F )
      {
        v36 = *(_QWORD *)(v40 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v40 = v36;
        if ( !v36 )
          goto LABEL_36;
      }
      v57 = *(_QWORD *)(a1 + 120);
      if ( !v57 )
      {
        a2 = *(_QWORD *)(a1 + 96);
        sub_A794E0((__int64 *)(a2 + 88), a2, j, v37, v38, v39);
        v57 = *(_QWORD *)(a1 + 120);
      }
      v58 = (__int64 *)(v57 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v58 )
      {
        v59 = *v58;
        if ( v59 && (v60 = sub_B8E970(v59 + 48), (j = v60) != 0) )
        {
          v37 = *(_BYTE *)(v60 + 28) & 0x7F;
          if ( (_BYTE)v37 == 50 )
          {
            k = v60;
          }
          else
          {
            while ( 1 )
            {
              v61 = *(_QWORD *)(j + 8) & 0xFFFFFFFFFFFFFFF8LL;
              j = v61;
              if ( !v61 )
                break;
              if ( (*(_BYTE *)(v61 + 28) & 0x7F) == 0x32 )
              {
                k = v61;
                break;
              }
            }
          }
        }
        else
        {
          k = 0;
        }
      }
      sub_6E2600(a1, a2, j, v37, v38, v39);
      *(_QWORD *)((*(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL) + 64) = k;
      k = *(_QWORD *)(k + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( k )
      {
        if ( (*(_BYTE *)(k + 28) & 0x7F) == 0x32 )
        {
LABEL_103:
          v81 = *(_QWORD *)((*(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL) + 64);
          while ( 1 )
          {
            *(_QWORD *)(v81 + 80) = k;
            v82 = *(_QWORD *)(k + 8) & 0xFFFFFFFFFFFFFFF8LL;
            v36 = v82;
            if ( !v82 )
              goto LABEL_36;
            while ( (*(_BYTE *)(v82 + 28) & 0x7F) != 0x32 )
            {
              v82 = *(_QWORD *)(v36 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              v36 = v82;
              if ( !v82 )
                goto LABEL_36;
            }
            v81 = k;
            k = v36;
          }
        }
        while ( 1 )
        {
          v62 = *(_QWORD *)(k + 8) & 0xFFFFFFFFFFFFFFF8LL;
          k = v62;
          if ( !v62 )
            break;
          if ( (*(_BYTE *)(v62 + 28) & 0x7F) == 0x32 )
            goto LABEL_103;
        }
      }
      k = *(_QWORD *)((*(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL) + 64);
    }
  }
LABEL_36:
  v42 = (void *)sub_BAAD00(a1, a2, v36, v37, v38, v39);
  while ( 1 )
  {
    ptr = v42;
    sub_BA6840((__int64 *)&ptr);
    if ( !ptr )
      break;
    v43 = (char *)ptr + 48;
    v44 = sub_B8E970((__int64)ptr + 48);
    if ( !v44 )
      goto LABEL_43;
    if ( (*(_BYTE *)(v44 + 28) & 0x7F) != 0x32 )
    {
      do
      {
        v45 = *(_QWORD *)(v44 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v44 = v45;
        if ( !v45 )
          goto LABEL_43;
      }
      while ( (*(_BYTE *)(v45 + 28) & 0x7F) != 0x32 );
    }
    v46 = sub_B8E970((__int64)v43);
    if ( !v46 )
    {
      v48 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
      if ( !*(_QWORD *)(v48 + 64) )
        goto LABEL_124;
      goto LABEL_43;
    }
    if ( (*(_BYTE *)(v46 + 28) & 0x7F) == 0x32 )
    {
LABEL_51:
      v49 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
      if ( !*(_QWORD *)(v49 + 64) )
      {
        *(_QWORD *)(v49 + 64) = v46;
        v88 = *(_QWORD *)(v46 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v46 = v88;
        if ( !v88 )
        {
LABEL_123:
          k = *(_QWORD *)((*(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL) + 64);
          goto LABEL_43;
        }
        while ( (*(_BYTE *)(v88 + 28) & 0x7F) != 0x32 )
        {
          v88 = *(_QWORD *)(v46 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v46 = v88;
          if ( !v88 )
            goto LABEL_123;
        }
        k = *(_QWORD *)((*(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL) + 64);
      }
      v50 = k;
      for ( k = v46; ; k = v52 )
      {
        *(_QWORD *)(v50 + 80) = k;
        v51 = *(_QWORD *)(k + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v52 = v51;
        if ( !v51 )
          break;
        while ( (*(_BYTE *)(v51 + 28) & 0x7F) != 0x32 )
        {
          v51 = *(_QWORD *)(v52 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v52 = v51;
          if ( !v51 )
            goto LABEL_43;
        }
        v50 = k;
      }
LABEL_43:
      v42 = *((void **)ptr + 16);
    }
    else
    {
      while ( 1 )
      {
        v47 = *(_QWORD *)(v46 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v46 = v47;
        if ( !v47 )
          break;
        if ( (*(_BYTE *)(v47 + 28) & 0x7F) == 0x32 )
          goto LABEL_51;
      }
      v48 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
      if ( !*(_QWORD *)(v48 + 64) )
      {
LABEL_124:
        *(_QWORD *)(v48 + 64) = 0;
        BUG();
      }
      v42 = *((void **)ptr + 16);
    }
  }
  *(_BYTE *)((*(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL) + 72) |= 2u;
  v8 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
LABEL_5:
  if ( (*(_BYTE *)(v8 + 72) & 2) != 0 )
  {
    v11 = sub_BAC6C0(a1, a2, a3, a4, a5, a6);
    if ( v11 )
    {
      v12 = v11 + 48;
      *(_BYTE *)((*(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL) + 72) &= ~2u;
      v13 = sub_B8E970(v11 + 48);
      if ( v13 )
      {
        if ( (*(_BYTE *)(v13 + 28) & 0x7F) == 0x32 )
        {
LABEL_59:
          ptr = v93;
          v92 = 0x1000000000LL;
          v53 = sub_B8E970(v12);
          v54 = v53;
          if ( v53 )
          {
            if ( (*(_BYTE *)(v53 + 28) & 0x7F) == 0x32 )
            {
LABEL_82:
              if ( (*(_BYTE *)(v54 + 88) & 8) != 0 && *(char *)(v54 + 28) >= 0 )
              {
                v65 = sub_B8C330(v54);
                v66 = sub_A97D20(v65, *(_QWORD *)(*(_QWORD *)(v54 + 48) & 0xFFFFFFFFFFFFFFF0LL));
                v67 = (unsigned int)v92;
                v68 = v66;
                v69 = (unsigned int)v92 + 1LL;
                if ( v69 > HIDWORD(v92) )
                {
                  sub_2237220(&ptr, v93, v69, 16);
                  v67 = (unsigned int)v92;
                }
                v70 = (__int64 *)((char *)ptr + 16 * v67);
                *v70 = v68;
                v70[1] = v54;
                LODWORD(v92) = v92 + 1;
              }
              else
              {
                v63 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
                if ( *(_QWORD *)(v63 + 64) )
                  *(_QWORD *)(k + 80) = v54;
                else
                  *(_QWORD *)(v63 + 64) = v54;
                k = v54;
              }
              while ( 1 )
              {
                v64 = *(_QWORD *)(v54 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                v54 = v64;
                if ( !v64 )
                  break;
                if ( (*(_BYTE *)(v64 + 28) & 0x7F) == 0x32 )
                  goto LABEL_82;
              }
            }
            else
            {
              while ( 1 )
              {
                v55 = *(_QWORD *)(v54 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                v54 = v55;
                if ( !v55 )
                  break;
                if ( (*(_BYTE *)(v55 + 28) & 0x7F) == 0x32 )
                  goto LABEL_82;
              }
            }
          }
          v56 = (__m128i *)ptr;
          if ( (_DWORD)v92 )
          {
            v71 = 16LL * (unsigned int)v92;
            v89 = (__m128i *)((char *)ptr + v71);
            v72 = v71 >> 4;
            while ( 1 )
            {
              v73 = v72;
              v74 = (__m128i *)operator new(16 * v72, (const std::nothrow_t *)&std::nothrow);
              if ( v74 )
                break;
              v72 >>= 1;
              if ( !v72 )
              {
                sub_BA6C20(v56, v89->m128i_i8);
                v75 = nullptr;
                goto LABEL_98;
              }
            }
            v83 = v56->m128i_i64[0];
            v74->m128i_i64[1] = v56->m128i_i64[1];
            v84 = v74 + 1;
            v74->m128i_i64[0] = v83;
            if ( &v74[v73] == &v74[1] )
            {
              v87 = v74;
            }
            else
            {
              do
              {
                v85 = v84[-1].m128i_i64[1];
                v86 = v84[-1].m128i_i64[0];
                ++v84;
                v84[-1].m128i_i64[0] = v86;
                v84[-1].m128i_i64[1] = v85;
              }
              while ( &v74[v73] != v84 );
              v87 = &v74[v73 - 1];
            }
            v90 = v74;
            *v56 = _mm_loadu_si128(v87);
            sub_BA7900(v56->m128i_i8, v89, v74, v72);
            v75 = v90;
LABEL_98:
            operator delete(v75, (const std::nothrow_t *)&std::nothrow);
            v76 = 0;
            v77 = v92;
            v56 = (__m128i *)ptr;
            v78 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
            if ( !*(_QWORD *)(v78 + 64) )
            {
              *(_QWORD *)(v78 + 64) = *((_QWORD *)ptr + 1);
              v76 = 1;
              k = *(_QWORD *)((*(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL) + 64);
            }
            for ( ; v76 != v77; k = v80->m128i_u64[1] )
            {
              v79 = v76++;
              v80 = &v56[v79];
              *(_QWORD *)(k + 80) = v80->m128i_i64[1];
            }
          }
          if ( v56 != (__m128i *)v93 )
            free(v56);
        }
        else
        {
          while ( 1 )
          {
            v14 = *(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            v13 = v14;
            if ( !v14 )
              break;
            if ( (*(_BYTE *)(v14 + 28) & 0x7F) == 0x32 )
              goto LABEL_59;
          }
        }
      }
    }
    v8 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
  }
  return *(_QWORD *)(v8 + 64);
}
