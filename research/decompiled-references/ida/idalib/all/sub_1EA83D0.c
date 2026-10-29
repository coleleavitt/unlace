__int64 __fastcall sub_1EA83D0(__int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 112LL))(*(_QWORD *)(a1 + 8));
  if ( !(_BYTE)result )
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 112LL))(*(_QWORD *)(a1 + 16));
  return result;
}
