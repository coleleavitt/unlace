__int64 __fastcall sub_410B00(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v6; // rdx
  __int64 v7; // rax
  _QWORD v8[3]; // [rsp+0h] [rbp-18h] BYREF

  v4 = (unsigned int)(a3 - 1);
  if ( (_DWORD)v4 )
  {
    sub_458930(a2, 1, a4, 0);
    return 1;
  }
  else
  {
    sub_4AD150(v8, a2, v4);
    v7 = sub_47CDC0(v8[1] + 1000000LL * v8[0], a2, v6);
    sub_48AFD0(a2, v7);
    return 0;
  }
}

