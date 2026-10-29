void __fastcall sub_12FDC40(void (__fastcall *a1)(__int64, _QWORD *), __int64 a2, int a3, _QWORD *a4)
{
  _BYTE **v4; // rbx
  _BYTE **v5; // r15
  __int64 v6; // r12
  _BYTE *v8; // rsi
  _BYTE **v9; // rbx
  _QWORD *v10; // rax
  void *v12[2]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v13[9]; // [rsp+30h] [rbp-48h] BYREF

  v4 = (_BYTE **)*a4;
  v5 = (_BYTE **)a4[1];
  if ( (_BYTE **)*a4 != v5 )
  {
    v6 = (__int64)v4[1];
    v12[0] = v13;
    v8 = *v4;
    if ( &(*v4)[v6] && !v8 )
LABEL_13:
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    v9 = v4 + 4;
    while ( (unsigned __int64)v6 <= 0xF )
    {
      if ( v6 == 1 )
      {
        LOBYTE(v13[0]) = *v8;
        v10 = v12[0];
        goto LABEL_8;
      }
      v10 = v13;
      if ( v6 )
        goto LABEL_18;
LABEL_8:
      v12[1] = (void *)v6;
      *((_BYTE *)v10 + v6) = 0;
      sub_12FD520(a1, a2, a3, (__int64)v12);
      if ( v12[0] != v13 )
        operator delete(v12[0]);
      if ( v5 == v9 )
        return;
      v12[0] = v13;
      v8 = *v9;
      v9 += 4;
      v6 = (__int64)*(v9 - 3);
      if ( &v8[v6] && !v8 )
        goto LABEL_13;
    }
    if ( v6 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v10 = (_QWORD *)operator new(v6 + 1);
    v13[0] = v6;
    v12[0] = v10;
LABEL_18:
    memcpy(v10, v8, v6);
    v10 = v12[0];
    goto LABEL_8;
  }
}
