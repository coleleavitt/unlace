void __fastcall sub_1045120(_QWORD *a1)
{
  _QWORD *v2; // rdi
  char *v3; // rdi
  int v4; // eax
  __int64 v5; // rbp
  __int64 v6; // r12
  __int64 v7; // rax

  *a1 = &off_2BFFB40;
  v2 = (_QWORD *)a1[69];
  if ( v2 != a1 + 71 )
    operator delete(v2);
  v3 = (char *)a1[66];
  if ( *((_DWORD *)a1 + 135) )
  {
    v4 = *((_DWORD *)a1 + 134);
    if ( v4 )
    {
      v5 = 0;
      v6 = 8LL * (unsigned int)(v4 - 1) + 8;
      do
      {
        v7 = *(_QWORD *)&v3[v5];
        if ( v7 != -8 && v7 )
        {
          operator delete();
          v3 = (char *)a1[66];
        }
        v5 += 8;
      }
      while ( v6 != v5 );
    }
  }
  free(v3);
  sub_1009960((__int64)a1);
}

