__int64 __fastcall sub_DEE640(__int64 a1, unsigned int a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  __int64 v4; // r13
  __int64 v5; // r14
  __int64 v6; // r12
  __int64 v7; // rax
  _QWORD *v8; // r13
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rsi
  char *v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned int v18; // eax
  __m128i v20; // [rsp+0h] [rbp-A8h] BYREF
  __m128i v21; // [rsp+10h] [rbp-98h]
  __m128i v22; // [rsp+20h] [rbp-88h]
  __m128i v23; // [rsp+30h] [rbp-78h]
  __m128i v24; // [rsp+40h] [rbp-68h]
  _QWORD v25[3]; // [rsp+50h] [rbp-58h] BYREF
  int v26; // [rsp+68h] [rbp-40h]
  __int64 v27; // [rsp+70h] [rbp-38h]
  int v28; // [rsp+78h] [rbp-30h]

  sub_E23170(v25, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 168) + 224LL) + 8LL * a2));
  v2 = *(_QWORD *)(a1 + 176);
  v20 = _mm_loadu_si128((const __m128i *)sub_E21760(v2, 16));
  sub_E21790(v2, 16);
  if ( v26 )
  {
    v6 = v27 + v25[0] + 40;
    v22 = _mm_load_si128(&v20);
    *(_QWORD *)v6 = v22.m128i_i64[0];
    *(_DWORD *)(v6 + 8) = v22.m128i_i32[2];
  }
  else
  {
    v3 = sub_CFDF60((__int64)v25);
    v4 = v25[0];
    v5 = v27;
    if ( *(_BYTE *)(v3 + 60) )
    {
      if ( v25[0] == v28 )
      {
        v6 = v27 + v25[0] + 72;
        v24 = _mm_load_si128(&v20);
        *(_QWORD *)v6 = v24.m128i_i64[0];
        *(_DWORD *)(v6 + 8) = v24.m128i_i32[2];
        if ( !*(_BYTE *)(sub_CFDF60((__int64)v25) + 60) )
          v6 = v5 + v4 + 40;
      }
      else
      {
        v6 = v27 + v25[0] + 40;
        v21 = _mm_load_si128(&v20);
        *(_QWORD *)v6 = v21.m128i_i64[0];
        *(_DWORD *)(v6 + 8) = v21.m128i_i32[2];
      }
    }
    else
    {
      v6 = v27 + v25[0] + 40;
      v23 = _mm_load_si128(&v20);
      *(_QWORD *)v6 = v23.m128i_i64[0];
      *(_DWORD *)(v6 + 8) = v23.m128i_i32[2];
      if ( *(_BYTE *)(sub_CFDF60((__int64)v25) + 60) && v4 == v28 )
        v6 = v5 + v4 + 72;
    }
  }
  v7 = sub_21F8CF0(*(unsigned int *)(v6 + 8));
  if ( ((unsigned __int64)(unsigned int)sub_21F9120(v7) + 63) >> 6 != 1 )
  {
    v8 = *(_QWORD **)(a1 + 168);
    v9 = sub_21F8CF0(*(unsigned int *)(v6 + 8));
    v10 = (unsigned int)sub_21F9120(v9);
    v13 = v8[16];
    v14 = 8 * ((unsigned __int64)(v10 + 63) >> 6);
    v15 = (char *)((v13 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    v8[26] += v14;
    if ( v8[17] >= (unsigned __int64)&v15[v14] && v13 )
      v8[16] = &v15[v14];
    else
      v15 = (char *)sub_986170((__int64)(v8 + 16), v14, v14, 3, v11, v12);
    v16 = sub_21F8CF0(*(unsigned int *)(v6 + 8));
    if ( ((unsigned __int64)(unsigned int)sub_21F9120(v16) + 63) >> 6 != 1 )
    {
      if ( *(_QWORD *)v6 )
      {
        v17 = sub_21F8CF0(*(unsigned int *)(v6 + 8));
        v18 = sub_21F9120(v17);
        memcpy(v15, *(const void **)v6, 8 * (((unsigned __int64)v18 + 63) >> 6));
      }
      *(_QWORD *)v6 = v15;
    }
  }
  sub_E24D00(v25);
  sub_E232A0(v25);
  return 1;
}
