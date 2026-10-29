__int64 __fastcall sub_FC5CB0(_DWORD *a1, int a2)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 48LL))(a1);
  if ( (_BYTE)result )
  {
    if ( a2 == 3 )
    {
      ++a1[2];
    }
    else if ( a2 > 3 )
    {
      ++a1[3];
    }
  }
  return result;
}
