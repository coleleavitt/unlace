void __fastcall sub_1FEFC10(__int64 *a1, __m128 a2, __m128i a3)
{
  __int64 v3; // r12
  _BYTE *v4; // r13
  __int64 v5; // rbx
  _QWORD *v6; // rax
  void *vars0[2]; // [rsp+0h] [rbp+0h] BYREF
  _QWORD dest[7]; // [rsp+10h] [rbp+10h] BYREF

  v3 = *a1;
  v4 = *(_BYTE **)(*a1 + 48);
  v5 = *(_QWORD *)(*a1 + 56);
  vars0[0] = dest;
  if ( &v4[v5] && !v4 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)v5 > 0xF )
  {
    if ( v5 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v6 = (_QWORD *)operator new(v5 + 1);
    dest[0] = v5;
    vars0[0] = v6;
LABEL_13:
    memcpy(v6, v4, v5);
    v6 = vars0[0];
    goto LABEL_6;
  }
  if ( v5 == 1 )
  {
    LOBYTE(dest[0]) = *v4;
    v6 = dest;
    goto LABEL_6;
  }
  v6 = dest;
  if ( v5 )
    goto LABEL_13;
LABEL_6:
  vars0[1] = (void *)v5;
  *((_BYTE *)v6 + v5) = 0;
  sub_1FEEF30(v3, (__int64)vars0, a2, a3);
  if ( vars0[0] != vars0 )
    operator delete(vars0[0]);
}
