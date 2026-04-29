__int64 __fastcall sub_10200(_DWORD *a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 136LL))(a1);
  if ( (_BYTE)result )
  {
    v3 = -8;
    if ( a1[186] == 4 )
      v3 = -4;
    *a2 &= v3;
  }
  return result;
}
