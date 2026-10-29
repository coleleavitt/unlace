void __fastcall sub_10450A0(void **a1)
{
  char *v1; // rdx
  int v2; // eax
  __int64 v3; // r12
  __int64 v5; // rbx
  __int64 v6; // rdi

  v1 = (char *)*a1;
  if ( *((_DWORD *)a1 + 3) && (v2 = *((_DWORD *)a1 + 2)) != 0 )
  {
    v3 = 8LL * (unsigned int)(v2 - 1) + 8;
    v5 = 0;
    do
    {
      v6 = *(_QWORD *)&v1[v5];
      if ( v6 != -8 )
      {
        if ( v6 )
        {
          operator delete();
          v1 = (char *)*a1;
        }
      }
      v5 += 8;
    }
    while ( v3 != v5 );
    free(v1);
  }
  else
  {
    free(*a1);
  }
}

