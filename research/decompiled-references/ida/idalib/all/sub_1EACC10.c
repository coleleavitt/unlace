__int64 __fastcall sub_1EACC10(__int64 a1)
{
  unsigned int v1; // eax
  _BYTE *v3; // r12
  __int64 v4; // rbx
  int v5; // ebx
  size_t v6; // rdx
  _BYTE *v7; // rax
  _QWORD *v8; // rax
  void *ptr; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v10; // [rsp+8h] [rbp-A0h]
  _BYTE v11[152]; // [rsp+10h] [rbp-98h] BYREF

  if ( !a1 )
    return 0;
  v1 = *(_DWORD *)(a1 + 36);
  if ( v1 <= 1 || ((v1 - 6) & 0xFFFFFFFD) == 0 )
    return 0;
  if ( v1 - 4 <= 1 )
  {
    v6 = *(_QWORD *)(a1 + 8);
    v3 = *(_BYTE **)a1;
    v4 = -1;
    if ( v6 )
    {
      v7 = memchr(*(const void **)a1, 58, v6);
      if ( v7 )
        v4 = v7 - v3;
    }
  }
  else if ( v1 == 7 )
  {
    v8 = (_QWORD *)sub_FEEE40(a1);
    v3 = (_BYTE *)*v8;
    v4 = v8[1];
  }
  else
  {
    v3 = *(_BYTE **)a1;
    v4 = *(_QWORD *)(a1 + 8);
  }
  v10 = 0x2000000000LL;
  ptr = v11;
  sub_2222BB0(&ptr, v3, v4);
  v5 = sub_2287CD0(ptr, 4LL * (unsigned int)v10);
  if ( ptr != v11 )
    free(ptr);
  return (unsigned int)(v5 + 1);
}
