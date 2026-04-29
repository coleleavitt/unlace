__int64 __fastcall sub_6C2B0(__int64 a1, unsigned int a2, __int64 *a3)
{
  int v4; // ebp
  __int64 result; // rax
  unsigned int v6; // r12d

  v4 = 0;
  result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 104LL))(a1, a2);
  if ( (int)result > 0 )
  {
    do
    {
      v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 120LL))(a1, a2, (unsigned int)v4);
      if ( !sub_60EF0(a3, v6) )
      {
        sub_60750(a3, v6);
        sub_6C2B0(a1, v6, a3);
      }
      ++v4;
      result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 104LL))(a1, a2);
    }
    while ( v4 < (int)result );
  }
  return result;
}
