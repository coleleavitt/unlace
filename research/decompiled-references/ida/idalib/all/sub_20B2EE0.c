__int64 __fastcall sub_20B2EE0(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v4; // rax
  __int64 result; // rax

  v4 = sub_20A1090(a2);
  if ( v4 )
  {
    sub_20B2EA0((__int64)v4, a1, a3);
    return 1;
  }
  else
  {
    result = 0;
    if ( *(_BYTE *)a2 == 3 )
    {
      a2[1] = a1;
      return 1;
    }
  }
  return result;
}
