__int64 __fastcall sub_F2930(_QWORD *a1)
{
  __int64 v2; // rbx
  void *v3; // rdi

  v2 = a1[9];
  *a1 = off_4CA0C0;
  while ( v2 )
  {
    sub_F2720(*(_QWORD **)(v2 + 24));
    v3 = (void *)v2;
    v2 = *(_QWORD *)(v2 + 16);
    operator delete(v3, 0x28u);
  }
  return j__qfree(a1);
}
