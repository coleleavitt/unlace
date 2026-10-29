void __fastcall sub_10E44D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  unsigned __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rbp

  if ( *(_DWORD *)(a1 + 24) == 1 )
  {
    sub_10E4080(a1, a2);
  }
  else
  {
    v2 = *(unsigned int *)(a2 + 8);
    v3 = *(_QWORD *)(a1 + 40);
    if ( v2 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
    {
      sub_22134E0(a2, a2 + 16, v2 + 1, 8);
      v2 = *(unsigned int *)(a2 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a2 + 8 * v2) = v3;
    v4 = *(unsigned int *)(a2 + 12);
    v5 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
    *(_DWORD *)(a2 + 8) = v5;
    v6 = *(_QWORD *)(a1 + 400);
    if ( v5 + 1 > v4 )
    {
      sub_22134E0(a2, a2 + 16, v5 + 1, 8);
      v5 = *(unsigned int *)(a2 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a2 + 8 * v5) = v6;
    ++*(_DWORD *)(a2 + 8);
  }
}

