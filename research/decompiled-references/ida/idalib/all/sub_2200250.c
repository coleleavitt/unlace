__int64 __fastcall sub_2200250(__int64 a1, char a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbx
  __int64 v5; // r13
  __int64 v6; // rbx
  __int64 v7; // r12

  v2 = *(_QWORD *)(a1 + 8);
  if ( *(_UNKNOWN **)v2 == &unk_26F7B20 )
  {
    v5 = *(_QWORD *)(v2 + 8);
    if ( *(_UNKNOWN **)v5 == &unk_26F7B20 )
    {
      sub_C16C60(*(_QWORD **)(v5 + 8), a2);
      sub_C16C60((_QWORD *)(*(_QWORD *)(v5 + 8) + 24LL), 0);
    }
    else
    {
      sub_21FB9A0(*(__int64 **)(v2 + 8), a2);
    }
    v6 = *(_QWORD *)(v2 + 8);
    if ( *(_UNKNOWN **)(v6 + 24) != &unk_26F7B20 )
    {
      sub_21FB9A0((__int64 *)(v6 + 24), 0);
      v3 = *(_QWORD *)(a1 + 8);
      if ( *(_UNKNOWN **)(v3 + 24) != &unk_26F7B20 )
        return sub_21FB9A0((__int64 *)(v3 + 24), 0);
      goto LABEL_9;
    }
    sub_C16C60(*(_QWORD **)(v6 + 32), 0);
    sub_C16C60((_QWORD *)(*(_QWORD *)(v6 + 32) + 24LL), 0);
  }
  else
  {
    sub_21FB9A0(*(__int64 **)(a1 + 8), a2);
  }
  v3 = *(_QWORD *)(a1 + 8);
  if ( *(_UNKNOWN **)(v3 + 24) != &unk_26F7B20 )
    return sub_21FB9A0((__int64 *)(v3 + 24), 0);
LABEL_9:
  v7 = *(_QWORD *)(v3 + 32);
  if ( *(_UNKNOWN **)v7 == &unk_26F7B20 )
  {
    sub_C16C60(*(_QWORD **)(v7 + 8), 0);
    sub_C16C60((_QWORD *)(*(_QWORD *)(v7 + 8) + 24LL), 0);
  }
  else
  {
    sub_21FB9A0(*(__int64 **)(v3 + 32), 0);
  }
  v3 = *(_QWORD *)(v3 + 32);
  if ( *(_UNKNOWN **)(v3 + 24) != &unk_26F7B20 )
    return sub_21FB9A0((__int64 *)(v3 + 24), 0);
  sub_C16C60(*(_QWORD **)(v3 + 32), 0);
  return sub_C16C60((_QWORD *)(*(_QWORD *)(v3 + 32) + 24LL), 0);
}
