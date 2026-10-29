void __fastcall sub_1803AF0(__int64 a1)
{
  bool v1; // zf

  v1 = *(_BYTE *)(a1 + 36) == 0;
  *(_QWORD *)a1 = off_2C50FA0;
  if ( v1 )
    free(*(void **)(a1 + 16));
}
