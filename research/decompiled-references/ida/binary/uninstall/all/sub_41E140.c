__int64 __fastcall sub_41E140(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int v5; // r13d
  int v7; // ebp
  __int64 *v8; // rbx
  int v9; // r14d
  __int64 v10; // rsi
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 v16; // rax
  int v18[13]; // [rsp+14h] [rbp-34h] BYREF

  v5 = 7;
  v7 = 1;
  if ( a3 - 1 > 1 )
  {
    v8 = (__int64 *)(a4 + 8);
    v9 = a3 - 1;
    do
    {
      while ( 1 )
      {
        v10 = *v8;
        if ( (unsigned int)sub_4584C0(a2, *v8, (unsigned int)off_654300, 8, (unsigned int)"switch", 0, (__int64)v18) )
          return 1;
        if ( v18[0] != 1 )
          break;
        ++v7;
        v5 &= ~1u;
        ++v8;
        if ( v9 <= v7 )
          goto LABEL_10;
      }
      if ( v18[0] <= 1 )
      {
        if ( !v18[0] )
        {
          v5 &= ~4u;
          goto LABEL_6;
        }
      }
      else if ( v18[0] == 2 )
      {
        v5 &= ~2u;
        goto LABEL_6;
      }
      sub_47D740((unsigned int)"Tcl_SubstObjCmd: bad option index to SubstOptions", v10, v11, v12, v13, v14);
LABEL_6:
      ++v7;
      ++v8;
    }
    while ( v9 > v7 );
  }
LABEL_10:
  if ( a3 - 1 != v7 )
  {
    sub_458930(a2, 1, a4, "?-nobackslashes? ?-nocommands? ?-novariables? string");
    return 1;
  }
  v16 = sub_47FBE0(a2, *(_QWORD *)(a4 + 8LL * v7), v5);
  if ( !v16 )
    return 1;
  sub_48AFD0(a2, v16);
  return 0;
}

