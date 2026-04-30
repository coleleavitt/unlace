__int64 __fastcall sub_2C96B0(double a1)
{
  char v1; // dl
  __int64 result; // rax
  char v3; // dl
  __int64 v4; // rsi
  __int64 v5; // rax

  v1 = getinf_flag(3, 4);
  result = 8;
  if ( !v1 )
  {
    v3 = getinf_flag(3, 2);
    result = 4;
    if ( !v3 )
    {
      if ( !(unsigned __int8)netnode_inited(a1) )
      {
        v5 = 0;
        if ( dword_8BA590 < 0 || dword_8BA590 >= (unsigned __int64)xmmword_8CC398 )
          return get_dtype_size(*(unsigned __int8 *)(v5 + 34));
        v4 = 8LL * dword_8BA590;
LABEL_7:
        v5 = qword_8CC390 + 8 * (v4 - dword_8BA590);
        return get_dtype_size(*(unsigned __int8 *)(v5 + 34));
      }
      result = 2;
      if ( dword_8BA590 >= 0 && dword_8BA590 < (unsigned __int64)xmmword_8CC398 )
      {
        v4 = 8LL * dword_8BA590;
        if ( qword_8CC390 + 56LL * dword_8BA590 )
          goto LABEL_7;
      }
    }
  }
  return result;
}
