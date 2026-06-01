__int64 __fastcall sub_11FFA70(__int64 a1, __int64 *a2, __int64 a3)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rbx
  _QWORD *v7; // r13
  __int64 v9; // r15
  __int64 v10; // rax
  const char **v11; // rax
  size_t v12; // r13
  const char *v13; // rbx
  __int64 v14; // rax
  __int64 (__fastcall *v15)(__int64 *, void *, __int64); // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __m128i v21; // xmm1
  __int64 v22; // rax
  __int64 (__fastcall *v23)(__int64 *, void *, __int64); // r13
  __int64 v24; // r12
  __int64 v25; // rcx
  __int64 (__fastcall *v26)(__int64 *, void *, __int64); // [rsp+10h] [rbp-198h]
  __int64 v27; // [rsp+10h] [rbp-198h]
  __int64 v28; // [rsp+10h] [rbp-198h]
  __int64 v29; // [rsp+10h] [rbp-198h]
  _QWORD v30[2]; // [rsp+20h] [rbp-188h] BYREF
  const char *v31; // [rsp+30h] [rbp-178h]
  size_t v32; // [rsp+38h] [rbp-170h]
  __int16 v33; // [rsp+40h] [rbp-168h]
  void *ptr; // [rsp+50h] [rbp-158h] BYREF
  __m128i si128; // [rsp+58h] [rbp-150h]
  _BYTE v36[320]; // [rsp+68h] [rbp-140h] BYREF

  LODWORD(ptr) = 2317;
  v4 = sub_21B6DA0(a2, &ptr, 1);
  v5 = a2[1];
  v6 = (_QWORD *)(v5 + 8LL * (unsigned int)v4);
  v7 = (_QWORD *)(v5 + 8 * HIDWORD(v4));
  if ( v6 != v7 )
  {
    while ( !*v6 || !(unsigned __int8)sub_21B9810(*v6, 2317) )
    {
      if ( v7 == ++v6 )
        return (*(__int64 (__fastcall **)(_QWORD, __int64 *, __int64, __int64))(**(_QWORD **)(a1 + 24) + 568LL))(
                 *(_QWORD *)(a1 + 24),
                 a2,
                 a3,
                 4);
    }
    if ( v7 != v6 )
    {
      do
      {
        v9 = *v6;
        v10 = *(_QWORD *)(*v6 + 16LL);
        if ( !v10 )
          v10 = *v6;
        ++v6;
        *(_BYTE *)(v10 + 44) |= 1u;
        if ( v6 == v7 )
          break;
        while ( !*v6 || !(unsigned __int8)sub_21B9810(*v6, 2317) )
        {
          if ( v7 == ++v6 )
            goto LABEL_13;
        }
      }
      while ( v7 != v6 );
LABEL_13:
      v11 = *(const char ***)(v9 + 48);
      v12 = 0;
      v13 = *v11;
      if ( *v11 )
        v12 = strlen(*v11);
      v30[0] = "-mcode-object-version=";
      v14 = *a2;
      ptr = v36;
      v15 = *(__int64 (__fastcall **)(__int64 *, void *, __int64))(v14 + 16);
      v33 = 1283;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
      v26 = v15;
      v31 = v13;
      v32 = v12;
      sub_22538C0(v30, &ptr);
      v16 = v26(a2, ptr, si128.m128i_i64[0]);
      if ( ptr != v36 )
      {
        v27 = v16;
        free(ptr);
        v16 = v27;
      }
      v17 = *(unsigned int *)(a3 + 8);
      if ( v17 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
      {
        v29 = v16;
        sub_2237220(a3, a3 + 16, v17 + 1, 8);
        v17 = *(unsigned int *)(a3 + 8);
        v16 = v29;
      }
      *(_QWORD *)(*(_QWORD *)a3 + 8 * v17) = v16;
      v18 = *a2;
      ++*(_DWORD *)(a3 + 8);
      v19 = (*(__int64 (__fastcall **)(__int64 *, char *, __int64))(v18 + 16))(a2, "-mllvm", 6);
      v20 = *(unsigned int *)(a3 + 8);
      if ( v20 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
      {
        v28 = v19;
        sub_2237220(a3, a3 + 16, v20 + 1, 8);
        v20 = *(unsigned int *)(a3 + 8);
        v19 = v28;
      }
      v21 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
      *(_QWORD *)(*(_QWORD *)a3 + 8 * v20) = v19;
      ++*(_DWORD *)(a3 + 8);
      v33 = 1283;
      v30[0] = "--amdhsa-code-object-version=";
      v22 = *a2;
      v31 = v13;
      v32 = v12;
      ptr = v36;
      v23 = *(__int64 (__fastcall **)(__int64 *, void *, __int64))(v22 + 16);
      si128 = v21;
      sub_22538C0(v30, &ptr);
      v24 = v23(a2, ptr, si128.m128i_i64[0]);
      if ( ptr != v36 )
        free(ptr);
      v25 = *(unsigned int *)(a3 + 8);
      if ( v25 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
      {
        sub_2237220(a3, a3 + 16, v25 + 1, 8);
        v25 = *(unsigned int *)(a3 + 8);
      }
      *(_QWORD *)(*(_QWORD *)a3 + 8 * v25) = v24;
      ++*(_DWORD *)(a3 + 8);
    }
  }
  return (*(__int64 (__fastcall **)(_QWORD, __int64 *, __int64, __int64))(**(_QWORD **)(a1 + 24) + 568LL))(
           *(_QWORD *)(a1 + 24),
           a2,
           a3,
           4);
}
