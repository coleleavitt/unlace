unsigned __int64 __fastcall sub_190C6E0(_QWORD *a1, int a2, unsigned int a3, double a4, __m128 a5)
{
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned __int8 v7; // cl
  int v8; // edx
  unsigned __int64 v9; // rbp
  __int64 v11; // [rsp+10h] [rbp-138h]
  __int64 v12; // [rsp+18h] [rbp-130h]
  __int64 v13; // [rsp+20h] [rbp-128h] BYREF
  int v14; // [rsp+28h] [rbp-120h]
  __int64 v15; // [rsp+30h] [rbp-118h] BYREF
  void *v16[2]; // [rsp+40h] [rbp-108h] BYREF
  __int64 v17; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v18; // [rsp+60h] [rbp-E8h] BYREF
  void *ptr; // [rsp+68h] [rbp-E0h]
  __int64 v20; // [rsp+70h] [rbp-D8h]
  _BYTE v21[64]; // [rsp+78h] [rbp-D0h] BYREF
  void *v22[2]; // [rsp+B8h] [rbp-90h]
  __int64 v23; // [rsp+C8h] [rbp-80h]
  _QWORD *v24; // [rsp+D0h] [rbp-78h]
  __int64 v25; // [rsp+D8h] [rbp-70h]
  int v26; // [rsp+E0h] [rbp-68h]
  __int64 v27; // [rsp+E8h] [rbp-60h] BYREF
  __int128 v28; // [rsp+F0h] [rbp-58h]
  __int64 v29; // [rsp+100h] [rbp-48h]

  sub_FBD280((__int64)v16, *(_QWORD *)(a1[31] + 17520LL), a3);
  v5 = sub_6F3470(*(_QWORD *)(a1[31] + 17504LL), v16[0], (size_t)v16[1]);
  ptr = v21;
  v20 = 0x800000000LL;
  *(_OWORD *)v22 = 0;
  v25 = v5;
  v18 = 0;
  v23 = 0;
  v24 = a1;
  v26 = a2;
  sub_B85890(&v27, v5);
  v28 = 0;
  v29 = 0x101010000LL;
  sub_1A395A0(&v18);
  sub_1A49A10(a1, &v18, a1[24], 1, 0);
  if ( (_DWORD)v18 != 2 )
    goto LABEL_23;
  v6 = *(_QWORD *)ptr & 0xFFFFFFFFFFFFFFF8LL;
  v7 = *(_BYTE *)(v6 + 28) & 0x7F;
  v8 = v7;
  if ( (unsigned int)v7 - 53 <= 1 || ((v7 + 52) & 0x7Fu) <= 1 )
  {
    v6 = sub_B72ED0(v6);
    v8 = *(_BYTE *)(v6 + 28) & 0x7F;
  }
  if ( (unsigned int)(v8 - 34) > 5 )
LABEL_23:
    BUG();
  v11 = v6;
  v12 = *(_QWORD *)(v6 + 48);
  v13 = *(_QWORD *)(v6 + 40);
  v14 = a2;
  sub_B85890(&v15, v13);
  sub_19075A0((__int64)a1, v11, v12, 1, (__int64)&v13, 0, 0.0, a5, 0, 0, 0, 0);
  v9 = sub_192A5E0((_DWORD)a1, a2, 0, 0, 0) & 0xFFFFFFFFFFFFFFFELL;
  if ( !BYTE3(v29) )
  {
LABEL_18:
    if ( !BYTE4(v29) || (_DWORD)v18 != 5 )
      goto LABEL_10;
LABEL_20:
    sub_1A445B0(v24, &v18);
    goto LABEL_10;
  }
  if ( (_DWORD)v18 == 5 )
  {
    if ( !BYTE4(v29) )
      goto LABEL_10;
    goto LABEL_20;
  }
  if ( v22[1] && (*(_BYTE *)(v24[29] + 46LL) & 0x20) != 0 )
  {
    sub_1663B80(v24, (__int64)&v18);
    goto LABEL_18;
  }
LABEL_10:
  if ( v22[0] )
    sub_1A39780(v22[0]);
  if ( ptr != v21 )
    free(ptr);
  if ( v16[0] != &v17 )
    operator delete(v16[0]);
  return v9;
}
