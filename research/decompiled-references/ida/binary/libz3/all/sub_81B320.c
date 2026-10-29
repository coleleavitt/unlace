char __fastcall sub_81B320(_DWORD *a1, __int64 a2)
{
  char result; // al

  if ( a1[26] )
  {
    do
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 512LL))(a1);
    while ( a1[26]-- != 1 );
  }
  result = sub_7E5030((__int64)a1, a2);
  if ( !result )
    return (*(__int64 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)a1 + 528LL))(a1, a2);
  return result;
}

