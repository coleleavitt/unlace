void __fastcall sub_9A8ED0(__int64 a1)
{
  unsigned int *v1; // rbx

  v1 = *(unsigned int **)(a1 + 8);
  if ( v1 )
  {
    operator delete(*(_QWORD *)v1, 16LL * v1[4], 8);
    operator delete(v1, 0x18u);
  }
}
