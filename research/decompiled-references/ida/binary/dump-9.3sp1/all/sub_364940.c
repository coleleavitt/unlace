unsigned __int64 __fastcall sub_364940(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64); // rax
  int v6; // eax
  __int64 *v7; // rdx
  __int64 v8; // rbx
  __int64 i; // r12
  __int64 *v11; // rbp
  __int64 v12; // rcx
  __int64 j; // r15
  __int64 *v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 k; // r15
  __int64 *v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rdi
  unsigned __int64 v23; // r12
  int v24; // eax
  __int64 (__fastcall *v25)(__int64); // rax
  int v26; // ecx
  __int64 (__fastcall *v27)(__int64, int); // rax
  unsigned __int64 *v28; // rdx
  __int64 v29; // rax
  _QWORD *v30; // r8
  unsigned __int64 v31; // r15
  int v32; // esi
  _QWORD *v33; // rax
  int *v34; // rdi
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rbx
  __int64 (__fastcall *v38)(__int64); // rax
  int v39; // eax
  _QWORD **v40; // rbx
  void *v41; // rdi
  __int64 v43; // rsi
  __int64 v44; // rax
  __int64 *v45; // rdx
  __int64 v46; // rdx
  unsigned __int64 *v47; // rdx
  __int64 v48; // [rsp+0h] [rbp-B8h]
  __int64 v49; // [rsp+0h] [rbp-B8h]
  int v50; // [rsp+0h] [rbp-B8h]
  int v51; // [rsp+0h] [rbp-B8h]
  __int64 v52; // [rsp+10h] [rbp-A8h] BYREF
  int v53; // [rsp+18h] [rbp-A0h] BYREF
  void *v54; // [rsp+20h] [rbp-98h]
  int *v55; // [rsp+28h] [rbp-90h]
  int *v56; // [rsp+30h] [rbp-88h]
  __int64 v57; // [rsp+38h] [rbp-80h]
  __int64 v58; // [rsp+40h] [rbp-78h] BYREF
  __int128 v59; // [rsp+48h] [rbp-70h]
  __int64 v60; // [rsp+58h] [rbp-60h]
  __int128 v61; // [rsp+60h] [rbp-58h]
  unsigned __int64 v62; // [rsp+78h] [rbp-40h]

  v3 = *(_QWORD *)(a2 + 800);
  v62 = __readfsqword(0x28u);
  v4 = v3 + 8;
  if ( *(_BYTE *)(v3 + 520)
    || ((v5 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v3 + 8) + 64LL), v5 != sub_65050)
      ? (v6 = ((__int64 (*)(void))v5)(), v4 = v3 + 8)
      : (v6 = *(_DWORD *)(v3 + 152)),
        !v6) )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v3 + 8) + 168LL))(v4, 0);
    v22 = *(_QWORD *)(v3 + 208);
    if ( v22 )
    {
      *(_QWORD *)(v3 + 216) = 0;
      qfree(v22);
      *(_QWORD *)(v3 + 208) = 0;
      *(_QWORD *)(v3 + 224) = 0;
    }
    *(_BYTE *)(v3 + 520) = 0;
    sub_360800(a1, a2);
  }
  else
  {
    v7 = *(__int64 **)(v3 + 192);
    v8 = *(_QWORD *)(v3 + 184);
    for ( i = v8 + 120LL * (_QWORD)v7; i != v8; *(_DWORD *)(v8 - 8) = 0 )
    {
      v7 = *(__int64 **)v8;
      if ( *(_QWORD *)v8 )
      {
        if ( (*((_DWORD *)v7 + 26))-- == 1 )
        {
          v11 = *(__int64 **)v8;
          if ( *(_QWORD *)v8 )
          {
            sub_258970(*(__int64 **)v8);
            v12 = v11[23];
            if ( v12 )
            {
              v48 = v11[24];
              if ( v48 )
              {
                for ( j = 0; j != v48; ++j )
                {
                  v14 = (__int64 *)(v12 + 24 * j);
                  v15 = *v14;
                  if ( *v14 )
                  {
                    v14[1] = 0;
                    qfree(v15);
                    v12 = v11[23];
                  }
                }
              }
              v11[24] = 0;
              qfree(v12);
            }
            v16 = v11[20];
            if ( v16 )
            {
              v11[21] = 0;
              qfree(v16);
            }
            v17 = v11[16];
            if ( v17 )
            {
              v49 = v11[17];
              if ( v49 )
              {
                for ( k = 0; k != v49; ++k )
                {
                  v19 = (__int64 *)(v17 + 32 * k);
                  v20 = *v19;
                  if ( *v19 )
                  {
                    v19[1] = 0;
                    qfree(v20);
                    v17 = v11[16];
                  }
                }
              }
              v11[17] = 0;
              qfree(v17);
            }
            sub_255050((__int64)(v11 + 2));
            j__qfree((__int64)v11);
          }
        }
      }
      v21 = *(_QWORD *)(v8 + 8);
      *(_QWORD *)v8 = 0;
      if ( v21 )
      {
        *(_QWORD *)(v8 + 16) = 0;
        qfree(v21);
        *(_QWORD *)(v8 + 8) = 0;
        *(_QWORD *)(v8 + 24) = 0;
      }
      *(_QWORD *)(v8 + 104) = 0;
      v8 += 120;
      *(_OWORD *)(v8 - 72) = 0;
      *(_OWORD *)(v8 - 56) = 0;
      *(_DWORD *)(v8 - 20) = 0;
    }
  }
  v23 = 0;
  v53 = 0;
  v54 = nullptr;
  v55 = &v53;
  v56 = &v53;
  v57 = 0;
  while ( 1 )
  {
    v25 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
    if ( v25 != sub_65040 )
      break;
    if ( v23 >= *(int *)(a1 + 56) )
      goto LABEL_45;
LABEL_39:
    v26 = v23;
    v27 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 96LL);
    if ( v27 != sub_65090 )
    {
      v24 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64 *, _QWORD))v27)(
              a1,
              (unsigned int)v23,
              v7,
              (unsigned int)v23);
      v26 = v23;
LABEL_35:
      if ( v24 )
        goto LABEL_36;
      goto LABEL_41;
    }
    if ( *(_QWORD *)(a1 + 56) )
    {
      v24 = *(_DWORD *)(*(_QWORD *)(a1 + 48) + 24LL * (int)v23 + 8);
      goto LABEL_35;
    }
LABEL_41:
    v28 = *(unsigned __int64 **)(v3 + 304);
    if ( v28 == (unsigned __int64 *)(*(_QWORD *)(v3 + 320) - 8LL) )
    {
      v43 = *(_QWORD *)(v3 + 328);
      if ( (((v43 == 0) + ((v43 - *(_QWORD *)(v3 + 296)) >> 3) - 1) << 6)
         + (((__int64)v28 - *(_QWORD *)(v3 + 312)) >> 3)
         + ((__int64)(*(_QWORD *)(v3 + 288) - *(_QWORD *)(v3 + 272)) >> 3) == 0xFFFFFFFFFFFFFFFLL )
        std::__throw_length_error("cannot create std::deque larger than max_size()");
      if ( (unsigned __int64)(*(_QWORD *)(v3 + 264) - ((v43 - *(_QWORD *)(v3 + 256)) >> 3)) <= 1 )
      {
        v51 = v26;
        sub_364280(v3 + 256, 1u, 0);
        v43 = *(_QWORD *)(v3 + 328);
        v26 = v51;
      }
      v50 = v26;
      v44 = operator new(0x200u);
      v26 = v50;
      *(_QWORD *)(v43 + 8) = v44;
      **(_QWORD **)(v3 + 304) = v23;
      v45 = (__int64 *)(*(_QWORD *)(v3 + 328) + 8LL);
      *(_QWORD *)(v3 + 328) = v45;
      v29 = *v45;
      *(__m128i *)(v3 + 312) = _mm_unpacklo_epi64(
                                 (__m128i)(unsigned __int64)*v45,
                                 (__m128i)(unsigned __int64)(*v45 + 512));
    }
    else
    {
      *v28 = v23;
      v29 = *(_QWORD *)(v3 + 304) + 8LL;
    }
    *(_QWORD *)(v3 + 304) = v29;
    LODWORD(v58) = v26;
    sub_363A80(&v52, (int *)&v58);
LABEL_36:
    ++v23;
  }
  if ( v23 < (int)v25(a1) )
    goto LABEL_39;
LABEL_45:
  v58 = 0;
  v60 = 0;
  v59 = 0;
  v61 = 0;
  sub_6DDE0(a1, &v58);
  v30 = *(_QWORD **)(v3 + 304);
  if ( (_QWORD)v59 )
  {
    v31 = 0;
    do
    {
      v32 = *(_DWORD *)(v58 + 4 * v31);
      if ( v32 != -1 )
      {
        v33 = v54;
        if ( !v54 )
          goto LABEL_55;
        v34 = &v53;
        do
        {
          while ( 1 )
          {
            v35 = v33[2];
            v36 = v33[3];
            if ( v32 > *((_DWORD *)v33 + 8) )
              break;
            v34 = (int *)v33;
            v33 = (_QWORD *)v33[2];
            if ( !v35 )
              goto LABEL_53;
          }
          v33 = (_QWORD *)v33[3];
        }
        while ( v36 );
LABEL_53:
        if ( v34 == &v53 || v32 < v34[8] )
        {
LABEL_55:
          if ( v30 == (_QWORD *)(*(_QWORD *)(v3 + 320) - 8LL) )
          {
            v46 = *(_QWORD *)(v3 + 328);
            if ( (((__int64)v30 - *(_QWORD *)(v3 + 312)) >> 3)
               + ((__int64)(*(_QWORD *)(v3 + 288) - *(_QWORD *)(v3 + 272)) >> 3)
               + (((v46 == 0) + ((v46 - *(_QWORD *)(v3 + 296)) >> 3) - 1) << 6) == 0xFFFFFFFFFFFFFFFLL )
              std::__throw_length_error("cannot create std::deque larger than max_size()");
            if ( (unsigned __int64)(*(_QWORD *)(v3 + 264) - ((v46 - *(_QWORD *)(v3 + 256)) >> 3)) <= 1 )
            {
              sub_364280(v3 + 256, 1u, 0);
              v46 = *(_QWORD *)(v3 + 328);
            }
            *(_QWORD *)(v46 + 8) = operator new(0x200u);
            **(_QWORD **)(v3 + 304) = v32;
            v47 = (unsigned __int64 *)(*(_QWORD *)(v3 + 328) + 8LL);
            *(_QWORD *)(v3 + 328) = v47;
            v30 = (_QWORD *)*v47;
            *(__m128i *)(v3 + 312) = _mm_unpacklo_epi64((__m128i)*v47, (__m128i)(*v47 + 512));
          }
          else
          {
            *v30 = v32;
            v30 = (_QWORD *)(*(_QWORD *)(v3 + 304) + 8LL);
          }
          *(_QWORD *)(v3 + 304) = v30;
        }
      }
      ++v31;
    }
    while ( v31 < (unsigned __int64)v59 );
  }
  v37 = (((__int64)v30 - *(_QWORD *)(v3 + 312)) >> 3)
      + ((__int64)(*(_QWORD *)(v3 + 288) - *(_QWORD *)(v3 + 272)) >> 3)
      + (((*(_QWORD *)(v3 + 328) == 0) + ((__int64)(*(_QWORD *)(v3 + 328) - *(_QWORD *)(v3 + 296)) >> 3) - 1) << 6);
  v38 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
  if ( v38 == sub_65040 )
    v39 = *(_DWORD *)(a1 + 56);
  else
    v39 = v38(a1);
  if ( v39 != v37 )
  {
    if ( !under_debugger )
      sub_383060(52136);
    BUG();
  }
  if ( v60 )
  {
    *(_QWORD *)&v61 = 0;
    qfree(v60);
  }
  if ( v58 )
  {
    *(_QWORD *)&v59 = 0;
    qfree(v58);
  }
  v40 = (_QWORD **)v54;
  if ( v54 )
  {
    do
    {
      sub_35E8F0(v40[3]);
      v41 = v40;
      v40 = (_QWORD **)v40[2];
      operator delete(v41, 0x28u);
    }
    while ( v40 );
  }
  return v62 - __readfsqword(0x28u);
}
