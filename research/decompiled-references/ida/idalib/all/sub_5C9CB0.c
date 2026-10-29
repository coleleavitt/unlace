__int64 __fastcall sub_5C9CB0(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 *v2; // rax

  if ( !a2 )
    return 0;
  v2 = sub_505D70(a1 + 1624, *a2);
  if ( v2 )
    return *((unsigned __int8 *)v2 + 43);
  else
    return 0;
}
