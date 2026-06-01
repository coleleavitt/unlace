void __fastcall sub_623400(__int64 *a1)
{
  int v1; // edx
  __int64 v3; // rdi

  v1 = *((_DWORD *)a1 + 8);
  *a1 = (__int64)off_2B0CFD0;
  if ( v1 != -1 && (v3 = a1[3], (*(_BYTE *)(v3 + 37) & 4) != 0) )
  {
    sub_6232D0(v3, 28);
    operator delete(a1, 0x28u);
  }
  else
  {
    operator delete(a1, 0x28u);
  }
}

