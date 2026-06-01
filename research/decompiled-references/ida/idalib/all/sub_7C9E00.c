unsigned __int64 __fastcall sub_7C9E00(__int64 a1)
{
  void *v1; // r12
  const char *v2; // rbp
  int v3; // ecx
  int v4; // eax
  int v5; // edx
  void *v7; // [rsp+0h] [rbp-68h] BYREF
  __int128 v8; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+20h] [rbp-48h] BYREF
  __int128 v10; // [rsp+28h] [rbp-40h]
  unsigned __int64 v11; // [rsp+38h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  v7 = nullptr;
  v8 = 0;
  sub_7C9A80(a1, (__int64)&v7);
  v1 = v7;
  v2 = haystack;
  v10 = 0;
  ptr = nullptr;
  if ( (_QWORD)v8 )
    v2 = (const char *)v7;
  v3 = reg_int_op("UseProxy", 0, 0, v2);
  v4 = *(_DWORD *)(a1 + 168);
  v5 = v4;
  BYTE1(v4) &= ~4u;
  BYTE1(v5) |= 4u;
  if ( v3 )
    v4 = v5;
  *(_DWORD *)(a1 + 168) = v4;
  if ( (unsigned __int8)reg_str_get(&ptr, "Proxy", v2) )
    sub_7C8940(a1 + 88, &ptr, 0);
  if ( ptr )
  {
    *(_QWORD *)&v10 = 0;
    qfree(ptr);
  }
  if ( v1 )
    qfree(v1);
  return v11 - __readfsqword(0x28u);
}
