unsigned __int64 __fastcall sub_3FA230(__int64 a1, unsigned int a2, int a3, double a4)
{
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 v7; // r13
  __m128i *v8; // rax
  __int32 v9; // edx
  unsigned __int64 v11; // [rsp+0h] [rbp-58h] BYREF
  __m128i *v12; // [rsp+8h] [rbp-50h]
  _DWORD v13[6]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v14; // [rsp+28h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  v11 = 0xFFFFFFFF00000000LL;
  v5 = *(_QWORD *)(a1 + 800);
  v12 = nullptr;
  v6 = *(_QWORD *)(v5 + 8);
  if ( (unsigned __int8)getinf() )
    LODWORD(v7) = (unsigned __int8)getinf();
  else
    v7 = *(_QWORD *)(v6 + 120);
  if ( a2 > 0x14 )
  {
    if ( !under_debugger )
      sub_383060(0xC554u, a4);
    BUG();
  }
  LOBYTE(v11) = 13;
  v8 = (__m128i *)j__qalloc_or_throw();
  *v8 = _mm_loadu_si128((__m128i *)((char *)xmmword_42E1E0 + 20 * (int)a2));
  v9 = xmmword_42E1E0[1].m128i_i32[5 * a2];
  v13[2] = a3;
  v8[1].m128i_i32[0] = v9;
  v13[0] = 1;
  v12 = v8;
  HIDWORD(v11) = v7;
  v13[1] = v7;
  sub_1D6450(a1, 67, (unsigned __int8 *)&v11, nullptr, (unsigned __int8 *)v13);
  sub_11CDA0((__int64)v13);
  sub_11CDA0((__int64)&v11);
  return v14 - __readfsqword(0x28u);
}
