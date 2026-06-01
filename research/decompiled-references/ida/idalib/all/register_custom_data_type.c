__int64 __fastcall register_custom_data_type(__int64 a1)
{
  __int64 result; // rax
  int v2; // r8d
  int v3; // r9d

  LODWORD(result) = sub_3EC160(*(_QWORD *)(qword_2CCB598 + 1552), a1, nullptr);
  if ( (_DWORD)result != -1 && *(_QWORD *)(a1 + 32) && *(_QWORD *)(a1 + 48) )
    callui(93, result, 1, (int)&callui, v2, v3);
  return (unsigned int)result;
}
