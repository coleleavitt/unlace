__int64 __fastcall sub_4163E0(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  void *v5; // rax
  __int64 v6; // rax

  if ( a3 == 1 )
  {
    v5 = (void *)sub_4AD0D0();
    if ( v5 )
    {
      v6 = sub_48DF10(v5, 0xFFFFFFFF);
      sub_48AFD0(a2, v6);
      return 0;
    }
    else
    {
      sub_48B860(a2, "unable to determine name of host", 0);
      return 1;
    }
  }
  else
  {
    sub_458930(a2, 1, a4, 0);
    return 1;
  }
}

