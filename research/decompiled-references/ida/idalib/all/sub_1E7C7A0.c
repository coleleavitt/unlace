void __fastcall sub_1E7C7A0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        double a4,
        double a5,
        __m128i a6,
        __m128 a7,
        double a8,
        double a9,
        double a10,
        __m128 a11)
{
  __int64 v11; // rcx
  _BOOL8 v12; // r12
  unsigned __int64 v13; // rbx
  int v14; // eax
  unsigned int v15; // eax
  __int64 v16; // r8
  __int64 v17; // r9
  double v18; // xmm4_8
  double v19; // xmm5_8
  int v20; // eax
  __int64 v21; // rdi
  unsigned int v22; // eax
  __int64 v23; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v24[7]; // [rsp+10h] [rbp-38h] BYREF

  v11 = *(_QWORD *)(a1 + 24);
  v12 = a3 != -12;
  v13 = a3 + 12 - v12;
  if ( ((*(_DWORD *)v11 >> 12) & 0x7F) == 0x36 )
  {
    v20 = *(_DWORD *)(v11 + 192);
    v21 = *(_QWORD *)(v11 + 8);
    v23 = 0;
    *(_DWORD *)a3 = v20;
    *(_QWORD *)(a3 + 4) = *(_QWORD *)(v11 + 212);
    sub_1E5F010(v21, &v23);
    v22 = sub_F6C520(*(_QWORD *)(a2 + 32));
    v24[0] = *(_QWORD *)(a2 + 32);
    v24[1] = v22 * (v12 + v13 / v22);
    sub_F6C7F0((__int64)v24, *(_QWORD *)v23, (const __m128i *)(v23 + 8));
  }
  else
  {
    v14 = *(_DWORD *)(v11 + 232);
    *(_QWORD *)(a3 + 4) = 0;
    *(_DWORD *)a3 = v14;
    v15 = sub_F6C520(*(_QWORD *)(a2 + 32));
    sub_1E7C400(a1, *(_QWORD *)(a2 + 32), v15 * (v13 / v15 + v12), v15, v16, v17, a4, a5, a6, a7, v18, v19, a10, a11);
  }
}
