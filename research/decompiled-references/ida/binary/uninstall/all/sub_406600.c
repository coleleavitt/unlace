__int64 __fastcall sub_406600(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  void *v4; // rdi
  __int64 v5; // rax
  const char *v7; // rax

  if ( a3 == 2 )
  {
    v7 = (const char *)sub_47B3B0(*(_QWORD *)(a4 + 8));
    sub_406310(v7);
  }
  else if ( a3 > 2 )
  {
    sub_458930(a2, 1, a4, 5293392);
  }
  v4 = src;
  if ( !src )
    v4 = (void *)sub_4A0100();
  v5 = sub_48DF10(v4, 0xFFFFFFFF);
  sub_48AFD0(a2, v5);
  return 0;
}

