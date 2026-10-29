unsigned __int64 __fastcall sub_3B10A0(__int64 a1, __int64 a2, int a3)
{
  bool v3; // r12
  unsigned __int64 v4; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 bpt_kernel_interface; // rax
  __int64 v9; // rax
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  __int64 v14; // [rsp+4h] [rbp-44h] BYREF
  int v15; // [rsp+Ch] [rbp-3Ch]
  __m128i v16; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v17; // [rsp+28h] [rbp-20h]

  v3 = 0;
  v4 = *(_QWORD *)(a2 + 8);
  v17 = __readfsqword(0x28u);
  v6 = *(unsigned int *)(a2 + 4);
  v15 = 0;
  v14 = 0xFFFFFFFFLL;
  v16 = _mm_unpacklo_epi64((__m128i)v4, (__m128i)(v4 + v6));
  sub_3A5060(&v14, nullptr, (__int64)&v16, 0);
  v7 = v16.m128i_i64[0];
  if ( v16.m128i_i64[0] < (unsigned __int64)v16.m128i_i64[1] )
  {
    v3 = *(_BYTE *)v16.m128i_i64[0] != 0;
    v7 = v16.m128i_i64[0] + 1;
  }
  v16.m128i_i64[0] = v7;
  bpt_kernel_interface = get_bpt_kernel_interface(&v14, 0);
  v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)bpt_kernel_interface + 280LL))(
         bpt_kernel_interface,
         &v14);
  sub_3B0F60(v9, v3 ^ (a3 == 0), 1, v10, v11, v12);
  return v17 - __readfsqword(0x28u);
}

