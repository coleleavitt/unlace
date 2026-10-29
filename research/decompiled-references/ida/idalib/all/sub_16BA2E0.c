void __fastcall sub_16BA2E0(_QWORD *a1)
{
  void **v1; // rbp

  v1 = (void **)a1[11];
  *a1 = &off_2BC6708;
  if ( ((unsigned __int8)v1 & 1) == 0 && v1 )
  {
    if ( *v1 != v1 + 2 )
      free(*v1);
    operator delete(v1, 0x48u);
  }
  nullsub_479();
}
