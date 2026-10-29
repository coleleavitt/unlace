_QWORD *__fastcall sub_193BD0(__int64 a1, __int64 *a2)
{
  _QWORD *result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  _QWORD *v7; // rsi

  result = &dword_8CD7F0;
  if ( dword_8CD7F0 )
  {
    result = (_QWORD *)get_module_data();
    if ( result )
    {
      v7 = (_QWORD *)result[114];
      if ( v7 )
        return (_QWORD *)sub_191CF0(a2, v7, v4, v5, v6);
    }
  }
  return result;
}
