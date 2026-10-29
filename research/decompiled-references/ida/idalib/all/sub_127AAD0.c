__int64 __fastcall sub_127AAD0(_QWORD *a1, int a2)
{
  __int64 result; // rax
  __int64 v4; // rdi
  __int64 v5; // rdi
  _QWORD *v6; // [rsp+8h] [rbp-10h]
  _QWORD *v7; // [rsp+8h] [rbp-10h]

  if ( a2 == 3 )
  {
    result = a1[513];
    if ( !result )
    {
      v7 = (_QWORD *)operator new(0x20u);
      sub_112B250(v7, (__int64)"gcc::Preprocessor", (__int64)"gcc preprocessor", (__int64)a1);
      result = (__int64)v7;
      v5 = a1[513];
      *v7 = &off_2C3ADA8;
      a1[513] = v7;
      if ( v5 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
        return a1[513];
      }
    }
  }
  else if ( a2 == 7 )
  {
    result = a1[514];
    if ( !result )
    {
      v6 = (_QWORD *)operator new(0x20u);
      sub_112B250(v6, (__int64)"gcc::Compiler", (__int64)"gcc frontend", (__int64)a1);
      result = (__int64)v6;
      v4 = a1[514];
      *v6 = &off_2C3AE18;
      a1[514] = v6;
      if ( v4 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
        return a1[514];
      }
    }
  }
  else
  {
    return sub_112D160(a1, a2);
  }
  return result;
}
