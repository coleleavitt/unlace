__int64 __fastcall sub_B0D1A0(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // r8
  __int64 v4; // rax
  unsigned int v5; // ecx
  char v6; // r8

  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(v3 + 8872) + 16LL * (a2 >> 1);
  v5 = *(_DWORD *)(v4 + 8) & 0xFFFFFF;
  if ( *(_DWORD *)(v3 + 9468) < v5 )
  {
    v6 = *(_BYTE *)(v4 + 11);
    if ( (v6 & 1) == 0 && *(_DWORD *)(a1 + 848) == v5 )
    {
      *(_BYTE *)(v4 + 11) = v6 | 1;
      ++*(_DWORD *)(a1 + 832);
    }
  }
  return sub_B0CFA0(a1, a2, a3);
}

