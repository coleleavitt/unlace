unsigned __int64 __fastcall sub_1E49CF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  int v5; // eax
  __m128 v6; // xmm0
  unsigned __int64 v7; // r12
  double v9[2]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v10; // [rsp+10h] [rbp-98h] BYREF
  __int64 v11; // [rsp+18h] [rbp-90h]
  int v12; // [rsp+20h] [rbp-88h]
  __m128 v13; // [rsp+28h] [rbp-80h]
  __int128 v14; // [rsp+38h] [rbp-70h]
  char v15; // [rsp+48h] [rbp-60h]
  void *v16; // [rsp+50h] [rbp-58h]
  __int64 v17; // [rsp+58h] [rbp-50h]
  _BYTE v18[16]; // [rsp+60h] [rbp-48h] BYREF
  void *ptr; // [rsp+70h] [rbp-38h]
  __int64 v20; // [rsp+78h] [rbp-30h]
  _BYTE v21[40]; // [rsp+80h] [rbp-28h] BYREF

  v5 = *(_DWORD *)(a1 + 12632);
  *(_QWORD *)&v9[0] = a4;
  *(_QWORD *)&v9[1] = a3;
  v12 = v5;
  v6 = _mm_loadh_ps(v9);
  v10 = a1;
  v11 = a1;
  v13 = v6;
  v16 = v18;
  v14 = 0;
  v17 = 0x100000000LL;
  ptr = v21;
  v20 = 0x100000000LL;
  v15 = a5;
  v7 = sub_1E48E00((__int64)&v10, a2);
  if ( ptr != v21 )
    free(ptr);
  if ( v16 != v18 )
    free(v16);
  *(_DWORD *)(v11 + 12632) = v12;
  return v7;
}
