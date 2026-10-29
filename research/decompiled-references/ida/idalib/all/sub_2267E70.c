__int64 __fastcall sub_2267E70(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax

  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &off_2C75F48;
  *(_QWORD *)(a1 + 16) = a1 + 32;
  v2 = *a2;
  *a2 = 0;
  *(_QWORD *)(a1 + 32) = v2;
  *(_QWORD *)(a1 + 24) = 0x100000001LL;
  return 0x100000001LL;
}
