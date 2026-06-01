__int64 __fastcall sub_103550(__int64 a1, unsigned __int8 a2)
{
  unsigned int v2; // r12d
  char v3; // al

  v2 = *(unsigned __int8 *)(a1 + 1232);
  if ( !(_BYTE)v2 || *(_DWORD *)(a1 + 1224) == -1 )
    return sub_16B270(a1, a2);
  v3 = sub_101070(a1, 3 - (unsigned int)a2);
  if ( (unsigned __int8)sub_102BB0(a1, v3) )
    sub_16B270(a1, a2);
  return v2;
}

