void __fastcall sub_743350(__int64 a1)
{
  __int64 v2; // rax
  void *v3; // rdi
  void *v4; // rbp
  void *v5; // rdi

  if ( qword_2CCC640[*(unsigned __int8 *)(a1 + 1616)] )
  {
    if ( !(unsigned __int8)sub_73C110((unsigned int *)a1) )
      sub_743100(15, 0);
    v2 = *(unsigned __int8 *)(a1 + 1616);
    v3 = *(void **)(a1 + 4224);
    --byte_2CCC63D;
    qword_2CCC640[v2] = 0;
    qfree(v3);
  }
  v4 = *(void **)(a1 + 16);
  if ( v4 )
  {
    sub_73F170(*(void ***)(a1 + 16));
    operator delete(v4, 0x38u);
  }
  v5 = *(void **)(a1 + 5816);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 5824) = 0;
    qfree(v5);
  }
}
