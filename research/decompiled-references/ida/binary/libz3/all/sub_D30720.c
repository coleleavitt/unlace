__int64 __fastcall sub_D30720(__int64 a1)
{
  __int64 v2; // r13
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  unsigned int v5; // eax
  __int64 v6; // rdi
  unsigned __int64 v7; // rdx
  bool v8; // zf
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // r12

  v2 = **(_QWORD **)(a1 + 8);
  v3 = (_QWORD *)sub_186B270(0x20u);
  *v3 = v2;
  v4 = v3;
  sub_1858590(v3 + 1, a1 + 16);
  *((_BYTE *)v4 + 24) = 1;
  v5 = sub_1859960(a1 + 16, "max_memory", 0xFFFFFFFFLL);
  v6 = a1 + 16;
  v7 = (unsigned __int64)v5 << 20;
  v8 = v5 == -1;
  v9 = -1;
  if ( !v8 )
    v9 = v7;
  v4[2] = v9;
  result = sub_1859610(v6, "cofactor_equalities", 1);
  v11 = *(_QWORD *)(a1 + 8);
  *((_BYTE *)v4 + 24) = result;
  *(_QWORD *)(a1 + 8) = v4;
  if ( v11 )
  {
    sub_18572D0((void *)(v11 + 8));
    return sub_186B220((void *)v11);
  }
  return result;
}

