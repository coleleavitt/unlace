const char *__fastcall sub_11BCAF0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  const char **v5; // rax
  size_t v6; // rsi
  const char *v7; // rbp
  int v8; // edx
  const char *v9; // rbx
  void *v11[2]; // [rsp+0h] [rbp-98h] BYREF
  __int64 v12; // [rsp+10h] [rbp-88h] BYREF
  unsigned __int8 *v13; // [rsp+20h] [rbp-78h] BYREF
  int v14; // [rsp+28h] [rbp-70h]

  v3 = sub_10DCD30(a1, 0x388u);
  if ( v3 )
  {
    v4 = v3;
    v5 = *(const char ***)(v3 + 48);
    v6 = 0;
    v7 = *v5;
    if ( *v5 )
      v6 = j__strlen(*v5);
    v13 = (unsigned __int8 *)sub_22970E0(v7, v6, 0x100000000LL);
    v14 = v8;
    if ( (_BYTE)v8 )
    {
      v9 = **(const char ***)(v4 + 48);
      if ( !v9 )
        return v9;
    }
    else
    {
      sub_FC70B0((__int64)&v13, *a2, 0, 382);
      sub_21B5FF0(v11, v4, a1);
      sub_AEC220(&v13, (_BYTE *)v11[0], (signed __int64)v11[1]);
      sub_AE9DF0(&v13, **(_QWORD **)(v4 + 48), 1u);
      if ( v11[0] != &v12 )
        operator delete(v11[0]);
      sub_AEA040((__int64)&v13);
      v9 = **(const char ***)(v4 + 48);
      if ( !v9 )
        return v9;
    }
    j__strlen(v9);
    return v9;
  }
  return nullptr;
}
