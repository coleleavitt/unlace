__int64 sub_52CBE0()
{
  _UNKNOWN **v0; // rbx
  __int64 result; // rax
  _QWORD *v2; // rbp
  __int64 v3; // rax

  v0 = &off_2B2E040;
  result = qword_2CCB598;
  v2 = (_QWORD *)(*(_QWORD *)(qword_2CCB598 + 1584) + 8LL);
  do
  {
    if ( *v2 )
    {
      v3 = sub_7802F0(*v2);
      if ( v3 >= 0 )
      {
        if ( !v3 )
          sub_368890();
        sub_368890();
      }
      sub_368890();
    }
    v0 += 4;
    ++v2;
  }
  while ( v0 != (_UNKNOWN **)&unk_2B2E120 );
  return result;
}
