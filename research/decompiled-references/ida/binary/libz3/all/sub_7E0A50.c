__int64 __fastcall sub_7E0A50(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // rbp
  __int64 v6; // r14
  _DWORD *v7; // rax
  _DWORD *v8; // rax
  __int64 v9; // r14
  __int64 v10; // rax
  unsigned int v11; // edx
  _DWORD *v12; // rax
  __int64 v14; // rax
  unsigned int v15; // edx
  __int64 v16; // rsi
  __int64 v17; // rbx
  __int64 v18; // rdi
  __int64 *v20; // rbx
  __int64 v21; // rax
  __int64 *v22; // rbp
  __int64 v23; // rdx
  _QWORD v24[7]; // [rsp+0h] [rbp-38h] BYREF

  v5 = *a2;
  v6 = *(_QWORD *)(a1 + 1376);
  if ( *(_WORD *)(*a2 + 4) )
    goto LABEL_4;
  v7 = *(_DWORD **)(*(_QWORD *)(v5 + 16) + 24LL);
  if ( !v7 || *(_DWORD *)(v6 + 16) != *v7 )
    goto LABEL_4;
  if ( v7[1] == 37 )
  {
    v20 = a2 + 22;
    v21 = *((unsigned int *)a2 + 38);
    v22 = &a2[v21 + 22];
    if ( v21 * 8 )
    {
      do
      {
        v23 = *v20++;
        sub_7E39E0(a3, a2, v23);
      }
      while ( v22 != v20 );
    }
    return 1;
  }
  if ( v7[1] == 49 )
  {
    sub_7E39E0(a3, a2, a2[22]);
    return 1;
  }
LABEL_4:
  v8 = *(_DWORD **)(sub_15D1F10(*a2) + 24);
  if ( !v8 || *(_DWORD *)(v6 + 16) != *v8 || v8[1] != 1 )
  {
    v9 = *(_QWORD *)(a1 + 1376);
    v10 = sub_15D1F10(v5);
    v11 = 0;
    v12 = *(_DWORD **)(v10 + 24);
    if ( !v12 || *(_DWORD *)(v9 + 16) != *v12 || v12[1] )
      return v11;
  }
  sub_D56BF0(v24, a1 + 128, v5);
  v14 = sub_7E4F00(a1);
  v16 = v24[0];
  v17 = v14;
  if ( v24[0] )
  {
    v18 = v24[1];
    if ( (*(_DWORD *)(v24[0] + 8LL))-- == 1 )
      sub_15D7BC0(v18, v16);
  }
  if ( v17 )
    sub_7E39E0(a3, a2, v17);
  LOBYTE(v15) = v17 != 0;
  return v15;
}

