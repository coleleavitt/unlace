__int64 __fastcall sub_EE7BC0(unsigned int a1, __int64 a2, char a3, __int64 a4, unsigned __int64 a5, unsigned int a6)
{
  unsigned int v7; // ebx
  __int64 v9; // rax
  int v11; // eax
  int v12; // r14d
  __int64 v13; // rax
  int v14; // edx
  _QWORD v15[8]; // [rsp+8h] [rbp-40h] BYREF

  v7 = a6;
  if ( a1 < a5 && (v11 = sub_B73090(*(_QWORD *)(a4 + 8LL * a1))) != 0 )
  {
    v15[0] = a2;
    v12 = v11 - 1;
    if ( (unsigned int)sub_FDE930(v15) )
    {
      if ( v12 )
      {
        v13 = sub_FDE960(v15, a1);
        v14 = 1;
        if ( v13 )
          v14 = **(_QWORD **)(v13 + 16) + 1;
        return v12 - (v14 - ((unsigned int)(a3 == 0) - 1));
      }
      return 0;
    }
  }
  else
  {
    v15[0] = a2;
    if ( (unsigned int)sub_FDE930(v15) )
      return 0;
  }
  if ( !a6 )
    return 0;
  v9 = sub_FDE960(v15, 0);
  if ( v9 )
    return a6 - **(_DWORD **)(v9 + 16);
  return v7;
}
