__int64 __fastcall sub_39A840(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v3; // rdi

  result = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 32LL))(a1);
  if ( *a2 )
  {
    v3 = a1[7];
    if ( v3 )
      return (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v3 + 32LL))(v3, a2);
  }
  return result;
}

