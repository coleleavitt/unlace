__int64 __fastcall dirtree_rmdir(_QWORD *a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 result; // rax
  unsigned __int64 v4; // rax
  unsigned int v5; // [rsp+Bh] [rbp-2Dh] BYREF
  char v6; // [rsp+Fh] [rbp-29h]
  int v7[2]; // [rsp+10h] [rbp-28h] BYREF
  void *ptr; // [rsp+18h] [rbp-20h]

  ptr = (void *)__readfsqword(0x28u);
  *(_QWORD *)v7 = a2;
  v2 = sub_757F80((__int64)a1, (const char **)v7);
  result = 5;
  if ( v2 != -1 )
  {
    v4 = sub_756AE0((__int64)a1, v2, *(char **)v7);
    v5 = v4;
    v6 = BYTE4(v4);
    return sub_75DDD0(a1, v2, &v5);
  }
  return result;
}

