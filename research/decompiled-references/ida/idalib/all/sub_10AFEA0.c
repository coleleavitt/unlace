__int64 __fastcall sub_10AFEA0(__int64 a1, __int64 a2, __int64 a3)
{
  char **v3; // rax

  v3 = sub_10AFA80(a2, a3);
  if ( v3 == &off_2B60B20 )
    return 0xFFFFFFFFLL;
  else
    return *((unsigned int *)v3 + 4);
}
