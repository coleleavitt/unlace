void __fastcall sub_629A30(__int64 a1)
{
  __int64 v2; // rdi
  void (*v3)(); // rax

  if ( *(_QWORD *)(a1 + 64) )
  {
    switch_dbctx(*(int *)(*(_QWORD *)(a1 + 32) + 4LL * *(int *)(a1 + 12) + 16));
    v2 = *(_QWORD *)(a1 + 64);
    v3 = *(void (**)())(*(_QWORD *)v2 + 16LL);
    if ( v3 != nullsub_76 )
      ((void (__fastcall *)(__int64, _QWORD, _QWORD))v3)(v2, *(unsigned int *)(a1 + 12), *(_QWORD *)(a1 + 72));
  }
}
