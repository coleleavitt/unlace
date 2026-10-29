__int64 __fastcall sub_59AE60(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned int v3; // r12d
  unsigned __int64 v4; // r14
  unsigned int v5; // r13d
  unsigned __int64 v6; // rax
  unsigned __int64 v8; // rax

  v3 = a3;
  v4 = a3 >> sub_3BDA80((__int64)a1, a2);
  if ( (unsigned __int8)sub_631C90(*a1, 3, 32) )
  {
    v5 = sub_59AA30(a1, a2, (unsigned int)v4);
    v6 = 0xFFFFFFFFLL;
    if ( *(_DWORD *)(a1[3] + 24) == 8 )
      v6 = -2;
    if ( a2 >= v6 )
      return v5;
    return (unsigned int)sub_59AA30(a1, a2 + 1, v3) | v5;
  }
  else
  {
    v5 = sub_59AA30(a1, a2, v3);
    v8 = 0xFFFFFFFFLL;
    if ( *(_DWORD *)(a1[3] + 24) == 8 )
      v8 = -2;
    if ( a2 >= v8 )
      return v5;
    return (unsigned int)sub_59AA30(a1, a2 + 1, (unsigned int)v4) | v5;
  }
}
