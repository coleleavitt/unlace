__int64 __fastcall sub_4417B0(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int v5; // ebp
  __int64 v6; // rax
  unsigned int v7; // [rsp+4h] [rbp-14h] BYREF

  if ( a3 == 2 )
  {
    v5 = sub_4408B0(a2, *(_QWORD *)(a4 + 8), &v7);
    if ( v5 )
    {
      return v5;
    }
    else
    {
      v6 = sub_47BD00(v7);
      sub_48AFD0(a2, v6);
      return 0;
    }
  }
  else
  {
    sub_458930(a2, 1, a4, "dictionary");
    return 1;
  }
}

