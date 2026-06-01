__int64 __fastcall sub_3C02A0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 1672);
  if ( *(_BYTE *)(v1 + 1008) )
  {
    sub_3BC300(*(_QWORD *)(a1 + 1672));
    sub_8BA4A0(*(_QWORD *)(v1 + 1016));
    sub_4E1120(*(_QWORD *)v1);
    return sub_8BA4A0(*(_QWORD *)(v1 + 2408));
  }
  return result;
}
