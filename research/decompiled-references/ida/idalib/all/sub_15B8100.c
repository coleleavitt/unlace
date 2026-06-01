__int64 __fastcall sub_15B8100(__int64 *a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 *v3; // rbp
  __int64 v4; // rbx
  __int64 v6; // rax
  __int64 v8; // rsi
  char v9; // dl
  void *v10; // rdi
  __int64 v11; // rax
  void *v12[4]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v13; // [rsp+20h] [rbp-58h] BYREF
  void *ptr; // [rsp+28h] [rbp-50h]
  __int64 v15; // [rsp+30h] [rbp-48h]
  int v16; // [rsp+38h] [rbp-40h]
  char v17; // [rsp+3Ch] [rbp-3Ch]
  __int64 v18; // [rsp+40h] [rbp-38h] BYREF

  v2 = *a1;
  v16 = 0;
  v13 = v2;
  ptr = &v18;
  v15 = 4;
  v17 = 1;
  v3 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (a2 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v6 = *v3;
  v8 = *(_QWORD *)(*(_QWORD *)(*v3 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v8 + 16) == 42 )
  {
    v9 = 1;
    if ( *(_BYTE *)(v6 + 16) != 42 )
    {
      v6 = sub_F63050(*v3, v8, 1, v2);
      v9 = v17;
    }
    v4 = *(_QWORD *)(v6 + 32);
  }
  else
  {
    v4 = 0;
    sub_15B7680((__int64)v12, (__int64)&v13, a2, (v2 + 18248) | 6);
    v10 = v12[0];
    if ( v12[1] != v12[0] )
    {
      v11 = sub_F6A860(*v3);
      v10 = v12[0];
      if ( v11 )
      {
        if ( *(_DWORD *)(v11 + 20) && (*(_DWORD *)(v11 + 48) & 0x7FFFFFFF) == 1 )
          v4 = *(_QWORD *)(v11 + 56);
      }
    }
    if ( v10 )
      operator delete(v10);
    v9 = v17;
  }
  if ( v9 )
    return v4;
  free(ptr);
  return v4;
}
