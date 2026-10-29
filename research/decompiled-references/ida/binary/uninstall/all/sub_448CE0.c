__int64 __fastcall sub_448CE0(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v7; // rsi
  int v8; // eax
  int v9; // ebp
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  int v13; // [rsp+Ch] [rbp-1Ch] BYREF

  if ( a3 == 2 )
  {
    v7 = sub_47B3B0(*(_QWORD *)(a4 + 8));
    v8 = sub_49B9C0(a2, v7, 0, 97, sub_448E20, &v13);
    v5 = 1;
    if ( v8 )
      return (unsigned int)v5;
    v13 = 0;
    do
    {
      v9 = sub_47A700(4294967293LL, v7, v5);
      if ( (unsigned int)sub_45ACC0(a2) )
        break;
      LOBYTE(v5) = v13 == 0;
    }
    while ( v9 != 0 && v13 == 0 );
    sub_49B340(a2, v7, 0, 97, sub_448E20, &v13);
    sub_48B350(a2);
    if ( v9 )
    {
      LODWORD(v5) = 0;
      if ( v13 )
        return (unsigned int)v5;
      sub_48B710(a2, (unsigned int)"limit exceeded", 0, v10, v11, v12);
    }
    else
    {
      sub_48B710(a2, (unsigned int)"can't wait for variable \"", v7, (unsigned int)"\": would wait forever", 0, v12);
    }
  }
  else
  {
    sub_458930(a2, 1, a4, "name");
  }
  LODWORD(v5) = 1;
  return (unsigned int)v5;
}

