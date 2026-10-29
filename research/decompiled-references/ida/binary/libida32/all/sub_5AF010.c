__int64 __fastcall sub_5AF010(__int64 a1, unsigned int *a2)
{
  unsigned int *v2; // rax

  if ( !a2 )
    return 0;
  v2 = sub_4EE820(a1 + 1552, *a2);
  if ( v2 )
    return *((unsigned __int8 *)v2 + 23);
  else
    return 0;
}

