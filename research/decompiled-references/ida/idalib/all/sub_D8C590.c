__int64 __fastcall sub_D8C590(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdi
  __int64 v5; // rsi
  unsigned __int64 v6; // rdx
  void **v7; // rbx
  void *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rsi
  unsigned __int64 v11; // rdx
  void *v12; // rax
  void *v14; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v15; // [rsp+8h] [rbp-30h]
  void *v16; // [rsp+10h] [rbp-28h] BYREF
  unsigned int v17; // [rsp+18h] [rbp-20h]

  v3 = *((unsigned int *)a1 + 2);
  v4 = *a1;
  v5 = v3;
  v6 = (unsigned __int64)(v3 + 63) >> 6;
  if ( v6 == 1 )
  {
    v15 = v5;
    if ( (unsigned int)v5 > 0x40 )
    {
      v7 = &v14;
      sub_2205470(&v14, v4, 1);
    }
    else
    {
      v7 = &v14;
      v8 = (void *)(v4 & (0xFFFFFFFFFFFFFFFFLL >> -(char)v5));
      if ( !(_DWORD)v5 )
        v8 = nullptr;
      v14 = v8;
    }
  }
  else
  {
    v7 = &v14;
    sub_2205610(&v14, v5, v6, v4);
  }
  v9 = *a2;
  v10 = *((unsigned int *)a2 + 2);
  v11 = (unsigned __int64)(v10 + 63) >> 6;
  if ( v11 == 1 )
  {
    v17 = *((_DWORD *)a2 + 2);
    if ( (unsigned int)v10 <= 0x40 )
    {
      v12 = (void *)(v9 & (0xFFFFFFFFFFFFFFFFLL >> -(char)v10));
      if ( !(_DWORD)v10 )
        v12 = nullptr;
      v16 = v12;
      LOBYTE(v7) = (int)sub_2205E20(&v14, &v16) > 0;
      goto LABEL_11;
    }
    sub_2205470(&v16, v9, 1);
  }
  else
  {
    sub_2205610(&v16, v10, v11, v9);
  }
  LOBYTE(v7) = (int)sub_2205E20(&v14, &v16) > 0;
  if ( v17 > 0x40 && v16 )
    operator delete[](v16);
LABEL_11:
  if ( v15 > 0x40 && v14 )
    operator delete[](v14);
  return (unsigned int)v7;
}
