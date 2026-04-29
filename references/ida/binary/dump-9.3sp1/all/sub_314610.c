__int64 __fastcall sub_314610(__int64 a1, __int64 a2)
{
  char v2; // dl
  __int64 result; // rax
  _QWORD *v4; // rdx
  int v5; // ecx
  __int64 v6; // rax
  __int64 v7; // rdx

  v2 = sub_316CB0(a1 + 8, a2 + 8);
  result = 1;
  if ( v2 )
  {
    result = 3;
    if ( (*(_DWORD *)a1 & 0xF) == 2 && *(_QWORD *)(a1 + 16) == 1 )
    {
      v4 = *(_QWORD **)(a1 + 8);
      if ( !*v4 )
      {
        v5 = *(_DWORD *)(a1 + 4);
        v6 = -1;
        v7 = v4[1] - 1LL;
        if ( v5 != 8 )
          v6 = (1LL << (8 * (unsigned __int8)v5)) - 1;
        return (unsigned int)(v7 == v6) + 3;
      }
    }
  }
  return result;
}
