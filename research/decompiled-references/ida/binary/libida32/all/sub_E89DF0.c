__int64 __fastcall sub_E89DF0(__int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned int v2; // eax
  int v3; // edx
  __int64 v5; // rax

  v1 = *(unsigned __int8 *)(a1 + 8);
  if ( (unsigned __int8)v1 <= 0x31u )
  {
    v5 = 0x3D060A6440019LL;
    if ( _bittest64(&v5, v1) )
      return 1;
  }
  v2 = sub_E89DD0(a1);
  LOBYTE(v3) = (_BYTE)v3 == 42;
  return v3 | v2;
}

