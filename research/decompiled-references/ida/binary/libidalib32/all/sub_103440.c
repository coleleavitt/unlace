__int64 __fastcall sub_103440(__int64 a1, unsigned int a2, unsigned __int8 a3)
{
  unsigned int v4; // r13d

  v4 = *(unsigned __int8 *)(a1 + 1232);
  if ( !(_BYTE)v4 || *(_DWORD *)(a1 + 1224) == -1 )
    return sub_16A980(a1, a2, a3);
  if ( (unsigned __int8)sub_102BB0(a1, 1) )
    sub_16A980(a1, a2, a3);
  return v4;
}

