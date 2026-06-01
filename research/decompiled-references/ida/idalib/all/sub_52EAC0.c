void __fastcall sub_52EAC0(__int64 a1, unsigned __int64 *a2)
{
  _QWORD **v2; // rax
  void *v3; // rdi

  v2 = sub_52EA70(a1, *a2);
  memmove(v2, v2 + 1, *(_QWORD *)(a1 + 8) + 8LL * *(_QWORD *)(a1 + 16) - (_QWORD)v2 - 8);
  --*(_QWORD *)(a1 + 16);
  v3 = (void *)a2[2];
  if ( v3 )
    qfree(v3);
  if ( a2 )
    operator delete(a2, 0x28u);
}
