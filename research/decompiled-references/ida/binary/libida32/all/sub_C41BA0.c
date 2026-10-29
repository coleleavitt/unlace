__int64 __fastcall sub_C41BA0(__int64 **a1, __int64 a2)
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
  __int64 *v18; // rbp
  bool v19; // cc
  __int64 v20; // rdx
  __int64 v21; // rdx
  __m128i v22; // [rsp+0h] [rbp-F8h] BYREF
  unsigned int v23; // [rsp+10h] [rbp-E8h]
  char v24; // [rsp+14h] [rbp-E4h]
  __int64 v25; // [rsp+18h] [rbp-E0h] BYREF
  __int64 v26; // [rsp+20h] [rbp-D8h] BYREF
  __m128i v27; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+50h] [rbp-A8h]
  char v29; // [rsp+58h] [rbp-A0h]
  __int64 v30; // [rsp+68h] [rbp-90h]
  void *ptr; // [rsp+70h] [rbp-88h]
  __int64 v32; // [rsp+78h] [rbp-80h]
  _BYTE v33[120]; // [rsp+80h] [rbp-78h] BYREF

  v4 = sub_E0E500(*a1);
  v9 = *a1;
  if ( (*(_BYTE *)(v4 + 1) & 0x20) != 0 || *((_DWORD *)v9 + 12) && (*((_BYTE *)v9 + 914) || *((_BYTE *)v9 + 915)) )
  {
    v14 = *(__m128i **)(a2 + 16);
    v22.m128i_i64[0] = (__int64)*a1;
    v27 = 0u;
    ptr = v33;
    v28 = 0;
    v29 |= 1u;
    v30 = 0;
    v32 = 0x800000000LL;
    v33[65] = 0;
    v22.m128i_i64[1] = (__int64)&v27;
    LOBYTE(v23) = 0;
    v12 = sub_C38AE0(&v22, v14, v5, v6, v7, v8);
    if ( !(_BYTE)v12 )
      goto LABEL_10;
    v16 = *(_BYTE *)(a2 + 2);
    v17 = *a1;
    v22.m128i_i8[4] &= ~1u;
    v22.m128i_i32[0] = 0;
    v12 = sub_C0DFE0(
            v17,
            (__int64 *)a2,
            &v27,
            *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL),
            ((v16 >> 3) & 0x1D) == 0,
            (__int64)&v22);
    if ( (_BYTE)v12 )
    {
      v18 = a1[1];
      if ( v22.m128i_i32[0] == 6 )
      {
        *(_BYTE *)v18 = 0;
        sub_BF34E0(v18 + 5, &v22.m128i_i64[1]);
        sub_BF34E0(v18 + 8, &v26);
      }
      else
      {
        v19 = *((_DWORD *)v18 + 4) <= 0x40u;
        *(_BYTE *)v18 = 1;
        if ( v19 && v23 <= 0x40 )
        {
          v21 = v22.m128i_i64[1];
          *((_DWORD *)v18 + 4) = v23;
          v18[1] = v21;
        }
        else
        {
          sub_21E1960(v18 + 1, &v22.m128i_u64[1]);
        }
        v19 = *((_DWORD *)v18 + 8) <= 0x40u;
        *((_BYTE *)v18 + 20) = v24;
        if ( v19 && (unsigned int)v26 <= 0x40 )
        {
          v20 = v25;
          *((_DWORD *)v18 + 8) = v26;
          v18[3] = v20;
        }
        else
        {
          sub_21E1960(v18 + 3, &v25);
        }
        *((_BYTE *)v18 + 36) = BYTE4(v26);
      }
    }
    if ( v22.m128i_i32[0] > 1u )
    {
      sub_A2BBA0(v22.m128i_i32);
      v15 = ptr;
      if ( ptr == v33 )
        return v12;
    }
    else
    {
LABEL_10:
      v15 = ptr;
      if ( ptr == v33 )
        return v12;
    }
    free(v15);
    return v12;
  }
  v10 = (__int64 *)sub_E0FED0(v9, a2, 108, 0);
  v11 = sub_EC8B80(a2);
  if ( v10 )
  {
    v27.m128i_i64[0] = v11;
    v27.m128i_i8[8] = 1;
    sub_AC88D0(v10, v27.m128i_i64);
  }
  return 0;
}

