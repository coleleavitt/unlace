unsigned __int64 __fastcall sub_2769D0(char *src, char *a2, _QWORD *a3, __int64 a4, const __m128i *a5)
{
  __int64 v5; // rax
  char *v6; // r13
  __int64 v7; // r12
  __int64 v9; // rbp
  __int32 v10; // eax
  unsigned __int64 *v11; // rdi
  __m128i v12; // xmm0
  __int64 v13; // rax
  __int32 v14; // ecx
  __m128i v15; // xmm0
  __int64 v16; // rcx
  __int64 v18; // [rsp+10h] [rbp-78h]
  __int64 (__fastcall **v20)(); // [rsp+20h] [rbp-68h] BYREF
  __int32 v21; // [rsp+28h] [rbp-60h]
  __m128i v22; // [rsp+30h] [rbp-58h]
  __int64 v23; // [rsp+40h] [rbp-48h]
  unsigned __int64 v24; // [rsp+48h] [rbp-40h]

  v5 = (a2 - src) >> 3;
  v6 = src;
  v7 = 2 * a4;
  v24 = __readfsqword(0x28u);
  if ( 2 * a4 <= v5 )
  {
    v18 = 16 * a4;
    v9 = -8 * a4;
    do
    {
      v10 = a5->m128i_i32[2];
      v11 = (unsigned __int64 *)v6;
      v12 = _mm_loadu_si128(a5 + 1);
      v20 = diffpos_sorting_strategy_t___vtable;
      v21 = v10;
      v13 = a5[2].m128i_i64[0];
      v22 = v12;
      v23 = v13;
      v6 += v18;
      a3 = (_QWORD *)sub_2768F0(v11, (unsigned __int64 *)&v6[v9], &v6[v9], v6, a3, (__int64)&v20);
      v5 = (a2 - v6) >> 3;
    }
    while ( v5 >= v7 );
  }
  v14 = a5->m128i_i32[2];
  v15 = _mm_loadu_si128(a5 + 1);
  v20 = diffpos_sorting_strategy_t___vtable;
  v21 = v14;
  v16 = a5[2].m128i_i64[0];
  v22 = v15;
  v23 = v16;
  if ( a4 <= v5 )
    v5 = a4;
  sub_2768F0((unsigned __int64 *)v6, (unsigned __int64 *)&v6[8 * v5], &v6[8 * v5], a2, a3, (__int64)&v20);
  return v24 - __readfsqword(0x28u);
}
