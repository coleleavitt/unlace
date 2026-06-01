void __fastcall sub_6DBD50(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rcx
  volatile signed __int32 *v4; // rbp
  volatile signed __int32 *v5; // rdx
  signed __int32 v6; // eax
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdi

  v3 = a1[14];
  *a1 = off_2BD1B68;
  a1[13] = 0;
  if ( v3 )
  {
    a2 = 0;
    sub_1432050(a1[15], 0, 0);
  }
  v4 = (volatile signed __int32 *)a1[16];
  if ( v4 )
  {
    v5 = v4 + 2;
    if ( *((_QWORD *)v4 + 1) == 0x100000001LL )
    {
      v8 = *(_QWORD *)v4;
      v9 = a1[16];
      *((_QWORD *)v4 + 1) = 0;
      (*(void (__fastcall **)(__int64, __int64, volatile signed __int32 *))(v8 + 16))(v9, a2, v5);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 24LL))(v4);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v6 = _InterlockedExchangeAdd(v5, 0xFFFFFFFF);
      }
      else
      {
        v6 = *((_DWORD *)v4 + 2);
        *((_DWORD *)v4 + 2) = v6 - 1;
      }
      if ( v6 == 1 )
        sub_420480(v4);
    }
  }
  v7 = a1[14];
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  *a1 = &off_2C19730;
  sub_1341A60(a1);
  operator delete(a1, 0x88u);
}

