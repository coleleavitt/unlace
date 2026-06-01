__int64 __fastcall sub_E39140(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi

  *(_QWORD *)a1 = off_2C04DA8;
  operator delete(*(_QWORD *)(a1 + 152), 16LL * *(unsigned int *)(a1 + 168), 8);
  operator delete(*(_QWORD *)(a1 + 128), 24LL * *(unsigned int *)(a1 + 144), 8);
  v2 = *(_QWORD *)(a1 + 104);
  v3 = 16LL * *(unsigned int *)(a1 + 120);
  *(_QWORD *)a1 = &off_2C04EC8;
  operator delete(v2, v3, 8);
  operator delete(*(_QWORD *)(a1 + 80), 16LL * *(unsigned int *)(a1 + 96), 8);
  operator delete(*(_QWORD *)(a1 + 56), 16LL * *(unsigned int *)(a1 + 72), 8);
  return operator delete(*(_QWORD *)(a1 + 32), 16LL * *(unsigned int *)(a1 + 48), 8);
}
