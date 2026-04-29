__int64 __fastcall sub_3E8600(__int64 a1, double a2)
{
  __int64 *v2; // rdx
  int v3; // eax
  int i; // ecx
  __int64 v5; // rsi
  __int64 result; // rax
  int v7; // ecx

  v2 = *(__int64 **)(a1 + 736);
  v3 = *((char *)v2 + 14);
  for ( i = v3 + 6; ; i = v3 + v7 - 1 )
  {
    v5 = *v2;
    result = i & (unsigned int)-v3;
    *(_DWORD *)(a1 + v5) = result;
    v7 = result + *((char *)v2 + 14);
    if ( v5 == 692 )
      break;
    v3 = *((char *)v2 + 30);
    v2 += 2;
  }
  if ( (*(_BYTE *)(a1 + 676) & 0xF) != 0 )
  {
    if ( !under_debugger )
      sub_37E160(0xCC00u, 692, a2);
    BUG();
  }
  return result;
}
