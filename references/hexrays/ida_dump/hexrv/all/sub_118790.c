char __fastcall sub_118790(unsigned __int8 *a1, __int64 a2)
{
  char result; // al
  unsigned __int8 v3; // al
  __int64 *v4; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // rax

  result = *(_BYTE *)(a2 + 145);
  if ( result )
  {
    v3 = *a1;
    if ( *a1 == 9 )
    {
      v4 = *((__int64 **)a1 + 1);
      v5 = *v4;
      v6 = *((int *)v4 + 4);
      if ( *(_QWORD *)(v5 + 440) < v6 )
        sub_1174C0(a1);
      return sub_1BEA10(*(_QWORD *)(v5 + 432) + 104 * v6);
    }
    else if ( v3 > 9u )
    {
      if ( v3 == 15 )
        return sub_1BEA10(*((_QWORD *)a1 + 1));
      else
        return 0;
    }
    else
    {
      return (unsigned __int8)(v3 - 5) <= 1u;
    }
  }
  return result;
}
