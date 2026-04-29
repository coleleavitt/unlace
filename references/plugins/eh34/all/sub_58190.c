__int64 __fastcall sub_58190(__int64 a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rbp
  void *v4; // rdi

  v2 = *(_QWORD **)(a1 + 88);
  while ( v2 )
  {
    v3 = v2;
    v2 = (_QWORD *)*v2;
    qfree(v3[3]);
    operator delete(v3, 0x28u);
  }
  memset(*(void **)(a1 + 72), 0, 8LL * *(_QWORD *)(a1 + 80));
  v4 = *(void **)(a1 + 72);
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  if ( v4 != (void *)(a1 + 120) )
    operator delete(v4, 8LL * *(_QWORD *)(a1 + 80));
  qfree(*(_QWORD *)(a1 + 56));
  return qfree(*(_QWORD *)(a1 + 40));
}
