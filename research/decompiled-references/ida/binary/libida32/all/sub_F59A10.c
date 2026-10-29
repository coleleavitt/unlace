__int64 __fastcall sub_F59A10(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax

  v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
  if ( (*(_QWORD *)(v1 + 80) & 0x40000LL) != 0 )
    return (unsigned int)sub_B59AB0(a1) ^ 1;
  if ( ((*(_QWORD *)(v1 + 80) >> 16) & 8) != 0 )
    return (unsigned int)sub_B59AB0(a1) ^ 1;
  result = sub_B747A0(v1);
  if ( (_DWORD)result )
    return (unsigned int)sub_B59AB0(a1) ^ 1;
  return result;
}

