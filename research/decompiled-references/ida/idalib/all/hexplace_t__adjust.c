void __fastcall hexplace_t__adjust(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // r12
  __int64 v4; // r14

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 != -1 )
  {
    v3 = *(_QWORD *)(qword_2CCB598 + 1672);
    if ( *(_DWORD *)(*(_QWORD *)(v3 + 24) + 24LL) == 8 || v2 != 0x100000000LL )
    {
      v4 = *(_QWORD *)(a1 + 16);
      if ( sub_3BD540(*(_QWORD *)(qword_2CCB598 + 1672), v4) )
        goto LABEL_7;
    }
    else
    {
      if ( sub_3BD540(*(_QWORD *)(qword_2CCB598 + 1672), -1) )
        return;
      v4 = -1;
    }
    v2 = sub_3BD3C0(v3, v4);
    if ( v2 == -1 )
    {
      v2 = sub_3BD420(v3, v4);
      if ( v2 == -1 )
        return;
    }
LABEL_7:
    sub_425060(a1, v2, a2);
    *(_QWORD *)(a1 + 16) = *(_QWORD *)(a1 + 24);
  }
}
