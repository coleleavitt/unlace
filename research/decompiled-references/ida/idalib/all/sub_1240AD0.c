__int64 __fastcall sub_1240AD0(_QWORD *a1, unsigned __int8 *a2, unsigned __int8 *a3, __int64 a4, __int64 a5)
{
  __int64 *v6; // rbp
  __int64 v7; // rax
  __int64 (__fastcall *v8)(__int64 *, void *, __int64); // r12
  __int64 v9; // r12
  __int64 v11; // rax
  unsigned __int64 *v12; // rdi
  _QWORD v13[4]; // [rsp+0h] [rbp-198h] BYREF
  __int16 v14; // [rsp+20h] [rbp-178h]
  _QWORD v15[4]; // [rsp+30h] [rbp-168h] BYREF
  __int16 v16; // [rsp+50h] [rbp-148h]
  void *ptr; // [rsp+60h] [rbp-138h] BYREF
  __m128i si128; // [rsp+68h] [rbp-130h] BYREF
  _BYTE v19[288]; // [rsp+78h] [rbp-120h] BYREF

  if ( *(_DWORD *)(*a1 + 20LL) )
  {
    v6 = (__int64 *)a1[10];
    v13[0] = a2;
    v14 = 773;
    v13[2] = ".";
    v15[0] = v13;
    v15[2] = "bc";
    v7 = *v6;
    v13[1] = a3;
    v15[3] = a5;
    v16 = 1282;
    ptr = v19;
    v8 = *(__int64 (__fastcall **)(__int64 *, void *, __int64))(v7 + 16);
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
    sub_22538C0(v15, &ptr);
    v9 = v8(v6, ptr, si128.m128i_i64[0]);
    if ( ptr != v19 )
      free(ptr);
    return v9;
  }
  sub_10DB4E0(&ptr, (__int64 *)*a1, a2, a3, a4, a5);
  v9 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64))(*(_QWORD *)a1[10] + 16LL))(a1[10], ptr, si128.m128i_i64[0]);
  v11 = *((unsigned int *)a1 + 64);
  if ( v11 + 1 > (unsigned __int64)*((unsigned int *)a1 + 65) )
  {
    sub_2237220(a1 + 31, a1 + 33, v11 + 1, 8);
    v11 = *((unsigned int *)a1 + 64);
  }
  *(_QWORD *)(a1[31] + 8 * v11) = v9;
  v12 = (unsigned __int64 *)ptr;
  ++*((_DWORD *)a1 + 64);
  if ( v12 == &si128.m128i_u64[1] )
    return v9;
  operator delete(v12);
  return v9;
}
