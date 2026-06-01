__int64 __fastcall sub_1E02D80(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  int v5; // ecx
  __m128 v6; // xmm0
  bool v7; // sf
  int v8; // esi
  double v10[2]; // [rsp+8h] [rbp-E0h] BYREF
  _QWORD v11[3]; // [rsp+18h] [rbp-D0h] BYREF
  __m128 v12; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD *v13; // [rsp+40h] [rbp-A8h]
  __int64 v14; // [rsp+50h] [rbp-98h] BYREF
  __int64 v15; // [rsp+58h] [rbp-90h]
  int v16; // [rsp+60h] [rbp-88h]
  __m128 v17; // [rsp+68h] [rbp-80h]
  __int128 v18; // [rsp+78h] [rbp-70h]
  char v19; // [rsp+88h] [rbp-60h]
  void *v20; // [rsp+90h] [rbp-58h]
  __int64 v21; // [rsp+98h] [rbp-50h]
  _BYTE v22[16]; // [rsp+A0h] [rbp-48h] BYREF
  void *ptr; // [rsp+B0h] [rbp-38h]
  __int64 v24; // [rsp+B8h] [rbp-30h]
  _BYTE v25[40]; // [rsp+C0h] [rbp-28h] BYREF

  v4 = 0;
  *(_QWORD *)&v10[0] = a4;
  v5 = *(_DWORD *)(a1 + 12632);
  *(_QWORD *)&v10[1] = a3;
  v20 = v22;
  v6 = _mm_loadh_ps(v10);
  v19 = 1;
  v17 = v6;
  v18 = 0;
  v21 = 0x100000000LL;
  ptr = v25;
  v24 = 0x100000000LL;
  v7 = *(char *)(a2 + 28) < 0;
  v11[0] = a2;
  v14 = a1;
  v15 = a1;
  v16 = v5;
  if ( !v7 )
  {
    v8 = *(_DWORD *)(a2 + 24);
    *(_QWORD *)&v10[0] = &v14;
    v13 = v11;
    v12 = _mm_loadh_ps(v10);
    sub_15F0FC0(a1, v8, (__int64 (__fastcall *)(__int64))sub_1E48DE0, (__int64)&v12);
    v4 = v11[2];
    if ( ptr != v25 )
      free(ptr);
    if ( v20 != v22 )
      free(v20);
  }
  *(_DWORD *)(v15 + 12632) = v16;
  return v4;
}
