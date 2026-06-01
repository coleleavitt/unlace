__int64 __fastcall sub_3C0470(double a1, __m128 a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  double v8; // xmm0_8
  __int64 v9; // rdi
  __int64 tlc_for_til; // rbx
  double v11; // xmm4_8
  double v12; // xmm5_8
  __int64 (*v13)(); // rax
  unsigned int v14; // ebp
  __int64 v16; // [rsp+0h] [rbp-38h] BYREF
  __int128 v17; // [rsp+8h] [rbp-30h]
  unsigned __int64 v18; // [rsp+18h] [rbp-20h]

  v18 = __readfsqword(0x28u);
  v8 = 0.0;
  v9 = 0;
  v16 = 0;
  tlc_for_til = create_tlc_for_til(0, 0);
  v17 = 0;
  v13 = *(__int64 (**)())(*(_QWORD *)tlc_for_til + 64LL);
  if ( v13 != sub_3AAC50 )
    v9 = ((__int64 (__fastcall *)(__int64))v13)(tlc_for_til);
  v14 = sub_3C01E0(v9, (__int64)&v16, 0.0, a2, a3, a4, v11, v12, a7, a8);
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    v8 = qfree(v16, (const char *)&v16);
  }
  if ( tlc_for_til )
    (*(void (__fastcall **)(__int64, double))(*(_QWORD *)tlc_for_til + 8LL))(tlc_for_til, v8);
  return v14;
}
