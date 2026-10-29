__int64 __fastcall sub_305320(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rbp
  void *v6; // r12

  if ( !*(_DWORD *)(a1 + 56) )
    return 12;
  if ( !*(_QWORD *)(a1 + 24) )
    return 7;
  v4 = *(_QWORD *)(a1 + 48);
  if ( !v4 )
  {
    v5 = sub_186B270(8u);
    sub_1857380(v5);
    v6 = *(void **)(a1 + 48);
    if ( (void *)v5 != v6 )
    {
      if ( v6 )
      {
        sub_1857540(*(_QWORD *)(a1 + 48));
        sub_186B220(v6);
      }
      *(_QWORD *)(a1 + 48) = v5;
    }
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 224LL))(a1, a2, v5);
    v4 = *(_QWORD *)(a1 + 48);
  }
  return sub_18582D0(v4, a1 + 24);
}

