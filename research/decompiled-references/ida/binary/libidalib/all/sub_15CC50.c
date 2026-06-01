__int64 __fastcall sub_15CC50(__int64 *a1, __int64 a2, int a3)
{
  _QWORD *v4; // r13
  __int64 result; // rax
  unsigned __int8 v6; // [rsp+Fh] [rbp-29h]

  if ( !a1[1] )
    sub_15C580((__int64)a1);
  v4 = (_QWORD *)*a1;
  result = sub_15C820((__int64)a1, *a1, a2, a3);
  if ( (_BYTE)result )
  {
    v6 = result;
    sub_15CB30(a1, v4);
    return v6;
  }
  return result;
}

