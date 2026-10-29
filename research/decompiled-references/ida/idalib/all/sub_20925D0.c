void __fastcall sub_20925D0(__int64 *a1)
{
  __int64 v1; // rdi
  unsigned __int64 v2; // rbx

  v1 = *a1;
  if ( (v1 & 4) != 0 )
  {
    v2 = v1 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v1 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      if ( (*(_BYTE *)(v2 + 16) & 1) != 0 )
      {
        operator delete((void *)(v1 & 0xFFFFFFFFFFFFFFF8LL), 0x78u);
      }
      else
      {
        operator delete(*(_QWORD *)(v2 + 24), 24LL * *(unsigned int *)(v2 + 32), 8);
        operator delete((void *)v2, 0x78u);
      }
    }
  }
}
