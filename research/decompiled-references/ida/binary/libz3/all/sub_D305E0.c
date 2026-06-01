__int64 __fastcall sub_D305E0(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  unsigned int v6; // eax
  unsigned __int64 v7; // rdx
  bool v8; // zf
  __int64 v9; // rax

  *a1 = &off_1C5A570;
  v4 = (_QWORD *)sub_186B270(0x20u);
  *v4 = a2;
  v5 = v4;
  sub_1858590(v4 + 1, a3);
  *((_BYTE *)v5 + 24) = 1;
  v6 = sub_1859960(a3, "max_memory", 0xFFFFFFFFLL);
  v7 = (unsigned __int64)v6 << 20;
  v8 = v6 == -1;
  v9 = -1;
  if ( !v8 )
    v9 = v7;
  v5[2] = v9;
  *((_BYTE *)v5 + 24) = sub_1859610(a3, "cofactor_equalities", 1);
  a1[1] = v5;
  return sub_1858590(a1 + 2, a3);
}

