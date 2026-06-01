__int64 __fastcall sub_1302940(unsigned int a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // r12
  const char **v7; // rax
  size_t v8; // rbx
  char *v9; // rbp
  __int64 v10; // r14
  int v11; // eax
  const char **v12; // r15
  __int64 v13; // r14
  const char *v14; // rsi
  size_t v15; // rax
  const char *s2; // [rsp+0h] [rbp-B8h]
  void *v19[2]; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+20h] [rbp-98h] BYREF
  unsigned __int8 *v21[17]; // [rsp+30h] [rbp-88h] BYREF

  v5 = sub_13021E0(a3, a1);
  if ( !v5 )
    return 0;
  v6 = v5;
  v7 = *(const char ***)(v5 + 48);
  v8 = 0;
  v9 = (char *)*v7;
  if ( *v7 )
    v8 = strlen(*v7);
  v10 = 2LL * a2;
  v11 = (int)(&off_2BAFBA0)[v10 + 1];
  if ( !v11 )
  {
LABEL_12:
    sub_FC70B0((__int64)v21, a4, 0, 400);
    sub_21B5FF0(v19, v6, a3);
    sub_AEC220(v21, (_BYTE *)v19[0], (signed __int64)v19[1]);
    sub_AEC220(v21, v9, v8);
    if ( v19[0] != &v20 )
      operator delete(v19[0]);
    sub_AEA040((__int64)v21);
    return 0;
  }
  v12 = (const char **)(&off_2BAFBA0)[v10];
  v13 = (__int64)&v12[2 * (unsigned int)(v11 - 1) + 2];
  while ( 1 )
  {
    v14 = *v12;
    v15 = 0;
    if ( *v12 )
    {
      s2 = *v12;
      v15 = strlen(*v12);
      v14 = s2;
    }
    if ( v8 == v15 && (!v8 || !memcmp(v9, v14, v8)) )
      return *((unsigned int *)v12 + 2) | 0x100000000LL;
    v12 += 2;
    if ( (const char **)v13 == v12 )
      goto LABEL_12;
  }
}
