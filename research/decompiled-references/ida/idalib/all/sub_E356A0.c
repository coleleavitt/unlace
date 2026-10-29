void __fastcall sub_E356A0(_QWORD *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rax
  char *v6; // rdi
  int v7; // eax
  __int64 v8; // rbp
  __int64 v9; // r12
  _QWORD *v10; // rax

  v1 = *((unsigned int *)a1 + 36);
  *a1 = &off_2B4B8D0;
  operator delete(a1[16], 16 * v1, 8);
  v3 = a1[13];
  v4 = 0;
  *a1 = &off_2B4B880;
  v5 = *((unsigned int *)a1 + 30);
  if ( (_DWORD)v5 )
    v4 = 24 * v5;
  operator delete(v3, v4, 8);
  operator delete(a1[10], 16LL * *((unsigned int *)a1 + 24), 8);
  operator delete(a1[7], 16LL * *((unsigned int *)a1 + 18), 8);
  if ( *((_DWORD *)a1 + 9) )
  {
    v7 = *((_DWORD *)a1 + 8);
    v6 = (char *)a1[3];
    if ( v7 )
    {
      v8 = 0;
      v9 = 8LL * (unsigned int)(v7 - 1) + 8;
      do
      {
        v10 = *(_QWORD **)&v6[v8];
        if ( v10 != (_QWORD *)-8LL && v10 )
        {
          operator delete(*(_QWORD *)&v6[v8], *v10 + 17LL, 8);
          v6 = (char *)a1[3];
        }
        v8 += 8;
      }
      while ( v9 != v8 );
    }
  }
  else
  {
    v6 = (char *)a1[3];
  }
  free(v6);
  operator delete(a1, 0x98u);
}
