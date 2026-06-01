__int64 __fastcall sub_420480(volatile signed __int32 *a1)
{
  __int64 result; // rax

  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 16LL))(a1);
  if ( &_pthread_key_create )
  {
    result = (unsigned int)_InterlockedExchangeAdd(a1 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result != 1 )
      return result;
    return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 24LL))(a1);
  }
  result = *((unsigned int *)a1 + 3);
  *((_DWORD *)a1 + 3) = result - 1;
  if ( (_DWORD)result == 1 )
    return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 24LL))(a1);
  return result;
}

