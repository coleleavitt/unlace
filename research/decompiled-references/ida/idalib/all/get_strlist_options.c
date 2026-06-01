__int64 get_strlist_options()
{
  __int64 v0; // rax
  __int64 v1; // rbx

  v0 = *(_QWORD *)(*(_QWORD *)(qword_2CCB598 + 1800) + 80LL);
  v1 = v0 + 8;
  if ( *(__int64 *)(v0 + 32) >= 0 )
    return v0 + 8;
  sub_690720(v0 + 8);
  return v1;
}
