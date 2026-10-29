__int64 __fastcall sub_12582C0(__int64 a1, __int64 *a2, char a3)
{
  __int64 v4; // rdi
  __int64 *v5; // rax
  __int64 v6; // r8
  char v8; // [rsp+10h] [rbp-48h]
  char v9; // [rsp+11h] [rbp-47h]
  void *v10; // [rsp+20h] [rbp-38h]
  __int64 v11; // [rsp+28h] [rbp-30h]
  char v12; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v13[39]; // [rsp+31h] [rbp-27h] BYREF

  v4 = *a2;
  v8 = a3;
  v9 = 0;
  v5 = (__int64 *)std::use_facet<std::collate<char>>(v4);
  v13[0] = 0;
  v10 = &v12;
  v12 = v8;
  v6 = *v5;
  v11 = 1;
  (*(void (__fastcall **)(__int64, __int64 *, char *, _BYTE *))(v6 + 24))(a1, v5, &v12, v13);
  return a1;
}
