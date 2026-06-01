_BYTE *__fastcall sub_E23440(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, unsigned __int64 a5)
{
  __int64 v7; // rdi
  _BYTE *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdi
  _BYTE *result; // rax

  v7 = *(_QWORD *)(a1 + 8);
  v8 = *(_BYTE **)(v7 + 32);
  if ( (unsigned __int64)v8 >= *(_QWORD *)(v7 + 24) )
  {
    sub_2257CD0(v7, 76);
  }
  else
  {
    v9 = (__int64)(v8 + 1);
    *(_QWORD *)(v7 + 32) = v8 + 1;
    *v8 = 76;
  }
  sub_E1BE40(a1, a2, v9, a4, a5);
  sub_E149C0((_QWORD *)(a1 + 8), a3, v10);
  v11 = *(_QWORD *)(a1 + 8);
  result = *(_BYTE **)(v11 + 32);
  if ( (unsigned __int64)result >= *(_QWORD *)(v11 + 24) )
    return (_BYTE *)sub_2257CD0(v11, 69);
  *(_QWORD *)(v11 + 32) = result + 1;
  *result = 69;
  return result;
}

