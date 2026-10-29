__int64 __fastcall sub_DEE8D0(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // r13
  __int64 v8; // rbx
  unsigned __int64 v9; // rsi
  _QWORD *v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rax
  char *v13; // rcx
  __int64 v15; // r15
  __m128i v16; // [rsp+0h] [rbp-B8h] BYREF
  __m128i v17; // [rsp+10h] [rbp-A8h]
  __m128i v18; // [rsp+20h] [rbp-98h]
  __m128i v19; // [rsp+30h] [rbp-88h]
  __m128i v20; // [rsp+40h] [rbp-78h]
  _QWORD v21[3]; // [rsp+50h] [rbp-68h] BYREF
  int v22; // [rsp+68h] [rbp-50h]
  __int64 v23; // [rsp+70h] [rbp-48h]
  unsigned int v24; // [rsp+78h] [rbp-40h]

  sub_E23170(v21, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 168) + 224LL) + 8LL * a2));
  v2 = *(_QWORD *)(a1 + 176);
  v16 = _mm_loadu_si128((const __m128i *)sub_E21760(v2, 16));
  sub_E21790(v2, 16);
  if ( v22 )
  {
    v8 = v23 + v21[0] + 40;
    v18 = _mm_load_si128(&v16);
    *(_QWORD *)v8 = v18.m128i_i64[0];
    *(_DWORD *)(v8 + 8) = v18.m128i_i32[2];
  }
  else
  {
    v5 = sub_CFDF60((__int64)v21);
    v6 = v21[0];
    v7 = v23;
    if ( *(_BYTE *)(v5 + 60) )
    {
      v15 = v24;
      if ( v24 == v21[0] )
      {
        v8 = v23 + v24 + 72;
        v20 = _mm_load_si128(&v16);
        *(_QWORD *)v8 = v20.m128i_i64[0];
        *(_DWORD *)(v8 + 8) = v20.m128i_i32[2];
        if ( !*(_BYTE *)(sub_CFDF60((__int64)v21) + 60) )
          v8 = v7 + v15 + 40;
      }
      else
      {
        v8 = v23 + v21[0] + 40;
        v17 = _mm_load_si128(&v16);
        *(_QWORD *)v8 = v17.m128i_i64[0];
        *(_DWORD *)(v8 + 8) = v17.m128i_i32[2];
      }
    }
    else
    {
      v8 = v23 + v21[0] + 40;
      v19 = _mm_load_si128(&v16);
      *(_QWORD *)v8 = v19.m128i_i64[0];
      *(_DWORD *)(v8 + 8) = v19.m128i_i32[2];
      if ( *(_BYTE *)(sub_CFDF60((__int64)v21) + 60) && v24 == v6 )
        v8 = v7 + v24 + 72;
    }
  }
  v9 = ((unsigned __int64)*(unsigned int *)(v8 + 8) + 63) >> 6;
  if ( v9 != 1 )
  {
    v10 = *(_QWORD **)(a1 + 168);
    v11 = 8 * v9;
    v12 = v10[16];
    v10[26] += v11;
    v13 = (char *)((v12 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v10[17] >= (unsigned __int64)&v13[v11] && v12 )
      v10[16] = &v13[v11];
    else
      v13 = (char *)sub_986170((__int64)(v10 + 16), v11, v11, 3, v3, v4);
    *(_QWORD *)v8 = memcpy(v13, *(const void **)v8, 8 * (((unsigned __int64)*(unsigned int *)(v8 + 8) + 63) >> 6));
  }
  sub_E24D00(v21);
  sub_E232A0(v21);
  return 1;
}
