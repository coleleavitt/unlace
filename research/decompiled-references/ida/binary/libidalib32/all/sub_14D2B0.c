__int64 __fastcall sub_14D2B0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 284);
  if ( (int)result >= 0 )
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a2 + 8LL))(a2, 100, a1 + 284);
  return result;
}

