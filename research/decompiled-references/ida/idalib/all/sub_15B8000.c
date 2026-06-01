__int64 __fastcall sub_15B8000(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  int v7; // eax
  unsigned __int64 v9; // rax
  __int64 v10; // [rsp+8h] [rbp-60h]
  __int64 v11; // [rsp+10h] [rbp-58h] BYREF
  void *ptr; // [rsp+18h] [rbp-50h]
  __int64 v13; // [rsp+20h] [rbp-48h]
  int v14; // [rsp+28h] [rbp-40h]
  char v15; // [rsp+2Ch] [rbp-3Ch]
  __int64 v16; // [rsp+30h] [rbp-38h] BYREF

  v3 = *a2;
  v4 = *(_QWORD *)(a3 + 32);
  v16 = a3;
  v5 = *(_QWORD *)(a3 + 40);
  v6 = 0;
  v11 = v3;
  ptr = &v16;
  v13 = 0x100000004LL;
  v14 = 0;
  v15 = 1;
  if ( v4 )
  {
    v10 = v5;
    v7 = sub_E90000(v4);
    v5 = v10;
    if ( v7 )
    {
      v6 = 0;
      if ( v7 == 3 && ((*(__int64 *)(v4 + 8) >> 1) & 3) == 2 )
        v6 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v9 = sub_15B7950(&v11, v4);
      v5 = v10;
      v6 = v9;
    }
  }
  sub_15B7680(a1, (__int64)&v11, v6, v5);
  if ( !v15 )
    free(ptr);
  return a1;
}
