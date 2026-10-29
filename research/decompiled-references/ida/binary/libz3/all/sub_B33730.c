__int64 __fastcall sub_B33730(__int64 a1)
{
  _QWORD *v1; // rax
  __int64 v2; // rdx
  __int64 result; // rax

  v1 = *(_QWORD **)(a1 + 8);
  --*(_DWORD *)(v1[2] - 4LL);
  v2 = v1[3];
  result = v1[4];
  --*(_DWORD *)(v2 - 4);
  --*(_DWORD *)(result - 4);
  return result;
}

