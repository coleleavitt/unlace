__int64 __fastcall sub_177C8B0(__int64 *a1, __int64 a2, double a3)
{
  unsigned int *v4; // rax
  __int64 v5; // rdi
  unsigned __int64 v6; // rdx

  sub_18C81B0(*a1);
  v4 = sub_177C590(a1, *(unsigned int **)(a2 + 16), 1u, a3);
  if ( v4 == (unsigned int *)((char *)&dword_0 + 1) )
  {
    sub_190F620(*a1);
    return 1;
  }
  else
  {
    v5 = *a1;
    v6 = (unsigned __int64)v4 & 0xFFFFFFFFFFFFFFFELL;
    if ( !*(_DWORD *)(*a1 + 12632) && *(_QWORD *)(a2 + 16) == v6 )
    {
      sub_190F620(v5);
      return sub_19A3E40(*a1, a2);
    }
    else
    {
      return sub_190F410(v5, *(unsigned int *)(a2 + 24), v6, *(unsigned int *)(a2 + 28), *(unsigned int *)(a2 + 4));
    }
  }
}
