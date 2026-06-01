__int64 __fastcall sub_10610D0(_QWORD *a1, _QWORD *a2)
{
  _BYTE *v3; // r13
  _QWORD *v4; // r14
  size_t v5; // r12
  unsigned __int64 v6; // rax
  _BYTE *v7; // rsi
  __int64 v9; // r15
  unsigned __int64 v10; // rdi
  _BYTE *v11; // rax
  _QWORD *v12; // rdi

  if ( !sub_9B4AA0((__int64)a2, "aapcs")
    || !sub_9B4AA0((__int64)a2, "aapcs-soft")
    || !sub_9B4AA0((__int64)a2, "darwinpcs")
    || !sub_9B4AA0((__int64)a2, "pauthtest") )
  {
    if ( a2 == a1 + 74 )
      return 1;
    v3 = (_BYTE *)a1[74];
    v4 = a1 + 76;
    v5 = a2[1];
    if ( v3 == (_BYTE *)(a1 + 76) )
      v6 = 15;
    else
      v6 = a1[76];
    if ( v5 > v6 )
    {
      if ( (v5 & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_create");
      v9 = 2 * v6;
      if ( v5 < 2 * v6 )
      {
        v10 = v9 + 1;
        if ( (v6 & 0x4000000000000000LL) != 0 )
        {
          v10 = 0x8000000000000000LL;
          v9 = 0x7FFFFFFFFFFFFFFFLL;
        }
      }
      else
      {
        v10 = v5 + 1;
        v9 = a2[1];
      }
      v11 = (_BYTE *)operator new(v10);
      v12 = (_QWORD *)a1[74];
      v3 = v11;
      if ( v4 != v12 )
        operator delete(v12);
      a1[74] = v3;
      a1[76] = v9;
      if ( !v5 )
        goto LABEL_11;
    }
    else if ( !v5 )
    {
LABEL_11:
      a1[75] = v5;
      v3[v5] = 0;
      return 1;
    }
    v7 = (_BYTE *)*a2;
    if ( v5 == 1 )
      *v3 = *v7;
    else
      memcpy(v3, v7, v5);
    v3 = (_BYTE *)a1[74];
    goto LABEL_11;
  }
  return 0;
}
