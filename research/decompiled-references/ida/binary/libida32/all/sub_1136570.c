char *__fastcall sub_1136570(__int64 a1, _DWORD *a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rbx
  _QWORD *v5; // rbp
  _QWORD *v6; // rdi
  int v7; // edx
  char *v8; // rbx
  __int64 v10; // r12
  __int64 v11; // rax
  const char **v12; // rax
  _QWORD *v13; // [rsp+10h] [rbp-68h] BYREF
  __int64 v14; // [rsp+18h] [rbp-60h] BYREF
  _QWORD *v15; // [rsp+20h] [rbp-58h] BYREF
  char v16; // [rsp+28h] [rbp-50h]
  void *v17[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v18; // [rsp+40h] [rbp-38h] BYREF

  LODWORD(v17[0]) = 2222;
  v2 = sub_2193060(a1, v17, 1);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = (_QWORD *)(v3 + 8LL * (unsigned int)v2);
  v5 = (_QWORD *)(v3 + 8 * HIDWORD(v2));
  if ( v4 == v5 )
    goto LABEL_5;
  while ( !*v4 || !(unsigned __int8)sub_2195AD0(*v4, 2222) )
  {
    if ( v5 == ++v4 )
      goto LABEL_5;
  }
  if ( v5 == v4 )
  {
LABEL_5:
    sub_1135B90((__int64 *)v17, a1, a2);
    sub_228A9E0(&v15, v17[0], v17[1], 1, 1);
    if ( (v16 & 1) != 0 )
    {
      v6 = v15;
      v15 = nullptr;
      if ( v6 )
      {
        v13 = v6;
        sub_9E1A20(&v14, &v13);
        if ( v13 )
          (*(void (__fastcall **)(_QWORD *))(*v13 + 8LL))(v13);
        v7 = a2[11];
        if ( a2[8] == 27 )
        {
          v8 = (char *)"ilp32d";
          if ( !v7 )
            v8 = "ilp32";
        }
        else
        {
          v8 = (char *)"lp64d";
          if ( !v7 )
            v8 = (char *)"lp64";
        }
        goto LABEL_12;
      }
    }
    else
    {
      v6 = v15;
    }
    v8 = (char *)sub_2285F30(v6);
LABEL_12:
    sub_1083470((__int64)&v15);
    if ( v17[0] != &v18 )
      operator delete(v17[0]);
    return v8;
  }
  do
  {
    v10 = *v4;
    v11 = *(_QWORD *)(*v4 + 16LL);
    if ( !v11 )
      v11 = *v4;
    ++v4;
    *(_BYTE *)(v11 + 44) |= 1u;
    if ( v4 == v5 )
      break;
    while ( !*v4 || !(unsigned __int8)sub_2195AD0(*v4, 2222) )
    {
      if ( v5 == ++v4 )
        goto LABEL_22;
    }
  }
  while ( v5 != v4 );
LABEL_22:
  v12 = *(const char ***)(v10 + 48);
  v8 = (char *)*v12;
  if ( *v12 )
    strlen(*v12);
  return v8;
}

