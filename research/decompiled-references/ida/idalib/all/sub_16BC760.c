__int64 __fastcall sub_16BC760(__int64 a1, __int64 a2)
{
  __int64 *v2; // r13
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rdx
  __int64 *v5; // rsi
  size_t v7; // rax
  size_t v8; // r14
  void *s1; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-40h]
  __int64 v11; // [rsp+10h] [rbp-38h] BYREF

  sub_FBD280((__int64)&s1, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 248LL) + 17520LL), **(_DWORD **)(a2 + 8));
  v2 = (__int64 *)s1;
  v3 = v10;
  if ( **(_BYTE **)(a2 + 16) )
  {
    v4 = 0;
    if ( v10 > 0xB )
    {
      v4 = v10 - 12;
      if ( v10 - 12 > v10 - 16 )
        v4 = v10 - 16;
      v3 = 12;
    }
    v5 = (__int64 *)((char *)s1 + v3);
  }
  else
  {
    v7 = j__strlen("__builtin_");
    v8 = v7;
    if ( v3 < v7 || v7 && memcmp(v2, "__builtin_", v7) )
    {
      v4 = v3;
      v5 = v2;
    }
    else
    {
      v5 = (__int64 *)((char *)v2 + v8);
      v4 = v3 - v8;
    }
  }
  *(_QWORD *)a1 = a1 + 16;
  if ( v5 )
  {
    sub_16BA000((_QWORD *)a1, v5, (__int64)v5 + v4);
    v2 = (__int64 *)s1;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0;
    *(_BYTE *)(a1 + 16) = 0;
  }
  if ( v2 != &v11 )
    operator delete(v2);
  return a1;
}
