__int64 __fastcall sub_DFFFB0(const __m128i *a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rdi
  __int32 v5; // r13d
  __m128i v6; // xmm2
  __m128i si128; // xmm1
  __int64 v8; // rax
  __int32 v9; // eax
  __int64 v10; // rdi
  _DWORD *v11; // rcx
  char v12; // dl
  __m128i v13; // xmm3
  unsigned __int32 v14; // eax
  __int64 v15; // rax
  unsigned __int32 v16; // eax
  __int64 v17; // r15
  __int64 v18; // r13
  int v19; // eax
  int v20; // eax
  unsigned int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __m128i v24; // [rsp+0h] [rbp-E8h] BYREF
  __int64 (__fastcall *v25)(__m128i *, __m128i *, int); // [rsp+10h] [rbp-D8h]
  void (__fastcall *v26)(__m128i *, __int64); // [rsp+18h] [rbp-D0h]
  _QWORD v27[3]; // [rsp+20h] [rbp-C8h] BYREF
  __int32 v28; // [rsp+38h] [rbp-B0h]
  __m128i v29; // [rsp+40h] [rbp-A8h] BYREF
  _QWORD v30[3]; // [rsp+50h] [rbp-98h] BYREF
  int v31; // [rsp+68h] [rbp-80h]
  __m128i v32; // [rsp+70h] [rbp-78h]
  _BYTE v33[24]; // [rsp+80h] [rbp-68h] BYREF
  int v34; // [rsp+98h] [rbp-50h]
  __int128 v35; // [rsp+A0h] [rbp-48h]

  result = sub_CDA840((__int64)a1);
  v3 = a1[2].m128i_u32[2];
  if ( (_BYTE)result && (_DWORD)v3 == 8 )
    return result;
  v4 = a1[2].m128i_i64[0];
  if ( (*(_BYTE *)(v4 + v3 + 28) & 0x20) == 0 )
    return result;
  v5 = a1[1].m128i_i32[2];
  v6 = _mm_loadu_si128(a1 + 2);
  v25 = (__int64 (__fastcall *)(__m128i *, __m128i *, int))sub_DFEBF0;
  *(_QWORD *)v33 = &v24;
  si128 = _mm_load_si128((const __m128i *)v33);
  v26 = (void (__fastcall *)(__m128i *, __int64))sub_DFF190;
  v8 = a1->m128i_i64[0];
  v24 = si128;
  v27[0] = v8;
  v27[1] = 0;
  v27[2] = 0;
  v28 = v5;
  v29 = v6;
  if ( v4 && !v5 )
  {
    sub_DFA5F0(v4, (__int64)v27);
    v5 = v28;
  }
  while ( !(unsigned __int8)sub_CDA840((__int64)v27) )
  {
    if ( v5 )
      goto LABEL_26;
    v9 = v29.m128i_i32[2];
    if ( v29.m128i_i32[2] <= 0xFu )
      goto LABEL_25;
    v10 = v29.m128i_i64[0];
    v11 = (_DWORD *)(v29.m128i_i64[0] + v29.m128i_u32[2] + 24);
    v12 = *(_BYTE *)(v29.m128i_i64[0] + v29.m128i_u32[2] + 28);
    if ( (v12 & 0x20) == 0 )
      goto LABEL_25;
    v13 = _mm_load_si128(&v29);
    *(_BYTE *)(v29.m128i_i64[0] + v29.m128i_u32[2] + 28) = v12 | 0x10;
    v30[1] = 0;
    v30[0] = v27[0];
    v30[2] = 0;
    v31 = 0;
    v32 = v13;
    if ( v10 )
    {
      sub_DFA5F0(v10, (__int64)v30);
      v14 = v29.m128i_u32[2];
      if ( v29.m128i_i32[2] == -1 )
      {
        memset(v33, 0, sizeof(v33));
      }
      else
      {
        v14 = v29.m128i_i32[2] - *(_DWORD *)(v29.m128i_i64[0] + v29.m128i_u32[2] + 24);
        *(_OWORD *)&v33[8] = 0;
        *(_QWORD *)v33 = v14;
      }
      v34 = 0;
      *(_QWORD *)&v35 = v29.m128i_i64[0];
      DWORD2(v35) = v14;
      if ( v29.m128i_i64[0] )
        sub_DFA5F0(v29.m128i_i64[0], (__int64)v33);
    }
    else if ( v9 == -1 )
    {
      memset(v33, 0, sizeof(v33));
      v34 = 0;
      *(_QWORD *)&v35 = 0;
      DWORD2(v35) = -1;
    }
    else
    {
      v16 = v9 - *v11;
      v34 = 0;
      *(_OWORD *)&v33[8] = 0;
      *(_QWORD *)v33 = v16;
      *(_QWORD *)&v35 = 0;
      DWORD2(v35) = v16;
    }
    sub_DFF5C0((__int64)v27, (const __m128i *)v33);
    if ( !v34 )
      sub_DFED90(v33);
    v15 = *(_QWORD *)(sub_CDA220((__int64)v27) + 32);
    if ( v15 )
    {
      if ( *(_BYTE *)(v15 + 648) )
      {
        v17 = *(_QWORD *)(v15 + 280);
        v18 = v17 + 24LL * *(unsigned int *)(v15 + 288);
        if ( v17 != v18 )
        {
          while ( 1 )
          {
            v20 = *(_DWORD *)(v17 + 8);
            v34 = 0;
            v21 = LODWORD(v27[0]) + v20;
            *(_OWORD *)&v33[8] = 0;
            *(_QWORD *)&v35 = v29.m128i_i64[0];
            *(_QWORD *)v33 = v21;
            DWORD2(v35) = v21;
            if ( !v29.m128i_i64[0] )
              break;
            sub_DFA5F0(v29.m128i_i64[0], (__int64)v33);
            v19 = v34;
            if ( v31 != v34 )
              goto LABEL_36;
            if ( v34 == 1 )
            {
              if ( v35 != *(_OWORD *)&v32 )
                goto LABEL_36;
            }
            else
            {
              v23 = v35;
              v22 = v32.m128i_i64[0];
              if ( v34 != 2 )
                goto LABEL_44;
              if ( (_QWORD)v35 != v32.m128i_i64[0] )
                goto LABEL_36;
            }
            if ( *(_QWORD *)v33 != v30[0] )
              goto LABEL_36;
LABEL_40:
            v17 += 24;
            if ( v17 == v18 )
              goto LABEL_21;
          }
          v19 = v31;
          if ( v31 )
            goto LABEL_36;
          v22 = v32.m128i_i64[0];
          v23 = 0;
LABEL_44:
          if ( v22 != v23 || DWORD2(v35) != v32.m128i_i32[2] || *(_QWORD *)v33 != v30[0] )
          {
LABEL_36:
            if ( !v25 )
              std::__throw_bad_function_call();
            v26(&v24, (__int64)v33);
            v19 = v34;
          }
          if ( !v19 )
            sub_DFED90(v33);
          goto LABEL_40;
        }
      }
    }
LABEL_21:
    if ( !v31 )
      sub_DFED90(v30);
    v5 = v28;
  }
  if ( v5 )
    goto LABEL_26;
LABEL_25:
  sub_DFED90(v27);
LABEL_26:
  result = (__int64)v25;
  if ( v25 )
    return v25(&v24, &v24, 3);
  return result;
}

