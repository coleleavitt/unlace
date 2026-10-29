void __fastcall sub_E11960(_DWORD *a1)
{
  char *v2; // rdi
  int v3; // eax
  __int64 v4; // rbp
  __int64 v5; // r12
  __int64 v6; // rax

  *(_QWORD *)a1 = &off_2B21930;
  operator delete();
  *(_QWORD *)a1 = &off_2B218E0;
  operator delete();
  operator delete();
  operator delete();
  if ( a1[9] )
  {
    v3 = a1[8];
    v2 = *((char **)a1 + 3);
    if ( v3 )
    {
      v4 = 0;
      v5 = 8LL * (unsigned int)(v3 - 1) + 8;
      do
      {
        v6 = *(_QWORD *)&v2[v4];
        if ( v6 != -8 && v6 )
        {
          operator delete();
          v2 = *((char **)a1 + 3);
        }
        v4 += 8;
      }
      while ( v5 != v4 );
    }
  }
  else
  {
    v2 = *((char **)a1 + 3);
  }
  free(v2);
  operator delete(a1, 0x98u);
}

