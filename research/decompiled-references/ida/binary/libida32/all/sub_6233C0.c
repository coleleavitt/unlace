__int64 (__fastcall **__fastcall sub_6233C0(__int64 a1))()
{
  int v1; // edx
  __int64 (__fastcall **result)(); // rax
  __int64 v3; // rdi

  v1 = *(_DWORD *)(a1 + 32);
  result = off_2B0CFD0;
  *(_QWORD *)a1 = off_2B0CFD0;
  if ( v1 != -1 )
  {
    v3 = *(_QWORD *)(a1 + 24);
    if ( (*(_BYTE *)(v3 + 37) & 4) != 0 )
      return (__int64 (__fastcall **)())sub_6232D0(v3, 28);
  }
  return result;
}

