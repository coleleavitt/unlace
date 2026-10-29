__int64 __fastcall sub_1C1AA0(__int64 a1, __int64 a2, __int64 a3)
{
  char v5; // [rsp+27h] [rbp-A9h] BYREF
  _QWORD *v6; // [rsp+28h] [rbp-A8h]
  _QWORD v7[2]; // [rsp+30h] [rbp-A0h] BYREF
  __int64 v8; // [rsp+40h] [rbp-90h] BYREF
  struct msghdr v9; // [rsp+50h] [rbp-80h] BYREF
  _QWORD v10[3]; // [rsp+90h] [rbp-40h] BYREF
  unsigned int v11; // [rsp+A8h] [rbp-28h] BYREF
  unsigned int v12; // [rsp+ACh] [rbp-24h]
  __int64 v13; // [rsp+B0h] [rbp-20h]
  __int64 v14; // [rsp+B8h] [rbp-18h]
  __int64 v15; // [rsp+C0h] [rbp-10h]
  __int64 *v16; // [rsp+C8h] [rbp-8h]

  if ( (int)sub_1C1A17((int *)&v11) < 0 )
    return 0;
  v10[0] = a2;
  v10[1] = a3;
  v9.msg_name = nullptr;
  *(_QWORD *)&v9.msg_namelen = 0;
  *(_QWORD *)&v9.msg_flags = 0;
  v9.msg_iov = (struct iovec *)v10;
  v9.msg_iovlen = 1;
  v7[1] = 0x100000001LL;
  v9.msg_control = v7;
  v9.msg_controllen = 24;
  v6 = v7;
  v7[0] = 20;
  v16 = &v8;
  v8 = v12;
  do
    v15 = sub_1C19B6(*(_DWORD *)(a1 + 8), &v9, 0);
  while ( v15 == -1 && *__errno_location() == 4 );
  v14 = v15;
  sub_1C1906(v12);
  if ( v14 >= 0 )
  {
    do
      v13 = sub_1C1956(v11, &v5, 1u);
    while ( v13 == -1 && *__errno_location() == 4 );
    sub_1C1906(v11);
    return 1;
  }
  else
  {
    sub_1C1906(v11);
    return 0;
  }
}

