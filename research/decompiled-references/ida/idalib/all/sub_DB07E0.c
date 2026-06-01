__int64 __fastcall sub_DB07E0(__int64 a1)
{
  __int64 result; // rax

  result = sub_E216C0(a1, 64);
  *(_QWORD *)result = 0;
  *(_OWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 24) = 1;
  *(_QWORD *)(result + 40) = 0;
  *(_QWORD *)(result + 32) = 0;
  *(_QWORD *)(result + 48) = 0;
  *(_DWORD *)(result + 56) = 0;
  return result;
}
