__int64 __fastcall sub_D47210(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // rbp
  __int64 v5; // rax
  _QWORD *v7; // r13
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rsi
  char *v14; // r12
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned int v17; // eax
  __m128i v18; // [rsp+0h] [rbp-78h] BYREF
  __m128i v19; // [rsp+10h] [rbp-68h]
  _BYTE v20[88]; // [rsp+20h] [rbp-58h] BYREF

  sub_E23170(v20, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 168) + 224LL) + 8LL * a2));
  v2 = *(_QWORD *)(a1 + 176);
  v18 = _mm_loadu_si128((const __m128i *)sub_E21760(v2, 16));
  sub_E21790(v2, 16);
  v3 = sub_D0E280((__int64)v20);
  v19 = _mm_load_si128(&v18);
  *(_QWORD *)v3 = v19.m128i_i64[0];
  *(_DWORD *)(v3 + 8) = v19.m128i_i32[2];
  v4 = sub_D0E280((__int64)v20);
  v5 = sub_21F8CF0(*(unsigned int *)(v4 + 8));
  if ( ((unsigned __int64)(unsigned int)sub_21F9120(v5) + 63) >> 6 != 1 )
  {
    v7 = *(_QWORD **)(a1 + 168);
    v8 = sub_21F8CF0(*(unsigned int *)(v4 + 8));
    v9 = (unsigned int)sub_21F9120(v8);
    v12 = v7[16];
    v13 = 8 * ((unsigned __int64)(v9 + 63) >> 6);
    v14 = (char *)((v12 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    v7[26] += v13;
    if ( v7[17] >= (unsigned __int64)&v14[v13] && v12 )
      v7[16] = &v14[v13];
    else
      v14 = (char *)sub_986170((__int64)(v7 + 16), v13, v13, 3, v10, v11);
    v15 = sub_21F8CF0(*(unsigned int *)(v4 + 8));
    if ( ((unsigned __int64)(unsigned int)sub_21F9120(v15) + 63) >> 6 != 1 )
    {
      if ( *(_QWORD *)v4 )
      {
        v16 = sub_21F8CF0(*(unsigned int *)(v4 + 8));
        v17 = sub_21F9120(v16);
        memcpy(v14, *(const void **)v4, 8 * (((unsigned __int64)v17 + 63) >> 6));
      }
      *(_QWORD *)v4 = v14;
    }
  }
  sub_E24D00(v20);
  sub_E232A0(v20);
  return 1;
}
