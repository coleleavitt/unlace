__int64 __fastcall sub_448E30(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebp
  __int64 v5; // rbx
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  int v10; // eax
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  _DWORD v14[5]; // [rsp+14h] [rbp-14h] BYREF

  v4 = 0;
  v5 = a2;
  if ( (_DWORD)a3 == 1 )
  {
    v4 = -1;
    goto LABEL_6;
  }
  if ( (_DWORD)a3 != 2 )
  {
    sub_458930(a2, 1, a4, "?idletasks?");
    return 1;
  }
  a2 = *(_QWORD *)(a4 + 8);
  v10 = sub_4584C0(v5, a2, (unsigned int)&off_6555F0, 8, (unsigned int)"option", 0, (__int64)v14);
  a3 = 1;
  if ( v10 )
    return 1;
  if ( v14[0] )
    sub_47D740((unsigned int)"Tcl_UpdateObjCmd: bad option index to UpdateOptions", a2, 1, v11, v12, v13);
  else
    v4 = 38;
LABEL_6:
  while ( (unsigned int)sub_47A700(v4, a2, a3) )
  {
    if ( (unsigned int)sub_45ACC0(v5) )
    {
      sub_48B350(v5);
      sub_48B710(v5, (unsigned int)"limit exceeded", 0, v7, v8, v9);
      return 1;
    }
  }
  sub_48B350(v5);
  return 0;
}

