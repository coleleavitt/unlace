__int64 __fastcall sub_16021F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  unsigned __int8 v4; // al

  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2);
  result = sub_B8C400(v2, 1);
  if ( !(_BYTE)result )
  {
    v4 = sub_B81B70(a2);
    if ( !v4 )
      goto LABEL_7;
    if ( v4 <= 3u )
      return sub_1601E90(a1, a2);
    if ( v4 > 6u )
LABEL_7:
      abort();
    return 1;
  }
  return result;
}
