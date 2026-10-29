__int64 __fastcall sub_10546C0(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  unsigned __int8 v3; // [rsp+Fh] [rbp-19h]

  result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 480LL))(a1, *a2, a2[1]);
  if ( (_BYTE)result )
  {
    v3 = result;
    sub_9EE8A0(a1 + 544, (__int64)a2);
    return v3;
  }
  return result;
}
