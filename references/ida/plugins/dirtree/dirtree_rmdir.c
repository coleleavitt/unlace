__int64 __fastcall dirtree_rmdir(__int64 a1, int a2, int a3, int a4, int a5, int a6)
{
  __int64 v6; // rbp
  __int64 result; // rax
  __int64 v8; // rax
  char v9; // dl
  int v10[2]; // [rsp+0h] [rbp-38h] BYREF
  int v11; // [rsp+8h] [rbp-30h]
  __int64 v12; // [rsp+Fh] [rbp-29h] BYREF
  char v13; // [rsp+17h] [rbp-21h]
  __int64 v14; // [rsp+20h] [rbp-18h]
  int v15; // [rsp+28h] [rbp-10h]
  __int64 v16; // [rsp+30h] [rbp-8h]

  v6 = sub_775C40(
         a1,
         (int)v10,
         a3,
         a4,
         a5,
         a6,
         a2,
         v11,
         *(int *)((char *)&v12 + 1),
         (void *)__readfsqword(0x28u),
         v14,
         v15,
         v16);
  result = 5;
  if ( v6 != -1 )
  {
    v8 = sub_7747C0(a1, v6, *(_QWORD *)v10);
    v13 = v9;
    v12 = v8;
    return sub_77B9F0(a1, v6, &v12);
  }
  return result;
}
