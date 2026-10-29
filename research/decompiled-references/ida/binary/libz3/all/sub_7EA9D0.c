__int64 __fastcall sub_7EA9D0(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 *v4; // r13
  __int64 v5; // rdi

  v2 = *(__int64 **)(a1 + 2312);
  if ( v2 )
  {
    v4 = &v2[*((unsigned int *)v2 - 1)];
    while ( v4 != v2 )
    {
      v5 = *v2++;
      sub_868AF0(v5, *(_QWORD *)(a1 + 8), a2);
    }
  }
  return a2;
}

