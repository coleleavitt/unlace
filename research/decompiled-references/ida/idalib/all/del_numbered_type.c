__int64 __fastcall del_numbered_type(__int64 a1, int a2)
{
  unsigned int v2; // edx
  char v3; // cl

  v2 = a2;
  v3 = 0;
  if ( a2 < 0 )
  {
    v2 = a2 & 0x7FFFFFFF;
    v3 = 1;
  }
  if ( a1 )
    return sub_651240(*(__int64 **)(qword_2CCB598 + 1672), a1, v2, v3);
  else
    return sub_651240(*(__int64 **)(qword_2CCB598 + 1672), *(_QWORD *)(*(_QWORD *)(qword_2CCB598 + 1672) + 8LL), v2, v3);
}
