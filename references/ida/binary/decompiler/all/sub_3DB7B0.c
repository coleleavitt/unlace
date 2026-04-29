__int64 __fastcall sub_3DB7B0(__m128i *a1, char *a2)
{
  _DWORD *exception; // rax
  int v3; // eax
  __int64 result; // rax
  int v5; // ebp
  __int16 v6; // ax
  char v7; // al

  v3 = sub_3DB1C0(a1);
  if ( v3 )
  {
    v5 = v3;
    goto LABEL_17;
  }
  result = a1[67].m128i_u16[2];
  if ( (_WORD)result == 4 )
  {
    a1[67].m128i_i16[2] = 2;
    return 2;
  }
  if ( (_WORD)result != 94 )
    return result;
  v5 = sub_3DB1C0(a1);
  if ( v5 )
  {
LABEL_17:
    exception = __cxa_allocate_exception(4u);
    *exception = v5;
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'int, 0);
  }
  v6 = a1[67].m128i_i16[2];
  if ( v6 == 4 )
  {
    a1[67].m128i_i16[2] = 2;
LABEL_19:
    sub_5880C();
  }
  if ( v6 != 3 )
    goto LABEL_19;
  v7 = *a2;
  if ( *a2 == 6 )
  {
    *((_QWORD *)a2 + 1) += a1[66].m128i_i64[0];
  }
  else
  {
    if ( v7 != 9 && v7 != 5 )
    {
      if ( !under_debugger )
        sub_37EA20(51050);
      BUG();
    }
    *(_QWORD *)(*((_QWORD *)a2 + 1) + 8LL) += a1[66].m128i_i64[0];
  }
  return sub_3DB660(a1);
}
