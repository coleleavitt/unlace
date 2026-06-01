__int64 __fastcall sub_22339D0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a1 = *(_QWORD *)a2;
  result = *(unsigned int *)(a2 + 8);
  *(_DWORD *)(a1 + 8) = result;
  *(_QWORD *)a2 = 0;
  *(_DWORD *)(a2 + 8) = 2;
  return result;
}
