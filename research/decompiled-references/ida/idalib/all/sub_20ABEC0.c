void __fastcall sub_20ABEC0(__int64 a1)
{
  __int64 v1; // rax
  void *v2; // rbx

  v1 = *(_QWORD *)(a1 + 8);
  if ( (v1 & 4) != 0 )
  {
    v2 = (void *)(v1 & 0xFFFFFFFFFFFFFFF8LL);
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(v1 & 0xFFFFFFFFFFFFFFF8LL) & 0xFFFFFFFFFFFFFFFBLL;
    if ( *(_DWORD *)((v1 & 0xFFFFFFFFFFFFFFF8LL) + 16) >> 1 )
      sub_20ABCE0((__int64)v2);
    if ( v2 )
    {
      sub_20A0EC0((__int64)v2 + 16);
      operator delete(v2, 0x78u);
    }
  }
}
