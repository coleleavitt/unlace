__int64 __fastcall sub_842B40(int *a1, _BOOL8 a2, unsigned int **a3, __int64 *a4, _QWORD *a5, __int64 *a6)
{
  _BOOL4 v7; // r12d
  unsigned int *v9; // rax
  __int64 v10; // rdx
  unsigned int v12; // edi
  unsigned int *v13; // rdx
  __int64 *v14; // r10
  __int64 v15; // rsi
  unsigned int *j; // rax
  unsigned int *v20; // [rsp+20h] [rbp-88h] BYREF
  __int64 i; // [rsp+28h] [rbp-80h] BYREF
  _QWORD v22[15]; // [rsp+30h] [rbp-78h] BYREF

  v7 = a2;
  v9 = *a3;
  v10 = *a4;
  v22[7] = __readfsqword(0x28u);
  for ( i = v10; *v9 == -2142765056; a2 = !a2 )
    ++v9;
  v20 = v9;
  v12 = sub_8429D0(a1, a2, &v20, &i, a5, a6);
  if ( !v12 )
    return 0;
  v13 = v20;
  v14 = a4;
  if ( *v20 == -2143027200 )
  {
    while ( 1 )
    {
      v15 = v7;
      for ( j = v13 + 1; *j == -2142765056; v15 = (unsigned int)v15 ^ 1 )
        ++j;
      v20 = j;
      if ( !(unsigned int)sub_8429D0(a1, v15, &v20, &i, v22, a6) )
        return 0;
      sub_841960(2 - !v7, (__int64)a5, (__int64)v22, a6);
      if ( !a6 )
        i = *a5 + a5[1];
      v13 = v20;
      if ( *v20 != -2143027200 )
      {
        v14 = a4;
        break;
      }
    }
  }
  *a3 = v13;
  *v14 = i;
  return v12;
}

