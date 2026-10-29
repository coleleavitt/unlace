__int64 __fastcall sub_889800(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx

  v2 = *(_QWORD *)(a1 + 128);
  v3 = v2 + 152LL * *(_QWORD *)(a1 + 136);
  if ( v3 == v2 )
    return 0;
  while ( 1 )
  {
    v4 = v2;
    if ( !*(_DWORD *)a2 && !*(_WORD *)(a2 + 4) )
      break;
    if ( *(_DWORD *)v2 == *(_DWORD *)a2 )
    {
      if ( *(_WORD *)(v2 + 4) == *(_WORD *)(a2 + 4) )
        return v4;
      v2 += 152;
      if ( v3 == v2 )
        return 0;
    }
    else
    {
      v2 += 152;
      if ( v3 == v2 )
        return 0;
    }
  }
  return v4;
}

