__int64 __fastcall sub_1580FF0(_BYTE *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v6; // r13
  unsigned __int64 v7; // r12
  __int64 v8; // rbx
  bool v9; // bl
  bool v10; // bp
  bool v11; // dl
  char v13; // al

  v6 = a1[40];
  v7 = *(_QWORD *)(*(_QWORD *)a1 + 264LL);
  v9 = (v6 & 2) != 0
    || (v8 = *(_QWORD *)(v7 + 32),
        (unsigned __int8)sub_FD3830(v8, 0x1D47u, a2, *(_QWORD *)(*(_QWORD *)a1 + 264LL), a5, a6) != 1)
    || (unsigned __int8)sub_FD3830(v8, 0x1D49u, a2, v7, a5, a6) != 1
    || (unsigned __int8)sub_FD3830(v8, 0x1D4Du, a2, v7, a5, a6) != 1
    || (unsigned __int8)sub_FD3830(v8, 0x1D4Cu, a2, v7, a5, a6) != 1;
  v10 = 1;
  if ( (v6 & 4) == 0 )
  {
    v13 = sub_FD3830(*(_QWORD *)(v7 + 32), 0x1ACAu, a2, v7, a5, a6);
    v11 = 1;
    v10 = v13 != 1;
    if ( (v6 & 8) != 0 )
      return (8 * v11) | (4 * v10) | (2 * v9) | 1u;
    goto LABEL_7;
  }
  v11 = 1;
  if ( (v6 & 8) == 0 )
LABEL_7:
    v11 = (unsigned __int8)sub_FD3830(*(_QWORD *)(v7 + 32), 0x1D75u, a2, v7, a5, a6) != 1;
  return (8 * v11) | (4 * v10) | (2 * v9) | 1u;
}
