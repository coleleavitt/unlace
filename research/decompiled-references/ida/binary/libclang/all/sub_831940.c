unsigned __int64 __fastcall sub_831940(__int64 a1, __int64 a2)
{
  unsigned int v2; // edx
  unsigned __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 > 0x40 )
    return sub_25869C0(a1, a2);
  result = (0xFFFFFFFFFFFFFFFFLL >> -(char)v2) & ~*(_QWORD *)a1;
  if ( !v2 )
    result = 0;
  *(_QWORD *)a1 = result;
  return result;
}

