void __fastcall sub_E355D0(_QWORD *a1)
{
  int v2; // eax
  char *v3; // rdi
  __int64 v4; // rbp
  __int64 v5; // r12
  _QWORD *v6; // rax

  *a1 = &off_2B4B880;
  operator delete(a1[13], 24LL * *((unsigned int *)a1 + 30), 8);
  operator delete(a1[10], 16LL * *((unsigned int *)a1 + 24), 8);
  operator delete(a1[7], 16LL * *((unsigned int *)a1 + 18), 8);
  if ( *((_DWORD *)a1 + 9) )
  {
    v2 = *((_DWORD *)a1 + 8);
    v3 = (char *)a1[3];
    if ( v2 )
    {
      v4 = 0;
      v5 = 8LL * (unsigned int)(v2 - 1) + 8;
      do
      {
        v6 = *(_QWORD **)&v3[v4];
        if ( v6 != (_QWORD *)-8LL && v6 )
        {
          operator delete(*(_QWORD *)&v3[v4], *v6 + 17LL, 8);
          v3 = (char *)a1[3];
        }
        v4 += 8;
      }
      while ( v5 != v4 );
    }
  }
  else
  {
    v3 = (char *)a1[3];
  }
  free(v3);
  operator delete(a1, 0x80u);
}
