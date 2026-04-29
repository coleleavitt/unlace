__int64 __fastcall sub_37FFF0(__int64 a1, __int64 **a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // r14
  __m128i v9; // xmm0
  __int64 *v10; // r12
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 *v13; // rdi
  __m128i v15; // [rsp+0h] [rbp-58h] BYREF
  __int64 v16; // [rsp+10h] [rbp-48h] BYREF
  __m128i v17; // [rsp+18h] [rbp-40h] BYREF
  unsigned __int64 v18; // [rsp+28h] [rbp-30h]

  v6 = *(_QWORD *)(a1 + 192);
  v18 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(v6 + 8 * a5);
  sub_25B8A0(&v16, *(_QWORD **)(a1 + 184), v7, 0);
  v8 = v16;
  v9 = _mm_loadu_si128(&v17);
  v16 = 0;
  v10 = *a2;
  v17 = 0;
  v11 = *v10;
  if ( *v10 )
  {
    v10[1] = 0;
    v15 = v9;
    qfree(v11);
    v9 = _mm_load_si128(&v15);
  }
  *v10 = v8;
  v12 = v16;
  *(__m128i *)(v10 + 1) = v9;
  if ( v12 )
  {
    v17.m128i_i64[0] = 0;
    qfree(v12);
  }
  v13 = *a2;
  if ( (unsigned __int64)(*a2)[1] > 1 )
  {
    tag_remove(v13, *v13, 0);
    v13 = *a2;
  }
  return (*(__int64 (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)a1 + 184LL))(a1, v13, v7);
}
