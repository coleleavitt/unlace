__int64 __fastcall sub_492440(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // r8
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 result; // rax

  if ( a3 == 2 )
    return -1;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = 48LL * a3;
  v5 = v3 + v4 + 896;
  v6 = *(_QWORD **)(v3 + v4 + 904);
  if ( !v6 )
    return -1;
  v7 = (_QWORD *)v5;
  do
  {
    while ( 1 )
    {
      v8 = v6[2];
      v9 = v6[3];
      if ( v6[4] >= a2 )
        break;
      v6 = (_QWORD *)v6[3];
      if ( !v9 )
        goto LABEL_7;
    }
    v7 = v6;
    v6 = (_QWORD *)v6[2];
  }
  while ( v8 );
LABEL_7:
  result = -1;
  if ( v7 != (_QWORD *)v5 && a2 >= v7[4] )
    return v7[5];
  return result;
}
