__int64 __fastcall sub_15F30C0(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax

  *(_DWORD *)(*(_QWORD *)a1 + 224LL) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(*(_QWORD *)a1 + 1952LL) = *(_QWORD *)(a1 + 12);
  v1 = *(_DWORD *)(a1 + 20);
  result = *(_QWORD *)(*(_QWORD *)a1 + 240LL);
  *(_QWORD *)(result + 528) = *(_QWORD *)(a1 + 20);
  *(_DWORD *)(result + 536) = v1;
  return result;
}
