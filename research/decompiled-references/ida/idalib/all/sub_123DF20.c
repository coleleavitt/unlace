void *__fastcall sub_123DF20(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbp
  __int64 v6; // rsi
  unsigned __int64 v7; // r12
  __int64 v8; // rax
  _QWORD *v9; // rbp
  void *result; // rax
  _BYTE *v11; // r13
  signed __int64 v12; // r12
  unsigned __int64 v13; // rax
  __int64 v14; // rdi
  unsigned __int64 v15; // r12

  sub_1176DD0(a1, a2, a3, a4);
  v5 = *(unsigned int *)(a1 + 1160);
  *(_QWORD *)a1 = off_2C3BDD0;
  v6 = v5 + 1;
  v7 = *(_QWORD *)(a1 + 8) + 104LL;
  if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 1164) )
  {
    v13 = *(_QWORD *)(a1 + 1152);
    v14 = a1 + 1152;
    if ( v13 > v7 || v7 >= v13 + 32 * v5 )
    {
      sub_A8C1F0(v14, v6);
      v8 = *(_QWORD *)(a1 + 1152);
      v5 = *(unsigned int *)(a1 + 1160);
    }
    else
    {
      v15 = v7 - v13;
      sub_A8C1F0(v14, v6);
      v8 = *(_QWORD *)(a1 + 1152);
      v5 = *(unsigned int *)(a1 + 1160);
      v7 = v8 + v15;
    }
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 1152);
  }
  v9 = (_QWORD *)(v8 + 32 * v5);
  result = v9 + 2;
  *v9 = v9 + 2;
  v11 = *(_BYTE **)v7;
  v12 = *(_QWORD *)(v7 + 8);
  if ( &v11[v12] && !v11 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)v12 > 0xF )
  {
    if ( v12 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    result = (void *)operator new(v12 + 1);
    v9[2] = v12;
    *v9 = result;
    goto LABEL_13;
  }
  if ( v12 != 1 )
  {
    if ( !v12 )
      goto LABEL_8;
LABEL_13:
    memcpy(result, v11, v12);
    result = (void *)*v9;
    goto LABEL_8;
  }
  *((_BYTE *)v9 + 16) = *v11;
LABEL_8:
  v9[1] = v12;
  *((_BYTE *)result + v12) = 0;
  ++*(_DWORD *)(a1 + 1160);
  return result;
}
