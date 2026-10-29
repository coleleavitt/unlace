void __fastcall sub_509020(__int64 a1)
{
  void *v2; // rdi
  __int64 v3; // rax
  void *v4; // rdi

  v2 = *(void **)(a1 + 32);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 40) = 0;
    qfree(v2);
  }
  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 )
    --*(_DWORD *)(v3 + 12);
  v4 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v4);
  }
}

