__int64 __fastcall sub_3C7BC0(__int64 a1)
{
  __int64 result; // rax

  result = qalloc_or_throw(72);
  *(_QWORD *)(result + 12) = 3;
  *(_QWORD *)(result + 20) = 0;
  *(_QWORD *)(result + 28) = 0x4900000000LL;
  *(_OWORD *)(result + 40) = -1;
  *(_OWORD *)(result + 56) = -1;
  *(_QWORD *)result = off_4B58B0;
  *(_DWORD *)(result + 8) = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(result + 12) = *(_DWORD *)(a1 + 12);
  *(_DWORD *)(result + 16) = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(result + 20) = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(result + 24) = *(_DWORD *)(a1 + 24);
  *(_DWORD *)(result + 28) = *(_DWORD *)(a1 + 28);
  *(_DWORD *)(result + 32) = *(_DWORD *)(a1 + 32);
  *(_QWORD *)(result + 40) = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(result + 48) = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(result + 56) = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(result + 64) = *(_QWORD *)(a1 + 64);
  return result;
}
