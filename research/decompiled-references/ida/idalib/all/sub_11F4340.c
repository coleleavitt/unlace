void *__fastcall sub_11F4340(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rsi
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // rbp
  void *result; // rax
  _BYTE *v13; // r13
  signed __int64 v14; // r12
  unsigned __int64 v15; // rax
  __int64 v16; // rdi
  unsigned __int64 v17; // r12

  sub_1134980(a1, a2, a3, a4);
  v5 = *(unsigned int *)(a1 + 1160);
  *(_QWORD *)(a1 + 2384) = 0;
  *(_QWORD *)a1 = off_2C39A48;
  v6 = *(_QWORD *)(a1 + 8);
  v7 = v5 + 1;
  *(_BYTE *)(a1 + 2424) = 0;
  *(_QWORD *)(a1 + 2392) = 0;
  v8 = v6 + 104;
  v9 = *(unsigned int *)(a1 + 1164);
  *(_QWORD *)(a1 + 2400) = 0;
  if ( v5 + 1 > v9 )
  {
    v15 = *(_QWORD *)(a1 + 1152);
    v16 = a1 + 1152;
    if ( v15 > v8 || v8 >= v15 + 32 * v5 )
    {
      sub_A8C1F0(v16, v7);
      v10 = *(_QWORD *)(a1 + 1152);
      v5 = *(unsigned int *)(a1 + 1160);
    }
    else
    {
      v17 = v8 - v15;
      sub_A8C1F0(v16, v7);
      v10 = *(_QWORD *)(a1 + 1152);
      v5 = *(unsigned int *)(a1 + 1160);
      v8 = v10 + v17;
    }
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 1152);
  }
  v11 = (_QWORD *)(v10 + 32 * v5);
  result = v11 + 2;
  *v11 = v11 + 2;
  v13 = *(_BYTE **)v8;
  v14 = *(_QWORD *)(v8 + 8);
  if ( &v13[v14] && !v13 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)v14 > 0xF )
  {
    if ( v14 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    result = (void *)operator new(v14 + 1);
    v11[2] = v14;
    *v11 = result;
    goto LABEL_13;
  }
  if ( v14 != 1 )
  {
    if ( !v14 )
      goto LABEL_8;
LABEL_13:
    memcpy(result, v13, v14);
    result = (void *)*v11;
    goto LABEL_8;
  }
  *((_BYTE *)v11 + 16) = *v13;
LABEL_8:
  v11[1] = v14;
  *((_BYTE *)result + v14) = 0;
  ++*(_DWORD *)(a1 + 1160);
  return result;
}
