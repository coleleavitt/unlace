bool __fastcall func_parent_iterator_set(unsigned __int64 **a1, unsigned __int64 *a2, __int64 a3)
{
  __int64 *v3; // r12
  unsigned __int64 *v4; // rax

  if ( !a1 )
    return 0;
  v3 = *(__int64 **)(qword_2CCB598 + 1672);
  if ( *a1 )
    sub_503E30((__int64)(v3 + 213), *a1);
  if ( a2 )
    sub_505D00((__int64)(v3 + 213), a2);
  *a1 = a2;
  sub_5C7D50(v3, (__int64)a2, a3);
  v4 = *a1;
  *((_DWORD *)a1 + 2) = 0;
  return v4 && *((char *)v4 + 17) < 0 && *((_DWORD *)v4 + 8) > 0;
}
