__int64 __fastcall sub_C64EB0(__int64 **a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 *v9; // rdi
  __int64 *v10; // rbx
  __int64 v11; // rax
  unsigned int v12; // r13d
  __m128i *v14; // rsi
  void *v15; // rdi
  unsigned __int8 v16; // al
  __int64 *v17; // rdi
  __m128i v18; // [rsp+0h] [rbp-F8h] BYREF
  char v19; // [rsp+10h] [rbp-E8h]
  __m128i v20; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+50h] [rbp-A8h]
  char v22; // [rsp+58h] [rbp-A0h]
  __int64 v23; // [rsp+68h] [rbp-90h]
  void *ptr; // [rsp+70h] [rbp-88h]
  __int64 v25; // [rsp+78h] [rbp-80h]
  _BYTE v26[120]; // [rsp+80h] [rbp-78h] BYREF

  v4 = sub_E32240(*a1);
  v9 = *a1;
  if ( (*(_BYTE *)(v4 + 1) & 0x20) != 0 || *((_DWORD *)v9 + 12) && (*((_BYTE *)v9 + 914) || *((_BYTE *)v9 + 915)) )
  {
    v14 = *(__m128i **)(a2 + 16);
    v18.m128i_i64[0] = (__int64)*a1;
    v20 = 0u;
    ptr = v26;
    v21 = 0;
    v22 |= 1u;
    v23 = 0;
    v25 = 0x800000000LL;
    v26[65] = 0;
    v18.m128i_i64[1] = (__int64)&v20;
    v19 = 0;
    v12 = sub_C5C820(&v18, v14, v5, v6, v7, v8);
    if ( !(_BYTE)v12 )
      goto LABEL_10;
    v16 = *(_BYTE *)(a2 + 2);
    v17 = *a1;
    v18.m128i_i8[4] &= ~1u;
    v18.m128i_i32[0] = 0;
    v12 = sub_C31D20(
            v17,
            (__int64 *)a2,
            &v20,
            *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL),
            ((v16 >> 3) & 0x1D) == 0,
            (__int64)&v18);
    if ( (_BYTE)v12 )
    {
      sub_A54D20((__int64)a1[1], v18.m128i_i32);
      if ( v18.m128i_i32[0] > 1u )
      {
LABEL_14:
        sub_A4F8E0(v18.m128i_i32);
        v15 = ptr;
        if ( ptr == v26 )
          return v12;
        goto LABEL_11;
      }
    }
    else if ( v18.m128i_i32[0] > 1u )
    {
      goto LABEL_14;
    }
LABEL_10:
    v15 = ptr;
    if ( ptr == v26 )
      return v12;
LABEL_11:
    free(v15);
    return v12;
  }
  v10 = (__int64 *)sub_E33C10(v9, a2, 108, 0);
  v11 = sub_EEC8C0(a2);
  if ( v10 )
  {
    v20.m128i_i64[0] = v11;
    v20.m128i_i8[8] = 1;
    sub_AEC610(v10, v20.m128i_i64);
  }
  return 0;
}
