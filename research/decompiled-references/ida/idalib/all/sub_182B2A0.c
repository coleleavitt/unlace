__int64 __fastcall sub_182B2A0(__int64 a1, __int64 a2, unsigned __int64 a3, int *a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // [rsp+8h] [rbp-130h] BYREF
  int v14; // [rsp+Ch] [rbp-12Ch] BYREF
  void *v15; // [rsp+10h] [rbp-128h] BYREF
  unsigned int v16; // [rsp+18h] [rbp-120h]
  char v17; // [rsp+1Ch] [rbp-11Ch]
  void *v18[2]; // [rsp+20h] [rbp-118h] BYREF
  _BYTE v19[16]; // [rsp+30h] [rbp-108h] BYREF
  void *ptr; // [rsp+40h] [rbp-F8h] BYREF
  __m128i si128; // [rsp+48h] [rbp-F0h]
  _BYTE v22[40]; // [rsp+58h] [rbp-E0h] BYREF
  _BYTE v23[184]; // [rsp+80h] [rbp-B8h] BYREF

  result = sub_16211A0(a1, a2, a3, &v13, a5, 0);
  if ( (_BYTE)result )
  {
    if ( v13 < 0 )
    {
      v17 = 1;
      v16 = 32;
      v15 = (void *)(unsigned int)v13;
      v10 = sub_C00A40(a3, a2, (unsigned int)v13, v8, v9);
      sub_168B9F0((__int64)v23, (__int64 *)(a1 + 8), v10, 0xF55u, 0);
      ptr = v22;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8CF0);
      sub_220BA90((unsigned int)&v15, (unsigned int)&ptr, 10, 0, 0, 1, 0);
      v18[0] = v19;
      sub_1804580(v18, ptr, (__int64)ptr + si128.m128i_i64[0]);
      if ( ptr != v22 )
        free(ptr);
      v11 = sub_1682AF0((__int64)v23, (__int64)v18);
      v14 = 32;
      v12 = sub_1587D10(v11, &v14);
      LODWORD(ptr) = 0;
      sub_1587D10(v12, (int *)&ptr);
      if ( v18[0] != v19 )
        operator delete(v18[0]);
      sub_15F7200(v23);
      if ( v16 > 0x40 )
      {
        if ( v15 )
          operator delete[](v15);
      }
      return 0;
    }
    else
    {
      *a4 = v13;
    }
  }
  return result;
}
