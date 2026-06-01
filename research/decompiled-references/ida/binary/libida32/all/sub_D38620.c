__int64 __fastcall sub_D38620(__int64 a1, __int64 a2, __int64 a3, const __m128i *a4, const __m128i *a5, __int64 a6)
{
  unsigned int v8; // r13d
  unsigned int v10; // esi
  unsigned __int64 v11; // rax
  __m128i v12; // xmm0
  __m128i v13; // xmm1
  __int32 v14; // edx
  char v15; // al
  __int64 v16; // rdi
  unsigned int v17; // ebp
  unsigned __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // r14
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  unsigned int v25; // eax
  void *v26; // rax
  __int64 v27; // [rsp-8h] [rbp-120h]
  char v29; // [rsp+8h] [rbp-110h]
  __m128i v30; // [rsp+20h] [rbp-F8h] BYREF
  void *v31; // [rsp+30h] [rbp-E8h] BYREF
  unsigned int v32; // [rsp+38h] [rbp-E0h]
  char v33; // [rsp+3Ch] [rbp-DCh]
  void *v34; // [rsp+40h] [rbp-D8h] BYREF
  unsigned int v35; // [rsp+48h] [rbp-D0h]
  char v36; // [rsp+4Ch] [rbp-CCh]
  void *ptr[2]; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v38; // [rsp+60h] [rbp-B8h]
  _BYTE v39[40]; // [rsp+68h] [rbp-B0h] BYREF
  void *v40[2]; // [rsp+90h] [rbp-88h] BYREF

  v8 = a3;
  v10 = a4->m128i_u32[2];
  v30.m128i_i64[0] = 0;
  v30.m128i_i32[2] = 0;
  v11 = sub_D21170((_QWORD *)a1, v10, a3, (__int64)a4, (__int64)a5, a6);
  v12 = _mm_loadu_si128(a4);
  v30.m128i_i64[0] = v11;
  v13 = _mm_loadu_si128(a5);
  *(__m128i *)ptr = v12;
  *(__m128i *)v40 = v13;
  v30.m128i_i32[2] = v14;
  v15 = sub_D375D0((__int64)ptr, (__int64)v40, v8, (void **)&v30);
  v16 = *(_QWORD *)(a1 + 176);
  if ( v15 )
  {
    *(__m128i *)sub_DFD980(v16, 16) = _mm_load_si128(&v30);
    sub_D27A40((__int64)v40, (__int64)a5, v8);
    sub_D27A40((__int64)ptr, (__int64)a4, v8);
    sub_CD4BB0((__int64)&v31, (__int64 *)ptr, (__int64)v40);
    if ( LODWORD(ptr[1]) > 0x40 && ptr[0] )
      operator delete[](ptr[0]);
    if ( LODWORD(v40[1]) > 0x40 && v40[0] )
      operator delete[](v40[0]);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24)) )
    {
      v19 = sub_DFB220(*(_QWORD *)(a1 + 400));
      v20 = *(_QWORD *)(v19 + 8);
      ptr[1] = nullptr;
      v38 = 32;
      v21 = v20;
      ptr[0] = v39;
      v29 = v33;
      sub_21E2D00(v40, &v31);
      v36 = v29;
      v35 = (unsigned int)v40[1];
      v34 = v40[0];
      sub_21E7D50((unsigned int)&v34, (unsigned int)ptr, 10, 1, 0, 1, 1);
      v24 = v27;
      if ( v35 > 0x40 && v34 )
        operator delete[](v34);
      v25 = sub_BDCD00(v19, (__int64)ptr, v24, v22, v23);
      sub_E0E4C0(v40, a1, v25, 2561);
      sub_AC84E0((unsigned __int8 **)v40, (_BYTE *)ptr[0], (signed __int64)ptr[1]);
      sub_AC60B0((unsigned __int8 **)v40, v21, 8u);
      v26 = (void *)sub_EC8B80(v19);
      LOBYTE(v35) = 1;
      v34 = v26;
      sub_AC88D0((__int64 *)v40, (__int64 *)&v34);
      sub_AC6300((__int64)v40);
      if ( ptr[0] != v39 )
        free(ptr[0]);
    }
    v17 = sub_CD4D80(a1, a2, (__int64)&v31);
    if ( !(_BYTE)v17 )
      sub_D01480(*(_QWORD *)(a1 + 176));
    if ( v32 > 0x40 && v31 )
      operator delete[](v31);
  }
  else
  {
    v17 = 1;
    *(__m128i *)sub_DFD980(v16, 16) = _mm_load_si128(&v30);
  }
  return v17;
}

