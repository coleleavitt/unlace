void __fastcall sub_1A7BFD0(__int64 a1)
{
  __int64 v1; // rax
  void *v2; // rdi

  v1 = (unsigned int)(*(_DWORD *)(a1 + 10152) - 1);
  *(_DWORD *)(a1 + 10152) = v1;
  v2 = *(void **)(*(_QWORD *)(a1 + 10144) + 48 * v1 + 16);
  if ( v2 )
    operator delete(v2);
}
