bool __fastcall sub_2103520(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rdx
  size_t v7; // r15
  const void *v8; // r14
  size_t v9; // rbx
  const void *v10; // rsi
  const void *v12; // [rsp+8h] [rbp-50h]
  const void *v13; // [rsp+10h] [rbp-48h] BYREF
  size_t v14; // [rsp+18h] [rbp-40h]

  v3 = *(_QWORD *)(a2 + 16);
  v4 = *(_QWORD *)(a1 + 16);
  if ( sub_9C4B50(v4, v3) < 0 )
    return 1;
  if ( sub_9C4B50(v3, v4) >= 0 )
  {
    v5 = *(_QWORD *)(a2 + 8);
    v6 = *(_QWORD *)(a1 + 8);
    v7 = *(_QWORD *)(v5 + 8);
    v8 = *(const void **)v6;
    v9 = *(_QWORD *)(v6 + 8);
    v10 = *(const void **)v5;
    v12 = *(const void **)v5;
    v13 = *(const void **)v6;
    v14 = v9;
    if ( (int)sub_9C4B00((__int64)&v13, v10, v7) >= 0 )
    {
      v14 = v7;
      v13 = v12;
      if ( (int)sub_9C4B00((__int64)&v13, v8, v9) >= 0 )
        return **(_DWORD **)a1 < **(_DWORD **)a2;
      return 0;
    }
    return 1;
  }
  return 0;
}
