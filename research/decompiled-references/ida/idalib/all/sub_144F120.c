void __fastcall sub_144F120(_DWORD *a1)
{
  int v2; // eax
  char *v3; // rdi
  int v4; // eax
  __int64 v5; // r12
  __int64 v6; // r14
  _QWORD *v7; // rbp
  __int64 v8; // rdi
  __int64 v9; // r13
  _DWORD *v10; // rdi

  *(_QWORD *)a1 = &off_2BB2C80;
  v2 = a1[13];
  v3 = *((char **)a1 + 5);
  if ( v2 )
  {
    v4 = a1[12];
    if ( v4 )
    {
      v5 = 0;
      v6 = 8LL * (unsigned int)(v4 - 1) + 8;
      do
      {
        v7 = *(_QWORD **)&v3[v5];
        if ( v7 != (_QWORD *)-8LL && v7 )
        {
          v8 = v7[1];
          v9 = *v7 + 17LL;
          if ( v8 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
          operator delete(v7, v9, 8);
          v3 = *((char **)a1 + 5);
        }
        v5 += 8;
      }
      while ( v6 != v5 );
    }
  }
  free(v3);
  v10 = *((_DWORD **)a1 + 1);
  *(_QWORD *)a1 = &unk_2C446A0;
  if ( v10 != a1 + 6 )
    operator delete(v10);
  operator delete(a1, 0x40u);
}
