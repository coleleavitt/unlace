__int64 __fastcall sub_7FB6E0(__int64 a1, __int64 a2)
{
  __int64 v4; // rbp
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 *v8; // rax
  __int64 *v9; // rsi
  char v10; // r8
  char v11; // r15
  __int64 v12; // rdx
  _DWORD *v13; // rcx
  __int64 *v14; // rax
  __int64 *v15; // rdi
  char v16; // r8
  char v17; // cl
  __int64 v18; // rdx
  _DWORD *v19; // rsi
  char v20; // [rsp+0h] [rbp-4Ah]
  char v21; // [rsp+0h] [rbp-4Ah]
  char v22; // [rsp+1h] [rbp-49h]
  __int64 v23; // [rsp+2h] [rbp-48h] BYREF
  __int64 *v24; // [rsp+Ah] [rbp-40h]

  if ( *(_DWORD *)(a2 + 24) != 3 )
    return 0;
  v4 = *(_QWORD *)(a2 + 32);
  v5 = *(_QWORD *)(a2 + 40);
  v6 = *(_QWORD *)(a2 + 48);
  if ( !(unsigned __int8)sub_15D2CB0(*(_QWORD *)(a1 + 8), v4) )
    return 0;
  if ( *(_WORD *)(v5 + 4) )
    return 0;
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 848LL);
  if ( *(_QWORD *)(*(_QWORD *)(v5 + 16) + 40LL) != v7
    || *(_WORD *)(v6 + 4)
    || v7 != *(_QWORD *)(*(_QWORD *)(v6 + 16) + 40LL) )
  {
    return 0;
  }
  sub_7F5440((__int64)&v23, *(_QWORD *)(a1 + 16), v5);
  v8 = v24;
  if ( !v24 )
    goto LABEL_34;
  v9 = &v24[*((unsigned int *)v24 - 1)];
  if ( v9 == v24 )
    goto LABEL_34;
  v10 = 0;
  v11 = 0;
  do
  {
    v12 = *v8;
    v11 |= v4 == *v8;
    if ( !*(_WORD *)(*v8 + 4) )
    {
      v13 = *(_DWORD **)(*(_QWORD *)(v12 + 16) + 24LL);
      if ( v13 )
      {
        if ( !*v13 && v13[1] == 8 && *(_DWORD *)(v12 + 24) == 1 )
          v10 |= *(_QWORD *)(v12 + 32) == v4;
      }
    }
    ++v8;
  }
  while ( v9 != v8 );
  v20 = v10;
  sub_2334C0(&v23);
  if ( v20 == v11 )
    return 0;
  sub_7F5440((__int64)&v23, *(_QWORD *)(a1 + 16), v6);
  v14 = v24;
  if ( !v24 || (v15 = &v24[*((unsigned int *)v24 - 1)], v15 == v24) )
  {
LABEL_34:
    sub_2334C0(&v23);
    return 0;
  }
  v16 = 0;
  v17 = 0;
  do
  {
    v18 = *v14;
    v17 |= v4 == *v14;
    if ( !*(_WORD *)(*v14 + 4) )
    {
      v19 = *(_DWORD **)(*(_QWORD *)(v18 + 16) + 24LL);
      if ( v19 )
      {
        if ( !*v19 && v19[1] == 8 && *(_DWORD *)(v18 + 24) == 1 )
          v16 |= *(_QWORD *)(v18 + 32) == v4;
      }
    }
    ++v14;
  }
  while ( v15 != v14 );
  v22 = v17;
  v21 = v16;
  sub_2334C0(&v23);
  if ( v22 == v21 || v11 == v22 || !(unsigned __int8)sub_7F5350(*(_QWORD *)(a1 + 16), v5) )
    return 0;
  return sub_7F5350(*(_QWORD *)(a1 + 16), v6);
}

