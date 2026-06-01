__int64 __fastcall sub_1FE28C0(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  volatile signed __int32 *v4; // rbx
  void (*v5)(); // rax
  __int64 (__fastcall *v6)(__int64); // rdx

  result = (__int64)&off_2C711F8;
  *a1 = &off_2C711F8;
  v3 = a1[4];
  if ( v3 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  v4 = (volatile signed __int32 *)a1[3];
  if ( v4 )
  {
    if ( &_pthread_key_create )
    {
      result = (unsigned int)_InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF);
      if ( (_DWORD)result != 1 )
        return result;
    }
    else
    {
      result = *((unsigned int *)v4 + 2);
      *((_DWORD *)v4 + 2) = result - 1;
      if ( (_DWORD)result != 1 )
        return result;
    }
    v5 = *(void (**)())(*(_QWORD *)v4 + 16LL);
    if ( v5 != nullsub_425 )
      ((void (__fastcall *)(volatile signed __int32 *))v5)(v4);
    if ( &_pthread_key_create )
    {
      result = (unsigned int)_InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF);
    }
    else
    {
      result = *((unsigned int *)v4 + 3);
      *((_DWORD *)v4 + 3) = result - 1;
    }
    if ( (_DWORD)result == 1 )
    {
      v6 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL);
      if ( v6 == sub_A09830 )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
      else
        return v6((__int64)v4);
    }
  }
  return result;
}
