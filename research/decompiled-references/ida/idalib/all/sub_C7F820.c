__int64 __fastcall sub_C7F820(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  _QWORD *v4; // rdx
  __int64 result; // rax
  const __m128i *v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rdx
  _QWORD *v11; // rdx
  __int64 v12; // r12
  unsigned __int8 v13; // al
  __int64 v14; // rsi
  __int64 v15; // rdx
  unsigned __int8 **v16; // rax
  unsigned __int8 v17; // [rsp+Fh] [rbp-C9h]
  _BYTE v18[3]; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+18h] [rbp-C0h]
  __m128i v20; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+30h] [rbp-A8h]
  unsigned int v22; // [rsp+38h] [rbp-A0h]
  _QWORD *v23; // [rsp+40h] [rbp-98h]
  __int64 v24; // [rsp+48h] [rbp-90h]
  void *ptr; // [rsp+50h] [rbp-88h] BYREF
  __int64 v26; // [rsp+58h] [rbp-80h]
  _BYTE v27[64]; // [rsp+60h] [rbp-78h] BYREF
  char v28; // [rsp+A0h] [rbp-38h]
  __int8 v29; // [rsp+A1h] [rbp-37h]

  v2 = sub_A72040(*(_QWORD **)(*a1 + 16), *(_QWORD *)(a2 + 8));
  if ( v2 && (v3 = v2, (unsigned int)*(unsigned __int8 *)(v2 + 16) - 2 <= 1) )
  {
    v4 = *(_QWORD **)(v2 + 40);
    if ( (*(_BYTE *)(v2 + 19) & 2) != 0 )
    {
      if ( *((_DWORD *)v4 + 2) <= 0x40u )
        v4 = (_QWORD *)*v4;
      else
        v4 = *(_QWORD **)*v4;
    }
    v20.m128i_i8[4] &= ~1u;
    v20.m128i_i32[0] = 0;
    sub_A51400((__int64)&v20, 0, (int)v4);
    sub_A4FD20(a1[2], (__int64)&v20);
    if ( v20.m128i_i32[0] > 1u )
      sub_A4F8E0(v20.m128i_i32);
    result = 1;
    if ( *(_DWORD *)(a1[2] + 16) != *(_DWORD *)(a1[2] + 20) )
    {
      v6 = (const __m128i *)a1[1];
      v20 = _mm_loadu_si128(v6);
      v21 = v6[1].m128i_i64[0];
      LOBYTE(v22) = v6[1].m128i_i8[8] & 1 | v22 & 0xFE;
      LOBYTE(v22) = v6[1].m128i_i8[8] & 2 | v22 & 0xFD;
      LOBYTE(v22) = v6[1].m128i_i8[8] & 4 | v22 & 0xFB;
      LOBYTE(v22) = v6[1].m128i_i8[8] & 8 | v22 & 0xF7;
      v22 = v6[1].m128i_i32[2] & 0xFFFFFFF0 | v22 & 0xF;
      v23 = (_QWORD *)v6[2].m128i_i64[0];
      v24 = v6[2].m128i_i64[1];
      ptr = v27;
      v26 = 0x800000000LL;
      if ( v6[3].m128i_i32[2] )
        sub_C25E10((__int64 *)&ptr, v6[3].m128i_i64);
      v28 = v6[8].m128i_i8[0] & 1 | v28 & 0xFE;
      v28 = v6[8].m128i_i8[0] & 2 | v28 & 0xFD;
      v29 = v6[8].m128i_i8[1];
      if ( (v22 & 1) == 0 )
      {
        if ( (v22 & 2) != 0
          || ((_DWORD)v26 != 1 || (v22 & 4) == 0) && (v22 & 8) != 0 && *((_QWORD **)ptr + (int)((v22 >> 4) - 1)) == v23 )
        {
          v16 = (unsigned __int8 **)sub_E33C90(*a1, a2, 2466, 0);
          if ( v16 )
            sub_C11320(v16, 3);
          LOBYTE(v22) = v22 | 1;
          LODWORD(v26) = 0;
        }
        else
        {
          v7 = (unsigned int)v26;
          v8 = (unsigned int)v26 + 1LL;
          if ( v8 > HIDWORD(v26) )
          {
            sub_2237220(&ptr, v27, v8, 8);
            v7 = (unsigned int)v26;
          }
          *((_QWORD *)ptr + v7) = 0;
          v9 = v26 + 1;
          LODWORD(v26) = v26 + 1;
          v10 = *(_QWORD *)(v3 + 32);
          LOBYTE(v22) = v22 | 8;
          v24 = v10;
          v11 = *(_QWORD **)(v3 + 40);
          if ( (*(_BYTE *)(v3 + 19) & 2) != 0 )
          {
            if ( *((_DWORD *)v11 + 2) <= 0x40u )
              v11 = (_QWORD *)*v11;
            else
              v11 = *(_QWORD **)*v11;
          }
          v23 = v11;
          v22 = v22 & 0xF | (16 * v9);
        }
      }
      v12 = *(_QWORD *)(v3 + 32);
      *(_WORD *)v18 = *(_WORD *)v18 & 0xFE00 | 0x36;
      if ( unk_2CD7484 )
        sub_EE9B50(54);
      v19 = v12;
      *(_WORD *)&v18[1] &= 0xF801u;
      v13 = sub_B63130((__int64)v18);
      v14 = *a1;
      v18[1] = (v13 << 6) | v18[1] & 0x3F;
      v15 = a1[2];
      v18[2] = v18[2] & 0xF8 | (v13 >> 2) & 7;
      result = sub_C4F9A0(*(_QWORD *)(v15 + 8) + 56LL * *(unsigned int *)(v15 + 16), v14, &v20, (__int64)v18);
      if ( ptr != v27 )
      {
        v17 = result;
        free(ptr);
        return v17;
      }
    }
  }
  else if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                 & 0xFFFFFFFFFFFFFFF0LL)
                     + 16LL) == 5 )
  {
    v20.m128i_i8[4] &= ~1u;
    v20.m128i_i32[0] = 0;
    sub_A51400((__int64)&v20, 0, 0);
    sub_A4FD20(a1[2], (__int64)&v20);
    if ( v20.m128i_i32[0] > 1u )
      sub_A4F8E0(v20.m128i_i32);
    return 1;
  }
  else
  {
    return sub_C14310(*a1, a2);
  }
  return result;
}
