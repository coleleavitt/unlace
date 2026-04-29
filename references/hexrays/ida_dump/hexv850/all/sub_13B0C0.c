__int64 __fastcall sub_13B0C0(__int64 a1)
{
  __int128 v2; // rdi
  int v3; // eax
  unsigned int v4; // edx

  *((_QWORD *)&v2 + 1) = *(_QWORD *)(a1 + 32);
  *(_QWORD *)&v2 = *(_QWORD *)(a1 + 16);
  v3 = sub_13ABF0(v2);
  v4 = 1;
  if ( v3 != -1 )
  {
    *(_DWORD *)(a1 + 40) += v3;
    return 0;
  }
  return v4;
}
