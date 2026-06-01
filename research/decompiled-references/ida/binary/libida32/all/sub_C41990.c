__int64 __fastcall sub_C41990(__int64 **a1, __int64 a2)
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
  __int64 v18; // rax
  __m128i *v19; // rbp
  __int64 v20; // r12
  __m128i v21; // [rsp+0h] [rbp-108h] BYREF
  char v22; // [rsp+10h] [rbp-F8h]
  __m128i v23; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B8h]
  char v25; // [rsp+58h] [rbp-B0h]
  __int64 v26; // [rsp+68h] [rbp-A0h]
  void *ptr; // [rsp+70h] [rbp-98h]
  __int64 v28; // [rsp+78h] [rbp-90h]
  _BYTE v29[136]; // [rsp+80h] [rbp-88h] BYREF

  v4 = sub_E0E500(*a1);
  v9 = *a1;
  if ( (*(_BYTE *)(v4 + 1) & 0x20) != 0 || *((_DWORD *)v9 + 12) && (*((_BYTE *)v9 + 914) || *((_BYTE *)v9 + 915)) )
  {
    v14 = *(__m128i **)(a2 + 16);
    v21.m128i_i64[0] = (__int64)*a1;
    v23 = 0u;
    ptr = v29;
    v24 = 0;
    v25 |= 1u;
    v26 = 0;
    v28 = 0x800000000LL;
    v29[65] = 0;
    v21.m128i_i64[1] = (__int64)&v23;
    v22 = 0;
    v12 = sub_C38AE0(&v21, v14, v5, v6, v7, v8);
    if ( !(_BYTE)v12 )
      goto LABEL_10;
    v16 = *(_BYTE *)(a2 + 2);
    v17 = *a1;
    v21.m128i_i8[4] &= ~1u;
    v21.m128i_i32[0] = 0;
    v12 = sub_C0DFE0(
            v17,
            (__int64 *)a2,
            &v23,
            *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL),
            ((v16 >> 3) & 0x1D) == 0,
            (__int64)&v21);
    if ( (_BYTE)v12 )
    {
      v18 = sub_21D5390();
      v19 = (__m128i *)a1[1];
      v20 = v18;
      if ( v19->m128i_i64[0] == v18 )
      {
        if ( v21.m128i_i64[1] == v18 )
        {
          sub_21DC1B0(v19, &v21.m128i_u64[1]);
          goto LABEL_13;
        }
      }
      else if ( v21.m128i_i64[1] != v18 )
      {
        sub_21D5810(v19, &v21.m128i_u64[1]);
        goto LABEL_13;
      }
      if ( v19 != (__m128i *)&v21.m128i_u64[1] )
      {
        sub_971860(v19);
        if ( v20 == v21.m128i_i64[1] )
          sub_21DC120(v19, &v21.m128i_u64[1]);
        else
          sub_21D5A60(v19, &v21.m128i_u64[1]);
      }
    }
LABEL_13:
    if ( v21.m128i_i32[0] > 1u )
    {
      sub_A2BBA0(v21.m128i_i32);
      v15 = ptr;
      if ( ptr == v29 )
        return v12;
      goto LABEL_11;
    }
LABEL_10:
    v15 = ptr;
    if ( ptr == v29 )
      return v12;
LABEL_11:
    free(v15);
    return v12;
  }
  v10 = (__int64 *)sub_E0FED0(v9, a2, 108, 0);
  v11 = sub_EC8B80(a2);
  if ( v10 )
  {
    v23.m128i_i64[0] = v11;
    v23.m128i_i8[8] = 1;
    sub_AC88D0(v10, v23.m128i_i64);
  }
  return 0;
}

