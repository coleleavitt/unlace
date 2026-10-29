__int64 __fastcall sub_6226A0(__int64 a1, __int64 *a2, int a3)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 8) = a3;
  *(_QWORD *)a1 = off_1C52980;
  result = *a2;
  *(_BYTE *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = result;
  *(_QWORD *)(a1 + 32) = a2;
  return result;
}

