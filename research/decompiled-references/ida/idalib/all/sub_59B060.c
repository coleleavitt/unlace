__int64 __fastcall sub_59B060(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // r14
  unsigned int v5; // r12d
  unsigned __int64 v6; // rax
  unsigned __int64 v8; // rax

  v4 = a3 >> (4 * (unsigned __int8)sub_3BDA80((__int64)a1, a2));
  if ( (unsigned __int8)sub_631C90(*a1, 3, 32) )
  {
    v5 = sub_59AF60(a1, a2, v4);
    v6 = 4294967292LL;
    if ( *(_DWORD *)(a1[3] + 24) == 8 )
      v6 = -5;
    if ( a2 >= v6 )
      return v5;
    return (unsigned int)sub_59AF60(a1, a2 + 4, a3) | v5;
  }
  else
  {
    v5 = sub_59AF60(a1, a2, a3);
    v8 = 4294967292LL;
    if ( *(_DWORD *)(a1[3] + 24) == 8 )
      v8 = -5;
    if ( a2 >= v8 )
      return v5;
    return (unsigned int)sub_59AF60(a1, a2 + 4, v4) | v5;
  }
}
