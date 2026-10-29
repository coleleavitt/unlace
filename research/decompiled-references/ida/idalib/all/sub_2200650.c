__int64 __fastcall sub_2200650(__int64 a1, unsigned __int8 a2, unsigned __int8 a3, void **a4)
{
  __int64 *v5; // rdi
  __int64 v6; // rbx
  __int64 v8; // r12
  __int64 v9; // r12
  __int64 v10; // r13
  __int64 v11; // r12

  v5 = *(__int64 **)(a1 + 8);
  if ( (_UNKNOWN *)*v5 == &unk_26F7B20 )
  {
    sub_2200650(v5, a2, a3, a4);
    v6 = *(_QWORD *)(a1 + 8);
    if ( *(_UNKNOWN **)(v6 + 24) != &unk_26F7B20 )
      return sub_21FB9A0((__int64 *)(v6 + 24), 0);
  }
  else
  {
    sub_21F9270(v5, a2, a3, a4);
    v6 = *(_QWORD *)(a1 + 8);
    if ( *(_UNKNOWN **)(v6 + 24) != &unk_26F7B20 )
      return sub_21FB9A0((__int64 *)(v6 + 24), 0);
  }
  v8 = *(_QWORD *)(v6 + 32);
  if ( *(_UNKNOWN **)v8 == &unk_26F7B20 )
  {
    v10 = *(_QWORD *)(v8 + 8);
    if ( *(_UNKNOWN **)v10 == &unk_26F7B20 )
    {
      sub_C16C60(*(_QWORD **)(v10 + 8), 0);
      sub_C16C60((_QWORD *)(*(_QWORD *)(v10 + 8) + 24LL), 0);
    }
    else
    {
      sub_21FB9A0(*(__int64 **)(v8 + 8), 0);
    }
    v11 = *(_QWORD *)(v8 + 8);
    if ( *(_UNKNOWN **)(v11 + 24) == &unk_26F7B20 )
    {
      sub_C16C60(*(_QWORD **)(v11 + 32), 0);
      sub_C16C60((_QWORD *)(*(_QWORD *)(v11 + 32) + 24LL), 0);
    }
    else
    {
      sub_21FB9A0((__int64 *)(v11 + 24), 0);
    }
  }
  else
  {
    sub_21FB9A0(*(__int64 **)(v6 + 32), 0);
  }
  v6 = *(_QWORD *)(v6 + 32);
  if ( *(_UNKNOWN **)(v6 + 24) != &unk_26F7B20 )
    return sub_21FB9A0((__int64 *)(v6 + 24), 0);
  v9 = *(_QWORD *)(v6 + 32);
  if ( *(_UNKNOWN **)v9 == &unk_26F7B20 )
  {
    sub_C16C60(*(_QWORD **)(v9 + 8), 0);
    sub_C16C60((_QWORD *)(*(_QWORD *)(v9 + 8) + 24LL), 0);
  }
  else
  {
    sub_21FB9A0(*(__int64 **)(v6 + 32), 0);
  }
  v6 = *(_QWORD *)(v6 + 32);
  if ( *(_UNKNOWN **)(v6 + 24) != &unk_26F7B20 )
    return sub_21FB9A0((__int64 *)(v6 + 24), 0);
  sub_C16C60(*(_QWORD **)(v6 + 32), 0);
  return sub_C16C60((_QWORD *)(*(_QWORD *)(v6 + 32) + 24LL), 0);
}
