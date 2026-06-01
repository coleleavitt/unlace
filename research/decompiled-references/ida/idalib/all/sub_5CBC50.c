bool __fastcall sub_5CBC50(__int64 a1, _QWORD *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r12
  unsigned __int64 *v6; // r12

  v3 = a3 - 1;
  if ( a2[1] != a3 && (!a2 || !(unsigned __int8)sub_5CBBA0(a3 - 1, a2)) )
    return 0;
  v6 = sub_505D70(a1 + 1624, v3);
  return v6 == sub_505D70(a1 + 1624, a3);
}
