__int64 __fastcall sub_12ED0(
        __int64 a1,
        double a2,
        double a3,
        __m128 a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9)
{
  __int64 v9; // rbp
  unsigned int v10; // eax
  double v11; // xmm4_8
  double v12; // xmm5_8
  __int64 result; // rax

  v9 = *(_QWORD *)(a1 + 616);
  *(_DWORD *)(a1 + 144) &= ~0x800u;
  *(_DWORD *)(v9 + 10392) = 0;
  v10 = netnode_altval(*(_QWORD *)(*(_QWORD *)(a1 + 616) + 144LL), *(_QWORD *)(a1 + 16), 113);
  if ( v10 )
    sub_10B40((_QWORD *)a1, v10, a2, a3, a4, a5, v11, v12, a8, a9);
  if ( (unsigned int)sub_12E30((_QWORD *)a1, a2, a3, a4, a5, v11, v12, a8, a9) != 2 )
  {
    sub_7EC0(a1, a2, a3, a4);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 296LL))(a1);
    *(_BYTE *)(v9 + 10396) = 1;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 304LL))(a1, 0);
    *(_BYTE *)(v9 + 10396) = 0;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 128LL))(a1, 0xFFFFFFFFLL);
  }
  result = netnode_supval(*(_QWORD *)(v9 + 144), *(_QWORD *)(a1 + 240) + *(unsigned __int16 *)(a1 + 250), 0, 0, 117);
  if ( result >= 0 )
    return (*(__int64 (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a1 + 136LL))(a1, "}", 2);
  return result;
}
