__int64 __fastcall sub_39D720(__int64 a1, int a2)
{
  __int64 v2; // rax
  unsigned int v3; // edx

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 1344LL);
  v3 = *(_DWORD *)(v2 + 16);
  *(_DWORD *)(v2 + 16) = a2;
  return v3;
}

