void __fastcall sub_1710210(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned __int64 v6; // rax
  char *v7; // rdi
  _QWORD *v8; // rbp
  _QWORD *v9; // rbx
  _QWORD *v10; // rdi
  _QWORD v11[2]; // [rsp+0h] [rbp-78h] BYREF
  __m128i si128; // [rsp+10h] [rbp-68h]
  int v13; // [rsp+20h] [rbp-58h]
  void *v14[2]; // [rsp+28h] [rbp-50h]
  __int64 v15; // [rsp+38h] [rbp-40h]
  char v16; // [rsp+40h] [rbp-38h]
  __int64 v17; // [rsp+48h] [rbp-30h]
  __int64 v18; // [rsp+50h] [rbp-28h]
  __int64 v19; // [rsp+58h] [rbp-20h]

  sub_15A2F70(a1, (__int64)"static_assert");
  sub_15A3210(a1, 7, (char *)&byte_22F0C30);
  sub_15A3090(a1, (__int64)"expression");
  sub_15A3210(a1, 15, (char *)&byte_22F0C30);
  sub_15A3090(a1, (__int64)"message");
  sub_15A3210(a1, 8, (char *)&byte_22F0C30);
  sub_15A3210(a1, 17, (char *)&byte_22F0C30);
  v6 = sub_15A5CA0(a1, 17, v2, v3, v4, v5);
  v7 = *(char **)(a2 + 8);
  v11[0] = 0;
  v11[1] = v6;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA960);
  *(_OWORD *)v14 = 0;
  v13 = 0;
  v15 = 0;
  v16 = v16 & 0x80 | 0x40;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  if ( v7 == *(char **)(a2 + 16) )
  {
    sub_1706840(a2, v7, (__int64)v11);
  }
  else
  {
    sub_17048E0((__int64)v7, (__int64)v11);
    *(_QWORD *)(a2 + 8) += 96LL;
  }
  v8 = v14[1];
  v9 = v14[0];
  if ( v14[1] != v14[0] )
  {
    do
    {
      while ( 1 )
      {
        v10 = (_QWORD *)v9[3];
        if ( v10 == v9 + 5 )
          break;
        operator delete(v10);
        v9 += 8;
        if ( v9 == v8 )
          goto LABEL_6;
      }
      v9 += 8;
    }
    while ( v8 != v9 );
LABEL_6:
    v9 = v14[0];
  }
  if ( v9 )
    operator delete(v9);
}
