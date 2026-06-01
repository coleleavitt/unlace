__int64 __fastcall sub_10CADB0(_QWORD *a1, _QWORD *a2)
{
  size_t v4; // rbp
  _BYTE *v5; // r13
  _QWORD *v6; // r14
  unsigned __int64 v7; // rax
  _BYTE *v8; // rsi
  __int64 (__fastcall *v9)(); // rax
  __int64 result; // rax
  _BYTE *v11; // rsi
  __int64 v12; // r15
  unsigned __int64 v13; // rdi
  _BYTE *v14; // rax
  _QWORD *v15; // rdi

  v4 = a2[1];
  if ( a2 != a1 + 64 )
  {
    v5 = (_BYTE *)a1[64];
    v6 = a1 + 66;
    if ( v5 == (_BYTE *)(a1 + 66) )
      v7 = 15;
    else
      v7 = a1[66];
    if ( v7 < v4 )
    {
      if ( (v4 & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_create");
      v12 = 2 * v7;
      if ( 2 * v7 > v4 )
      {
        v13 = v12 + 1;
        if ( (v7 & 0x4000000000000000LL) != 0 )
        {
          v13 = 0x8000000000000000LL;
          v12 = 0x7FFFFFFFFFFFFFFFLL;
        }
      }
      else
      {
        v13 = v4 + 1;
        v12 = a2[1];
      }
      v14 = (_BYTE *)operator new(v13);
      v15 = (_QWORD *)a1[64];
      v5 = v14;
      if ( v6 != v15 )
        operator delete(v15);
      a1[64] = v5;
      a1[66] = v12;
      if ( !v4 )
        goto LABEL_6;
    }
    else if ( !v4 )
    {
LABEL_6:
      a1[65] = v4;
      v5[v4] = 0;
      v4 = a2[1];
      goto LABEL_7;
    }
    v11 = (_BYTE *)*a2;
    if ( v4 == 1 )
      *v5 = *v11;
    else
      memcpy(v5, v11, v4);
    v5 = (_BYTE *)a1[64];
    goto LABEL_6;
  }
LABEL_7:
  v8 = (_BYTE *)*a2;
  v9 = *(__int64 (__fastcall **)())(*a1 + 480LL);
  if ( v9 != sub_10CAFB0 )
    return ((__int64 (__fastcall *)(_QWORD *, _BYTE *, size_t))v9)(a1, v8, v4);
  if ( v4 != 7 )
    return 0;
  if ( *(_DWORD *)v8 != 1701733735 )
    return 0;
  if ( *((_WORD *)v8 + 2) != 26994 )
    return 0;
  result = 1;
  if ( v8[6] != 99 )
    return 0;
  return result;
}
