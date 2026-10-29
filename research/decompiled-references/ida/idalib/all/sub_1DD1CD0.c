__int64 __fastcall sub_1DD1CD0(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned __int16 *v8; // rax
  unsigned __int64 v10; // rbx
  _QWORD *v11; // rax

  v8 = sub_1DC71F0(a1, *(_QWORD *)(a2 + 16), a3, a4, a5, a6, a7, a8);
  if ( v8 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return 1;
  v10 = (unsigned __int64)v8 & 0xFFFFFFFFFFFFFFFELL;
  v11 = sub_1DD1AB0((__int64)a1, *(_QWORD *)(a2 + 8), a7, a8);
  return sub_18D0F50(*a1, v10, (__int64)v11, *(_DWORD *)(a2 + 24), *(_DWORD *)(a2 + 28), *(double *)a7.m128_u64);
}
