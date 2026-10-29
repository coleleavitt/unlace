void __fastcall sub_374960(__int64 a1)
{
  _QWORD *v2; // r12
  __int64 v3; // rbx
  void *v4; // rdi

  v2 = *(_QWORD **)(a1 + 1144);
  if ( v2 )
  {
    v3 = v2[2];
    while ( v3 )
    {
      sub_36BBD0(*(_QWORD **)(v3 + 24));
      v4 = (void *)v3;
      v3 = *(_QWORD *)(v3 + 16);
      operator delete(v4, 0x28u);
    }
    operator delete(v2, 0x30u);
  }
  *(_QWORD *)(a1 + 1144) = 0;
}
