__int64 __fastcall sub_D262B0(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int32 v6; // edx
  __int64 v8[2]; // [rsp+10h] [rbp-48h] BYREF
  __m128i v9; // [rsp+20h] [rbp-38h] BYREF
  void *v10; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v11; // [rsp+38h] [rbp-20h]

  v1 = sub_D01350(a1[22]);
  v8[1] = v2;
  v8[0] = v1;
  v9.m128i_i64[0] = sub_D21CE0(a1, v2, v2, v3, v4, v5);
  v9.m128i_i32[2] = v6;
  sub_D23F70((__int64)&v10, v8);
  if ( v11 > 0x40 )
  {
    sub_21E2280(&v10, v8);
  }
  else
  {
    v10 = (void *)~(unsigned __int64)v10;
    sub_CD43C0((unsigned __int64 *)&v10);
  }
  sub_21E1BC0(&v10);
  sub_CCCB10((void **)&v9, (__int64)&v10);
  if ( v11 > 0x40 && v10 )
    operator delete[](v10);
  *(__m128i *)sub_DFD980(a1[22], 16) = _mm_load_si128(&v9);
  return 1;
}

