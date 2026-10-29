void __fastcall sub_9AE3D0(__int64 a1)
{
  void *v2; // rdi

  sub_9AE1E0((_DWORD **)(a1 + 72));
  sub_9AE1E0((_DWORD **)(a1 + 64));
  v2 = *(void **)(a1 + 32);
  if ( v2 != (void *)(a1 + 56) )
    free(v2);
  if ( *(_QWORD *)a1 != a1 + 24 )
    free(*(void **)a1);
}

