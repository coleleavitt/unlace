unsigned __int64 __fastcall sub_1B09C50(__int64 *a1, unsigned int a2, unsigned int a3, int a4, int a5, unsigned int a6)
{
  _QWORD *v10; // rax
  __int64 v12; // r14
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  void *v15[2]; // [rsp+0h] [rbp-148h] BYREF
  __int64 v16; // [rsp+10h] [rbp-138h] BYREF
  __m128i v17; // [rsp+20h] [rbp-128h] BYREF
  __int64 v18; // [rsp+30h] [rbp-118h] BYREF
  void *ptr; // [rsp+40h] [rbp-108h] BYREF
  __m128i si128; // [rsp+48h] [rbp-100h] BYREF
  __int64 v21; // [rsp+58h] [rbp-F0h]
  int v22; // [rsp+60h] [rbp-E8h]
  _BYTE v23[200]; // [rsp+80h] [rbp-C8h] BYREF

  if ( a2 == 10 || a2 - 4 <= 2 )
  {
    v21 = 0x800000004LL;
    ptr = &si128.m128i_u64[1];
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AAB20);
    v22 = 9;
    if ( *(_DWORD *)(sub_168B6E0((__int64)a1) + 64) <= 0x32u )
    {
      v13 = si128.m128i_u32[0];
      v14 = si128.m128i_u32[0] + 1LL;
      if ( v14 > si128.m128i_u32[1] )
      {
        sub_2237220(&ptr, &si128.m128i_u64[1], v14, 4);
        v13 = si128.m128i_u32[0];
      }
      *((_DWORD *)ptr + v13) = 7;
      ++si128.m128i_i32[0];
    }
    sub_168B9F0((__int64)v23, a1, a3, 0x1217u, 0);
    sub_1AEE640(v15, 22, 0, 0xAu, ptr, si128.m128i_u32[0]);
    v12 = sub_1682AF0((__int64)v23, (__int64)v15);
    sub_1AF81E0(&v17, 0x6Cu);
    sub_1682AF0(v12, (__int64)&v17);
    if ( (__int64 *)v17.m128i_i64[0] != &v18 )
      operator delete((void *)v17.m128i_i64[0]);
    if ( v15[0] != &v16 )
      operator delete(v15[0]);
    sub_15F7200(v23);
    if ( ptr != &si128.m128i_u64[1] )
      free(ptr);
    return 0;
  }
  else
  {
    v10 = (_QWORD *)sub_168B6C0((__int64)a1);
    return sub_EBF070(v10, a4, a5, a3, a2, a6);
  }
}
