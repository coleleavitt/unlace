__int64 __fastcall sub_41E4C0(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int v6; // ebx
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  _DWORD v16[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  if ( a3 != 3 )
  {
    sub_458930(a2, 1, a4, "test command");
    return 1;
  }
  do
  {
    v6 = sub_40A660(a2, *(_QWORD *)(a4 + 8), (__int64)v16);
    if ( v6 )
      return v6;
    if ( !v16[0] )
      goto LABEL_9;
    v6 = sub_40B720(a2, *(_QWORD *)(a4 + 16), 0, *(_QWORD **)(a2 + 952), 2u);
  }
  while ( v6 == 4 || v6 == 0 );
  if ( v6 != 1 )
  {
    if ( v6 == 3 )
    {
      LOBYTE(v6) = 0;
    }
    else if ( v6 )
    {
      return v6;
    }
LABEL_9:
    sub_48B350(a2);
    return v6;
  }
  LOBYTE(v7) = 1;
  v11 = sub_48F930((unsigned int)"\n    (\"while\" body line %d)", *(_DWORD *)(a2 + 16), v7, v8, v9, v10);
  sub_40ABA0(a2, v11, v12, v13, v14, v15);
  return 1;
}

