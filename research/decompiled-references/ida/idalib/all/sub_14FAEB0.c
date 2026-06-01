void __fastcall sub_14FAEB0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // r14d
  int v7; // r13d
  __int64 v10; // rdi
  int v11; // edx
  __int64 v12; // r8
  int v13; // r9d
  __int64 v14; // rsi
  int v15; // ecx
  __int64 v16; // [rsp+0h] [rbp-58h] BYREF
  void *ptr; // [rsp+8h] [rbp-50h]
  __int64 v18; // [rsp+10h] [rbp-48h]
  _BYTE v19[64]; // [rsp+18h] [rbp-40h] BYREF

  v6 = (int)a2;
  v7 = a3;
  if ( !(_BYTE)a6 )
    sub_14808E0(a4, a2, a3, a4, a5, a6);
  sub_17A6550(*(_QWORD *)(a1 + 96), *(unsigned int *)(a4 + 52), a5);
  v10 = *(_QWORD *)(a1 + 96);
  v11 = *(_DWORD *)(a4 + 48);
  v12 = *(_QWORD *)a5;
  v13 = *(_DWORD *)(a5 + 8);
  ptr = v19;
  v14 = *(_QWORD *)(v10 + 608);
  v18 = 0x200000000LL;
  v15 = *(_DWORD *)(a4 + 52);
  v16 = 0;
  sub_17CC930(v10, v14, v7, v6, v12, v13, v11, v15, (__int64)&v16);
  if ( ptr != v19 )
    free(ptr);
}
