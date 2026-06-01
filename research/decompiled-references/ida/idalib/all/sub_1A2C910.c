unsigned __int64 __fastcall sub_1A2C910(__int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rbx

  v1 = (_QWORD *)a1;
  if ( (unsigned int)sub_B778D0(a1) == 2 )
  {
    while ( sub_B77970((__int64)v1) )
      v1 = sub_B77970((__int64)v1);
    return (unsigned __int64)v1;
  }
  else if ( (unsigned int)sub_B778D0(a1) == 5 )
  {
    return sub_B77AB0(a1);
  }
  else
  {
    v2 = (_QWORD *)sub_B77AF0(a1);
    if ( v2 )
    {
      while ( (*(_QWORD *)sub_BC3640(v2) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        v2 = (_QWORD *)(*(_QWORD *)sub_BC3640(v2) & 0xFFFFFFFFFFFFFFF8LL);
      return v2[6];
    }
    return (unsigned __int64)v2;
  }
}
