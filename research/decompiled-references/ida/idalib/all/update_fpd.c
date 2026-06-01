__int64 __fastcall update_fpd(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  unsigned __int8 v4; // al
  unsigned __int8 v5; // [rsp+1h] [rbp-19h]

  if ( !a1 )
    return 0;
  if ( *(char *)(a1 + 17) < 0 )
    return 0;
  v3 = *(_QWORD *)(qword_2CCB598 + 1672);
  *(_QWORD *)(a1 + 56) = a2;
  v4 = sub_5C77B0(v3, a1, 0);
  if ( !v4 )
    return 0;
  v5 = v4;
  sub_5CC740(v3, a1, 0, -1, 0);
  return v5;
}
