__int64 __fastcall sub_F22160(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // dx
  __int64 v3; // rcx

  v2 = *(_WORD *)(a2 + 2);
  v3 = *(_QWORD *)(a2 + 16);
  *(_DWORD *)a1 = 9;
  *(_QWORD *)(a1 + 8) = v3;
  *(_DWORD *)(a1 + 4) = v2 >> 1;
  return a1;
}
