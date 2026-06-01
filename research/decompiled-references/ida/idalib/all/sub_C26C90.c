__int64 __fastcall sub_C26C90(__int64 a1, __int64 a2)
{
  __int64 v4; // rbp
  __int64 v5; // rdi
  __int64 v6; // r13
  __int64 v7; // rax
  char v8; // al
  __int64 v9; // rsi
  unsigned int v11; // [rsp+0h] [rbp-68h] BYREF
  char v12; // [rsp+4h] [rbp-64h]

  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)(a2 + 8);
  if ( v5 )
  {
    if ( v4 )
    {
      if ( v4 == v5
        || (v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5),
            v6 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4)) )
      {
        if ( **(_DWORD **)(a2 + 16) > 1u )
          return 1;
LABEL_6:
        v7 = *(_QWORD *)(a1 + 16);
        v12 &= ~1u;
        v11 = 0;
        v8 = sub_C267C0(*(_QWORD *)(v7 + 48), (__int64)&v11);
        v9 = *(_QWORD *)(a1 + 16);
        *(_BYTE *)(a1 + 25) = v8 ^ 1;
        sub_A54D90(a2, v9, (int *)&v11);
        if ( v11 > 1 )
          sub_A4F8E0((int *)&v11);
        return 1;
      }
    }
  }
  if ( !*(_BYTE *)(a1 + 24) )
    goto LABEL_6;
  sub_E33C10(*(_QWORD *)a1, *(_QWORD *)(a1 + 8), 2492, 0);
  return 0;
}
