__int64 __fastcall sub_6DAD90(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char **a5)
{
  _QWORD *v7; // rax
  __int64 v8; // rdx
  _BYTE *v9; // rbx
  unsigned int v10; // r12d

  v7 = *(_QWORD **)a4;
  v8 = *(_QWORD *)a4 + 24LL * *(_QWORD *)(a4 + 8);
  if ( v8 == *(_QWORD *)a4 )
    return 1;
  while ( 1 )
  {
    if ( v7[1] )
    {
      v9 = (_BYTE *)*v7;
      if ( *(_BYTE *)*v7 == 64 )
        break;
    }
    v7 += 3;
    if ( (_QWORD *)v8 == v7 )
      return 1;
  }
  if ( !v9 )
    return 1;
  v10 = sub_6FC4A0(*(_QWORD *)(*(_QWORD *)a1 + 1672LL), a2, a3, v9);
  if ( (_BYTE)v10 )
    return 1;
  sub_35A790(a5);
  return v10;
}
