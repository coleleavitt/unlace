void __fastcall sub_1264660(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbp
  __int64 *v3; // r14
  __int64 v4; // rax
  __int64 v5; // r13

  v2 = *(__int64 **)(a1 + 4984);
  v3 = *(__int64 **)(a1 + 4992);
  if ( v3 != v2 )
  {
    v4 = *(unsigned int *)(a2 + 8);
    do
    {
      v5 = *v2;
      if ( v4 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
      {
        sub_2237220(a2, a2 + 16, v4 + 1, 8);
        *(_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 8)) = v5;
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)a2 + 8 * v4) = v5;
      }
      v2 += 4;
      v4 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
      *(_DWORD *)(a2 + 8) = v4;
    }
    while ( v3 != v2 );
  }
}
