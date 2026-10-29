void __fastcall sub_B3CC40(__int64 a1, unsigned int a2)
{
  __int64 v2; // rcx
  __int64 v4; // rdx
  _DWORD *v5; // rdi
  int v6; // edi
  char v7; // si
  __int64 v8; // rsi
  __int64 v9; // rsi
  _DWORD *v10; // rdi
  _DWORD *v11; // rsi
  unsigned int v12; // eax
  _DWORD *v13; // rdi
  int v14[2]; // [rsp+0h] [rbp-38h] BYREF
  int v15; // [rsp+8h] [rbp-30h]
  int v16; // [rsp+10h] [rbp-28h] BYREF
  void *v17; // [rsp+18h] [rbp-20h]
  void *v18; // [rsp+20h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(*(_QWORD *)(v2 + 8840) + 8LL * (a2 >> 1));
  if ( *(_QWORD *)(a1 + 96) == v4 )
    return;
  if ( *(_WORD *)(v4 + 4) )
    return;
  v5 = *(_DWORD **)(*(_QWORD *)(v4 + 16) + 24LL);
  if ( !v5 || *v5 )
    return;
  v6 = v5[1];
  v7 = a2 & 1;
  if ( v6 == 5 && !v7 )
  {
    if ( *(_DWORD *)(v4 + 24) != 2 )
      return;
    v9 = *(_QWORD *)(v4 + 40);
    if ( *(_WORD *)(v9 + 4) )
      return;
    v10 = *(_DWORD **)(*(_QWORD *)(v9 + 16) + 24LL);
    if ( !v10 )
      goto LABEL_18;
    if ( !*v10 && v10[1] == 8 )
      return;
  }
  else
  {
    if ( v6 != 6 )
      return;
    if ( !v7 )
      return;
    if ( *(_DWORD *)(v4 + 24) != 2 )
      return;
    v8 = *(_QWORD *)(v4 + 40);
    if ( *(_WORD *)(v8 + 4) )
      return;
    v13 = *(_DWORD **)(*(_QWORD *)(v8 + 16) + 24LL);
    if ( !v13 || *v13 || v13[1] != 8 )
      return;
    v9 = *(_QWORD *)(v8 + 32);
  }
  if ( *(_WORD *)(v9 + 4) )
    return;
LABEL_18:
  v11 = *(_DWORD **)(*(_QWORD *)(v9 + 16) + 24LL);
  if ( v11 )
  {
    if ( *v11 == 1 && v11[1] == 1 )
    {
      *(_QWORD *)(a1 + 96) = v4;
      v12 = *(_DWORD *)(a1 + 64);
      if ( v12 > 0x63 )
      {
        *(_QWORD *)v14 = v2;
        v15 = v12 - 100;
        v17 = nullptr;
        v18 = nullptr;
        sub_B3C620((__int64)v14, (__int64)&v16, (unsigned int *)v4);
        if ( v18 )
          sub_186B220(v18);
      }
    }
  }
}

