__int64 __fastcall sub_22000E0(__int64 a1, unsigned __int8 a2)
{
  void **v3; // rdi
  __int64 v4; // rbx
  __int64 v6; // r12
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // r12

  v3 = *(void ***)(a1 + 8);
  if ( *v3 == &unk_26F7B20 )
  {
    sub_22000E0(v3, a2);
    v4 = *(_QWORD *)(a1 + 8);
    if ( *(_UNKNOWN **)(v4 + 24) != &unk_26F7B20 )
      return sub_21FB9A0((__int64 *)(v4 + 24), 0);
  }
  else
  {
    sub_21FB4C0((__int64)v3, a2);
    v4 = *(_QWORD *)(a1 + 8);
    if ( *(_UNKNOWN **)(v4 + 24) != &unk_26F7B20 )
      return sub_21FB9A0((__int64 *)(v4 + 24), 0);
  }
  v6 = *(_QWORD *)(v4 + 32);
  if ( *(_UNKNOWN **)v6 == &unk_26F7B20 )
  {
    v8 = *(_QWORD *)(v6 + 8);
    if ( *(_UNKNOWN **)v8 == &unk_26F7B20 )
    {
      sub_C16C60(*(_QWORD **)(v8 + 8), 0);
      sub_C16C60((_QWORD *)(*(_QWORD *)(v8 + 8) + 24LL), 0);
    }
    else
    {
      sub_21FB9A0(*(__int64 **)(v6 + 8), 0);
    }
    v9 = *(_QWORD *)(v6 + 8);
    if ( *(_UNKNOWN **)(v9 + 24) == &unk_26F7B20 )
    {
      sub_C16C60(*(_QWORD **)(v9 + 32), 0);
      sub_C16C60((_QWORD *)(*(_QWORD *)(v9 + 32) + 24LL), 0);
    }
    else
    {
      sub_21FB9A0((__int64 *)(v9 + 24), 0);
    }
  }
  else
  {
    sub_21FB9A0(*(__int64 **)(v4 + 32), 0);
  }
  v4 = *(_QWORD *)(v4 + 32);
  if ( *(_UNKNOWN **)(v4 + 24) != &unk_26F7B20 )
    return sub_21FB9A0((__int64 *)(v4 + 24), 0);
  v7 = *(_QWORD *)(v4 + 32);
  if ( *(_UNKNOWN **)v7 == &unk_26F7B20 )
  {
    sub_C16C60(*(_QWORD **)(v7 + 8), 0);
    sub_C16C60((_QWORD *)(*(_QWORD *)(v7 + 8) + 24LL), 0);
  }
  else
  {
    sub_21FB9A0(*(__int64 **)(v4 + 32), 0);
  }
  v4 = *(_QWORD *)(v4 + 32);
  if ( *(_UNKNOWN **)(v4 + 24) != &unk_26F7B20 )
    return sub_21FB9A0((__int64 *)(v4 + 24), 0);
  sub_C16C60(*(_QWORD **)(v4 + 32), 0);
  return sub_C16C60((_QWORD *)(*(_QWORD *)(v4 + 32) + 24LL), 0);
}
