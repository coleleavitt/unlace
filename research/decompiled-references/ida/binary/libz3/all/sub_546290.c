__int64 __fastcall sub_546290(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  _DWORD *v6; // rax
  __int64 v7; // r12
  __int64 v8; // r13
  __int16 v9; // ax
  __int64 v10; // rbp
  __int64 v11; // r14
  int v12; // eax
  _DWORD *v13; // rdx
  int v14; // r14d
  __int64 v15; // rax
  __int64 v16; // r13
  __int64 *v17; // rax
  __int64 v18; // rdx

  if ( a1 != *(_QWORD *)(a2 + 8) )
    return 0;
  sub_4D6490(*(_QWORD *)(a1 + 24));
  if ( *(_WORD *)(a3 + 4) )
    return 0;
  v6 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL);
  if ( !v6 || *v6 || v6[1] != 2 )
    return 0;
  v7 = *(_QWORD *)(a3 + 40);
  v8 = *(_QWORD *)(a3 + 32);
  v9 = *(_WORD *)(v7 + 4);
  if ( v9 == 1 )
  {
    v9 = *(_WORD *)(v8 + 4);
    v8 = *(_QWORD *)(a3 + 40);
    v7 = *(_QWORD *)(a3 + 32);
  }
  else if ( *(_WORD *)(v8 + 4) != 1 )
  {
    return 0;
  }
  if ( !v9 )
  {
    v10 = sub_4D6480(*(_QWORD *)(a1 + 24));
    v11 = sub_15D1F10(v8);
    v12 = sub_1625010(v10 + 56);
    v13 = *(_DWORD **)(v11 + 24);
    if ( v13 )
    {
      if ( v12 == *v13 && v13[1] == 2 )
      {
        v14 = *(_DWORD *)(v8 + 16);
        v4 = sub_186B270(0x30u);
        v15 = sub_4D6490(*(_QWORD *)(a1 + 24));
        ++*(_DWORD *)(v7 + 8);
        v16 = v15;
        v17 = (__int64 *)sub_4D6480(*(_QWORD *)(a1 + 24));
        v18 = *v17;
        *(_DWORD *)(v4 + 24) = v14;
        *(_QWORD *)v4 = &off_1C50AE8;
        *(_QWORD *)(v4 + 8) = v18;
        *(_QWORD *)(v4 + 16) = v17 + 13;
        *(_QWORD *)(v4 + 40) = v16;
        *(_QWORD *)(v4 + 32) = v7;
        return v4;
      }
    }
  }
  return 0;
}

