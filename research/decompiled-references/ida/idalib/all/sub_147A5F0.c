void __fastcall sub_147A5F0(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi

  if ( *(_DWORD *)(a1 + 140) )
    free(*(void **)(a1 + 128));
  sub_15DCED0(*(_QWORD *)(a1 + 72), a1 + 72);
  v2 = *(void **)(a1 + 80);
  if ( v2 != (void *)(a1 + 96) )
    free(v2);
  v3 = *(void **)(a1 + 40);
  if ( v3 != (void *)(a1 + 56) )
    free(v3);
}
