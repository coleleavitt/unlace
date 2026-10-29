unsigned __int64 __fastcall sub_BC31C0(unsigned __int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rdi

  while ( 1 )
  {
    v1 = *(_QWORD *)(a1 + 48);
    v2 = sub_B8C330(v1);
    if ( (unsigned int)sub_B74100(v1, v2) )
      break;
    v3 = *(_QWORD *)(a1 + 64);
    if ( (v3 & 3) == 0 )
    {
      a1 = v3 & 0xFFFFFFFFFFFFFFFCLL;
      if ( a1 )
        continue;
    }
    return 0;
  }
  return a1;
}
