__int64 __fastcall sub_E78AD0(__int64 a1)
{
  void *v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rsi

  *(_QWORD *)a1 = off_2C05018;
  v2 = *(void **)(a1 + 248);
  if ( v2 != (void *)(a1 + 272) )
    free(v2);
  operator delete(*(_QWORD *)(a1 + 224), 24LL * *(unsigned int *)(a1 + 240), 8);
  operator delete(*(_QWORD *)(a1 + 200), 24LL * *(unsigned int *)(a1 + 216), 8);
  operator delete(*(_QWORD *)(a1 + 176), 16LL * *(unsigned int *)(a1 + 192), 8);
  operator delete(*(_QWORD *)(a1 + 152), 16LL * *(unsigned int *)(a1 + 168), 8);
  operator delete(*(_QWORD *)(a1 + 128), 24LL * *(unsigned int *)(a1 + 144), 8);
  v3 = *(_QWORD *)(a1 + 104);
  v4 = 16LL * *(unsigned int *)(a1 + 120);
  *(_QWORD *)a1 = &off_2C04EC8;
  operator delete(v3, v4, 8);
  operator delete(*(_QWORD *)(a1 + 80), 16LL * *(unsigned int *)(a1 + 96), 8);
  operator delete(*(_QWORD *)(a1 + 56), 16LL * *(unsigned int *)(a1 + 72), 8);
  return operator delete(*(_QWORD *)(a1 + 32), 16LL * *(unsigned int *)(a1 + 48), 8);
}
