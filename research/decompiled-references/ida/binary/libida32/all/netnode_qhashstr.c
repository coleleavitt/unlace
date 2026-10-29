__int64 __fastcall netnode_qhashstr(unsigned int a1, __int64 a2, const char *a3, char a4)
{
  __int64 v4; // rbp
  unsigned __int16 *v5; // rax
  unsigned __int16 *v6; // rsi
  __int64 v12; // rdi

  v12 = *(_QWORD *)(qword_2CA1698 + 1544);
  if ( a1 == -1 || !a3 )
    JUMPOUT(0x78D280);
  v4 = a2;
  sub_78D080(v12, a1, a4, a3);
  v5 = (unsigned __int16 *)sub_723E90(*(_QWORD *)v12, (unsigned __int16 *)(v12 + 45));
  v6 = v5;
  if ( v5 )
    v6 = (unsigned __int16 *)((char *)v5 + *v5 + 2);
  return sub_78F2E0(v4, v6, 0xFFFFFFFFFFFFFFFFLL);
}

