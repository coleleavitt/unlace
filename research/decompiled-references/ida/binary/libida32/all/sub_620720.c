void __fastcall sub_620720(__int64 a1)
{
  __int64 v1; // rbx
  void *v2; // rdi

  v1 = *(_QWORD *)(a1 + 1496);
  v2 = *(void **)(v1 + 16);
  if ( v2 )
  {
    *(_QWORD *)(v1 + 24) = 0;
    qfree(v2);
    *(_QWORD *)(v1 + 16) = 0;
    *(_QWORD *)(v1 + 32) = 0;
  }
  *(_DWORD *)(v1 + 8) = -1;
}

