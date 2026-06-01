__int64 __fastcall sub_9C87D0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  _QWORD *v6; // rdi
  __int64 v7; // rbp
  __int64 (*v8)(void); // rax
  _QWORD **v9; // rdi
  __int64 (*v10)(void); // rdx
  char v11; // al
  __int64 v12; // rax
  _QWORD *v13; // rdi
  unsigned __int8 **v14; // r13
  __int64 (__fastcall *v15)(__int64); // rax
  _QWORD **v16; // rdi
  __int64 (__fastcall *v17)(__int64); // rdx
  __m128i si128; // xmm0
  void **p_ptr; // rsi
  __int64 v20; // rdi
  void *v21; // rcx
  unsigned __int8 *v22; // r12
  _QWORD *v23; // rax
  _QWORD *v24; // rdi
  __int64 (*v25)(void); // rax
  _QWORD **v26; // rdi
  __int64 (*v27)(void); // rdx
  __int64 v29; // rax
  __int64 v30; // r14
  unsigned int v31; // eax
  void *v32; // r8
  size_t v33; // rcx
  _QWORD *v34; // rax
  void *v35; // rax
  _QWORD *v36; // rdi
  void *v37; // rax
  _QWORD *v38; // rdi
  void *src[2]; // [rsp+0h] [rbp-178h] BYREF
  _BYTE *v40; // [rsp+18h] [rbp-160h]
  size_t v41; // [rsp+20h] [rbp-158h]
  void *v42; // [rsp+28h] [rbp-150h]
  void *v43; // [rsp+30h] [rbp-148h]
  size_t v44; // [rsp+38h] [rbp-140h]
  _QWORD v45[2]; // [rsp+40h] [rbp-138h] BYREF
  void *v46; // [rsp+50h] [rbp-128h]
  unsigned __int8 *v47; // [rsp+58h] [rbp-120h]
  _QWORD v48[2]; // [rsp+60h] [rbp-118h] BYREF
  void *v49; // [rsp+70h] [rbp-108h] BYREF
  __int128 v50; // [rsp+78h] [rbp-100h]
  _BYTE v51[40]; // [rsp+88h] [rbp-F0h] BYREF
  void *ptr; // [rsp+B0h] [rbp-C8h] BYREF
  size_t n[2]; // [rsp+B8h] [rbp-C0h]
  _BYTE v54[40]; // [rsp+C8h] [rbp-B0h] BYREF
  unsigned __int8 *v55[17]; // [rsp+F0h] [rbp-88h] BYREF

  v5 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
  v6 = *(_QWORD **)(a1 + 24);
  v7 = v5;
  v8 = *(__int64 (**)(void))(*v6 + 16LL);
  if ( (char *)v8 == (char *)sub_8D7DB0 )
  {
    v9 = (_QWORD **)v6[3];
    v10 = (__int64 (*)(void))(*v9)[2];
    if ( v10 == v8 )
      v11 = (*(__int64 (__fastcall **)(_QWORD *))(*v9[3] + 16LL))(v9[3]);
    else
      v11 = v10();
  }
  else
  {
    v11 = v8();
  }
  if ( !v11 )
  {
    *(__m128i *)src = _mm_load_si128((const __m128i *)&xmmword_3C7E610);
    goto LABEL_6;
  }
  v29 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
  v30 = sub_6BB140(v29);
  v31 = sub_8124E0(v7);
  sub_C6CF40(v55, v30, v31, 2352);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
  p_ptr = &v49;
  v20 = a3;
  v40 = v51;
  v49 = v51;
  *(__m128i *)src = _mm_load_si128((const __m128i *)&xmmword_3C7E610);
  v50 = *(_OWORD *)src;
  sub_2572060(a3, &v49);
  v32 = v49;
  v43 = v45;
  v33 = v50;
  if ( v49 )
  {
    ptr = (void *)v50;
    if ( (unsigned __int64)v50 > 0xF )
    {
      v42 = v49;
      v41 = v50;
      v37 = (void *)std::string::_M_create();
      v33 = v41;
      v32 = v42;
      v43 = v37;
      v38 = v37;
      v45[0] = ptr;
      goto LABEL_43;
    }
  }
  else
  {
    if ( (_QWORD)v50 )
      goto LABEL_49;
    ptr = nullptr;
  }
  if ( (_QWORD)v50 != 1 )
  {
    if ( !(_QWORD)v50 )
    {
      v34 = v45;
      goto LABEL_28;
    }
    v38 = v45;
LABEL_43:
    memcpy(v38, v32, v33);
    v33 = (size_t)ptr;
    v34 = v43;
    goto LABEL_28;
  }
  LOBYTE(v45[0]) = *(_BYTE *)v49;
  v34 = v45;
LABEL_28:
  v44 = v33;
  *((_BYTE *)v34 + v33) = 0;
  if ( v49 != v40 )
    free(v49);
  sub_838D50(v55, v43, v44);
  sub_9B5660(v55, *(_QWORD *)(v7 + 8));
  if ( v43 != v45 )
    operator delete(v43, v45[0] + 1LL);
  sub_83BB20((__int64)v55);
LABEL_6:
  v12 = sub_A2E240(a1, v7, 2262, 0);
  v13 = *(_QWORD **)(a1 + 24);
  v14 = (unsigned __int8 **)v12;
  v15 = *(__int64 (__fastcall **)(__int64))(*v13 + 104LL);
  if ( v15 == sub_8D7E60 )
  {
    v16 = (_QWORD **)v13[3];
    v17 = (__int64 (__fastcall *)(__int64))(*v16)[13];
    if ( v17 == v15 )
      (*(void (__fastcall **)(_QWORD *))(*v16[3] + 104LL))(v16[3]);
    else
      ((void (__fastcall *)(_QWORD **, __int64))v17)(v16, v7);
  }
  else
  {
    ((void (__fastcall *)(_QWORD *, __int64))v15)(v13, v7);
  }
  si128 = _mm_load_si128((const __m128i *)src);
  p_ptr = &ptr;
  v20 = a3;
  ptr = v54;
  *(__m128i *)n = si128;
  sub_2572060(a3, &ptr);
  v21 = ptr;
  v46 = v48;
  v22 = (unsigned __int8 *)n[0];
  if ( !ptr && n[0] )
LABEL_49:
    sub_536ABE(v20, p_ptr);
  v55[0] = (unsigned __int8 *)n[0];
  if ( n[0] > 0xF )
  {
    src[0] = ptr;
    v35 = (void *)std::string::_M_create();
    v21 = src[0];
    v46 = v35;
    v36 = v35;
    v48[0] = v55[0];
  }
  else
  {
    if ( n[0] == 1 )
    {
      LOBYTE(v48[0]) = *(_BYTE *)ptr;
      v23 = v48;
      goto LABEL_14;
    }
    v23 = v48;
    if ( !n[0] )
      goto LABEL_14;
    v36 = v48;
  }
  memcpy(v36, v21, (size_t)v22);
  v22 = v55[0];
  v23 = v46;
LABEL_14:
  v47 = v22;
  v22[(_QWORD)v23] = 0;
  if ( ptr != v54 )
    free(ptr);
  if ( v14 )
  {
    sub_838D50(v14, v46, (size_t)v47);
    sub_9B5660(v14, *(_QWORD *)(v7 + 8));
  }
  if ( v46 != v48 )
    operator delete(v46, v48[0] + 1LL);
  v24 = *(_QWORD **)(a1 + 24);
  v25 = *(__int64 (**)(void))(*v24 + 32LL);
  if ( (char *)v25 != (char *)sub_8D7FC0 )
    return v25();
  v26 = (_QWORD **)v24[3];
  v27 = (__int64 (*)(void))(*v26)[4];
  if ( v27 == v25 )
  {
    v25 = *(__int64 (**)(void))(*v26[3] + 32LL);
    return v25();
  }
  return v27();
}

