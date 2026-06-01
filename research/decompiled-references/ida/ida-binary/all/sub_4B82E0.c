__int64 __fastcall sub_4B82E0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v6; // ebp
  unsigned int i; // ebx
  __int64 v8; // rsi
  __int64 v9; // rax

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 464LL))(a2);
  if ( (int)result > 0 )
  {
    v6 = result;
    for ( i = 0; i != v6; ++i )
    {
      v8 = i;
      v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 456LL))(a2, v8);
      result = sub_4B8340(a1, v9, a3);
    }
  }
  return result;
}
