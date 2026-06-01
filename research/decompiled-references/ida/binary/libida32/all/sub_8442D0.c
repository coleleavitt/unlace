__int64 __fastcall sub_8442D0(_QWORD *a1, int a2, __int64 a3)
{
  _QWORD *v4; // rax
  bool v5; // dl

  v4 = sub_8441E0((__int64)a1, 11);
  if ( !v4 )
    return *(unsigned int *)a1;
  *(_BYTE *)v4 = 10;
  a1[15] += 10LL;
  v5 = *((_BYTE *)&unk_239EDD0 + a2) > 7u;
  *(_QWORD *)((char *)v4 + 3) = a3;
  *((_BYTE *)v4 + 1) = v5 + 72;
  *((_BYTE *)v4 + 2) = byte_239EDB0[a2] | 0xB8;
  return 0;
}

