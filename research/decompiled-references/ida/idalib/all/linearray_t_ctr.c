__int64 __fastcall linearray_t_ctr(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = a2;
  *(_BYTE *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_QWORD *)(a1 + 72) = 0xFFFFFFFFLL;
  return 0xFFFFFFFFLL;
}
