__int64 __fastcall sub_37E110(__int64 a1, char a2)
{
  const char *v3; // rdx

  if ( ((unsigned __int8)getinf(46) & (unsigned __int8)(a2 + 1)) == 0 )
    return 0;
  sub_37E050(a1, nullptr);
  v3 = "---------------------------------------------------------------------------";
  if ( a2 )
    v3 = "=============== S U B R O U T I N E =======================================";
  return sub_37CA70(a1, (__int64)&unk_22B285A, v3);
}

