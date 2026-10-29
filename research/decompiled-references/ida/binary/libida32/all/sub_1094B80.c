__int64 __fastcall sub_1094B80(_QWORD *a1, _QWORD *a2)
{
  _BYTE *v3; // r13
  _QWORD *v4; // r14
  size_t v5; // r12
  unsigned __int64 v6; // rax
  _BYTE *v7; // rsi
  __int64 v9; // r15
  unsigned __int64 v10; // rdi
  __int64 v11; // rax
  _QWORD *v12; // rdi

  if ( sub_990D60((__int64)a2, "mvp") && sub_990D60((__int64)a2, "experimental-mv") )
    return 0;
  if ( a2 == a1 + 67 )
    return 1;
  v3 = (_BYTE *)a1[67];
  v4 = a1 + 69;
  v5 = a2[1];
  if ( v3 == (_BYTE *)(a1 + 69) )
  {
    v6 = 15;
    if ( v5 <= 0xF )
      goto LABEL_6;
LABEL_14:
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
    v11 = operator new(v10);
    v12 = (_QWORD *)a1[67];
    v3 = (_BYTE *)v11;
    if ( v4 != v12 )
      operator delete(v12);
    a1[67] = v3;
    a1[69] = v9;
    goto LABEL_6;
  }
  v6 = a1[69];
  if ( v5 > v6 )
    goto LABEL_14;
LABEL_6:
  if ( v5 )
  {
    v7 = (_BYTE *)*a2;
    if ( v5 == 1 )
      *v3 = *v7;
    else
      memcpy(v3, v7, v5);
    v3 = (_BYTE *)a1[67];
  }
  a1[68] = v5;
  v3[v5] = 0;
  return 1;
}

