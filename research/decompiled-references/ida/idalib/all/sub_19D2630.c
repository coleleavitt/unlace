__int64 __fastcall sub_19D2630(_QWORD *a1, const void *a2, size_t a3)
{
  unsigned int v3; // r12d
  __int64 v5; // rax
  __int64 v7; // rax
  _QWORD *v8; // rdx
  __int64 v9; // [rsp+0h] [rbp-D8h] BYREF
  void *ptr; // [rsp+8h] [rbp-D0h]
  __int64 v11; // [rsp+10h] [rbp-C8h]
  _BYTE v12[64]; // [rsp+18h] [rbp-C0h] BYREF
  void *v13[2]; // [rsp+58h] [rbp-80h]
  __int64 v14; // [rsp+68h] [rbp-70h]
  _QWORD *v15; // [rsp+70h] [rbp-68h]
  __int64 v16; // [rsp+78h] [rbp-60h]
  int v17; // [rsp+80h] [rbp-58h]
  __int64 v18; // [rsp+88h] [rbp-50h] BYREF
  __int128 v19; // [rsp+90h] [rbp-48h]
  __int64 v20; // [rsp+A0h] [rbp-38h]

  v3 = 0;
  v5 = sub_168B6C0((__int64)a1);
  if ( !a3 )
    return v3;
  v7 = sub_6F3470(*(_QWORD *)(v5 + 17504), a2, a3);
  v8 = (_QWORD *)*a1;
  ptr = v12;
  v11 = 0x800000000LL;
  v15 = v8;
  *(_OWORD *)v13 = 0;
  v16 = v7;
  v9 = 0;
  v14 = 0;
  v17 = 0;
  sub_B85890(&v18, v7);
  v19 = 0;
  v20 = 0x101010000LL;
  sub_1A395A0(&v9);
  v3 = sub_1A49A10(*a1, &v9, *(_QWORD *)(*a1 + 192LL), 0, 0);
  if ( BYTE3(v20) )
  {
    if ( (_DWORD)v9 == 5 )
    {
      if ( !BYTE4(v20) )
        goto LABEL_7;
      goto LABEL_14;
    }
    if ( !v13[1] || (*(_BYTE *)(v15[29] + 46LL) & 0x20) == 0 )
      goto LABEL_7;
    sub_1663B80(v15, (__int64)&v9);
  }
  if ( !BYTE4(v20) || (_DWORD)v9 != 5 )
    goto LABEL_7;
LABEL_14:
  sub_1A445B0(v15, &v9);
LABEL_7:
  if ( v13[0] )
    sub_1A39780(v13[0]);
  if ( ptr != v12 )
    free(ptr);
  return v3;
}
