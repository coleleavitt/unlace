__int64 __fastcall sub_52B480(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // rsi

  result = (unsigned int)get_ordinal_limit(*(_QWORD *)(*(_QWORD *)(a1 + 1672) + 8LL)) - 2;
  if ( (unsigned int)result <= 0xFFFFFFFC )
  {
    v4 = result + 2;
    v5 = 1;
    do
    {
      v6 = v5++;
      result = dirtree_link_inode(*a2, v6, 1);
    }
    while ( v5 != v4 );
  }
  return result;
}
