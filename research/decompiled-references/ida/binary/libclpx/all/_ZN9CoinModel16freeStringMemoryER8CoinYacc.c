void __fastcall CoinModel::freeStringMemory(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp

  v2 = *a2;
  if ( *a2 )
  {
    do
    {
      free(*(void **)v2);
      v3 = *(_QWORD *)(v2 + 24);
      free((void *)v2);
      v2 = v3;
    }
    while ( v3 );
  }
  free((void *)a2[1]);
  *((_DWORD *)a2 + 4) = 0;
}

