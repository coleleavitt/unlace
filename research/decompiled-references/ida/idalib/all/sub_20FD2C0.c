void __fastcall sub_20FD2C0(_DWORD *a1)
{
  int v2; // eax
  char *v3; // rdi
  int v4; // eax
  __int64 v5; // r12
  __int64 v6; // r14
  _QWORD *v7; // rbx
  __int64 v8; // r13

  v2 = a1[3];
  v3 = *(char **)a1;
  if ( v2 )
  {
    v4 = a1[2];
    if ( v4 )
    {
      v5 = 0;
      v6 = 8LL * (unsigned int)(v4 - 1) + 8;
      do
      {
        v7 = *(_QWORD **)&v3[v5];
        if ( v7 && v7 != (_QWORD *)-8LL )
        {
          v8 = *v7 + 25LL;
          if ( v7[2] )
            sub_20FD2C0();
          operator delete(v7, v8, 8);
          v3 = *(char **)a1;
        }
        v5 += 8;
      }
      while ( v6 != v5 );
    }
  }
  free(v3);
  operator delete(a1, 0x18u);
}
