void __fastcall close_ids_file(__int64 a1)
{
  __int64 v2; // rdi
  void *v3; // rdi

  byte_2CABFC0 = 0;
  if ( a1 )
  {
    v2 = *(_QWORD *)(a1 + 56);
    if ( v2 )
    {
      qfclose(v2);
      *(_QWORD *)(a1 + 56) = 0;
    }
    v3 = *(void **)(a1 + 64);
    if ( v3 )
    {
      qfree(v3);
      *(_QWORD *)(a1 + 64) = 0;
    }
  }
}

