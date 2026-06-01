__int64 __fastcall sub_1CBCEC0(__int64 *a1, __int64 a2, __m128 a3)
{
  unsigned __int64 v3; // rsi
  __int64 v4; // rbx
  unsigned int v5; // r13d
  unsigned int v6; // eax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 *v10; // rbx
  _QWORD *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // r13d
  __int64 v16; // [rsp+0h] [rbp-C8h] BYREF
  unsigned __int64 v17; // [rsp+8h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+10h] [rbp-B8h] BYREF
  unsigned __int64 v19; // [rsp+18h] [rbp-B0h]

  v3 = a2 + 8;
  v4 = *(_QWORD *)(v3 - 8);
  v19 = v3;
  v16 = v4;
  v18 = v4;
  v5 = sub_F6CE20(&v18);
  v6 = sub_F6CCB0(&v18, a3);
  v9 = *(_QWORD *)&byte_8[v4 & 0xFFFFFFFFFFFFFFF0LL];
  v17 = __PAIR64__(v5, v6);
  v10 = (__int64 *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(*v10 + 17) & 8) != 0 )
  {
    sub_168B9F0((__int64)&v18, a1 + 1, v6, 0x153Bu, 0);
    v14 = *(unsigned __int8 *)(sub_1605D30((__int64)&v18, &v16) + 120);
    sub_15F7200(&v18);
  }
  else
  {
    v11 = (_QWORD *)(*(_QWORD *)&byte_8[v16 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
    if ( *v11 == *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(a1[31] + 19080) & 0xFFFFFFFFFFFFFFF0LL]
                           & 0xFFFFFFFFFFFFFFF0LL) )
    {
      sub_168B9F0((__int64)&v18, a1 + 1, v6, 0x13F5u, 0);
      v14 = *(unsigned __int8 *)(sub_15884C0((__int64)&v18, (__int64 *)&v17) + 120);
      sub_15F7200(&v18);
    }
    else
    {
      v12 = a1[29];
      v13 = v5;
      if ( (*(_BYTE *)(v12 + 1) & 0x10) == 0 )
      {
        v14 = sub_F644A0(*v10, (__int64)v11, v12, v5, v7, v8);
        if ( !(_BYTE)v14 )
          return v14;
        v6 = v17;
        v13 = HIDWORD(v17);
      }
      v18 = (__int64)a1;
      v19 = __PAIR64__(v13, v6);
      if ( v10 )
        sub_1CBCBE0((unsigned int *)&v18, *v10, (__int64 *)v12, v13, v7, v8);
      return 0;
    }
  }
  return v14;
}
