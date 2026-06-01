unsigned __int64 __fastcall sub_3AADB0(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rax
  __int64 v5; // rdx
  __int64 *v6; // r14
  __int64 *v7; // rbx
  __int64 *v8; // rdx
  __int64 v10; // [rsp+8h] [rbp-60h] BYREF
  int v11; // [rsp+10h] [rbp-58h]
  __int64 v12; // [rsp+14h] [rbp-54h] BYREF
  int v13; // [rsp+1Ch] [rbp-4Ch]
  __m128i v14; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v15; // [rsp+38h] [rbp-30h]

  v3 = *(_QWORD *)(a2 + 8);
  v15 = __readfsqword(0x28u);
  v5 = *(unsigned int *)(a2 + 4);
  v11 = 0;
  v6 = &v12;
  v10 = 0xFFFFFFFFLL;
  v12 = 0xFFFFFFFFLL;
  v14 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)(v3 + v5));
  v13 = 0;
  sub_3A5060(&v10, nullptr, (__int64)&v14, 0);
  sub_3A5060(&v12, nullptr, (__int64)&v14, 0);
  if ( a3 )
    v6 = &v10;
  v7 = sub_3AAB40((__int64)(v6 - 4));
  if ( v7 == (__int64 *)(**(_QWORD **)(qword_2CA1698 + 1384) + 8LL
                                                             * *(_QWORD *)(*(_QWORD *)(qword_2CA1698 + 1384) + 8LL))
    || (unsigned int)compare_bpt_locs(*v7 + 32, v6) )
  {
    if ( !under_debugger )
      interr(40713);
    BUG();
  }
  v8 = &v10;
  if ( a3 )
    v8 = &v12;
  sub_3AACB0(v7, (__int64)v6, (__int64)v8, 1u);
  return v15 - __readfsqword(0x28u);
}

