void __fastcall sub_224D820(__int64 a1)
{
  void (__fastcall *v2)(__int64, __int64, __int64); // rax
  void *v3; // rdi
  bool v4; // zf
  void *v5; // rdi

  *(_QWORD *)a1 = off_2C75E48;
  v2 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 200);
  if ( v2 )
    v2(a1 + 184, a1 + 184, 3);
  v3 = *(void **)(a1 + 136);
  *(_QWORD *)(a1 + 128) = off_2C712B0;
  if ( v3 != (void *)(a1 + 152) )
    operator delete(v3);
  v4 = *(_BYTE *)(a1 + 108) == 0;
  *(_QWORD *)a1 = &off_2C758B0;
  if ( v4 )
    free(*(void **)(a1 + 88));
  v5 = *(void **)(a1 + 64);
  if ( v5 != (void *)(a1 + 80) )
    free(v5);
}
