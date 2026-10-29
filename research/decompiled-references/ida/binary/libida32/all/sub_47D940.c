__int64 __fastcall sub_47D940(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 result; // rax

  if ( a3 == 2 )
    return 0xFFFFFFFFLL;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = 48LL * a3;
  v5 = v3 + v4 + 896;
  v6 = *(_QWORD *)(v3 + v4 + 904);
  if ( !v6 )
    return 0xFFFFFFFFLL;
  v7 = v5;
  do
  {
    while ( 1 )
    {
      v8 = *(_QWORD *)(v6 + 16);
      v9 = *(_QWORD *)(v6 + 24);
      if ( *(_DWORD *)(v6 + 32) >= a2 )
        break;
      v6 = *(_QWORD *)(v6 + 24);
      if ( !v9 )
        goto LABEL_7;
    }
    v7 = v6;
    v6 = *(_QWORD *)(v6 + 16);
  }
  while ( v8 );
LABEL_7:
  result = 0xFFFFFFFFLL;
  if ( v7 != v5 && a2 >= *(_DWORD *)(v7 + 32) )
    return *(unsigned int *)(v7 + 36);
  return result;
}

