__int64 __fastcall sub_2293DB0(__int64 a1, __int64 a2, __int64 a3, char ***a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  __int64 v7; // rbp
  __int64 v9; // rbx
  char *v10; // rax
  char **v11; // rsi
  _QWORD *v12; // rsi
  __int64 v14[6]; // [rsp+0h] [rbp-30h] BYREF

  v6 = 16 * a3;
  v7 = a2 + v6;
  *(_OWORD *)a1 = 0;
  *(_QWORD *)(a1 + 16) = 0;
  if ( a2 == a2 + v6 )
  {
    v14[0] = 0;
    v12 = nullptr;
  }
  else
  {
    v9 = a2;
    do
    {
      while ( 1 )
      {
        v10 = sub_2245280(a4, *(const void **)v9, *(_QWORD *)(v9 + 8), (__int64)a4, a5, a6);
        v11 = *(char ***)(a1 + 8);
        v14[0] = (__int64)v10;
        if ( v11 == *(char ***)(a1 + 16) )
          break;
        *v11 = v10;
        v9 += 16;
        *(_QWORD *)(a1 + 8) = v11 + 1;
        if ( v7 == v9 )
          goto LABEL_5;
      }
      v9 += 16;
      sub_1107250(a1, v11, v14);
    }
    while ( v7 != v9 );
LABEL_5:
    v14[0] = 0;
    v12 = *(_QWORD **)(a1 + 8);
    if ( v12 != *(_QWORD **)(a1 + 16) )
    {
      *v12 = 0;
      *(_QWORD *)(a1 + 8) = v12 + 1;
      return a1;
    }
  }
  sub_1107250(a1, v12, v14);
  return a1;
}
