void __fastcall sub_E3B410(__int64 a1)
{
  __int64 v2; // rdi
  void *v3; // rdi
  void *v4; // rdi

  operator delete(*(_QWORD *)(a1 + 256), 24LL * *(unsigned int *)(a1 + 272), 8);
  operator delete(*(_QWORD *)(a1 + 232), 16LL * *(unsigned int *)(a1 + 248), 8);
  v2 = *(_QWORD *)(a1 + 224);
  if ( v2 )
  {
    sub_E3ABF0(
      (__int64 *)v2,
      (char *)(*(_QWORD *)v2 + 16LL * *(unsigned int *)(v2 + 8)),
      *(char **)(a1 + 56),
      (char *)(*(_QWORD *)(a1 + 56) + 16LL * *(unsigned int *)(a1 + 64)));
    sub_E3ABF0(
      (__int64 *)(*(_QWORD *)(a1 + 224) + 80LL),
      (char *)(*(_QWORD *)(*(_QWORD *)(a1 + 224) + 80LL) + 16LL * *(unsigned int *)(*(_QWORD *)(a1 + 224) + 88LL)),
      *(char **)(a1 + 136),
      (char *)(*(_QWORD *)(a1 + 136) + 16LL * *(unsigned int *)(a1 + 144)));
    v2 = *(_QWORD *)(a1 + 224);
  }
  **(_QWORD **)(a1 + 216) = v2;
  v3 = *(void **)(a1 + 136);
  if ( v3 != (void *)(a1 + 152) )
    free(v3);
  v4 = *(void **)(a1 + 56);
  if ( v4 != (void *)(a1 + 72) )
    free(v4);
}
