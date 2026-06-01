__int64 __fastcall sub_E1B730(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 result; // rax

  result = sub_186B270(0x30u);
  ++*(_DWORD *)(a3 + 8);
  *(_DWORD *)(result + 8) = 0;
  *(_QWORD *)result = &off_1C5CAC0;
  *(_QWORD *)(result + 16) = a1;
  *(_QWORD *)(result + 24) = a2;
  *(_QWORD *)(result + 32) = a3;
  *(_BYTE *)(result + 40) = a4;
  return result;
}

