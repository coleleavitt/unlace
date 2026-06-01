void __fastcall sub_1366580(_QWORD *a1)
{
  __int64 v2; // rbx
  char *v3; // r13
  void *v4; // rdi
  __int64 v5; // r12
  bool v6; // zf
  __int64 v7; // rdi

  v2 = a1[6];
  *a1 = &off_2BB2288;
  if ( v2 )
  {
    v3 = (char *)(a1 + 4);
    while ( 1 )
    {
      sub_F7EAE0((__int64)v3, *(_QWORD **)(v2 + 24));
      v4 = *(void **)(v2 + 32);
      v5 = *(_QWORD *)(v2 + 16);
      if ( v4 == (void *)(v2 + 48) )
      {
        operator delete((void *)v2);
        if ( !v5 )
          break;
      }
      else
      {
        operator delete(v4);
        operator delete((void *)v2);
        if ( !v5 )
          break;
      }
      v2 = v5;
    }
  }
  v6 = *((_BYTE *)a1 + 16) == 0;
  *a1 = &off_2BB21A8;
  if ( !v6 )
  {
    v7 = a1[1];
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  }
  nullsub_1230(a1);
  operator delete(a1, 0x50u);
}
