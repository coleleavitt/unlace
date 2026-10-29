__int64 __fastcall sub_41D620(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v5; // rdi
  unsigned int v6; // eax
  __int64 v7; // rdi
  __int64 v8; // rax
  _DWORD v9[3]; // [rsp+Ch] [rbp-Ch] BYREF

  if ( a3 == 2 )
  {
    v5 = *(_QWORD *)(a4 + 8);
    if ( *(char ***)(v5 + 24) == &off_653DC0 )
    {
      sub_40D5E0(v5, v9);
      v7 = v9[0];
    }
    else
    {
      v6 = sub_48F360(v5);
      v7 = v6;
      v9[0] = v6;
    }
    v8 = sub_47BD00(v7);
    sub_48AFD0(a2, v8);
    return 0;
  }
  else
  {
    sub_458930(a2, 1, a4, "string");
    return 1;
  }
}

