void __fastcall sub_713500(__int64 a1)
{
  void *v1; // rbx

  if ( *(_QWORD *)a1 )
    sub_713370((_QWORD *)a1, 2);
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 536) = 0;
  memset(
    (void *)((a1 + 40) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)a1 - (((_DWORD)a1 + 40) & 0xFFFFFFF8) + 544) >> 3));
  qfree(*(void **)(a1 + 24));
  *(_QWORD *)(a1 + 24) = 0;
  v1 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    sub_7140B0(v1);
    operator delete(v1, 0x18u);
  }
}

