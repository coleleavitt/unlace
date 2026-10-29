__int64 __fastcall sub_40C760(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  unsigned int v4; // edx
  int v6; // eax
  __int64 v7; // rax
  _DWORD v8[3]; // [rsp+Ch] [rbp-Ch] BYREF

  if ( a3 == 2 )
  {
    v6 = sub_47BB80(a2, a4[1], v8);
    v4 = 1;
    if ( !v6 )
    {
      v7 = sub_47BD00(v8[0] != 0);
      sub_48AFD0(a2, v7);
      return 0;
    }
  }
  else
  {
    sub_409E40(a2, 2, a3, a4);
    return 1;
  }
  return v4;
}

