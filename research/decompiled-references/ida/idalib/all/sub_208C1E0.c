_BYTE *__fastcall sub_208C1E0(__int64 a1, _BYTE *a2, signed __int64 a3, _BYTE *a4, __int64 a5)
{
  void *v5; // rax
  _QWORD *v10; // rdi
  _BYTE *result; // rax

  v5 = (void *)(a1 + 16);
  *(_QWORD *)a1 = a1 + 16;
  if ( &a2[a3] && !a2 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)a3 > 0xF )
  {
    if ( a3 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v5 = (void *)operator new(a3 + 1);
    *(_QWORD *)(a1 + 16) = a3;
    *(_QWORD *)a1 = v5;
LABEL_14:
    memcpy(v5, a2, a3);
    v5 = *(void **)a1;
    goto LABEL_6;
  }
  if ( a3 == 1 )
  {
    *(_BYTE *)(a1 + 16) = *a2;
    goto LABEL_6;
  }
  if ( a3 )
    goto LABEL_14;
LABEL_6:
  *(_QWORD *)(a1 + 8) = a3;
  v10 = (_QWORD *)(a1 + 32);
  *((_BYTE *)v5 + a3) = 0;
  result = (_BYTE *)(a1 + 48);
  *(_QWORD *)(a1 + 32) = a1 + 48;
  if ( a4 )
  {
    result = sub_208BD90(v10, a4, (__int64)&a4[a5]);
  }
  else
  {
    *(_QWORD *)(a1 + 40) = 0;
    *(_BYTE *)(a1 + 48) = 0;
  }
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  return result;
}
