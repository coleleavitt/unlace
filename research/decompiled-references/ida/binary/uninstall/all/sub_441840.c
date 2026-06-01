__int64 __fastcall sub_441840(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned __int64 v8; // rsi
  _BOOL8 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // [rsp+8h] [rbp-20h] BYREF

  if ( a3 > 2 )
  {
    v8 = sub_440270(a2, *(_QWORD *)(a4 + 8), a3 - 3, a4 + 16, 2);
    v9 = v8 > 1 && !(unsigned int)sub_4406D0(a2, v8, *(_QWORD *)(a4 + 8LL * a3 - 8), &v11) && v11 != 0;
    v10 = sub_47BD00(v9);
    sub_48AFD0(a2, v10);
    return 0;
  }
  else
  {
    sub_458930(a2, 1, a4, "dictionary key ?key ...?");
    return 1;
  }
}

