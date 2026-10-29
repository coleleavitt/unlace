__int64 (*__fastcall sub_42B2A0(__int64 a1, __int64 *a2))(void)
{
  __int64 (__fastcall **v2)(); // rbp
  __int64 v4; // r12
  __int64 (*result)(void); // rax
  __int64 (__fastcall ***v6)(_QWORD, __int64, __int64); // rax
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rax

  v2 = &off_2BF9F48;
  do
  {
    v7 = a2[1];
    v8 = *a2;
    if ( a2[2] < (unsigned __int64)(v7 + 1) )
    {
      v9 = qvector_reserve(a2, v8, v7 + 1, 24);
      v7 = a2[1];
      *a2 = v9;
      v8 = v9;
    }
    v4 = v8 + 24 * v7;
    *(_QWORD *)v4 = 0;
    *(_OWORD *)(v4 + 8) = 0;
    ++a2[1];
    result = *v2;
    if ( *v2 )
    {
      v6 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64))result();
      result = (__int64 (*)(void))(**v6)(v6, a1, v4);
    }
    v2 += 2;
  }
  while ( &unk_2BFA2E8 != (_UNKNOWN *)v2 );
  return result;
}
