void __fastcall sub_B4AD0(_QWORD *a1)
{
  __int64 v1; // rbx
  void *v2; // rdi

  v1 = a1[9];
  *a1 = off_4AFA20;
  while ( v1 )
  {
    sub_B4900(*(_QWORD **)(v1 + 24));
    v2 = (void *)v1;
    v1 = *(_QWORD *)(v1 + 16);
    operator delete(v2, 0x28u);
  }
}
