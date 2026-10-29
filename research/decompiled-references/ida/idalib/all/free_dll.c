void __fastcall free_dll(__int64 a1)
{
  void *v2; // rdi
  char *v3; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    if ( dlclose(v2) )
    {
      v3 = dlerror();
      sub_378C70((__int64)"dlclose: %s", v3);
    }
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 80) = 0;
    memset(
      (void *)((a1 + 8) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * (((unsigned int)a1 - (((_DWORD)a1 + 8) & 0xFFFFFFF8) + 88) >> 3));
  }
}
