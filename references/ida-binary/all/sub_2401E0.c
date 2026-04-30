__int64 __fastcall sub_2401E0(int a1, __int64 a2, __int64 a3, char *a4, double a5)
{
  __int64 v5; // rbp
  _DWORD *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r12
  char *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r13
  _DWORD *v14; // rdi
  __int64 v16; // rax
  __int64 v17; // r13

  if ( !dword_8CC5F0 )
    return 0;
  v5 = a2;
  if ( a2 == -1 )
    return 0;
  if ( !a1 )
    return 0;
  v7 = (_DWORD *)qword_8CC430;
  v8 = qword_8CC430 + ((_QWORD)xmmword_8CC438 << 8);
  if ( qword_8CC430 == v8 )
    return 0;
  while ( a1 != *v7 )
  {
    v7 += 64;
    if ( (_DWORD *)v8 == v7 )
      return 0;
  }
  if ( !v7 )
    return 0;
  v9 = sub_23F1C0((__int64)v7, -1, a5, a3, a4);
  v10 = v9;
  if ( !v9 )
    return 0;
  v11 = (char *)dword_8BA594;
  v12 = v9 + 32LL * dword_8BA594;
  v13 = *(_QWORD *)(v12 + 8);
  if ( (unsigned __int64)(v13 - a2) > 0xF )
  {
    v16 = sub_23DB80(v13, v9, (unsigned int)dword_8BA594, a5);
    v17 = a2 + v13 - v16;
    v11 = (char *)dword_8BA594;
    v12 = v10 + 32LL * dword_8BA594;
    if ( v16 - a2 < 16 )
      v5 = v17;
  }
  v14 = qword_8CC600;
  *(_QWORD *)(v12 + 8) = v5;
  if ( !v14 )
    return 0;
  *v14 = a1;
  v14[9] = (_DWORD)v11;
  *((_QWORD *)v14 + 6) = v12;
  if ( (int)sub_23D480((__int64)v14, 17, v12, v11, a5) <= 0 )
    return 0;
  HIDWORD(qword_8CC120) = 0;
  return 1;
}
