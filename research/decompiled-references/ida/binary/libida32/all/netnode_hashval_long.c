__int64 __fastcall netnode_hashval_long(unsigned int a1, const char *a2, char a3)
{
  unsigned __int16 *v3; // rax
  __int64 v8; // rdi

  v8 = *(_QWORD *)(qword_2CA1698 + 1544);
  if ( a1 == -1 || !a2 )
    JUMPOUT(0x78D2D0);
  sub_78D080(v8, a1, a3, a2);
  v3 = (unsigned __int16 *)sub_723E90(*(_QWORD *)v8, (unsigned __int16 *)(v8 + 45));
  if ( !v3 )
    JUMPOUT(0x78D2D8);
  return *(unsigned int *)((char *)v3 + *v3 + 4);
}

