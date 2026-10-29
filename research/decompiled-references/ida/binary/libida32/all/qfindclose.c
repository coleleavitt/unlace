void __fastcall qfindclose(__int64 a1)
{
  __int64 v2; // rbx
  void *v3; // rdi

  if ( *(int *)(a1 + 8244) > 0 )
  {
    v2 = 0;
    do
    {
      v3 = *(void **)(*(_QWORD *)(a1 + 8232) + 8 * v2++);
      free(v3);
    }
    while ( *(_DWORD *)(a1 + 8244) > (int)v2 );
  }
  free(*(void **)(a1 + 8232));
  *(_DWORD *)(a1 + 8244) = 0;
  *(_QWORD *)(a1 + 8232) = 0;
}

