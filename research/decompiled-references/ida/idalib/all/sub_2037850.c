__int64 __fastcall sub_2037850(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  _QWORD *v6; // rbp
  _BYTE *v7; // r12
  _BYTE *v8; // rsi
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 i; // r12
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 j; // r15
  __int64 v15; // [rsp+0h] [rbp-98h]
  _BYTE *v16; // [rsp+10h] [rbp-88h] BYREF
  __int64 v17; // [rsp+18h] [rbp-80h]
  _BYTE v18[120]; // [rsp+20h] [rbp-78h] BYREF

  v16 = v18;
  v17 = 0x400000000LL;
  sub_20B4C70(a2, &v16);
  v6 = v16;
  v7 = &v16[16 * (unsigned int)v17];
  if ( v16 != v7 )
  {
    do
    {
      v8 = (_BYTE *)v6[1];
      v6 += 2;
      sub_2037330(a1, v8, v3, v4, v5);
    }
    while ( v7 != (_BYTE *)v6 );
    v7 = v16;
  }
  if ( v7 != v18 )
    free(v7);
  result = *(_QWORD *)(a2 + 80);
  v10 = a2 + 72;
  v15 = result;
  if ( result != a2 + 72 )
  {
    if ( !result )
LABEL_18:
      BUG();
    while ( 1 )
    {
      for ( i = *(_QWORD *)(v15 + 32); v15 + 24 != i; i = *(_QWORD *)(i + 8) )
      {
        if ( !i )
          BUG();
        if ( *(_QWORD *)(i + 40) )
        {
          v12 = sub_208B290();
          v13 = v3;
          for ( j = v12; v13 != j; j = *(_QWORD *)(j + 8) )
            sub_2037710(a1, j, v3, v10, v5);
        }
        sub_20375D0(a1, i - 24, v3, v10, v5);
      }
      result = *(_QWORD *)(v15 + 8);
      v15 = result;
      if ( a2 + 72 == result )
        break;
      if ( !result )
        goto LABEL_18;
    }
  }
  return result;
}
