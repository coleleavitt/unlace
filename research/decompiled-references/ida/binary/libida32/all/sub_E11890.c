void __fastcall sub_E11890(_DWORD *a1)
{
  int v2; // eax
  char *v3; // rdi
  __int64 v4; // rbp
  __int64 v5; // r12
  __int64 v6; // rax

  *(_QWORD *)a1 = &off_2B218E0;
  operator delete();
  operator delete();
  operator delete();
  if ( a1[9] )
  {
    v2 = a1[8];
    v3 = *((char **)a1 + 3);
    if ( v2 )
    {
      v4 = 0;
      v5 = 8LL * (unsigned int)(v2 - 1) + 8;
      do
      {
        v6 = *(_QWORD *)&v3[v4];
        if ( v6 != -8 && v6 )
        {
          operator delete();
          v3 = *((char **)a1 + 3);
        }
        v4 += 8;
      }
      while ( v5 != v4 );
    }
  }
  else
  {
    v3 = *((char **)a1 + 3);
  }
  free(v3);
  operator delete(a1, 0x80u);
}

