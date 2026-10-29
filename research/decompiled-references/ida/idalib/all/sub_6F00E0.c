void __fastcall sub_6F00E0(_QWORD *a1)
{
  __int64 v1; // rbp

  v1 = a1[2];
  if ( v1 )
  {
    operator delete(*(_QWORD *)(v1 + 40), 16LL * *(unsigned int *)(v1 + 56), 8);
    operator delete(*(_QWORD *)(v1 + 16), 16LL * *(unsigned int *)(v1 + 32), 8);
    operator delete((void *)v1, 0x40u);
  }
  operator delete(a1, 0x18u);
}
