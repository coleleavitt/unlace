__int64 __fastcall sub_14FA050(__int64 a1, int a2, __int64 a3, unsigned __int8 a4, _DWORD *a5, __m128i a6, __m128 a7)
{
  int v8; // r13d
  int v9; // edx
  __int64 v10; // r14
  unsigned int v13; // [rsp+10h] [rbp-C8h] BYREF
  int v14; // [rsp+14h] [rbp-C4h] BYREF
  unsigned int v15; // [rsp+18h] [rbp-C0h] BYREF
  unsigned int v16; // [rsp+1Ch] [rbp-BCh] BYREF
  void *ptr; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+28h] [rbp-B0h]
  _BYTE v19[16]; // [rsp+30h] [rbp-A8h] BYREF
  void *v20; // [rsp+40h] [rbp-98h] BYREF
  __int64 v21; // [rsp+48h] [rbp-90h]
  _BYTE v22[32]; // [rsp+50h] [rbp-88h] BYREF
  void *v23; // [rsp+70h] [rbp-68h] BYREF
  __int64 v24; // [rsp+78h] [rbp-60h]
  _BYTE v25[88]; // [rsp+80h] [rbp-58h] BYREF

  v8 = a3;
  v23 = v25;
  v20 = v22;
  ptr = v19;
  v21 = 0x400000000LL;
  v24 = 0x400000000LL;
  v18 = 0x400000000LL;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  sub_14F9EC0(a1, a3, &v13, (__int64)&v20, &v14, &v15, a6, a7, (__int64)&v23, (__int64 *)&ptr, &v16, a4);
  if ( *(_WORD *)(a1 + 32) == 1 )
  {
    v10 = 0;
  }
  else
  {
    if ( a4 )
      v9 = *(_DWORD *)(a1 + 40);
    else
      v9 = *(_DWORD *)(a1 + 16);
    *a5 = v9;
    v10 = sub_1A8CEF0(
            *(_QWORD *)(*(_QWORD *)(a1 + 96) + 736LL),
            *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL),
            a2,
            v8,
            v13,
            v14,
            (__int64)v20,
            (unsigned int)v21,
            v15,
            (__int64)v23,
            (unsigned int)v24,
            (__int64)ptr,
            v18,
            v16);
  }
  if ( ptr != v19 )
    free(ptr);
  if ( v23 != v25 )
    free(v23);
  if ( v20 != v22 )
    free(v20);
  return v10;
}
