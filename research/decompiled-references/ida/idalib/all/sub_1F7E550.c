void __fastcall sub_1F7E550(__int64 a1, int *a2)
{
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  char *v8; // rbp

  v4 = *(unsigned int *)(a1 + 8);
  v5 = *(_QWORD *)a1;
  v6 = v4 + 1;
  v7 = *(_QWORD *)a1 + 56 * v4;
  if ( v4 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
  {
    if ( v5 > (unsigned __int64)a2 || v7 <= (unsigned __int64)a2 )
    {
      sub_C25F00(a1, v6);
      v7 = *(_QWORD *)a1 + 56LL * *(unsigned int *)(a1 + 8);
    }
    else
    {
      v8 = (char *)a2 - v5;
      sub_C25F00(a1, v6);
      a2 = (int *)&v8[*(_QWORD *)a1];
      v7 = *(_QWORD *)a1 + 56LL * *(unsigned int *)(a1 + 8);
    }
  }
  sub_A53C40(v7, a2);
  ++*(_DWORD *)(a1 + 8);
}
