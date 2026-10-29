__int64 __fastcall dirtree_rmdir(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 result; // rax
  __int64 v4; // rax
  char v5; // dl
  int v6[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v7; // [rsp+Fh] [rbp-29h] BYREF
  char v8; // [rsp+17h] [rbp-21h]
  void *ptr; // [rsp+18h] [rbp-20h]

  ptr = (void *)__readfsqword(0x28u);
  *(_QWORD *)v6 = a2;
  v2 = sub_778480((__int64)a1, (const char **)v6);
  result = 5;
  if ( v2 != -1 )
  {
    v4 = sub_777000((__int64)a1, v2, *(char **)v6);
    v8 = v5;
    v7 = v4;
    return sub_77E230(a1, v2, (__int64)&v7);
  }
  return result;
}
