void __fastcall sub_144F050(__int64 a1)
{
  int v2; // eax
  char *v3; // rdi
  int v4; // eax
  __int64 v5; // r12
  __int64 v6; // r14
  _QWORD *v7; // rbp
  __int64 v8; // rdi
  __int64 v9; // r13
  _QWORD *v10; // rdi
  _QWORD *v11; // rbx

  *(_QWORD *)a1 = &off_2BB2C80;
  v2 = *(_DWORD *)(a1 + 52);
  v3 = *(char **)(a1 + 40);
  if ( v2 )
  {
    v4 = *(_DWORD *)(a1 + 48);
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
          v3 = *(char **)(a1 + 40);
        }
        v5 += 8;
      }
      while ( v6 != v5 );
    }
  }
  free(v3);
  v10 = *(_QWORD **)(a1 + 8);
  v11 = (_QWORD *)(a1 + 24);
  *(v11 - 3) = &unk_2C446A0;
  if ( v10 != v11 )
    operator delete(v10);
}
