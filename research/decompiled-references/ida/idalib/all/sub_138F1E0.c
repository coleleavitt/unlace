__int64 __fastcall sub_138F1E0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v4; // rax

  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)a1 = &off_2C43E18;
  v4 = *a4;
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 24) = v4;
  *(_QWORD *)(a1 + 64) = a1 + 80;
  *(_QWORD *)(a1 + 72) = 0x800000000LL;
  *(_QWORD *)(a1 + 1040) = a1 + 1056;
  *a4 = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 1048) = 0;
  *(_BYTE *)(a1 + 1056) = 0;
  *(_QWORD *)(a1 + 1072) = a1 + 1088;
  *(_QWORD *)(a1 + 1080) = 0;
  *(_BYTE *)(a1 + 1088) = 0;
  return a1 + 1088;
}
