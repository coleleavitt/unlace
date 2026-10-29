__int64 __fastcall sub_D372E0(__int64 a1, __int64 a2, __int64 a3, const __m128i *a4, const __m128i *a5, __int64 a6)
{
  unsigned int v6; // r15d
  unsigned int v10; // esi
  unsigned __int64 v11; // rax
  __m128i v12; // xmm0
  __m128i v13; // xmm1
  __int32 v14; // edx
  char v15; // al
  __int64 v16; // rdi
  char v17; // r15
  unsigned int v18; // ebp
  unsigned __int64 v20; // r14
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  unsigned int v25; // eax
  void *v26; // rax
  __int64 v27; // [rsp-8h] [rbp-130h]
  __int64 v29; // [rsp+10h] [rbp-118h]
  char v30; // [rsp+1Fh] [rbp-109h]
  __m128i v31; // [rsp+30h] [rbp-F8h] BYREF
  void *v32; // [rsp+40h] [rbp-E8h] BYREF
  unsigned int v33; // [rsp+48h] [rbp-E0h]
  char v34; // [rsp+4Ch] [rbp-DCh]
  void *v35; // [rsp+50h] [rbp-D8h] BYREF
  unsigned int v36; // [rsp+58h] [rbp-D0h]
  char v37; // [rsp+5Ch] [rbp-CCh]
  void *ptr[2]; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v39; // [rsp+70h] [rbp-B8h]
  _BYTE v40[40]; // [rsp+78h] [rbp-B0h] BYREF
  _OWORD v41[8]; // [rsp+A0h] [rbp-88h] BYREF

  v6 = a3;
  v10 = a4->m128i_u32[2];
  v31.m128i_i64[0] = 0;
  v31.m128i_i32[2] = 0;
  v11 = sub_D21170((_QWORD *)a1, v10, a3, (__int64)a4, (__int64)a5, a6);
  v12 = _mm_loadu_si128(a4);
  v31.m128i_i64[0] = v11;
  v13 = _mm_loadu_si128(a5);
  *(__m128i *)ptr = v12;
  v41[0] = v13;
  v31.m128i_i32[2] = v14;
  v15 = sub_D37130((__int64)ptr, (__int64)v41, v6, (void **)&v31);
  v16 = *(_QWORD *)(a1 + 176);
  if ( v15 )
  {
    *(__m128i *)sub_DFD980(v16, 16) = _mm_load_si128(&v31);
    sub_D27A40((__int64)ptr, (__int64)a5, v6);
    sub_D27A40((__int64)&v35, (__int64)a4, v6);
    v17 = v37;
    sub_21E5FA0(v41, &v35, ptr);
    v34 = v17;
    v33 = DWORD2(v41[0]);
    v32 = *(void **)&v41[0];
    if ( v36 > 0x40 && v35 )
      operator delete[](v35);
    if ( LODWORD(ptr[1]) > 0x40 && ptr[0] )
      operator delete[](ptr[0]);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24)) )
    {
      v20 = sub_DFB220(*(_QWORD *)(a1 + 400));
      v21 = *(_QWORD *)(v20 + 8);
      ptr[1] = nullptr;
      v39 = 32;
      v29 = v21;
      ptr[0] = v40;
      v30 = v34;
      sub_21E2D00(v41, &v32);
      v37 = v30;
      v36 = DWORD2(v41[0]);
      v35 = *(void **)&v41[0];
      sub_21E7D50((unsigned int)&v35, (unsigned int)ptr, 10, 1, 0, 1, 1);
      v24 = v27;
      if ( v36 > 0x40 && v35 )
        operator delete[](v35);
      v25 = sub_BDCD00(v20, (__int64)ptr, v24, v22, v23);
      sub_E0E4C0(v41, a1, v25, 2561);
      sub_AC84E0((unsigned __int8 **)v41, (_BYTE *)ptr[0], (signed __int64)ptr[1]);
      sub_AC60B0((unsigned __int8 **)v41, v29, 8u);
      v26 = (void *)sub_EC8B80(v20);
      LOBYTE(v36) = 1;
      v35 = v26;
      sub_AC88D0((__int64 *)v41, (__int64 *)&v35);
      sub_AC6300((__int64)v41);
      if ( ptr[0] != v40 )
        free(ptr[0]);
    }
    v18 = sub_CD4D80(a1, a2, (__int64)&v32);
    if ( !(_BYTE)v18 )
      sub_D01480(*(_QWORD *)(a1 + 176));
    if ( v33 > 0x40 && v32 )
      operator delete[](v32);
  }
  else
  {
    v18 = 1;
    *(__m128i *)sub_DFD980(v16, 16) = _mm_load_si128(&v31);
  }
  return v18;
}

