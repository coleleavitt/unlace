_QWORD *__fastcall sub_1EC1DC0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // rbx
  void **v5; // r12
  void *v6; // rax
  void *v7; // rdx
  void *v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // [rsp+8h] [rbp-60h] BYREF
  _QWORD *v12; // [rsp+10h] [rbp-58h] BYREF
  char v13; // [rsp+18h] [rbp-50h]
  _QWORD *v14; // [rsp+20h] [rbp-48h] BYREF
  size_t v15; // [rsp+28h] [rbp-40h]
  void **v16; // [rsp+30h] [rbp-38h]
  void *ptr; // [rsp+38h] [rbp-30h] BYREF
  void *v18; // [rsp+40h] [rbp-28h]
  void *v19; // [rsp+48h] [rbp-20h]
  char v20; // [rsp+50h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(*a1 + 88LL);
  if ( !*(_BYTE *)(a2 + 32) )
  {
    sub_FD9C70((__int64)&v14, v2, *(const void **)(a2 + 16), *(_QWORD *)(a2 + 24), 0, 1, 1);
    if ( (v15 & 1) != 0 )
    {
      v9 = v14;
      v14 = nullptr;
      v12 = v9;
      sub_A0E8E0(&v12);
      if ( v12 )
        (*(void (__fastcall **)(_QWORD *))(*v12 + 8LL))(v12);
      v3 = nullptr;
    }
    else
    {
      v3 = v14;
    }
    sub_A04D90((__int64 *)&v14);
    return v3;
  }
  sub_1EAAE30(
    (__int64)&v14,
    *a1 + 13296LL,
    *(void **)(a2 + 16),
    *(_QWORD *)(a2 + 24),
    *(_QWORD *)(a1[1] + 72LL),
    *(_QWORD *)(a1[1] + 80LL));
  sub_FD9C70((__int64)&v12, v2, v14, v15, 0, 1, 1);
  if ( (v13 & 1) != 0 )
  {
    v10 = v12;
    v12 = nullptr;
    v11 = v10;
    sub_A0E8E0(&v11);
    if ( v11 )
      (*(void (__fastcall **)(_QWORD *))(*v11 + 8LL))(v11);
    v3 = nullptr;
  }
  else
  {
    v3 = v12;
  }
  sub_A04D90((__int64 *)&v12);
  v5 = v16;
  if ( v16 != &ptr )
  {
    v6 = v18;
    if ( v18 )
    {
      if ( *v16 != v16 + 3 )
      {
        free(*v16);
        v6 = v18;
      }
      v7 = ptr;
      v5[1] = v6;
      v8 = v19;
      *v5 = v7;
      v5[2] = v8;
      return v3;
    }
    v16[1] = nullptr;
  }
  if ( ptr == &v20 )
    return v3;
  free(ptr);
  return v3;
}
