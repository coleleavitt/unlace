__int64 __fastcall sub_698CA0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  volatile signed __int32 *v3; // rbx
  volatile signed __int32 *v4; // rdx
  __int64 v5; // rax

  result = *(_QWORD *)(a1 + 40);
  v3 = *(volatile signed __int32 **)(result + 8);
  if ( v3 )
  {
    v4 = v3 + 2;
    if ( *((_QWORD *)v3 + 1) == 0x100000001LL )
    {
      v5 = *(_QWORD *)v3;
      *((_QWORD *)v3 + 1) = 0;
      (*(void (__fastcall **)(volatile signed __int32 *, __int64, volatile signed __int32 *))(v5 + 16))(v3, a2, v4);
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 24LL))(v3);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        result = (unsigned int)_InterlockedExchangeAdd(v4, 0xFFFFFFFF);
      }
      else
      {
        result = *((unsigned int *)v3 + 2);
        *((_DWORD *)v3 + 2) = result - 1;
      }
      if ( (_DWORD)result == 1 )
        return sub_6111C0(v3);
    }
  }
  return result;
}

