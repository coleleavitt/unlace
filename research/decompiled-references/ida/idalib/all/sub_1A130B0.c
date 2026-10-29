__int64 __fastcall sub_1A130B0(__int64 *a1, unsigned __int64 a2, __int64 a3, __m128 a4, __m128 a5)
{
  unsigned int v8; // r13d
  __int64 result; // rax
  unsigned int v10; // edi
  __int64 v11; // rsi
  __int64 v12; // rdx
  void **p_ptr; // rsi
  __m128i si128; // xmm0
  unsigned __int8 v15; // cl
  void **v16; // r15
  size_t v17; // rbx
  _QWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // r8
  __int64 v23; // r9
  void *v24; // rax
  _QWORD *v25; // rax
  _BYTE *v26; // [rsp+10h] [rbp-128h]
  signed __int64 v27; // [rsp+18h] [rbp-120h]
  _QWORD v28[2]; // [rsp+20h] [rbp-118h] BYREF
  void *ptr; // [rsp+30h] [rbp-108h] BYREF
  size_t n[2]; // [rsp+38h] [rbp-100h]
  _BYTE v31[40]; // [rsp+48h] [rbp-F0h] BYREF
  _QWORD v32[2]; // [rsp+70h] [rbp-C8h] BYREF
  void *v33; // [rsp+80h] [rbp-B8h]
  unsigned __int8 *v34; // [rsp+90h] [rbp-A8h] BYREF
  char v35; // [rsp+E8h] [rbp-50h]
  unsigned int v36; // [rsp+F0h] [rbp-48h]
  char v37; // [rsp+F4h] [rbp-44h]

  v8 = sub_EEB7E0(a2, a2, *(double *)a4.m128_u64);
  result = sub_1915F20(a1, a2, a3, 1, a4, a5);
  if ( result == 1 )
    return result;
  if ( *(_BYTE *)(a3 + 12) )
  {
LABEL_3:
    *(_BYTE *)(a3 + 12) = 1;
    return result;
  }
  v10 = *(_DWORD *)(a3 + 8);
  v11 = *(_QWORD *)a3;
  v12 = 1LL << ((unsigned __int8)v10 - 1);
  if ( v10 > 0x40 )
  {
    if ( (*(_QWORD *)(v11 + 8LL * ((v10 - 1) >> 6)) & v12) == 0 )
      goto LABEL_3;
  }
  else if ( (v11 & v12) == 0 )
  {
    goto LABEL_3;
  }
  sub_168B9F0((__int64)v32, a1 + 1, v8, 0xBFAu, 0);
  ptr = v31;
  p_ptr = &ptr;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8CF0);
  v15 = *(_BYTE *)(a3 + 12) ^ 1;
  *(__m128i *)n = si128;
  sub_220BA90(a3, (unsigned int)&ptr, 10, v15, 0, 1, 0);
  v16 = (void **)ptr;
  v17 = n[0];
  v26 = v28;
  if ( (char *)ptr + n[0] && !ptr )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( n[0] > 0xF )
  {
    if ( (n[0] & 0x8000000000000000LL) != 0LL )
      std::__throw_length_error("basic_string::_M_create");
    v18 = (_QWORD *)operator new(n[0] + 1);
    v28[0] = v17;
    v26 = v18;
    goto LABEL_22;
  }
  if ( n[0] != 1 )
  {
    v18 = v28;
    if ( !n[0] )
      goto LABEL_12;
LABEL_22:
    p_ptr = v16;
    memcpy(v18, v16, v17);
    v18 = v26;
    goto LABEL_12;
  }
  LOBYTE(v28[0]) = *(_BYTE *)ptr;
  v18 = v28;
LABEL_12:
  v27 = v17;
  *((_BYTE *)v18 + v17) = 0;
  if ( ptr != v31 )
    free(ptr);
  if ( v35 )
  {
    p_ptr = (void **)v26;
    sub_AEC220(&v34, v26, v17);
  }
  else if ( v37 )
  {
    v21 = sub_168B9E0(v32);
    v24 = v33;
    if ( v33 )
      v24 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v33 + 32LL))(v33);
    ptr = v24;
    v25 = sub_1587BC0(v21, (__int64 *)&ptr, v19, v20, v22, v23);
    p_ptr = (void **)v26;
    sub_AEC220((unsigned __int8 **)(*v25 + 32LL * v36 + 8), v26, v27);
  }
  ptr = (void *)sub_EEC8C0(a2, (__int64)p_ptr, *(double *)si128.m128i_i64);
  sub_1587DB0((__int64)v32, (__int64 *)&ptr);
  if ( v26 != (_BYTE *)v28 )
    operator delete(v26);
  sub_15F7200(v32);
  return 1;
}
