void __fastcall sub_6D8B80(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v2; // rbx

  v1 = a1[1];
  v2 = *a1;
  if ( v1 != *a1 )
  {
    do
    {
      if ( *(_QWORD *)v2 != v2 + 16 )
        operator delete(*(void **)v2, *(_QWORD *)(v2 + 16) + 1LL);
      v2 += 32;
    }
    while ( v1 != v2 );
    v2 = *a1;
  }
  if ( v2 )
    operator delete((void *)v2, a1[2] - v2);
}

