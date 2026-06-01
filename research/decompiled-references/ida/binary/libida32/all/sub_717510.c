void __fastcall sub_717510(__int64 a1)
{
  __int64 v2; // rax
  void *v3; // rdi
  void *v4; // rbp
  void *v5; // rdi

  if ( qword_2CA2620[*(unsigned __int8 *)(a1 + 1616)] )
  {
    if ( !(unsigned __int8)sub_714F70((unsigned int *)a1) )
      sub_7172B0(15, 0);
    v2 = *(unsigned __int8 *)(a1 + 1616);
    v3 = *(void **)(a1 + 4224);
    --byte_2CA2615;
    qword_2CA2620[v2] = 0;
    qfree(v3);
  }
  v4 = *(void **)(a1 + 16);
  if ( v4 )
  {
    sub_715C90(*(void ***)(a1 + 16));
    operator delete(v4, 0x38u);
  }
  v5 = *(void **)(a1 + 5816);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 5824) = 0;
    qfree(v5);
  }
}

