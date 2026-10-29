void __fastcall sub_1710380(__int64 a1)
{
  __m128i v2; // xmm1
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int64 v7; // rax
  char *v8; // rdi
  _QWORD *v9; // r12
  _QWORD *v10; // rbp
  _QWORD *v11; // rdi
  _QWORD v12[2]; // [rsp+0h] [rbp-118h] BYREF
  __m128i si128; // [rsp+10h] [rbp-108h]
  int v14; // [rsp+20h] [rbp-F8h]
  void *v15[2]; // [rsp+28h] [rbp-F0h]
  __int64 v16; // [rsp+38h] [rbp-E0h]
  char v17; // [rsp+40h] [rbp-D8h]
  __int64 v18; // [rsp+48h] [rbp-D0h]
  __int64 v19; // [rsp+50h] [rbp-C8h]
  __int64 v20; // [rsp+58h] [rbp-C0h]
  __m128i v21; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+70h] [rbp-A8h]
  __int64 v23; // [rsp+78h] [rbp-A0h]
  __int64 v24; // [rsp+80h] [rbp-98h]
  __int64 v25; // [rsp+88h] [rbp-90h]
  void *v26; // [rsp+90h] [rbp-88h]
  __int64 v27; // [rsp+98h] [rbp-80h]
  _BYTE v28[64]; // [rsp+A0h] [rbp-78h] BYREF
  void *ptr; // [rsp+E0h] [rbp-38h]
  __int64 v30; // [rsp+E8h] [rbp-30h]
  _BYTE v31[40]; // [rsp+F0h] [rbp-28h] BYREF

  v2 = _mm_loadu_si128((const __m128i *)(a1 + 184));
  v22 = 0;
  v21 = v2;
  v26 = v28;
  v27 = 0x400000000LL;
  ptr = v31;
  v30 = 0x200000000LL;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  sub_15A2F70((__int64)&v21, (__int64)"typedef");
  sub_15A3210((__int64)&v21, 19, (char *)&byte_22F0C30);
  sub_15A3090((__int64)&v21, (__int64)"type");
  sub_15A3210((__int64)&v21, 19, (char *)&byte_22F0C30);
  sub_15A3090((__int64)&v21, (__int64)"name");
  sub_15A3210((__int64)&v21, 17, (char *)&byte_22F0C30);
  v7 = sub_15A5CA0((__int64)&v21, 17, v3, v4, v5, v6);
  v8 = *(char **)(a1 + 8);
  v12[0] = 0;
  v12[1] = v7;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA960);
  *(_OWORD *)v15 = 0;
  v14 = 0;
  v16 = 0;
  v17 = v17 & 0x80 | 0x40;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  if ( v8 == *(char **)(a1 + 16) )
  {
    sub_1706840(a1, v8, (__int64)v12);
  }
  else
  {
    sub_17048E0((__int64)v8, (__int64)v12);
    *(_QWORD *)(a1 + 8) += 96LL;
  }
  v9 = v15[1];
  v10 = v15[0];
  if ( v15[1] != v15[0] )
  {
    do
    {
      while ( 1 )
      {
        v11 = (_QWORD *)v10[3];
        if ( v11 == v10 + 5 )
          break;
        operator delete(v11);
        v10 += 8;
        if ( v10 == v9 )
          goto LABEL_6;
      }
      v10 += 8;
    }
    while ( v9 != v10 );
LABEL_6:
    v10 = v15[0];
  }
  if ( v10 )
    operator delete(v10);
  if ( ptr != v31 )
    free(ptr);
  if ( v26 != v28 )
    free(v26);
}
