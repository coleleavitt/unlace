__int64 __fastcall sub_11ED430(char ***a1, __int64 *a2, __int64 a3)
{
  char *v5; // rbx
  size_t v6; // rax
  __int64 v7; // rax
  size_t v8; // rdx
  size_t v9; // rax
  char *v10; // rsi
  __int64 result; // rax
  char **v12; // rdi
  char **v13; // rdi
  __int64 v14; // rax
  __int64 (__fastcall *v15)(__int64, char **); // rcx
  char **v16; // rdx
  const char *v17; // [rsp+0h] [rbp-D8h] BYREF
  __int16 v18; // [rsp+20h] [rbp-B8h]
  char *v19; // [rsp+30h] [rbp-A8h] BYREF
  __int16 v20; // [rsp+50h] [rbp-88h]
  char *v21; // [rsp+60h] [rbp-78h] BYREF
  __int16 v22; // [rsp+80h] [rbp-58h]
  char *v23; // [rsp+90h] [rbp-48h] BYREF
  size_t v24; // [rsp+98h] [rbp-40h]
  __int16 v25; // [rsp+B0h] [rbp-28h]

  v5 = **(char ***)(a3 + 48);
  v6 = 0;
  if ( v5 )
    v6 = strlen(**(const char ***)(a3 + 48));
  v23 = v5;
  v24 = v6;
  v7 = sub_2246AB0(&v23, ".app/Contents/Developer", (char *)&dword_14 + 3, 0);
  if ( v7 == -1 )
  {
    v10 = (char *)&byte_22F0C30;
    v8 = j__strlen(&byte_22F0C30);
  }
  else
  {
    v8 = v24;
    v9 = v7 + 23;
    v10 = v23;
    if ( v9 < v24 )
      v8 = v9;
  }
  result = 0;
  if ( v8 )
  {
    v12 = *a1;
    v12[1] = nullptr;
    sub_A1FE50(v12, v10, &v10[v8]);
    v25 = 257;
    v13 = *a1;
    v21 = "arc";
    v22 = 259;
    v19 = "lib";
    v20 = 259;
    v18 = 259;
    v17 = "Toolchains/XcodeDefault.xctoolchain/usr";
    sub_228A3B0(v13, &v17, &v19, &v21, &v23);
    v14 = sub_112C5D0(*a2);
    v15 = *(__int64 (__fastcall **)(__int64, char **))(*(_QWORD *)v14 + 96LL);
    v16 = *a1;
    v25 = 261;
    v23 = *v16;
    v24 = (size_t)v16[1];
    return v15(v14, &v23);
  }
  return result;
}
