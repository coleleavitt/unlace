void __fastcall sub_1068FD0(_QWORD *a1)
{
  _QWORD *v2; // rdi
  char *v3; // rdi
  int v4; // eax
  __int64 v5; // rbp
  __int64 v6; // r12
  _QWORD *v7; // rax

  *a1 = &off_2C29B40;
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
        v7 = *(_QWORD **)&v3[v5];
        if ( v7 != (_QWORD *)-8LL && v7 )
        {
          operator delete(*(_QWORD *)&v3[v5], *v7 + 17LL, 8);
          v3 = (char *)a1[66];
        }
        v5 += 8;
      }
      while ( v6 != v5 );
    }
  }
  free(v3);
  sub_102D6A0((__int64)a1);
  operator delete(a1, 0x248u);
}
