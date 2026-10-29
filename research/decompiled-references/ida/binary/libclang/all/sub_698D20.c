__int64 __fastcall sub_698D20(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rbp
  _QWORD *v4; // rdi
  void (__fastcall *v5)(_QWORD *, _QWORD *, __int64); // rax
  volatile signed __int32 *v6; // rbp
  volatile signed __int32 *v7; // rdx
  signed __int32 v8; // eax
  __int64 v10; // rax
  __int64 v11; // rdi

  v3 = (_QWORD *)a1[22];
  *a1 = off_49F5060;
  if ( v3 )
  {
    v4 = (_QWORD *)v3[6];
    if ( v4 != v3 + 8 )
      free(v4);
    operator delete();
    a2 = 1128;
    operator delete(v3, 0x468u);
  }
  v5 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))a1[19];
  a1[22] = 0;
  if ( v5 )
  {
    a2 = (__int64)(a1 + 17);
    v5(a1 + 17, a1 + 17, 3);
  }
  v6 = (volatile signed __int32 *)a1[14];
  if ( v6 )
  {
    v7 = v6 + 2;
    if ( *((_QWORD *)v6 + 1) == 0x100000001LL )
    {
      v10 = *(_QWORD *)v6;
      v11 = a1[14];
      *((_QWORD *)v6 + 1) = 0;
      (*(void (__fastcall **)(__int64, __int64, volatile signed __int32 *))(v10 + 16))(v11, a2, v7);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 24LL))(v6);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v8 = _InterlockedExchangeAdd(v7, 0xFFFFFFFF);
      }
      else
      {
        v8 = *((_DWORD *)v6 + 2);
        *((_DWORD *)v6 + 2) = v8 - 1;
      }
      if ( v8 == 1 )
        sub_6111C0(v6);
    }
  }
  *a1 = &off_4A32C48;
  return sub_10979A0(a1);
}

