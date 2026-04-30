void __fastcall sub_2953D0(__int64 a1)
{
  __int64 v2; // rbx
  void *v3; // rdi
  __int64 v4; // rbx
  void *v5; // rdi

  v2 = *(_QWORD *)(a1 + 88);
  while ( v2 )
  {
    sub_2920A0(*(_QWORD **)(v2 + 24));
    v3 = (void *)v2;
    v2 = *(_QWORD *)(v2 + 16);
    operator delete(v3, 0x28u);
  }
  v4 = *(_QWORD *)(a1 + 40);
  while ( v4 )
  {
    sub_2920A0(*(_QWORD **)(v4 + 24));
    v5 = (void *)v4;
    v4 = *(_QWORD *)(v4 + 16);
    operator delete(v5, 0x28u);
  }
}
