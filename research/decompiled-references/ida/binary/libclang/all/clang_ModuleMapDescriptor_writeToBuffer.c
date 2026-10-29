__int64 __fastcall clang_ModuleMapDescriptor_writeToBuffer(
        _QWORD *a1,
        __int64 a2,
        void **a3,
        _DWORD *a4,
        __int64 a5,
        __int64 a6)
{
  __m128i *v9; // rdx
  __m128i v10; // xmm0
  __int64 **v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __m128i *v14; // rdx
  __int64 v15; // rax
  _WORD *v16; // rdx
  __m128i *v17; // rax
  __m128i *v18; // rdx
  __m128i *v19; // rax
  __m128i v20; // xmm0
  __m128i *v21; // rax
  size_t v22; // r15
  void *v23; // rbx
  void *v24; // rax
  __int64 *v26; // [rsp+0h] [rbp-198h] BYREF
  int v27; // [rsp+8h] [rbp-190h]
  __int128 v28; // [rsp+10h] [rbp-188h]
  __m128i *v29; // [rsp+20h] [rbp-178h]
  char v30; // [rsp+28h] [rbp-170h]
  int v31; // [rsp+2Ch] [rbp-16Ch]
  void **p_ptr; // [rsp+30h] [rbp-168h]
  void *ptr; // [rsp+40h] [rbp-158h] BYREF
  __m128i si128; // [rsp+48h] [rbp-150h]
  _BYTE v35[320]; // [rsp+58h] [rbp-140h] BYREF

  if ( a4 == nullptr || a3 == nullptr || !a1 )
    return 3;
  p_ptr = &ptr;
  v26 = (__int64 *)&off_49DA340;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E210);
  ptr = v35;
  v27 = 2;
  v30 = 0;
  v31 = 1;
  v29 = nullptr;
  v28 = 0;
  ((void (__fastcall *)(__int64 **, _QWORD, _QWORD, _QWORD, __int64, __int64))sub_2623850)(&v26, 0, 0, 0, a5, a6);
  v9 = v29;
  if ( *((_QWORD *)&v28 + 1) - (_QWORD)v29 <= 0x10u )
  {
    v11 = (__int64 **)sub_26240F0(&v26, "framework module ", 17);
  }
  else
  {
    v10 = _mm_load_si128((const __m128i *)&xmmword_3C7E220);
    v29[1].m128i_i8[0] = 32;
    v11 = &v26;
    *v9 = v10;
    v29 = (__m128i *)((char *)v29 + 17);
  }
  v12 = sub_26240F0(v11, *a1, a1[1]);
  v13 = *(_QWORD *)(v12 + 32);
  if ( (unsigned __int64)(*(_QWORD *)(v12 + 24) - v13) <= 2 )
  {
    sub_26240F0(v12, " {\n", 3);
  }
  else
  {
    *(_BYTE *)(v13 + 2) = 10;
    *(_WORD *)v13 = 31520;
    *(_QWORD *)(v12 + 32) += 3LL;
  }
  v14 = v29;
  if ( *((_QWORD *)&v28 + 1) - (_QWORD)v29 <= 0x12u )
  {
    sub_26240F0(&v26, "  umbrella header \"", 19);
  }
  else
  {
    *v29 = _mm_load_si128((const __m128i *)&xmmword_3C7E230);
    *(__int32 *)((char *)&v14->m128i_i32[3] + 3) = 572551781;
    v29 = (__m128i *)((char *)v29 + 19);
  }
  v15 = sub_2623A70(&v26, a1[4], a1[5], 0);
  v16 = *(_WORD **)(v15 + 32);
  if ( *(_QWORD *)(v15 + 24) - (_QWORD)v16 <= 1u )
  {
    sub_26240F0(v15, "\"\n", 2);
  }
  else
  {
    *v16 = 2594;
    *(_QWORD *)(v15 + 32) += 2LL;
  }
  v17 = v29;
  if ( (unsigned __int64)v29 >= *((_QWORD *)&v28 + 1) )
  {
    sub_26239D0(&v26, 10);
  }
  else
  {
    v29 = (__m128i *)((char *)v29 + 1);
    v17->m128i_i8[0] = 10;
  }
  v18 = v29;
  if ( *((_QWORD *)&v28 + 1) - (_QWORD)v29 <= 0xAu )
  {
    sub_26240F0(&v26, "  export *\n", 11);
    v19 = v29;
  }
  else
  {
    v29->m128i_i64[0] = 0x74726F7078652020LL;
    *(__int32 *)((char *)&v18->m128i_i32[1] + 3) = 170532980;
    v19 = (__m128i *)((char *)&v29->m128i_u64[1] + 3);
    v29 = (__m128i *)((char *)v29 + 11);
  }
  if ( *((_QWORD *)&v28 + 1) - (_QWORD)v19 <= 0x17u )
  {
    sub_26240F0(&v26, "  module * { export * }\n", 24);
    v21 = v29;
  }
  else
  {
    v20 = _mm_load_si128((const __m128i *)&xmmword_3C7E240);
    v19[1].m128i_i64[0] = 0xA7D202A2074726FLL;
    *v19 = v20;
    v21 = (__m128i *)((char *)v29 + 24);
    v29 = (__m128i *)((char *)v29 + 24);
  }
  if ( *((_QWORD *)&v28 + 1) - (_QWORD)v21 <= 1u )
  {
    sub_26240F0(&v26, "}\n", 2);
  }
  else
  {
    v21->m128i_i16[0] = 2685;
    v29 = (__m128i *)((char *)v29 + 2);
  }
  v22 = (size_t)p_ptr[1];
  v23 = *p_ptr;
  v24 = malloc(v22);
  if ( !v24 && (v22 || (v24 = malloc(1u)) == nullptr) )
    sub_25AA9F0("Allocation failed");
  *a3 = v24;
  *a4 = v22;
  memcpy(*a3, v23, v22);
  v26 = &qword_4A6EA70[2];
  sub_2623770(&v26);
  if ( ptr != v35 )
    free(ptr);
  return 0;
}

