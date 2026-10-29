__int64 __fastcall sub_C71DF0(__int64 a1, __int64 a2)
{
  __int16 v2; // dx
  __int64 v3; // rcx

  v2 = *(_WORD *)(a2 + 32);
  v3 = *(_QWORD *)(a2 + 24);
  *(_DWORD *)a1 = 9;
  *(_QWORD *)(a1 + 8) = v3;
  *(_DWORD *)(a1 + 4) = v2 & 0x7FFF;
  return a1;
}

