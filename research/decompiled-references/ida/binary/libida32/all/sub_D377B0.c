__int64 __fastcall sub_D377B0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int v7; // eax
  unsigned int v8; // r15d
  const __m128i *v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  void *v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rdx
  unsigned int v17; // r13d
  __m128i si128; // xmm0
  int v19; // eax
  unsigned int v20; // edx
  char v21; // al
  void *v22; // rdi
  __int32 v23; // eax
  __int64 v25; // rcx
  __int64 v26; // rax
  unsigned __int64 v27; // r14
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdx
  unsigned int v32; // eax
  void *v33; // rax
  __int64 v34; // [rsp-8h] [rbp-130h]
  __int64 v35; // [rsp+8h] [rbp-120h]
  void *v36[2]; // [rsp+10h] [rbp-118h] BYREF
  void *v37; // [rsp+20h] [rbp-108h]
  __int64 v38; // [rsp+28h] [rbp-100h]
  void *v39; // [rsp+30h] [rbp-F8h] BYREF
  int v40; // [rsp+38h] [rbp-F0h]
  void *v41; // [rsp+40h] [rbp-E8h] BYREF
  unsigned int v42; // [rsp+48h] [rbp-E0h]
  char v43; // [rsp+4Ch] [rbp-DCh]
  void *v44; // [rsp+50h] [rbp-D8h] BYREF
  unsigned int v45; // [rsp+58h] [rbp-D0h]
  char v46; // [rsp+5Ch] [rbp-CCh]
  void *ptr; // [rsp+60h] [rbp-C8h] BYREF
  signed __int64 v48; // [rsp+68h] [rbp-C0h]
  __int64 v49; // [rsp+70h] [rbp-B8h]
  _BYTE v50[40]; // [rsp+78h] [rbp-B0h] BYREF
  void *v51[2]; // [rsp+A0h] [rbp-88h] BYREF

  v7 = sub_DFDF30(a1);
  if ( !(_BYTE)v7 )
  {
    v8 = v7;
    if ( (unsigned __int8)sub_DA3FF0(a3) )
      return v8;
  }
  v40 = 0;
  v39 = nullptr;
  v9 = (const __m128i *)sub_CEA4F0(a3);
  v14 = (void *)sub_D21170((_QWORD *)a1, v9->m128i_u32[2], v10, v11, v12, v13);
  v15 = *(_QWORD *)(a1 + 176);
  v37 = v14;
  v38 = v16;
  v39 = v14;
  v40 = v16;
  *(__m128i *)sub_DFD980(v15, 16) = _mm_loadu_si128(v9);
  v17 = v9->m128i_u32[2];
  LODWORD(v51[1]) = v17;
  *(__m128i *)v36 = _mm_loadu_si128(v9);
  if ( v17 > 0x40 )
  {
    sub_21E1730(v51, 1, 1);
  }
  else
  {
    v51[0] = &dword_0 + 1;
    sub_CD43C0((unsigned __int64 *)v51);
  }
  si128 = _mm_load_si128((const __m128i *)v36);
  v19 = (int)v51[1];
  v20 = v17 + 1;
  if ( LODWORD(v51[1]) <= 0x40 )
  {
    v25 = 0;
    if ( LODWORD(v51[1]) )
      v25 = (__int64)v51[0] << (64 - LOBYTE(v51[1])) >> (64 - LOBYTE(v51[1]));
    ptr = (void *)v25;
    *(__m128i *)v51 = si128;
    LODWORD(v48) = v19;
    v21 = sub_D375D0((__int64)v51, (__int64)&ptr, v20, &v39);
    if ( !a4 )
      goto LABEL_22;
  }
  else
  {
    ptr = v51[0];
    v36[0] = v51[0];
    *(__m128i *)v51 = si128;
    LODWORD(v48) = v19;
    v21 = sub_D375D0((__int64)v51, (__int64)&ptr, v20, &v39);
    if ( v36[0] )
    {
      v22 = v36[0];
      LOBYTE(v36[0]) = v21;
      operator delete[](v22);
      v21 = (char)v36[0];
    }
    if ( !a4 )
      goto LABEL_22;
  }
  if ( !v21 )
  {
LABEL_22:
    v8 = 1;
    v26 = sub_CEA4F0(a3);
    *(_QWORD *)v26 = v39;
    *(_DWORD *)(v26 + 8) = v40;
    return v8;
  }
  v23 = v9->m128i_i32[2];
  v43 = 0;
  v42 = 1;
  v41 = nullptr;
  sub_D27A40((__int64)v51, (__int64)v9, v23 + 1);
  sub_21E1C10(v51);
  sub_BFCC40((__int64)&v41, (__int64 *)v51);
  if ( LODWORD(v51[1]) > 0x40 && v51[0] )
    operator delete[](v51[0]);
  v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)v8 )
  {
    v27 = sub_DFB220(*(_QWORD *)(a1 + 400));
    v28 = *(_QWORD *)(v27 + 8);
    v48 = 0;
    v49 = 32;
    v35 = v28;
    ptr = v50;
    LOBYTE(v36[0]) = v43;
    sub_21E2D00(v51, &v41);
    v46 = (char)v36[0];
    v45 = (unsigned int)v51[1];
    v44 = v51[0];
    sub_21E7D50((unsigned int)&v44, (unsigned int)&ptr, 10, 1, 0, 1, 1);
    v31 = v34;
    if ( v45 > 0x40 && v44 )
      operator delete[](v44);
    v32 = sub_BDCD00(v27, (__int64)&ptr, v31, v29, v30);
    sub_E0E4C0(v51, a1, v32, 2561);
    sub_AC84E0((unsigned __int8 **)v51, ptr, v48);
    sub_AC60B0((unsigned __int8 **)v51, v35, 8u);
    v33 = (void *)sub_EC8B80(v27);
    LOBYTE(v45) = 1;
    v44 = v33;
    sub_AC88D0((__int64 *)v51, (__int64 *)&v44);
    sub_AC6300((__int64)v51);
    if ( ptr != v50 )
      free(ptr);
  }
  else
  {
    v8 = sub_CD4D80(a1, a2, (__int64)&v41);
  }
  if ( v42 > 0x40 && v41 )
    operator delete[](v41);
  return v8;
}

