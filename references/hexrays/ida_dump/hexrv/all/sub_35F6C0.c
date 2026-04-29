unsigned __int64 __fastcall sub_35F6C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // r14
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64); // rax
  int v9; // eax
  __int64 *v10; // rdx
  __int64 v11; // rbx
  __int64 i; // r12
  __int64 *v14; // rbp
  __int64 v15; // rcx
  __int64 j; // r15
  __int64 *v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 k; // r15
  __int64 *v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rdi
  unsigned __int64 v26; // r12
  int v27; // eax
  __int64 (__fastcall *v28)(__int64); // rax
  __int64 v29; // rcx
  __int64 (__fastcall *v30)(__int64, int); // rax
  unsigned __int64 *v31; // rdx
  __int64 v32; // rax
  _QWORD *v33; // r8
  unsigned __int64 v34; // r15
  int v35; // esi
  _QWORD *v36; // rax
  int *v37; // rdi
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rbx
  __int64 (__fastcall *v41)(__int64); // rax
  int v42; // eax
  _QWORD **v43; // rbx
  void *v44; // rdi
  __int64 v46; // rsi
  __int64 v47; // rax
  __int64 *v48; // rdx
  __int64 v49; // rdx
  unsigned __int64 *v50; // rdx
  __int64 v51; // [rsp+0h] [rbp-B8h]
  __int64 v52; // [rsp+0h] [rbp-B8h]
  unsigned int v53; // [rsp+0h] [rbp-B8h]
  int v54; // [rsp+0h] [rbp-B8h]
  __int64 v55; // [rsp+10h] [rbp-A8h] BYREF
  int v56; // [rsp+18h] [rbp-A0h] BYREF
  void *v57; // [rsp+20h] [rbp-98h]
  int *v58; // [rsp+28h] [rbp-90h]
  int *v59; // [rsp+30h] [rbp-88h]
  __int64 v60; // [rsp+38h] [rbp-80h]
  __int64 v61; // [rsp+40h] [rbp-78h] BYREF
  __int128 v62; // [rsp+48h] [rbp-70h]
  __int64 v63; // [rsp+58h] [rbp-60h]
  __int128 v64; // [rsp+60h] [rbp-58h]
  unsigned __int64 v65; // [rsp+78h] [rbp-40h]

  v6 = *(_QWORD *)(a2 + 800);
  v65 = __readfsqword(0x28u);
  v7 = v6 + 8;
  if ( *(_BYTE *)(v6 + 520)
    || ((v8 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v6 + 8) + 64LL), v8 != sub_60CD0)
      ? (v9 = ((__int64 (*)(void))v8)(), v7 = v6 + 8)
      : (v9 = *(_DWORD *)(v6 + 152)),
        !v9) )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v6 + 8) + 168LL))(v7, 0);
    v25 = *(_QWORD *)(v6 + 208);
    if ( v25 )
    {
      *(_QWORD *)(v6 + 216) = 0;
      qfree(v25);
      *(_QWORD *)(v6 + 208) = 0;
      *(_QWORD *)(v6 + 224) = 0;
    }
    *(_BYTE *)(v6 + 520) = 0;
    sub_35B580(a1, a2);
  }
  else
  {
    v10 = *(__int64 **)(v6 + 192);
    v11 = *(_QWORD *)(v6 + 184);
    for ( i = v11 + 120LL * (_QWORD)v10; i != v11; *(_DWORD *)(v11 - 8) = 0 )
    {
      v10 = *(__int64 **)v11;
      if ( *(_QWORD *)v11 )
      {
        if ( (*((_DWORD *)v10 + 26))-- == 1 )
        {
          v14 = *(__int64 **)v11;
          if ( *(_QWORD *)v11 )
          {
            sub_253D70(*(__int64 **)v11);
            v15 = v14[23];
            if ( v15 )
            {
              v51 = v14[24];
              if ( v51 )
              {
                for ( j = 0; j != v51; ++j )
                {
                  v17 = (__int64 *)(v15 + 24 * j);
                  v18 = *v17;
                  if ( *v17 )
                  {
                    v17[1] = 0;
                    qfree(v18);
                    v15 = v14[23];
                  }
                }
              }
              v14[24] = 0;
              qfree(v15);
            }
            v19 = v14[20];
            if ( v19 )
            {
              v14[21] = 0;
              qfree(v19);
            }
            v20 = v14[16];
            if ( v20 )
            {
              v52 = v14[17];
              if ( v52 )
              {
                for ( k = 0; k != v52; ++k )
                {
                  v22 = (__int64 *)(v20 + 32 * k);
                  v23 = *v22;
                  if ( *v22 )
                  {
                    v22[1] = 0;
                    qfree(v23);
                    v20 = v14[16];
                  }
                }
              }
              v14[17] = 0;
              qfree(v20);
            }
            sub_250450((__int64)(v14 + 2));
            j__qfree(v14);
          }
        }
      }
      v24 = *(_QWORD *)(v11 + 8);
      *(_QWORD *)v11 = 0;
      if ( v24 )
      {
        *(_QWORD *)(v11 + 16) = 0;
        qfree(v24);
        *(_QWORD *)(v11 + 8) = 0;
        *(_QWORD *)(v11 + 24) = 0;
      }
      *(_QWORD *)(v11 + 104) = 0;
      v11 += 120;
      *(_OWORD *)(v11 - 72) = 0;
      *(_OWORD *)(v11 - 56) = 0;
      *(_DWORD *)(v11 - 20) = 0;
    }
  }
  v26 = 0;
  v56 = 0;
  v57 = nullptr;
  v58 = &v56;
  v59 = &v56;
  v60 = 0;
  while ( 1 )
  {
    v28 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
    if ( v28 != sub_60CC0 )
      break;
    if ( v26 >= *(int *)(a1 + 56) )
      goto LABEL_45;
LABEL_39:
    v29 = (unsigned int)v26;
    v30 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 96LL);
    if ( v30 != sub_60D10 )
    {
      v27 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64 *, _QWORD))v30)(
              a1,
              (unsigned int)v26,
              v10,
              (unsigned int)v26);
      v29 = (unsigned int)v26;
LABEL_35:
      if ( v27 )
        goto LABEL_36;
      goto LABEL_41;
    }
    if ( *(_QWORD *)(a1 + 56) )
    {
      v27 = *(_DWORD *)(*(_QWORD *)(a1 + 48) + 24LL * (int)v26 + 8);
      goto LABEL_35;
    }
LABEL_41:
    v31 = *(unsigned __int64 **)(v6 + 304);
    if ( v31 == (unsigned __int64 *)(*(_QWORD *)(v6 + 320) - 8LL) )
    {
      v46 = *(_QWORD *)(v6 + 328);
      if ( (((v46 == 0) + ((v46 - *(_QWORD *)(v6 + 296)) >> 3) - 1) << 6)
         + (((__int64)v31 - *(_QWORD *)(v6 + 312)) >> 3)
         + ((__int64)(*(_QWORD *)(v6 + 288) - *(_QWORD *)(v6 + 272)) >> 3) == 0xFFFFFFFFFFFFFFFLL )
        std::__throw_length_error("cannot create std::deque larger than max_size()");
      if ( (unsigned __int64)(*(_QWORD *)(v6 + 264) - ((v46 - *(_QWORD *)(v6 + 256)) >> 3)) <= 1 )
      {
        v54 = v29;
        sub_35F000(v6 + 256, 1u, 0);
        v46 = *(_QWORD *)(v6 + 328);
        LODWORD(v29) = v54;
      }
      v53 = v29;
      v47 = operator new(0x200u);
      v29 = v53;
      *(_QWORD *)(v46 + 8) = v47;
      **(_QWORD **)(v6 + 304) = v26;
      v48 = (__int64 *)(*(_QWORD *)(v6 + 328) + 8LL);
      *(_QWORD *)(v6 + 328) = v48;
      v32 = *v48;
      v31 = (unsigned __int64 *)(*v48 + 512);
      *(__m128i *)(v6 + 312) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v32, (__m128i)(unsigned __int64)v31);
    }
    else
    {
      *v31 = v26;
      v32 = *(_QWORD *)(v6 + 304) + 8LL;
    }
    *(_QWORD *)(v6 + 304) = v32;
    LODWORD(v61) = v29;
    sub_35E800(&v55, (int *)&v61, (__int64)v31, v29, a5);
LABEL_36:
    ++v26;
  }
  if ( v26 < (int)v28(a1) )
    goto LABEL_39;
LABEL_45:
  v61 = 0;
  v63 = 0;
  v62 = 0;
  v64 = 0;
  sub_69A60(a1, &v61);
  v33 = *(_QWORD **)(v6 + 304);
  if ( (_QWORD)v62 )
  {
    v34 = 0;
    do
    {
      v35 = *(_DWORD *)(v61 + 4 * v34);
      if ( v35 != -1 )
      {
        v36 = v57;
        if ( !v57 )
          goto LABEL_55;
        v37 = &v56;
        do
        {
          while ( 1 )
          {
            v38 = v36[2];
            v39 = v36[3];
            if ( v35 > *((_DWORD *)v36 + 8) )
              break;
            v37 = (int *)v36;
            v36 = (_QWORD *)v36[2];
            if ( !v38 )
              goto LABEL_53;
          }
          v36 = (_QWORD *)v36[3];
        }
        while ( v39 );
LABEL_53:
        if ( v37 == &v56 || v35 < v37[8] )
        {
LABEL_55:
          if ( v33 == (_QWORD *)(*(_QWORD *)(v6 + 320) - 8LL) )
          {
            v49 = *(_QWORD *)(v6 + 328);
            if ( (((__int64)v33 - *(_QWORD *)(v6 + 312)) >> 3)
               + ((__int64)(*(_QWORD *)(v6 + 288) - *(_QWORD *)(v6 + 272)) >> 3)
               + (((v49 == 0) + ((v49 - *(_QWORD *)(v6 + 296)) >> 3) - 1) << 6) == 0xFFFFFFFFFFFFFFFLL )
              std::__throw_length_error("cannot create std::deque larger than max_size()");
            if ( (unsigned __int64)(*(_QWORD *)(v6 + 264) - ((v49 - *(_QWORD *)(v6 + 256)) >> 3)) <= 1 )
            {
              sub_35F000(v6 + 256, 1u, 0);
              v49 = *(_QWORD *)(v6 + 328);
            }
            *(_QWORD *)(v49 + 8) = operator new(0x200u);
            **(_QWORD **)(v6 + 304) = v35;
            v50 = (unsigned __int64 *)(*(_QWORD *)(v6 + 328) + 8LL);
            *(_QWORD *)(v6 + 328) = v50;
            v33 = (_QWORD *)*v50;
            *(__m128i *)(v6 + 312) = _mm_unpacklo_epi64((__m128i)*v50, (__m128i)(*v50 + 512));
          }
          else
          {
            *v33 = v35;
            v33 = (_QWORD *)(*(_QWORD *)(v6 + 304) + 8LL);
          }
          *(_QWORD *)(v6 + 304) = v33;
        }
      }
      ++v34;
    }
    while ( v34 < (unsigned __int64)v62 );
  }
  v40 = (((__int64)v33 - *(_QWORD *)(v6 + 312)) >> 3)
      + ((__int64)(*(_QWORD *)(v6 + 288) - *(_QWORD *)(v6 + 272)) >> 3)
      + (((*(_QWORD *)(v6 + 328) == 0) + ((__int64)(*(_QWORD *)(v6 + 328) - *(_QWORD *)(v6 + 296)) >> 3) - 1) << 6);
  v41 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
  if ( v41 == sub_60CC0 )
    v42 = *(_DWORD *)(a1 + 56);
  else
    v42 = v41(a1);
  if ( v42 != v40 )
  {
    if ( !under_debugger )
      sub_37DDE0(52136);
    BUG();
  }
  if ( v63 )
  {
    *(_QWORD *)&v64 = 0;
    qfree(v63);
  }
  if ( v61 )
  {
    *(_QWORD *)&v62 = 0;
    qfree(v61);
  }
  v43 = (_QWORD **)v57;
  if ( v57 )
  {
    do
    {
      sub_359670(v43[3]);
      v44 = v43;
      v43 = (_QWORD **)v43[2];
      operator delete(v44, 0x28u);
    }
    while ( v43 );
  }
  return v65 - __readfsqword(0x28u);
}
