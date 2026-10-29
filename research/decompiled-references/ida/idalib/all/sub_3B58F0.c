unsigned __int64 __fastcall sub_3B58F0(__int64 a1, __int64 a2, int a3)
{
  bool v3; // r12
  unsigned __int64 v4; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 (__fastcall ***bpt_kernel_interface)(); // rax
  __int64 v9; // rax
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  __m128i v14; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v15[3]; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-20h]

  v3 = 0;
  v4 = *(_QWORD *)(a2 + 8);
  v16 = __readfsqword(0x28u);
  v6 = *(unsigned int *)(a2 + 4);
  v15[0] = -1;
  v15[1] = 0;
  v14 = _mm_unpacklo_epi64((__m128i)v4, (__m128i)(v4 + v6));
  sub_3AA670((__int64)v15, nullptr, (__int64)&v14, 0);
  v7 = v14.m128i_i64[0];
  if ( v14.m128i_i64[0] < (unsigned __int64)v14.m128i_i64[1] )
  {
    v3 = *(_BYTE *)v14.m128i_i64[0] != 0;
    v7 = v14.m128i_i64[0] + 1;
  }
  v14.m128i_i64[0] = v7;
  bpt_kernel_interface = get_bpt_kernel_interface();
  v9 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(), _QWORD *))(*bpt_kernel_interface)[35])(
         bpt_kernel_interface,
         v15);
  sub_3B57B0(v9, v3 ^ (a3 == 0), 1, v10, v11, v12);
  return v16 - __readfsqword(0x28u);
}
