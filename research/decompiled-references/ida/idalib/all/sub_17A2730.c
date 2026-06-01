__int64 __fastcall sub_17A2730(_QWORD *a1, __int64 a2, int a3)
{
  __int64 v3; // r9
  __int64 v4; // rbp
  __int128 v6; // [rsp+0h] [rbp-F8h] BYREF
  void *v7[2]; // [rsp+10h] [rbp-E8h]
  __int128 v8; // [rsp+20h] [rbp-D8h]
  __int64 v9; // [rsp+30h] [rbp-C8h] BYREF
  void *ptr; // [rsp+38h] [rbp-C0h]
  __int64 v11; // [rsp+40h] [rbp-B8h]
  _BYTE v12[64]; // [rsp+48h] [rbp-B0h] BYREF
  void *v13[2]; // [rsp+88h] [rbp-70h]
  __int64 v14; // [rsp+98h] [rbp-60h]
  _QWORD *v15; // [rsp+A0h] [rbp-58h]
  __int64 v16; // [rsp+A8h] [rbp-50h]
  int v17; // [rsp+B0h] [rbp-48h]
  __int64 v18; // [rsp+B8h] [rbp-40h] BYREF
  __int128 v19; // [rsp+C0h] [rbp-38h]
  __int64 v20; // [rsp+D0h] [rbp-28h]

  v6 = 0;
  *(_OWORD *)v7 = 0;
  v8 = 0;
  ptr = v12;
  v15 = a1;
  v16 = a2;
  v17 = a3;
  v11 = 0x800000000LL;
  *(_OWORD *)v13 = 0;
  v9 = 0;
  v14 = 0;
  sub_B85890(&v18, a2);
  v19 = 0;
  v20 = 0x101010000LL;
  sub_1A395A0(&v9);
  v4 = sub_190B490(a1, &v6, &v9, 1, 0, v3);
  if ( !BYTE3(v20) )
  {
LABEL_13:
    if ( !BYTE4(v20) || (_DWORD)v9 != 5 )
      goto LABEL_5;
LABEL_17:
    sub_1A445B0(v15, &v9);
    goto LABEL_5;
  }
  if ( (_DWORD)v9 == 5 )
  {
    if ( !BYTE4(v20) )
      goto LABEL_5;
    goto LABEL_17;
  }
  if ( v13[1] && (*(_BYTE *)(v15[29] + 46LL) & 0x20) != 0 )
  {
    sub_1663B80(v15, (__int64)&v9);
    goto LABEL_13;
  }
LABEL_5:
  if ( v13[0] )
    sub_1A39780(v13[0]);
  if ( ptr != v12 )
    free(ptr);
  if ( HIDWORD(v7[1]) )
    free(v7[0]);
  return v4;
}
