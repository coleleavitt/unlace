__int64 __fastcall sub_79C010(unsigned int *a1, __int64 a2, __int64 a3, const char *a4, char a5)
{
  unsigned __int16 *v6; // rax
  unsigned __int16 *v7; // rsi
  unsigned int v10; // esi
  __int64 v11; // rdi

  v10 = *a1;
  v11 = *(_QWORD *)(a2 + 1544);
  if ( v10 == -1 || !a4 )
    return -1;
  sub_78D080(v11, v10, a5, a4);
  v6 = (unsigned __int16 *)sub_723E90(*(_QWORD *)v11, (unsigned __int16 *)(v11 + 45));
  v7 = v6;
  if ( v6 )
    v7 = (unsigned __int16 *)((char *)v6 + *v6 + 2);
  return sub_78F2E0(a3, v7, 0xFFFFFFFFFFFFFFFFLL);
}

