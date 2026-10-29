__int64 __fastcall sub_3EC8A0(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 *v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 (*v8)(); // r8

  result = 0x7FFFFFFF;
  if ( a1[3] == a1[4] )
  {
    v5 = (__int64 *)a1[1];
    v6 = a1[2];
    v7 = *v5;
    if ( !a2 )
    {
      v8 = *(__int64 (**)())(v7 + 56);
      if ( v8 != sub_3D58F0 )
      {
        result = ((__int64 (__fastcall *)(__int64 *, _QWORD *, _QWORD *, _QWORD))v8)(v5, a1 + 3, a1 + 4, a1[2]);
        if ( result >= 0 )
          return result;
        v5 = (__int64 *)a1[1];
        v6 = a1[2];
        v7 = *v5;
      }
    }
    result = (*(__int64 (__fastcall **)(__int64 *, __int64))(v7 + 48))(v5, v6);
  }
  if ( result == a2 )
    return -1;
  return result;
}

