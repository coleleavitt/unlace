__int64 __fastcall sub_455FD0(__int64 *a1, int *a2, unsigned int *a3, int *a4, int *a5)
{
  __int64 v5; // rax
  int v6; // r13d
  int v8; // r12d
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rbp
  __int64 v13; // rax
  unsigned int v14; // r14d
  __int64 v15; // rdx
  __int64 v16; // r12
  __int64 v17; // r13
  __int64 v18; // rsi
  int v19; // esi
  __int64 v21; // rax
  __int64 v22; // [rsp+8h] [rbp-B0h]
  _QWORD v23[4]; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v24[4]; // [rsp+30h] [rbp-88h] BYREF
  __m128i v25; // [rsp+50h] [rbp-68h] BYREF
  __m128i v26; // [rsp+60h] [rbp-58h]
  unsigned __int64 v27; // [rsp+78h] [rbp-40h]

  v5 = *a1;
  v6 = *a2;
  v27 = __readfsqword(0x28u);
  v8 = *(_DWORD *)(v5 + 4LL * *a5 + 16);
  v9 = switch_dbctx(*(int *)(v5 + 4LL * *a4 + 16));
  v10 = a3[1];
  v11 = *a3;
  v12 = *(_QWORD *)(v9 + 1480);
  v23[0] = &off_2AFF310;
  v22 = v9;
  v23[2] = v9;
  v23[1] = 0;
  sub_580C00(v12, v11, v10, v23);
  if ( v6 == 1 )
  {
    v25 = (__m128i)(unsigned __int64)v12;
    v26 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2AFF440), (__m128i)(unsigned __int64)sub_454B80);
    sub_455080(*(_QWORD *)(v22 + 1480), a3, (__int64)&v25);
    if ( v26.m128i_i64[0] )
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v26.m128i_i64[0])(&v25, &v25, 3);
    v21 = switch_dbctx(v8);
    v16 = *(_QWORD *)(v21 + 1480);
    v25 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v21, (__m128i)(unsigned __int64)v12);
    v26 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2AFF448), (__m128i)(unsigned __int64)sub_455000);
    sub_455080(v16, a3, (__int64)&v25);
    if ( v26.m128i_i64[0] )
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v26.m128i_i64[0])(&v25, &v25, 3);
    v15 = a3[1];
    v14 = *a3;
  }
  else
  {
    v13 = switch_dbctx(v8);
    v14 = *a3;
    v15 = a3[1];
    v16 = *(_QWORD *)(v13 + 1480);
    v17 = v13;
    if ( *a3 < (unsigned int)v15 )
    {
      do
      {
        while ( (sub_3B9AA0(v16, v14, 1) & 0x100) != 0 )
        {
          sub_3BA160(*(_QWORD **)(v17 + 1480), v24, v14);
          v18 = v14++;
          sub_3C98C0(v12, v18, v24[0]);
          v15 = a3[1];
          if ( v14 >= (unsigned int)v15 )
            goto LABEL_7;
        }
        v19 = v14++;
        sub_3B98C0(v12, v19);
        v15 = a3[1];
      }
      while ( v14 < (unsigned int)v15 );
LABEL_7:
      v14 = *a3;
    }
  }
  v24[0] = (__int64)&off_2AFF328;
  v24[1] = 0;
  v24[2] = v22;
  sub_580C00(v16, v14, v15, v24);
  return 0;
}

