__int64 __fastcall sub_54A3C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 24LL))(a3);
  if ( !(_BYTE)result )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2);
  return result;
}

