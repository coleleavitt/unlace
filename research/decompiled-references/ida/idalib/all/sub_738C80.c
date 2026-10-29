void __fastcall sub_738C80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  void *v6; // rbx

  if ( *(_QWORD *)a1 )
    sub_738AF0((_QWORD *)a1, 2, a3, a4, a5, a6);
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 536) = 0;
  memset(
    (void *)((a1 + 40) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)a1 - (((_DWORD)a1 + 40) & 0xFFFFFFF8) + 544) >> 3));
  qfree(*(void **)(a1 + 24));
  *(_QWORD *)(a1 + 24) = 0;
  v6 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    sub_73B0F0(v6);
    operator delete(v6, 0x18u);
  }
}
