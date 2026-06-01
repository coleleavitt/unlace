void __fastcall sub_BFFEC0(_QWORD *a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // r12
  __int64 v4; // rbx
  __int64 v5; // rbp

  *a1 = &off_2B21540;
  --*(_DWORD *)(a1[1] + 40LL);
  *(_QWORD *)(a1[1] + 32LL) = a1[2];
  operator delete();
  v2 = (_QWORD *)a1[17];
  if ( v2 != a1 + 19 )
    free(v2);
  v3 = (__int64)(a1 + 9);
  v4 = a1[11];
  if ( v4 )
  {
    while ( 1 )
    {
      sub_BFFE50(v3, *(_QWORD *)(v4 + 24));
      v5 = *(_QWORD *)(v4 + 16);
      if ( *(_DWORD *)(v4 + 48) > 1u )
      {
        sub_A2BBA0((int *)(v4 + 48));
        operator delete((void *)v4);
        if ( !v5 )
          return;
      }
      else
      {
        operator delete((void *)v4);
        if ( !v5 )
          return;
      }
      v4 = v5;
    }
  }
}

