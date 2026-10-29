__int64 __fastcall sub_C93200(__int64 **a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  unsigned __int64 v4; // rax
  int v5; // esi
  unsigned __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // [rsp+0h] [rbp-10h] BYREF

  v1 = **a1;
  result = 1;
  if ( (*(_BYTE *)(v1 + 1) & 6) == 0 )
  {
    v4 = sub_CC2440(a1[1][61], *(_QWORD *)(v1 + 8));
    v5 = v4;
    v6 = HIDWORD(v4);
    result = HIDWORD(v4);
    if ( (_BYTE)v6 )
    {
      v7 = (__int64)a1[1];
      v8 = **a1 | 4;
      return sub_C7E5D0(v7, v5, &v8);
    }
  }
  return result;
}

