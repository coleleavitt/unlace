__int64 __fastcall sub_51C600(__int64 *a1, unsigned __int64 *a2, signed int a3, __int64 a4)
{
  __int64 v4; // rax
  unsigned __int64 *v8; // r13

  if ( a3 > *(_DWORD *)(v4 + 72) || *(_DWORD *)(v4 + 80) == a3 )
    return 0;
  if ( a2 )
    return sub_51C570(*a1, a2, a3, a4);
  v8 = sub_506150((__int64)(a1 + 203));
  if ( v8 )
  {
    while ( (unsigned __int8)sub_51C570(*a1, v8, a3, a4) )
    {
      v8 = sub_505EB0((__int64)(a1 + 203), *v8);
      if ( !v8 )
        return 1;
    }
    return 0;
  }
  return 1;
}
