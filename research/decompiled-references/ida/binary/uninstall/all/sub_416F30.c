__int64 __fastcall sub_416F30(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  __int64 v7; // rsi
  unsigned int v8; // edx
  unsigned int v9; // eax
  int *v10; // r13
  int v11; // eax
  int v13; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v14; // [rsp+4h] [rbp-24h] BYREF

  if ( a3 > 3 )
  {
    v7 = a4[1];
    if ( *(_UNKNOWN ***)(v7 + 24) == &off_655E20 )
    {
      v14 = *(_DWORD *)(*(_QWORD *)(v7 + 32) + 8LL);
    }
    else
    {
      v8 = sub_46FB10(a2, v7, &v14);
      if ( v8 )
        return v8;
    }
    v8 = sub_49FAC0(a2, a4[2], v14, &v13);
    if ( !v8 )
    {
      v9 = v13;
      if ( v13 > (int)v14 )
      {
        v9 = v14;
        v13 = v14;
      }
      v10 = (int *)a4[1];
      if ( *v10 > 1 )
      {
        v10 = (int *)sub_470170(0, a4[1]);
        v9 = v13;
      }
      if ( a3 == 4 && v9 == v14 )
      {
        sub_46FBF0(0, v10, a4[3]);
        goto LABEL_12;
      }
      v11 = sub_46F620(a2, v10, v9, 0, (unsigned int)(a3 - 3), a4 + 3);
      v8 = 1;
      if ( !v11 )
      {
LABEL_12:
        sub_48AFD0(a2, v10);
        return 0;
      }
    }
    return v8;
  }
  sub_458930(a2, 1, a4, "list index element ?element ...?");
  return 1;
}

