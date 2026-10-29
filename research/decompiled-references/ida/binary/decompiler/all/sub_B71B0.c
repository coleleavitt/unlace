__int64 __fastcall sub_B71B0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rax

  result = 0;
  if ( *(_BYTE *)a2 == 7 && !*(_DWORD *)(a2 + 8) )
  {
    v3 = *(_QWORD *)(a1 + 8);
    if ( !*(_DWORD *)(v3 + 64) )
      sub_B6D60(a1);
    *(_DWORD *)(**(_QWORD **)(v3 + 528) + 24LL) |= 1u;
    return 1;
  }
  return result;
}
