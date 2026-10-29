__int64 __fastcall sub_2130E90(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int *a5, __int64 a6)
{
  __int64 v9; // r14
  int v10; // edx
  __m128i v11; // xmm1
  __int64 (__fastcall *v12)(__int64, __int64, __int64, __int64, __int64, __int64); // r13
  unsigned int v13; // edx
  __int64 v14; // r12
  __int64 (__fastcall *v15)(__int64, __int64 *, void *, __int64, __int64, __int64); // r13
  __int64 v16; // rax
  unsigned int v17; // r14d
  int v19; // r13d
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rsi
  int v27; // eax
  __int64 v28; // rcx
  int v29; // edx
  unsigned int v30; // eax
  __int64 v31; // rdi
  _QWORD **v32; // rax
  __int64 v33; // rdi
  unsigned int v34; // r12d
  __int64 *v35; // rdi
  __int64 v36; // rax
  int v37; // eax
  int v38; // edi
  __int64 v39; // r9
  __m128i v40; // [rsp+0h] [rbp-268h]
  int v41; // [rsp+10h] [rbp-258h]
  void *v42; // [rsp+40h] [rbp-228h]
  __int64 v43; // [rsp+40h] [rbp-228h]
  int v44; // [rsp+40h] [rbp-228h]
  _QWORD v46[3]; // [rsp+50h] [rbp-218h] BYREF
  __int64 v47; // [rsp+68h] [rbp-200h] BYREF
  _QWORD v48[2]; // [rsp+70h] [rbp-1F8h] BYREF
  void *v49; // [rsp+80h] [rbp-1E8h] BYREF
  __int64 v50; // [rsp+88h] [rbp-1E0h]
  __int64 v51; // [rsp+90h] [rbp-1D8h] BYREF
  __int64 v52[4]; // [rsp+A0h] [rbp-1C8h] BYREF
  __int16 v53; // [rsp+C0h] [rbp-1A8h]
  __m128i v54; // [rsp+D0h] [rbp-198h] BYREF
  __int128 v55; // [rsp+E0h] [rbp-188h]
  __int64 v56; // [rsp+F0h] [rbp-178h]
  char v57; // [rsp+F8h] [rbp-170h]
  int v58; // [rsp+FCh] [rbp-16Ch]
  void **p_ptr; // [rsp+100h] [rbp-168h]
  void *ptr; // [rsp+110h] [rbp-158h] BYREF
  __m128i si128; // [rsp+118h] [rbp-150h]
  void *v62; // [rsp+128h] [rbp-140h] BYREF
  unsigned int v63; // [rsp+130h] [rbp-138h]

  v46[0] = a3;
  v46[1] = a4;
  sub_2246450(&v49, v46);
  v9 = *(_QWORD *)(a1 + 8);
  v10 = *a5;
  v11 = _mm_loadu_si128((const __m128i *)(a5 + 2));
  v47 = *(_QWORD *)(a2 + 88);
  v12 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v9 + 64LL);
  LODWORD(ptr) = v10;
  v13 = a5[8];
  si128 = v11;
  v63 = v13;
  if ( v13 > 0x40 )
    sub_2205510(&v62);
  else
    v62 = *((void **)a5 + 3);
  v14 = v50;
  if ( v12 == sub_2128FE0 )
  {
    v42 = v49;
    v15 = *(__int64 (__fastcall **)(__int64, __int64 *, void *, __int64, __int64, __int64))(*(_QWORD *)v9 + 56LL);
    v16 = sub_2124B50((__int64)&ptr);
    v17 = v15(v9, &v47, v42, v14, v16, a2);
  }
  else
  {
    v17 = v12(v9, (__int64)&v47, (__int64)v49, v50, (__int64)&ptr, a2);
  }
  if ( v63 > 0x40 && v62 )
    operator delete[](v62);
  *(_BYTE *)(a2 + 84) = v17;
  if ( !*(_BYTE *)(a1 + 241) )
    goto LABEL_9;
  ptr = &v62;
  v19 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  v55 = 0;
  v54.m128i_i64[0] = (__int64)&off_2BEBEE0;
  v54.m128i_i32[2] = 2;
  v57 = 0;
  v58 = 1;
  v56 = 0;
  p_ptr = &ptr;
  sub_227B8B0(&v54, 0, 0, 0);
  sub_995540((__int64)&v54, "parsed instruction: [");
  v20 = 0;
  if ( *(_DWORD *)(a2 + 8) )
  {
    while ( 1 )
    {
      (*(void (__fastcall **)(_QWORD, __m128i *, _QWORD))(**(_QWORD **)(*(_QWORD *)a2 + 8 * v20) + 120LL))(
        *(_QWORD *)(*(_QWORD *)a2 + 8 * v20),
        &v54,
        *(_QWORD *)(a1 + 40));
      v20 = (unsigned int)(v19 + 1);
      v19 = v20;
      if ( (_DWORD)v20 == *(_DWORD *)(a2 + 8) )
        break;
      if ( (_DWORD)v20 )
      {
        v43 = v20;
        sub_995540((__int64)&v54, ", ");
        v20 = v43;
      }
    }
  }
  sub_995540((__int64)&v54, "]");
  v21 = *(_QWORD *)(a1 + 32);
  v22 = (__int64)p_ptr[1];
  v23 = (__int64)*p_ptr;
  v53 = 261;
  v48[0] = 0;
  v52[0] = v23;
  v52[1] = v22;
  v48[1] = 0;
  sub_223BFB0(v21, a6, 3, (unsigned int)v52, (unsigned int)v48, 1, 0, 0, 1);
  v54.m128i_i64[0] = (__int64)&unk_2C76288;
  sub_227B7A0(&v54);
  if ( ptr == &v62 )
  {
LABEL_9:
    LOBYTE(v17) = (*(_DWORD *)(a1 + 232) != 0) | v17;
    if ( (_BYTE)v17 )
      goto LABEL_10;
  }
  else
  {
    free(ptr);
    LOBYTE(v17) = (*(_DWORD *)(a1 + 232) != 0) | v17;
    if ( (_BYTE)v17 )
      goto LABEL_10;
  }
  if ( (unsigned __int8)sub_2130D40(a1) )
  {
    v25 = *(_QWORD *)(a1 + 16);
    v24 = *(_QWORD *)(a1 + 24);
    v26 = *(_QWORD *)(v25 + 1784);
    v27 = *(_DWORD *)(v25 + 1800);
    v28 = *(_QWORD *)(*(_QWORD *)(v24 + 288) + 8LL);
    if ( v27 )
    {
      v29 = v27 - 1;
      v30 = (v27 - 1) & (((unsigned int)v28 >> 9) ^ ((unsigned int)v28 >> 4));
      v31 = *(_QWORD *)(v26 + 8LL * v30);
      if ( v28 != v31 )
      {
        if ( v31 == -4096 )
          goto LABEL_22;
        v38 = 1;
        while ( 1 )
        {
          v30 = v29 & (v38 + v30);
          v39 = *(_QWORD *)(v26 + 8LL * v30);
          if ( v28 == v39 )
            break;
          ++v38;
          if ( v39 == -4096 )
            goto LABEL_22;
        }
      }
      v32 = *(_QWORD ***)(a1 + 360);
      v33 = *(_QWORD *)(a1 + 32);
      if ( *(_QWORD ***)(a1 + 368) == v32 )
        v34 = sub_223B700(v33, a6, *(unsigned int *)(a1 + 296));
      else
        v34 = sub_223B700(v33, **v32, *((unsigned int *)*v32 + 2));
      v35 = *(__int64 **)(a1 + 24);
      v36 = *v35;
      if ( *(_QWORD *)(a1 + 480) )
      {
        LOBYTE(v55) = 0;
        si128.m128i_i8[8] = 0;
        LOBYTE(v41) = 0;
        v40 = _mm_load_si128(&v54);
        (*(void (__fastcall **)(__int64 *, __int64 *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, __int64, __int64, int, void *, __int64, __int64))(v36 + 656))(
          v52,
          v35,
          0,
          0,
          0,
          0,
          *(_QWORD *)(a1 + 472),
          *(_QWORD *)(a1 + 480),
          v40.m128i_i64[0],
          v40.m128i_i64[1],
          v41,
          ptr,
          si128.m128i_i64[0],
          si128.m128i_i64[1]);
        v44 = v52[0];
        sub_A0AE90(v52);
        *(_DWORD *)(*(_QWORD *)(a1 + 16) + 1780LL) = v44;
        v37 = sub_223B700(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 496), *(unsigned int *)(a1 + 504));
        v35 = *(__int64 **)(a1 + 24);
        v34 += *(_DWORD *)(a1 + 488) + ~v37;
        v36 = *v35;
      }
      (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, __int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(v36 + 688))(
        v35,
        *(unsigned int *)(*(_QWORD *)(a1 + 16) + 1780LL),
        v34,
        0,
        1,
        0,
        0,
        0,
        0,
        0,
        0);
      v24 = *(_QWORD *)(a1 + 24);
    }
  }
  else
  {
    v24 = *(_QWORD *)(a1 + 24);
  }
LABEL_22:
  v17 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, __int64, void **, _QWORD))(**(_QWORD **)(a1 + 8)
                                                                                               + 88LL))(
          *(_QWORD *)(a1 + 8),
          a6,
          a2 + 80,
          a2,
          v24,
          &ptr,
          *(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + 72LL));
LABEL_10:
  if ( v49 != &v51 )
    operator delete(v49);
  return v17;
}
