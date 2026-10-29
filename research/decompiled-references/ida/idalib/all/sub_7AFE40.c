bool __fastcall sub_7AFE40(__int64 a1, __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned int **v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx

  v5 = *(unsigned int ***)(a1 + 1736);
  v6 = sub_7AF7D0(v5, a2, a3, a4);
  if ( v6 == -1 )
    return *(_QWORD *)(*(_QWORD *)(a1 + 1736) + 8LL) != 0;
  *(_QWORD *)(a1 + 1520) = v6;
  if ( (unsigned __int8)is_cvt64(v5, a2, v7) )
    sub_7B28C0(*(_QWORD *)(a1 + 1736), a1);
  return 1;
}
