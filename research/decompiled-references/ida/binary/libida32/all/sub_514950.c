__int64 sub_514950()
{
  _UNKNOWN **v0; // rbx
  __int64 result; // rax
  _QWORD *v2; // rbp
  __int64 v3; // rax

  v0 = &off_2B04080;
  result = qword_2CA1698;
  v2 = (_QWORD *)(*(_QWORD *)(qword_2CA1698 + 1392) + 8LL);
  do
  {
    if ( *v2 )
    {
      v3 = sub_75FE90(*v2);
      if ( v3 >= 0 )
      {
        if ( !v3 )
          sub_365330();
        sub_365330();
      }
      sub_365330();
    }
    v0 += 4;
    ++v2;
  }
  while ( v0 != (_UNKNOWN **)&unk_2B04160 );
  return result;
}

