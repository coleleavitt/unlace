__int64 __fastcall sub_41D5B0(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rax
  _DWORD v8[3]; // [rsp+Ch] [rbp-Ch] BYREF

  if ( a3 == 2 )
  {
    v5 = *(_QWORD *)(a4 + 8);
    if ( *(_QWORD *)(v5 + 8) )
    {
      v6 = *(unsigned int *)(v5 + 16);
      v8[0] = v6;
    }
    else
    {
      sub_47ACD0(v5, v8);
      v6 = v8[0];
    }
    v7 = sub_47BD00(v6);
    sub_48AFD0(a2, v7);
    return 0;
  }
  else
  {
    sub_458930(a2, 1, a4, "string");
    return 1;
  }
}

