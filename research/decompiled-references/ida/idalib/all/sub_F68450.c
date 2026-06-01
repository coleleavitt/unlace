__int64 __fastcall sub_F68450(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbx
  unsigned __int8 v6; // al
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // [rsp+8h] [rbp-10h] BYREF

  v5 = a1;
  v6 = *(_BYTE *)(a1 + 16);
  if ( v6 == 42 )
    return *(_QWORD *)(v5 + 32);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42 )
  {
    v8 = sub_F62E70(a1);
    if ( v8 )
    {
LABEL_5:
      v5 = v8;
      return *(_QWORD *)(v5 + 32);
    }
    v6 = *(_BYTE *)(a1 + 16);
  }
  if ( v6 == 34 )
    return *(_QWORD *)(v5 + 32);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 34 )
  {
    v8 = sub_F62E70(a1);
    if ( v8 )
      goto LABEL_5;
    v6 = *(_BYTE *)(a1 + 16);
  }
  if ( v6 == 11 )
    return *(_QWORD *)(v5 + 32);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 11 )
  {
    v8 = sub_F62E70(a1);
    if ( v8 )
      goto LABEL_5;
    v6 = *(_BYTE *)(a1 + 16);
  }
  v9 = (unsigned int)v6 - 43;
  if ( (unsigned int)v9 <= 1 )
    return sub_9B4870(v5, a2, v9, a4, a5);
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 <= 1 )
  {
    v10 = sub_F62E70(a1);
    if ( v10 )
    {
      v5 = v10;
      return sub_9B4870(v5, a2, v9, a4, a5);
    }
    v6 = *(_BYTE *)(a1 + 16);
  }
  if ( v6 == 33 )
    return *(_QWORD *)(v5 + 32);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 33 )
  {
    v8 = sub_F62E70(a1);
    if ( v8 )
      goto LABEL_5;
    v6 = *(_BYTE *)(a1 + 16);
  }
  if ( v6 != 1 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 1 )
      return 0;
    v5 = sub_F62E70(a1);
    if ( !v5 )
      return 0;
  }
  v11 = *(_QWORD *)(v5 + 40);
  sub_F5E9A0(&v11);
  return *(_QWORD *)(*(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL) + 32LL);
}
