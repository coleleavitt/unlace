void __fastcall sub_83C290(__int64 a1)
{
  unsigned __int64 v2; // rbx
  int v3; // edi
  int v4; // edi

  if ( *(_QWORD *)(a1 + 8) )
  {
    v2 = 0;
    do
    {
      v3 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4 * v2);
      if ( v3 != -1 )
        qpipe_close(v3);
      v4 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4 * v2);
      if ( v4 != -1 )
        qpipe_close(v4);
      ++v2;
    }
    while ( v2 < *(_QWORD *)(a1 + 8) );
  }
  qfree(*(void **)(a1 + 16));
  *(_QWORD *)(a1 + 16) = 0;
  qfree(*(void **)(a1 + 24));
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 8) = 0;
}
