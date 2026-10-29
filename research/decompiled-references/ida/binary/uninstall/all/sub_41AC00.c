__int64 __fastcall sub_41AC00(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // r12
  unsigned int v7; // edx
  int v9; // eax
  __int64 v10; // rdi
  _BYTE v11[4]; // [rsp+Ch] [rbp-1Ch] BYREF

  v5 = 0;
  if ( a3 == 4 || a3 == 2 )
  {
    v6 = *(_QWORD *)(a4 + 8LL * a3 - 8);
    if ( a3 == 4 )
    {
      v9 = sub_4584C0(a2, *(_QWORD *)(a4 + 8), (unsigned int)&off_654210, 8, (unsigned int)"option", 1, (__int64)v11);
      v7 = 1;
      if ( v9 == 1 )
        return v7;
      v10 = *(_QWORD *)(a4 + 16);
      v5 = *(_QWORD *)(v10 + 8);
      if ( !v5 )
        v5 = sub_47B3B0(v10);
    }
    return (unsigned int)sub_46DA20(a2, v6, v5);
  }
  sub_458930(a2, 1, a4, "?-encoding name? fileName");
  return 1;
}

