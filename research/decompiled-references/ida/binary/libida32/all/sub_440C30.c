void __fastcall sub_440C30(__int64 a1)
{
  __int64 v2; // rdi
  void (*v3)(); // rax

  if ( *(_QWORD *)(a1 + 80) && *(_BYTE *)(a1 + 94) )
  {
    switch_dbctx(*(int *)(*(_QWORD *)(a1 + 32) + 4LL * *(int *)(a1 + 12) + 16));
    v2 = *(_QWORD *)(a1 + 80);
    v3 = *(void (**)())(*(_QWORD *)v2 + 80LL);
    if ( v3 != nullsub_48 )
      ((void (__fastcall *)(__int64, _QWORD, _QWORD))v3)(v2, *(unsigned __int8 *)(a1 + 92), *(_QWORD *)(a1 + 64));
    *(_BYTE *)(a1 + 94) = 0;
  }
}

