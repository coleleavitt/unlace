__int64 __fastcall sub_F41D0(int *a1, __int64 a2)
{
  __int64 v3; // r12
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rdi
  char v16; // r13
  unsigned __int64 v17; // rbx
  int v18; // eax
  __m128 v19; // rax
  int *v20; // [rsp+0h] [rbp-80h]
  int *v21; // [rsp+0h] [rbp-80h]
  _QWORD v22[2]; // [rsp+8h] [rbp-78h] BYREF
  __m128 v23; // [rsp+18h] [rbp-68h] BYREF
  __int64 v24; // [rsp+28h] [rbp-58h] BYREF
  __int128 v25; // [rsp+30h] [rbp-50h]
  unsigned __int64 v26; // [rsp+40h] [rbp-40h]

  v3 = *(_QWORD *)(a2 + 64);
  v4 = a1[3];
  v26 = __readfsqword(0x28u);
  v25 = 0;
  v5 = *(_QWORD *)(v3 + 1440);
  v24 = 0;
  if ( v4 + v5 - 1 >= v5 )
  {
    v24 = qvector_reserve(&v24, 0, 1, 16);
    *(__m128i *)(v24 + 16 * v25) = _mm_unpacklo_epi64((__m128i)v5, (__m128i)v4);
    *(_QWORD *)&v25 = v25 + 1;
  }
  v6 = sub_EF240(a2);
  v7 = a1[4];
  v8 = v6;
  v9 = v6 - v7;
  if ( v9 > 0 )
  {
    v10 = *(_QWORD *)(v3 + 1496);
    v11 = *(_QWORD *)(v3 + 1440) + v7;
    v22[1] = v9;
    v22[0] = *(_QWORD *)(*(_QWORD *)(v10 + 24) + 16LL) & v11;
    sub_312A30(&v24, v22);
  }
  sub_312B30(&v24, *(_QWORD *)(a2 + 64) + 208LL);
  if ( (_QWORD)v25 )
  {
    v21 = a1 + 54;
    v23 = _mm_loadh_ps((const double *)(v3 + 128));
    if ( (unsigned __int8)sub_313CF0(a1 + 54, &v23, 0) )
    {
      v23 = _mm_loadh_ps((const double *)(v3 + 128));
      sub_312A30(v21, &v23);
      sub_313AE0(v21, &v24);
    }
    v20 = a1 + 38;
    sub_313AE0(a1 + 38, &v24);
    sub_313AE0(a1 + 28, &v24);
    sub_313AE0(a1 + 64, &v24);
    if ( (int)v8 > a1[3] )
      v8 = a1[3];
    v12 = a1[4] - v8;
    if ( v12 <= 0 )
      goto LABEL_16;
    v16 = 1;
  }
  else
  {
    if ( (int)v8 > a1[3] )
      v8 = a1[3];
    v12 = a1[4] - v8;
    if ( v12 <= 0 )
      goto LABEL_9;
    v16 = 0;
    v20 = a1 + 38;
  }
  v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 1496) + 24LL) + 16LL) & (*(_QWORD *)(v3 + 1440) + v8);
  v23.m128_u64[1] = v12;
  v23.m128_u64[0] = v17;
  if ( (unsigned __int8)sub_312A30(v20, &v23) )
  {
    v19.m128_u64[0] = sub_32B640(a1, *(_QWORD *)(a2 + 64));
    v23 = v19;
    sub_313A50(v20, &v23);
  }
  else if ( !v16 )
  {
LABEL_9:
    v13 = 0;
    goto LABEL_10;
  }
LABEL_16:
  v18 = *(_DWORD *)(a2 + 24);
  v13 = 1;
  BYTE1(v18) &= ~2u;
  LOBYTE(v18) = v18 | 0x80;
  *(_DWORD *)(a2 + 24) = v18;
LABEL_10:
  v14 = v24;
  a1[70] |= 0x40u;
  if ( v14 )
  {
    *(_QWORD *)&v25 = 0;
    qfree(v14);
  }
  return v13;
}
