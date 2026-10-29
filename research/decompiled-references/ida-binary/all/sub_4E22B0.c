void __fastcall sub_4E22B0(_QWORD *a1, __int64 a2)
{
  volatile signed __int32 *v2; // rbx
  volatile signed __int32 *v3; // rdx
  signed __int32 v4; // eax
  __int64 v5; // rax
  __int64 v6; // rdi

  v2 = (volatile signed __int32 *)a1[1];
  if ( v2 )
  {
    v3 = v2 + 2;
    if ( *((_QWORD *)v2 + 1) == 0x100000001LL )
    {
      v5 = *(_QWORD *)v2;
      v6 = a1[1];
      *((_QWORD *)v2 + 1) = 0;
      (*(void (__fastcall **)(__int64, __int64, volatile signed __int32 *))(v5 + 16))(v6, a2, v3);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 24LL))(v2);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v4 = _InterlockedExchangeAdd(v3, 0xFFFFFFFF);
      }
      else
      {
        v4 = *((_DWORD *)v2 + 2);
        *((_DWORD *)v2 + 2) = v4 - 1;
      }
      if ( v4 == 1 )
        sub_28E9C0(v2);
    }
  }
}
