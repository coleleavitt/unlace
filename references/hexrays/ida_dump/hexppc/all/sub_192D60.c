__int64 __fastcall sub_192D60(__int64 a1)
{
  __int64 v1; // rax
  __int64 (__fastcall *v2)(__int64, __int64); // rdx
  int v3; // esi
  unsigned int v4; // ecx
  int v5; // edx

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 64LL);
  if ( v2 != sub_191940 )
    return v2(*(_QWORD *)(a1 + 16), a1 + 144);
  if ( (*(_BYTE *)(v1 + 288) & 1) == 0 )
    sub_191920(a1);
  v3 = *(_DWORD *)(v1 + 8);
  v4 = 0;
  if ( v3 != 1 )
  {
    v5 = *(_DWORD *)(a1 + 208);
    if ( v5 >= *(_DWORD *)(v1 + 48) )
    {
      v4 = *(_DWORD *)(a1 + 184);
      if ( (int)v4 >= v5 )
        v5 = *(_DWORD *)(a1 + 184);
      if ( v3 == 4 )
        v4 = v5;
      LOBYTE(v4) = v4 != *(_DWORD *)(v1 + 24);
    }
  }
  return v4;
}
