__int64 __fastcall sub_385270(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // r14
  __m128i v9; // xmm0
  _QWORD *v10; // r12
  __int64 v11; // rdi
  _QWORD *v12; // rdi
  __m128i v14; // [rsp+0h] [rbp-58h] BYREF
  __int64 v15; // [rsp+10h] [rbp-48h] BYREF
  __m128i v16; // [rsp+18h] [rbp-40h] BYREF
  unsigned __int64 v17; // [rsp+28h] [rbp-30h]

  v6 = *(_QWORD *)(a1 + 192);
  v17 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(v6 + 8 * a5);
  sub_2604A0((__int64)&v15, *(_QWORD **)(a1 + 184), v7, 0);
  v8 = v15;
  v9 = _mm_loadu_si128(&v16);
  v15 = 0;
  v10 = *(_QWORD **)a2;
  v16 = 0;
  if ( *v10 )
  {
    v10[1] = 0;
    v14 = v9;
    qfree();
    v9 = _mm_load_si128(&v14);
  }
  *v10 = v8;
  v11 = v15;
  *(__m128i *)(v10 + 1) = v9;
  if ( v11 )
  {
    v16.m128i_i64[0] = 0;
    qfree();
  }
  v12 = *(_QWORD **)a2;
  if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) > 1u )
  {
    tag_remove();
    v12 = *(_QWORD **)a2;
  }
  return (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 184LL))(a1, v12, v7);
}
