__int64 __fastcall sub_681C40(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rax

  result = *(_QWORD *)(a1 + 1672);
  if ( *(_QWORD *)(result + 1624) != -1 )
  {
    sub_39ADA0(0);
    sub_3A56E0(a1);
    sub_52D160(a1);
    sub_52FD50();
    sub_453C70(a1);
    sub_63C720(a1);
    sub_63D8D0(a1);
    sub_3C79F0(*(_QWORD *)(a1 + 1672));
    sub_3C73F0(*(_QWORD *)(a1 + 1672));
    sub_688E30(a1);
    sub_5CA000(a1);
    sub_4F2D20(a1);
    sub_642990(a1);
    sub_6281B0(a1);
    sub_5B4160(a1);
    sub_51AED0(a1);
    sub_506F90(*(_QWORD *)(*(_QWORD *)(a1 + 1672) + 1672LL), (__int64 *)(*(_QWORD *)(a1 + 1672) + 1624LL));
    sub_50F1A0(a1);
    sub_510270(a1);
    sub_587130(*(_QWORD *)(a1 + 1672));
    sub_55A270(a1);
    sub_608F20(a1);
    sub_3DB670(*(_QWORD **)(a1 + 1672));
    sub_410EA0(*(_QWORD *)(a1 + 1672));
    sub_4CA100(a1);
    v2 = *(_QWORD *)(a1 + 632);
    if ( v2 )
      *(_QWORD *)(v2 + 104) = -1;
    sub_69C550(a1);
    sub_6906E0(a1);
    return sub_4337D0(a1);
  }
  return result;
}
