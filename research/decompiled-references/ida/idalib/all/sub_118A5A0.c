char *__fastcall sub_118A5A0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  size_t v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // rdx
  char *v6; // rbx
  char *v7; // rax
  void *v9[2]; // [rsp+0h] [rbp-78h] BYREF
  _BYTE v10[16]; // [rsp+10h] [rbp-68h] BYREF
  _QWORD v11[4]; // [rsp+20h] [rbp-58h] BYREF
  __int16 v12; // [rsp+40h] [rbp-38h]

  v2 = *a2;
  v3 = 0;
  v4 = *(_QWORD *)(v2 + 32);
  if ( v4 )
    v3 = strlen(*(const char **)(v2 + 32));
  v12 = 261;
  v11[0] = sub_228AA60(v4, v3, 0);
  v11[1] = v5;
  v6 = (char *)sub_10DA6C0(a1, (__int64)v11);
  v7 = strrchr(v6, 46);
  if ( v7 )
  {
    v9[0] = v10;
    sub_11892E0(v9, v6, (__int64)v7);
    v12 = 260;
    v11[0] = v9;
    v6 = (char *)sub_10DA6C0(a1, (__int64)v11);
    if ( v9[0] != v10 )
      operator delete(v9[0]);
  }
  return v6;
}
