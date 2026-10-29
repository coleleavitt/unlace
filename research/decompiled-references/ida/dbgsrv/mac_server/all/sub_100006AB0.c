/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100006AB0
// Address: 0x0000000100006AB0

//----- (0000000100006AB0) ----------------------------------------------------
__int64 __fastcall sub_100006AB0(__int64 a1)
{
  unsigned int v1; // ebx
  OSStatus v2; // r15d
  OSStatus v3; // r14d
  char *v4; // rcx
  char *v5; // rax
  char *v6; // rsi
  char *v7; // rsi
  AuthorizationEnvironment environment; // [rsp+0h] [rbp-120h] BYREF
  void *v10[2]; // [rsp+10h] [rbp-110h] BYREF
  __int64 v11; // [rsp+20h] [rbp-100h]
  void *v12[2]; // [rsp+30h] [rbp-F0h] BYREF
  __int64 v13; // [rsp+40h] [rbp-E0h]
  AuthorizationRights **p_authorizedRights; // [rsp+50h] [rbp-D0h]
  AuthorizationRights *authorizedRights; // [rsp+58h] [rbp-C8h] BYREF
  AuthorizationRights rights; // [rsp+60h] [rbp-C0h] BYREF
  AuthorizationRef *p_authorization; // [rsp+70h] [rbp-B0h]
  AuthorizationRef authorization; // [rsp+78h] [rbp-A8h] BYREF
  __int128 v19; // [rsp+80h] [rbp-A0h] BYREF
  __int128 v20; // [rsp+90h] [rbp-90h]
  __int128 v21; // [rsp+A0h] [rbp-80h]
  __int128 v22; // [rsp+B0h] [rbp-70h]
  __int128 v23; // [rsp+C0h] [rbp-60h]
  __int128 v24; // [rsp+D0h] [rbp-50h]
  _OWORD v25[2]; // [rsp+E0h] [rbp-40h] BYREF

  v1 = a1;
  authorization = nullptr;
  p_authorization = &authorization;
  if ( AuthorizationCreate(nullptr, nullptr, 0x32u, &authorization) )
  {
    v1 = 0;
  }
  else
  {
    v25[1] = xmmword_1000A7430;
    v25[0] = *(_OWORD *)&off_1000A7420;
    rights.count = 1;
    rights.items = (AuthorizationItem *)v25;
    authorizedRights = nullptr;
    p_authorizedRights = &authorizedRights;
    v2 = AuthorizationCopyRights(authorization, &rights, nullptr, 0x32u, &authorizedRights);
    v3 = 0;
    sub_100060FA0(a1, "AuthorizationCopyRights: 0x%x (without credentials)\n", v2);
    if ( !v2 )
      goto LABEL_23;
    *(_OWORD *)v12 = 0;
    v13 = 0;
    *(_OWORD *)v10 = 0;
    v11 = 0;
    if ( (unsigned __int8)qgetenv("MAC_DEBMOD_USER", (__int64)v12)
      && (unsigned __int8)qgetenv("MAC_DEBMOD_PASS", (__int64)v10) )
    {
      v19 = *(_OWORD *)&off_1000A7440;
      v20 = xmmword_1000A7450;
      v21 = *(_OWORD *)&off_1000A7460;
      v24 = xmmword_1000A7490;
      v23 = *(_OWORD *)&off_1000A7480;
      v22 = xmmword_1000A7470;
      v4 = (char *)v12[1] - 1;
      if ( !v12[1] )
        v4 = nullptr;
      *((_QWORD *)&v19 + 1) = v4;
      *(void **)&v20 = v12[0];
      v5 = (char *)v10[1] - 1;
      if ( !v10[1] )
        v5 = nullptr;
      *((_QWORD *)&v21 + 1) = v5;
      *(void **)&v22 = v10[0];
      environment.count = 3;
      environment.items = (AuthorizationItem *)&v19;
      if ( authorizedRights )
        AuthorizationFreeItemSet(authorizedRights);
      v3 = AuthorizationCopyRights(authorization, &rights, &environment, 0x32u, &authorizedRights);
      v6 = (char *)v12[1] - 1;
      if ( !v12[1] )
        v6 = nullptr;
      bzero(v12[0], (size_t)v6);
      v7 = (char *)v10[1] - 1;
      if ( !v10[1] )
        v7 = nullptr;
      bzero(v10[0], (size_t)v7);
      sub_100060FA0(a1, "AuthorizationCopyRights: 0x%x (with credentials)\n", v3);
      LOBYTE(v1) = 1;
    }
    else
    {
      v1 = 0;
      v3 = v2;
    }
    if ( v10[0] )
    {
      v10[1] = nullptr;
      qfree(v10[0]);
    }
    if ( v12[0] )
    {
      v12[1] = nullptr;
      qfree(v12[0]);
    }
    if ( !(_BYTE)v1 )
      v1 = 0;
    else
LABEL_23:
      LOBYTE(v1) = v3 == 0;
    if ( authorizedRights )
      AuthorizationFreeItemSet(authorizedRights);
  }
  if ( authorization )
    AuthorizationFree(authorization, 0);
  return v1;
}
// 1000A7420: using guessed type char *off_1000A7420;
// 1000A7430: using guessed type __int128 xmmword_1000A7430;
// 1000A7440: using guessed type char *off_1000A7440;
// 1000A7450: using guessed type __int128 xmmword_1000A7450;
// 1000A7460: using guessed type char *off_1000A7460;
// 1000A7470: using guessed type __int128 xmmword_1000A7470;
// 1000A7480: using guessed type char *off_1000A7480;
// 1000A7490: using guessed type __int128 xmmword_1000A7490;
