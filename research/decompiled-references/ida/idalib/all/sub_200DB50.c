__int64 __fastcall sub_200DB50(_QWORD *a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  volatile signed __int32 *v7; // rax
  __int64 v8; // rax
  volatile signed __int32 *v9; // r12
  volatile signed __int32 *v10; // r12
  _QWORD *(__fastcall *v11)(const char **, __int64); // rax
  const char *v12; // rax
  unsigned int v13; // r12d
  int v15; // edx
  signed __int32 v16; // eax
  int v17; // edx
  signed __int32 v18; // eax
  __int64 v19; // [rsp+8h] [rbp-1D8h] BYREF
  volatile signed __int32 *v20; // [rsp+10h] [rbp-1D0h]
  const char *v21; // [rsp+18h] [rbp-1C8h] BYREF
  volatile signed __int32 *v22; // [rsp+20h] [rbp-1C0h]
  __m128i v23[2]; // [rsp+28h] [rbp-1B8h] BYREF
  __int64 v24; // [rsp+48h] [rbp-198h]

  v21 = *(const char **)a4;
  v7 = *(volatile signed __int32 **)(a4 + 8);
  *(_OWORD *)a4 = 0;
  v22 = v7;
  v19 = *a2;
  v8 = a2[1];
  *(_OWORD *)a2 = 0;
  v20 = (volatile signed __int32 *)v8;
  sub_12E9950(v23, &v19, &v21, 0);
  v9 = v20;
  if ( v20 )
  {
    if ( &_pthread_key_create )
    {
      if ( _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) != 1 )
        goto LABEL_4;
    }
    else
    {
      v15 = *((_DWORD *)v20 + 2);
      *((_DWORD *)v20 + 2) = v15 - 1;
      if ( v15 != 1 )
        goto LABEL_4;
    }
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 16LL))(v9);
    if ( &_pthread_key_create )
    {
      v16 = _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF);
    }
    else
    {
      v16 = *((_DWORD *)v9 + 3);
      *((_DWORD *)v9 + 3) = v16 - 1;
    }
    if ( v16 == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 24LL))(v9);
  }
LABEL_4:
  v10 = v22;
  if ( !v22 )
    goto LABEL_7;
  if ( &_pthread_key_create )
  {
    if ( _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF) != 1 )
      goto LABEL_7;
  }
  else
  {
    v17 = *((_DWORD *)v22 + 2);
    *((_DWORD *)v22 + 2) = v17 - 1;
    if ( v17 != 1 )
      goto LABEL_7;
  }
  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 16LL))(v10);
  if ( &_pthread_key_create )
  {
    v18 = _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF);
  }
  else
  {
    v18 = *((_DWORD *)v10 + 3);
    *((_DWORD *)v10 + 3) = v18 - 1;
  }
  if ( v18 == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 24LL))(v10);
LABEL_7:
  sub_12E9C40((__int64)v23, (_DWORD *)a3);
  v11 = *(_QWORD *(__fastcall **)(const char **, __int64))(*a1 + 24LL);
  if ( (char *)v11 == (char *)sub_2007E90 )
  {
    v12 = (const char *)a1[1];
    a1[1] = 0;
    v21 = v12;
  }
  else
  {
    v11(&v21, (__int64)a1);
  }
  v13 = 0;
  sub_12EAB30((__int64)v23, *(_QWORD *)(a3 + 8), a5, 0);
  if ( v24 )
  {
    sub_12EA0B0((__int64)v23, a3);
    v13 = sub_12F56A0(v23, v21);
    sub_FD74C0(a3);
  }
  if ( v21 )
    (*(void (__fastcall **)(const char *))(*(_QWORD *)v21 + 64LL))(v21);
  sub_12EBC20((__int64)v23);
  return v13;
}
