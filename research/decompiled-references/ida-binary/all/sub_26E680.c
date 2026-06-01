__int64 __fastcall sub_26E680(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdx
  __int64 result; // rax

  v3 = *(_QWORD *)(a3 + 8);
  result = a1;
  if ( HIDWORD(v3) )
  {
    *(_DWORD *)(a1 + 4) = 0;
    *(_QWORD *)(a1 + 16) = a2;
    *(_DWORD *)a1 = HIDWORD(v3) - 1;
    *(_QWORD *)(a1 + 8) = HIDWORD(v3) - 1;
  }
  else
  {
    *(_QWORD *)a1 = -1;
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
  return result;
}
