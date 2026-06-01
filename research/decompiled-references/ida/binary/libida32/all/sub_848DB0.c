void __fastcall sub_848DB0(unsigned int *a1, int a2, __int64 a3)
{
  char *v3; // rax

  if ( !*a1 )
  {
    a1[36] = 0;
    if ( (unsigned __int64)(a3 + 0x80000000LL) >> 32 )
    {
      if ( !(unsigned int)sub_8442D0(a1, 15, a3) )
        sub_848C40(a1, a2, 0, 14, 0, 15, 0);
    }
    else if ( a3 )
    {
      sub_848C40(a1, a2, 0, 14, 0, 127, a3);
    }
    else
    {
      v3 = sub_844340((__int64)a1, 1u, 14, 0, a2, 0);
      if ( v3 )
        *v3 = -119;
    }
  }
}

