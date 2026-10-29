void __fastcall sub_13B3010(__int64 a1)
{
  __int64 v2; // rdi
  void *v3; // rdi
  __int64 v4; // rdi

  *(_QWORD *)a1 = &off_2C443D8;
  if ( (*(_BYTE *)(a1 + 72) & 1) != 0 )
  {
    v2 = *(_QWORD *)(a1 + 16);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  v3 = *(void **)(a1 + 40);
  if ( v3 != (void *)(a1 + 56) )
    operator delete(v3);
  v4 = *(_QWORD *)(a1 + 32);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  nullsub_558();
}
