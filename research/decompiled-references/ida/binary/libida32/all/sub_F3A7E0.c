__int64 __fastcall sub_F3A7E0(__int64 a1, __int64 a2)
{
  int v2; // edx
  __int64 v3; // rcx

  v2 = *(unsigned __int16 *)(a2 + 22);
  v3 = *(_QWORD *)(a2 + 32);
  *(_DWORD *)a1 = 9;
  *(_QWORD *)(a1 + 8) = v3;
  *(_DWORD *)(a1 + 4) = v2;
  return a1;
}

