__int64 __fastcall sub_8C70F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx

  v2 = *(_QWORD *)(a2 + 24);
  *(_DWORD *)a1 = 9;
  *(_QWORD *)(a1 + 8) = v2;
  *(_DWORD *)(a1 + 4) = *(unsigned __int16 *)(a2 + 32);
  return a1;
}

