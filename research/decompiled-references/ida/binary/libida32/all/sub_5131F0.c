__int64 __fastcall sub_5131F0(__int64 a1, _QWORD *a2)
{
  int ordinal_limit; // ebp
  __int64 result; // rax
  unsigned int v5; // ebx
  __int64 v6; // rsi

  ordinal_limit = get_ordinal_limit(*(_QWORD *)(*(_QWORD *)(a1 + 1480) + 8LL));
  result = (unsigned int)(ordinal_limit - 2);
  if ( (unsigned int)result <= 0xFFFFFFFC )
  {
    v5 = 1;
    do
    {
      v6 = v5++;
      result = dirtree_link_inode(*a2, v6, 1);
    }
    while ( ordinal_limit != v5 );
  }
  return result;
}

