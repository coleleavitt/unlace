__int64 __fastcall sub_EC3B50(unsigned int a1, __int64 a2, char a3, __int64 a4, unsigned __int64 a5, unsigned int a6)
{
  unsigned int v7; // ebx
  int v9; // eax
  int v10; // r15d
  __int64 v12; // rax
  int v13; // edx
  __int64 v14; // rax
  _QWORD v15[8]; // [rsp+8h] [rbp-40h] BYREF

  v7 = a6;
  if ( a1 >= a5 )
  {
    v15[0] = a2;
    if ( (unsigned int)sub_FBABF0(v15) || !a6 )
      return 0;
LABEL_13:
    v14 = sub_FBAC20(v15, 0);
    if ( v14 )
      return a6 - **(_DWORD **)(v14 + 16);
    return v7;
  }
  v9 = sub_EC7AA0(*(_QWORD *)(a4 + 8LL * a1));
  v15[0] = a2;
  v10 = v9;
  if ( !(unsigned int)sub_FBABF0(v15) )
  {
    if ( !a6 )
      return 0;
    goto LABEL_13;
  }
  if ( !v10 )
    return 0;
  v12 = sub_FBAC20(v15, a1);
  v13 = 1;
  if ( v12 )
    v13 = **(_QWORD **)(v12 + 16) + 1;
  return v10 - (v13 - ((unsigned int)(a3 == 0) - 1));
}

