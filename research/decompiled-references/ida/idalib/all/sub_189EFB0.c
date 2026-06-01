void __fastcall sub_189EFB0(__int64 *a1, __int64 a2, __int64 a3, unsigned __int8 a4, __m128 a5)
{
  unsigned int v6; // ebp
  __int64 *v8; // r14
  __int64 v9; // rsi
  __int64 *v10; // r15
  __int64 *v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 *v14; // [rsp+0h] [rbp-D8h]
  _BYTE v16[200]; // [rsp+10h] [rbp-C8h] BYREF

  v6 = a4;
  sub_189E290(*a1, (__int64 *)a2, a3, a4, 1, 1);
  v8 = *(__int64 **)(a2 + 96);
  v9 = a3;
  v10 = *(__int64 **)(a3 + 96);
  v11 = &v8[*(unsigned int *)(a2 + 104)];
  v14 = &v10[*(unsigned int *)(v9 + 104)];
  while ( v8 != v11 && v14 != v10 )
  {
    v12 = *v8;
    v13 = *v10;
    ++v8;
    ++v10;
    sub_189E7F0(*a1, (__int64 *)a2, v12, v13, v6, 1, a5, 1);
  }
  if ( ((*(_QWORD *)(a3 + 56) & 0x40000LL) != 0) != ((*(_QWORD *)(a2 + 56) & 0x40000LL) != 0) )
  {
    sub_168B9F0((__int64)v16, a1, *(_DWORD *)(a2 + 24), 0x1A2Bu, 0);
    sub_15F7200(v16);
    sub_168B9F0((__int64)v16, a1, *(_DWORD *)(a3 + 24), 0x70u, 0);
    sub_15F7200(v16);
  }
}
