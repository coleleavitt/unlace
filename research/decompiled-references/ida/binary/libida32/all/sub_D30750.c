__int64 __fastcall sub_D30750(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int v7; // eax
  unsigned int v8; // ebx
  const __m128i *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  unsigned int v15; // r14d
  __m128i si128; // xmm0
  int v17; // eax
  unsigned int v18; // edx
  char v19; // al
  void *v20; // rdi
  __int32 v21; // eax
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned __int64 v25; // r13
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  unsigned int v30; // eax
  void *v31; // rax
  __int64 v32; // [rsp-8h] [rbp-130h]
  __int64 v33; // [rsp+8h] [rbp-120h]
  void *v34[2]; // [rsp+10h] [rbp-118h] BYREF
  void *v35; // [rsp+20h] [rbp-108h]
  __int64 v36; // [rsp+28h] [rbp-100h]
  void *v37; // [rsp+30h] [rbp-F8h] BYREF
  int v38; // [rsp+38h] [rbp-F0h]
  void *v39; // [rsp+40h] [rbp-E8h] BYREF
  unsigned int v40; // [rsp+48h] [rbp-E0h]
  char v41; // [rsp+4Ch] [rbp-DCh]
  void *v42; // [rsp+50h] [rbp-D8h] BYREF
  unsigned int v43; // [rsp+58h] [rbp-D0h]
  char v44; // [rsp+5Ch] [rbp-CCh]
  void *ptr; // [rsp+60h] [rbp-C8h] BYREF
  signed __int64 v46; // [rsp+68h] [rbp-C0h]
  __int64 v47; // [rsp+70h] [rbp-B8h]
  _BYTE v48[40]; // [rsp+78h] [rbp-B0h] BYREF
  void *v49[2]; // [rsp+A0h] [rbp-88h] BYREF

  v7 = sub_DFDF30(a1);
  if ( !(_BYTE)v7 )
  {
    v8 = v7;
    if ( (unsigned __int8)sub_DA3FF0(a3) )
      return v8;
  }
  v38 = 0;
  v37 = nullptr;
  v9 = (const __m128i *)sub_CEA4F0(a3);
  v35 = (void *)sub_D21170((_QWORD *)a1, v9->m128i_u32[2], v10, v11, v12, v13);
  v36 = v14;
  v37 = v35;
  v38 = v14;
  v15 = v9->m128i_u32[2];
  LODWORD(v49[1]) = v15;
  *(__m128i *)v34 = _mm_loadu_si128(v9);
  if ( v15 > 0x40 )
  {
    sub_21E1730(v49, 1, 1);
  }
  else
  {
    v49[0] = &dword_0 + 1;
    sub_CD43C0((unsigned __int64 *)v49);
  }
  si128 = _mm_load_si128((const __m128i *)v34);
  v17 = (int)v49[1];
  v18 = v15 + 1;
  if ( LODWORD(v49[1]) <= 0x40 )
  {
    v23 = 0;
    if ( LODWORD(v49[1]) )
      v23 = (__int64)v49[0] << (64 - LOBYTE(v49[1])) >> (64 - LOBYTE(v49[1]));
    ptr = (void *)v23;
    *(__m128i *)v49 = si128;
    LODWORD(v46) = v17;
    v19 = sub_D2F490((__int64)v49, (__int64)&ptr, v18, &v37);
    if ( !a4 )
      goto LABEL_22;
  }
  else
  {
    ptr = v49[0];
    v34[0] = v49[0];
    *(__m128i *)v49 = si128;
    LODWORD(v46) = v17;
    v19 = sub_D2F490((__int64)v49, (__int64)&ptr, v18, &v37);
    if ( v34[0] )
    {
      v20 = v34[0];
      LOBYTE(v34[0]) = v19;
      operator delete[](v20);
      v19 = (char)v34[0];
    }
    if ( !a4 )
      goto LABEL_22;
  }
  if ( !v19 )
  {
LABEL_22:
    v8 = 1;
    v24 = sub_CEA4F0(a3);
    *(_QWORD *)v24 = v37;
    *(_DWORD *)(v24 + 8) = v38;
    return v8;
  }
  v21 = v9->m128i_i32[2];
  v41 = 0;
  v40 = 1;
  v39 = nullptr;
  sub_D27A40((__int64)v49, (__int64)v9, v21 + 1);
  sub_21E1BC0(v49);
  sub_BFCC40((__int64)&v39, (__int64 *)v49);
  if ( LODWORD(v49[1]) > 0x40 && v49[0] )
    operator delete[](v49[0]);
  v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)v8 )
  {
    v25 = sub_DFB220(*(_QWORD *)(a1 + 400));
    v26 = *(_QWORD *)(v25 + 8);
    v46 = 0;
    v47 = 32;
    v33 = v26;
    ptr = v48;
    LOBYTE(v34[0]) = v41;
    sub_21E2D00(v49, &v39);
    v44 = (char)v34[0];
    v43 = (unsigned int)v49[1];
    v42 = v49[0];
    sub_21E7D50((unsigned int)&v42, (unsigned int)&ptr, 10, 1, 0, 1, 1);
    v29 = v32;
    if ( v43 > 0x40 && v42 )
      operator delete[](v42);
    v30 = sub_BDCD00(v25, (__int64)&ptr, v29, v27, v28);
    sub_E0E4C0(v49, a1, v30, 2561);
    sub_AC84E0((unsigned __int8 **)v49, ptr, v46);
    sub_AC60B0((unsigned __int8 **)v49, v33, 8u);
    v31 = (void *)sub_EC8B80(v25);
    LOBYTE(v43) = 1;
    v42 = v31;
    sub_AC88D0((__int64 *)v49, (__int64 *)&v42);
    sub_AC6300((__int64)v49);
    if ( ptr != v48 )
      free(ptr);
  }
  else
  {
    v8 = sub_CD4D80(a1, a2, (__int64)&v39);
  }
  if ( v40 > 0x40 && v39 )
    operator delete[](v39);
  return v8;
}

