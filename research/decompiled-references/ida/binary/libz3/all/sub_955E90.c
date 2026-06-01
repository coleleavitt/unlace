__int64 __fastcall sub_955E90(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(unsigned __int8 *)(a1 + 72);
  if ( (_BYTE)result )
  {
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 32) + 104LL))(*(_QWORD *)(a1 + 32));
    if ( !(_BYTE)result )
      return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 40) + 104LL))(*(_QWORD *)(a1 + 40), a2);
  }
  return result;
}

