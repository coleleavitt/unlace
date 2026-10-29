__int64 __fastcall sub_4108E0(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  const char *v5; // rdi
  char *v6; // rdi
  __int64 v7; // rax

  if ( a3 == 2 )
  {
    v5 = *(const char **)(*(_QWORD *)(a4 + 8) + 8LL);
    if ( !v5 )
      v5 = (const char *)sub_47B3B0(*(_QWORD *)(a4 + 8));
    v6 = getenv(v5);
    if ( !v6 )
      v6 = "";
    v7 = sub_48DF10(v6, 0xFFFFFFFF);
    sub_48AFD0(a2, v7);
    return 0;
  }
  else
  {
    sub_458930(a2, 1, a4, "name");
    return 1;
  }
}

