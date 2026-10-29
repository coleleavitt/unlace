void __fastcall sub_1FDD6C0(__int64 a1, __int64 a2)
{
  __int64 *v3; // rbx
  __int64 v4; // r13
  __int64 i; // rdi
  __int64 v6; // r12
  __int64 v7; // rax

  *(_QWORD *)(a1 + 272) = a2;
  if ( a2 )
  {
    v3 = *(__int64 **)a1;
    v4 = *(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8);
    if ( v4 != *(_QWORD *)a1 )
    {
      for ( i = a2; ; i = *(_QWORD *)(a1 + 272) )
      {
        v6 = *v3;
        if ( (unsigned __int8)sub_1FD3510(i, *v3) )
        {
          if ( (__int64 *)v4 == ++v3 )
            return;
        }
        else
        {
          v7 = *(unsigned int *)(a1 + 232);
          if ( v7 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 236) )
          {
            sub_2237220(a1 + 224, a1 + 240, v7 + 1, 8);
            v7 = *(unsigned int *)(a1 + 232);
          }
          ++v3;
          *(_QWORD *)(*(_QWORD *)(a1 + 224) + 8 * v7) = v6;
          ++*(_DWORD *)(a1 + 232);
          if ( (__int64 *)v4 == v3 )
            return;
        }
      }
    }
  }
  else
  {
    *(_DWORD *)(a1 + 232) = 0;
  }
}
