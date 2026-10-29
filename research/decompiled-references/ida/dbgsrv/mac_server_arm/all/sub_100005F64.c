/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100005F64
// Address: 0x0000000100005F64

//----- (0000000100005F64) ----------------------------------------------------
bool __fastcall sub_100005F64(__int64 a1)
{
  _BOOL8 v2; // x19
  OSStatus v3; // w20
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  __int64 v7; // x5
  __int64 v8; // x6
  __int64 v9; // x7
  __int64 v10; // x8
  __int64 v11; // x8
  size_t v12; // x1
  size_t v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x5
  __int64 v18; // x6
  __int64 v19; // x7
  char v20; // w19
  void *v21; // x0
  AuthorizationRights *v22; // x0
  AuthorizationEnvironment environment; // [xsp+10h] [xbp-120h] BYREF
  void *v25; // [xsp+20h] [xbp-110h] BYREF
  __int64 v26; // [xsp+28h] [xbp-108h]
  __int64 v27; // [xsp+30h] [xbp-100h]
  void *v28; // [xsp+38h] [xbp-F8h] BYREF
  __int64 v29; // [xsp+40h] [xbp-F0h]
  __int64 v30; // [xsp+48h] [xbp-E8h]
  AuthorizationRights **p_authorizedRights; // [xsp+50h] [xbp-E0h]
  AuthorizationRights *authorizedRights; // [xsp+58h] [xbp-D8h] BYREF
  AuthorizationRights rights; // [xsp+60h] [xbp-D0h] BYREF
  AuthorizationRef *p_authorization; // [xsp+70h] [xbp-C0h]
  AuthorizationRef authorization; // [xsp+78h] [xbp-B8h] BYREF
  __int128 v36; // [xsp+80h] [xbp-B0h] BYREF
  __int128 v37; // [xsp+90h] [xbp-A0h]
  __int128 v38; // [xsp+A0h] [xbp-90h]
  __int128 v39; // [xsp+B0h] [xbp-80h]
  __int128 v40; // [xsp+C0h] [xbp-70h]
  __int128 v41; // [xsp+D0h] [xbp-60h]
  _OWORD v42[2]; // [xsp+E0h] [xbp-50h] BYREF

  p_authorization = &authorization;
  authorization = nullptr;
  if ( AuthorizationCreate(nullptr, nullptr, 0x32u, &authorization) )
  {
    v2 = 0;
    goto LABEL_29;
  }
  v42[0] = *(_OWORD *)&off_100098A70;
  v42[1] = xmmword_100098A80;
  rights.count = 1;
  rights.items = (AuthorizationItem *)v42;
  p_authorizedRights = &authorizedRights;
  authorizedRights = nullptr;
  v3 = AuthorizationCopyRights(authorization, &rights, nullptr, 0x32u, &authorizedRights);
  sub_1000560A0(a1, "AuthorizationCopyRights: 0x%x (without credentials)\n", v4, v5, v6, v7, v8, v9, v3);
  if ( !v3 )
    goto LABEL_25;
  v28 = nullptr;
  v29 = 0;
  v30 = 0;
  v25 = nullptr;
  v26 = 0;
  v27 = 0;
  if ( !(unsigned int)qgetenv("MAC_DEBMOD_USER", &v28) || (qgetenv("MAC_DEBMOD_PASS", &v25) & 1) == 0 )
  {
    v20 = 0;
    v21 = v25;
    if ( !v25 )
      goto LABEL_22;
    goto LABEL_21;
  }
  v36 = *(_OWORD *)&off_100098A90;
  v37 = xmmword_100098AA0;
  v38 = *(_OWORD *)&off_100098AB0;
  v39 = xmmword_100098AC0;
  v40 = *(_OWORD *)&off_100098AD0;
  v41 = xmmword_100098AE0;
  v10 = v29 - 1;
  if ( !v29 )
    v10 = 0;
  *((_QWORD *)&v36 + 1) = v10;
  *(_QWORD *)&v37 = v28;
  v11 = v26 - 1;
  if ( !v26 )
    v11 = 0;
  *((_QWORD *)&v38 + 1) = v11;
  *(_QWORD *)&v39 = v25;
  environment.count = 3;
  environment.items = (AuthorizationItem *)&v36;
  if ( authorizedRights )
    AuthorizationFreeItemSet(authorizedRights);
  v3 = AuthorizationCopyRights(authorization, &rights, &environment, 0x32u, &authorizedRights);
  if ( v29 )
    v12 = v29 - 1;
  else
    v12 = 0;
  bzero(v28, v12);
  if ( v26 )
    v13 = v26 - 1;
  else
    v13 = 0;
  bzero(v25, v13);
  sub_1000560A0(a1, "AuthorizationCopyRights: 0x%x (with credentials)\n", v14, v15, v16, v17, v18, v19, v3);
  v20 = 1;
  v21 = v25;
  if ( v25 )
  {
LABEL_21:
    v26 = 0;
    qfree(v21);
  }
LABEL_22:
  if ( v28 )
  {
    v29 = 0;
    qfree(v28);
  }
  if ( (v20 & 1) == 0 )
  {
    v2 = 0;
    v22 = authorizedRights;
    if ( !authorizedRights )
      goto LABEL_29;
    goto LABEL_28;
  }
LABEL_25:
  v2 = v3 == 0;
  v22 = authorizedRights;
  if ( authorizedRights )
LABEL_28:
    AuthorizationFreeItemSet(v22);
LABEL_29:
  if ( authorization )
    AuthorizationFree(authorization, 0);
  return v2;
}
// 100006008: variable 'v4' is possibly undefined
// 100006008: variable 'v5' is possibly undefined
// 100006008: variable 'v6' is possibly undefined
// 100006008: variable 'v7' is possibly undefined
// 100006008: variable 'v8' is possibly undefined
// 100006008: variable 'v9' is possibly undefined
// 1000060F0: variable 'v14' is possibly undefined
// 1000060F0: variable 'v15' is possibly undefined
// 1000060F0: variable 'v16' is possibly undefined
// 1000060F0: variable 'v17' is possibly undefined
// 1000060F0: variable 'v18' is possibly undefined
// 1000060F0: variable 'v19' is possibly undefined
// 100098A70: using guessed type char *off_100098A70;
// 100098A80: using guessed type __int128;
// 100098A90: using guessed type char *off_100098A90;
// 100098AA0: using guessed type __int128;
// 100098AB0: using guessed type char *off_100098AB0;
// 100098AC0: using guessed type __int128 xmmword_100098AC0;
// 100098AD0: using guessed type char *off_100098AD0;
// 100098AE0: using guessed type __int128 xmmword_100098AE0;
