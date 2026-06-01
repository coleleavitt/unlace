void __fastcall sub_1506A80(void **a1)
{
  char *v1; // rax
  int v2; // edx
  __int64 v3; // r14
  __int64 v4; // rbx
  _QWORD *v5; // rbp
  void *v6; // r15
  __int64 v7; // r12

  v1 = (char *)*a1;
  if ( *((_DWORD *)a1 + 3) && (v2 = *((_DWORD *)a1 + 2)) != 0 )
  {
    v3 = 8LL * (unsigned int)(v2 - 1) + 8;
    v4 = 0;
    do
    {
      v5 = *(_QWORD **)&v1[v4];
      if ( v5 && v5 != (_QWORD *)-8LL )
      {
        v6 = (void *)v5[2];
        v7 = *v5 + 25LL;
        if ( v6 )
        {
          sub_1506A80(v5[2]);
          operator delete(v6, 0x18u);
        }
        operator delete(v5, v7, 8);
        v1 = (char *)*a1;
      }
      v4 += 8;
    }
    while ( v3 != v4 );
    free(v1);
  }
  else
  {
    free(*a1);
  }
}
