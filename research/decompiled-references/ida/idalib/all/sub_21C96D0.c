__int64 __fastcall sub_21C96D0(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 (*v2)(void); // rax
  __int64 v3; // rdx
  __int64 result; // rax
  unsigned int v5; // ecx
  unsigned int v6; // ecx

  v1 = *(_QWORD **)(a1 + 128);
  v2 = *(__int64 (**)(void))(*v1 + 128LL);
  if ( v2 != sub_21CAC20 )
    return v2();
  v3 = v1[6];
  result = (v3 & 0x100000000000000LL) == 0 ? 8 : 10;
  if ( (v3 & 0x200000000000000LL) == 0 )
    result = (v3 & 0x100000000000000LL) != 0 ? 2 : 0;
  if ( (v3 & 0x400000000000000LL) != 0 )
    result = (unsigned int)result | 4;
  v5 = result;
  if ( (v3 & 0x80000000000000LL) != 0 )
  {
    BYTE1(v5) = BYTE1(result) | 1;
    result = v5;
  }
  if ( (v3 & 0x1000000000000000LL) != 0 )
    result = (unsigned int)result | 0x10;
  if ( (v3 & 0x2000000000000000LL) != 0 )
    result = (unsigned int)result | 0x20;
  if ( (v3 & 0x4000000000000000LL) != 0 )
    result = (unsigned int)result | 0x40;
  v6 = result;
  if ( v3 < 0 )
  {
    LOBYTE(v6) = result | 0x80;
    return v6;
  }
  return result;
}
