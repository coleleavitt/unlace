__int64 __fastcall sub_40FFF0(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  int v7; // r14d
  int v8; // r13d
  __int64 v9; // [rsp+8h] [rbp-40h] BYREF
  __int64 v10; // [rsp+10h] [rbp-38h] BYREF

  if ( !(unsigned int)sub_46FB70(a1, *a4, 0, &v10) && !(unsigned int)sub_47C250(a1, v10, &v9) )
  {
    if ( a2 < v9 )
      return *a4;
    v7 = 0;
LABEL_8:
    v8 = a3 - 1;
    if ( v7 >= a3 - 1 )
      return a4[v7];
    while ( 1 )
    {
      a3 = (v7 + v8 + 1) / 2;
      if ( (unsigned int)sub_46FB70(a1, a4[a3], 0, &v10) || (unsigned int)sub_47C250(a1, v10, &v9) )
        break;
      if ( a2 < v9 )
        goto LABEL_8;
      v7 = (v7 + v8 + 1) / 2;
      if ( a3 >= v8 )
        return a4[v7];
    }
  }
  return 0;
}

