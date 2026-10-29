__int64 __fastcall sub_6CC00(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v5; // r13
  __int64 v7; // rbp
  unsigned __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rax

  v5 = 0;
  v7 = a4;
  if ( a4 >= 0 )
  {
    v8 = sub_972B0();
    v5 = 1000000 * HIDWORD(v8) + 1000 * v7 + (unsigned int)v8;
  }
  if ( !a3 )
    return a3;
  v9 = a3;
  while ( 1 )
  {
    if ( v5 )
    {
      v11 = sub_972B0();
      v12 = 0;
      v13 = 1000000 * HIDWORD(v11) + (unsigned int)v11;
      if ( v13 < v5 )
        v12 = (v5 - v13) / 0x3E8;
    }
    else
    {
      v12 = 0xFFFFFFFFLL;
    }
    if ( (*(int (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 48LL))(a1, v12) <= 0 )
      break;
    v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 56LL))(a1, a2, v9);
    if ( v10 <= 0 )
      break;
    a2 += v10;
    v9 -= v10;
    if ( !v9 )
      return a3;
  }
  return a3 - v9;
}

