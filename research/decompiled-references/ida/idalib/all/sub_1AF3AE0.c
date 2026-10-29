void __fastcall sub_1AF3AE0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  void *v3; // rdi

  v1 = (unsigned int)(*(_DWORD *)(a1 + 264) - 1);
  *(_DWORD *)(a1 + 264) = v1;
  v2 = *(_QWORD *)(a1 + 256) + 40 * v1;
  v3 = *(void **)(v2 + 8);
  if ( v3 != (void *)(v2 + 24) )
    operator delete(v3);
}
