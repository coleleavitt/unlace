__int64 __fastcall sub_1EAC1F0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rdi

  result = 0;
  if ( a2 )
    result = 8LL
           * (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1[20] + 8LL * (unsigned int)(HIDWORD(a2) - 1)) + 1688LL) + a2);
  *(_QWORD *)(a1[540] + result) = a3;
  v4 = a1[8];
  if ( v4 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
  return result;
}
