bool __fastcall sub_26440(__int64 a1)
{
  __int64 v2; // rbx
  void *v3; // rdi
  int v4; // eax

  v2 = *(_QWORD *)(a1 + 128);
  while ( v2 )
  {
    sub_26270(*(_QWORD **)(v2 + 24));
    v3 = (void *)v2;
    v2 = *(_QWORD *)(v2 + 16);
    operator delete(v3, 0x28u);
  }
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = a1 + 120;
  *(_QWORD *)(a1 + 144) = a1 + 120;
  v4 = *(_DWORD *)(a1 + 332);
  *(_QWORD *)(a1 + 152) = 0;
  *(_DWORD *)(a1 + 332) = ++v4;
  return v4 == 1;
}
