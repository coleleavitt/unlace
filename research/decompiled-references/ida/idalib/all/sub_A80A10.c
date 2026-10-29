__int64 __fastcall sub_A80A10(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned __int8 a5)
{
  unsigned int v5; // r15d
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rbp
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // [rsp+0h] [rbp-E8h]
  unsigned __int64 v15; // [rsp+0h] [rbp-E8h]
  __int64 v16; // [rsp+8h] [rbp-E0h]
  __int64 v17; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v18; // [rsp+18h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v20[184]; // [rsp+30h] [rbp-B8h] BYREF

  v5 = a5;
  ptr[0] = v20;
  ptr[1] = (void *)0x2000000000LL;
  sub_F227B0(ptr, a1, a2, a3, a4, a5);
  v17 = 0;
  v8 = sub_2223360(a1 + 976, ptr, &v17, &off_2B40E00);
  if ( !v8 || (v9 = v8 - 8) == 0 )
  {
    v16 = *(_QWORD *)(a2 + 8);
    v14 = *(unsigned int *)(a2 + 4);
    v12 = sub_A794A0((__int64 *)(a1 + 2352), 32, 3u);
    v13 = v14;
    v15 = v12;
    sub_F225E0(v12, v16, v13, a3, a4, v5);
    sub_2223210(a1 + 976, v15 + 8, v17, &off_2B40E00);
    v9 = v15;
  }
  sub_F22AE0(&v18, v9);
  v10 = v18;
  if ( ptr[0] != v20 )
    free(ptr[0]);
  return v10;
}
