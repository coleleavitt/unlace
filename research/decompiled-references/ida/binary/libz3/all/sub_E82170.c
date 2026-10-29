__int64 __fastcall sub_E82170(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = sub_186B270(0x20u);
  *(_QWORD *)(result + 8) = a1;
  *(_DWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = a2;
  *(_QWORD *)result = &off_1C5D288;
  return result;
}

