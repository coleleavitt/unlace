__int64 __fastcall netnode_hashstr(unsigned int a1, const char *a2, _BYTE *a3, __int64 a4, char a5)
{
  __int64 v5; // r12
  _BYTE *v6; // rbp
  unsigned __int16 *v7; // rax
  _BYTE *v8; // rsi
  __int64 v15; // rdi

  v15 = *(_QWORD *)(qword_2CA1698 + 1544);
  if ( a1 == -1 || !a2 )
    return -1;
  v5 = a4;
  v6 = a3;
  sub_78D080(v15, a1, a5, a2);
  v7 = (unsigned __int16 *)sub_723E90(*(_QWORD *)v15, (unsigned __int16 *)(v15 + 45));
  v8 = v7;
  if ( v7 )
    v8 = (char *)v7 + *v7 + 2;
  return sub_78F220(v6, v8, -1, v5);
}

