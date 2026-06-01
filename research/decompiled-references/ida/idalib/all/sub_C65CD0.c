__int64 __fastcall sub_C65CD0(__int64 **a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 *v9; // rdi
  __int64 *v10; // rbx
  __int64 v11; // rax
  __int64 result; // rax
  __m128i *v13; // rsi
  unsigned __int8 v14; // al
  __int64 *v15; // rdi
  unsigned __int8 v16; // [rsp+Fh] [rbp-F9h]
  unsigned __int8 v17; // [rsp+Fh] [rbp-F9h]
  __m128i v18; // [rsp+10h] [rbp-F8h] BYREF
  char v19; // [rsp+20h] [rbp-E8h]
  __m128i v20; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+60h] [rbp-A8h]
  char v22; // [rsp+68h] [rbp-A0h]
  __int64 v23; // [rsp+78h] [rbp-90h]
  void *ptr; // [rsp+80h] [rbp-88h]
  __int64 v25; // [rsp+88h] [rbp-80h]
  _BYTE v26[120]; // [rsp+90h] [rbp-78h] BYREF

  v4 = sub_E32240(*a1);
  v9 = *a1;
  if ( (*(_BYTE *)(v4 + 1) & 0x20) != 0 || *((_DWORD *)v9 + 12) && (*((_BYTE *)v9 + 914) || *((_BYTE *)v9 + 915)) )
  {
    v13 = *(__m128i **)(a2 + 16);
    v18.m128i_i64[0] = (__int64)*a1;
    v22 |= 1u;
    ptr = v26;
    v20 = 0u;
    v21 = 0;
    v23 = 0;
    v25 = 0x800000000LL;
    v26[65] = 0;
    v18.m128i_i64[1] = (__int64)&v20;
    v19 = 0;
    result = sub_C5C820(&v18, v13, v5, v6, v7, v8);
    if ( (_BYTE)result )
    {
      v14 = *(_BYTE *)(a2 + 2);
      v15 = *a1;
      v18.m128i_i8[4] &= ~1u;
      v18.m128i_i32[0] = 0;
      result = sub_C31D20(
                 v15,
                 (__int64 *)a2,
                 &v20,
                 *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL),
                 ((v14 >> 3) & 0x1D) == 0,
                 (__int64)&v18);
      if ( v18.m128i_i32[0] > 1u )
      {
        v17 = result;
        sub_A4F8E0(v18.m128i_i32);
        result = v17;
      }
    }
    if ( ptr != v26 )
    {
      v16 = result;
      free(ptr);
      return v16;
    }
  }
  else
  {
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
  return result;
}
