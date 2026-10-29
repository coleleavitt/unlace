unsigned __int64 __fastcall sub_3FA230(__int64 a1, __int64 a2, int a3, double a4)
{
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r13
  __m128i *v10; // rax
  __int32 v11; // edx
  unsigned __int64 v13; // [rsp+0h] [rbp-58h] BYREF
  __m128i *v14; // [rsp+8h] [rbp-50h]
  _DWORD v15[6]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  v13 = 0xFFFFFFFF00000000LL;
  v5 = *(_QWORD *)(a1 + 800);
  v14 = nullptr;
  v6 = *(_QWORD *)(v5 + 8);
  if ( (unsigned __int8)getinf() )
    LODWORD(v9) = (unsigned __int8)getinf();
  else
    v9 = *(_QWORD *)(v6 + 120);
  if ( (unsigned int)a2 > 0x14 )
  {
    if ( !under_debugger )
      sub_383060(0xC554u, a4);
    BUG();
  }
  LOBYTE(v13) = 13;
  v10 = (__m128i *)j__qalloc_or_throw(20, a2, v7, v8);
  *v10 = _mm_loadu_si128((__m128i *)((char *)xmmword_42E1E0 + 20 * (int)a2));
  v11 = xmmword_42E1E0[1].m128i_i32[5 * (int)a2];
  v15[2] = a3;
  v10[1].m128i_i32[0] = v11;
  v15[0] = 1;
  v14 = v10;
  HIDWORD(v13) = v9;
  v15[1] = v9;
  sub_1D6450(a1, 67, (unsigned __int8 *)&v13, nullptr, (unsigned __int8 *)v15);
  sub_11CDA0((__int64)v15);
  sub_11CDA0((__int64)&v13);
  return v16 - __readfsqword(0x28u);
}
