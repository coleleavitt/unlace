void __fastcall sub_12E9D50(__int64 a1, _DWORD *a2)
{
  _DWORD *v2; // rbp
  __int64 v4; // rdi
  void (*v5)(void); // rax

  if ( a2 )
    ++*a2;
  v2 = *(_DWORD **)(a1 + 112);
  *(_QWORD *)(a1 + 112) = a2;
  if ( v2 )
  {
    if ( (*v2)-- == 1 )
    {
      sub_A8A9B0((__int64)v2);
      operator delete(v2, 0x5B58u);
      a2 = *(_DWORD **)(a1 + 112);
    }
  }
  if ( a2 )
  {
    v4 = *(_QWORD *)(a1 + 128);
    if ( v4 )
    {
      v5 = *(void (**)(void))(*(_QWORD *)v4 + 16LL);
      if ( v5 != nullsub_148 )
        v5();
    }
  }
}
