unsigned __int64 __fastcall sub_DA820(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 *v3; // rbp
  unsigned int tinfo_size; // eax
  __int64 v5; // r13
  __int64 v6; // rbx
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rsi
  size_t v10; // rax
  __int64 v11; // r14
  unsigned __int64 v12; // rdx
  char *v13; // r14
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  int v21; // ebx
  int v22; // ebx
  unsigned int v23; // [rsp+4h] [rbp-74h]
  __int64 v24; // [rsp+8h] [rbp-70h]
  __int64 v25; // [rsp+10h] [rbp-68h] BYREF
  __int128 v26; // [rsp+18h] [rbp-60h]
  int v27; // [rsp+28h] [rbp-50h]
  unsigned __int64 v28; // [rsp+38h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 208);
  v28 = __readfsqword(0x28u);
  v23 = *(_BYTE *)(v1 + 88) & 0xF0;
  if ( (*(_BYTE *)(v1 + 88) & 0xF0) == 0xC0 )
    v23 = *(_DWORD *)(v1 + 28);
  if ( v23 <= 0x10 )
    v23 = getinf(99);
  if ( v23 - 208 <= 0x2F )
  {
    sub_CCEC0(a1, v23);
    v2 = *(_QWORD *)(a1 + 208);
    v3 = *(__int64 **)v2;
    v24 = *(_QWORD *)v2 + 80LL * *(_QWORD *)(v2 + 8);
    if ( *(_QWORD *)v2 != v24 )
    {
      do
      {
        v25 = 0;
        v26 = 0;
        tinfo_size = get_tinfo_size(0, v3[8], 0);
        sub_CE6E0(a1, &v25, v3, tinfo_size, 1);
        v5 = v25;
        v6 = 4 * v26;
        v7 = (4 * (__int64)v26) >> 2;
        if ( v7 )
        {
          v8 = *(_QWORD *)(a1 + 16);
          v9 = *(_QWORD *)(a1 + 8);
          v10 = 0;
          v11 = 4 * v8;
          v12 = v7 + v8;
          if ( *(_QWORD *)(a1 + 24) < v12 )
          {
            v17 = qvector_reserve(a1 + 8, v9, v12, 4);
            *(_QWORD *)(a1 + 8) = v17;
            v9 = v17;
            v10 = 4LL * *(_QWORD *)(a1 + 16) - v11;
          }
          v13 = (char *)(v9 + v11);
          memmove(&v13[v6], v13, v10);
          v14 = 0;
          if ( v6 )
          {
            do
            {
              *(_DWORD *)&v13[v14] = *(_DWORD *)(v5 + v14);
              v14 += 4;
            }
            while ( v14 != v6 );
          }
          *(_QWORD *)(a1 + 16) += v7;
          v5 = v25;
        }
        if ( v5 )
        {
          *(_QWORD *)&v26 = 0;
          qfree(v5);
        }
        v3 += 10;
      }
      while ( (__int64 *)v24 != v3 );
    }
    *(_DWORD *)a1 = 1;
    sub_CC8E0(a1, (__int64 *)(a1 + 88), (_QWORD *)(a1 + 8));
    sub_D0B60(a1 + 216, *(_QWORD *)(*(_QWORD *)(a1 + 136) + 64LL), v23);
    v15 = *(_QWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 216) = v15;
    *(_DWORD *)(a1 + 4) = v15;
    if ( (int)v15 > 0 )
      sub_5FE10((__int64 *)(a1 + 144), v15 - 1);
    *(_QWORD *)(a1 + 248) = -1;
    return v28 - __readfsqword(0x28u);
  }
  sub_CCB50(a1, v23);
  sub_D1D10(a1, (unsigned int *)(a1 + 216), *(_QWORD *)(*(_QWORD *)(a1 + 136) + 64LL), *(_QWORD *)(a1 + 208));
  v18 = *(_QWORD *)(a1 + 136);
  v25 = 0;
  v27 = 0;
  v26 = 0;
  if ( !(unsigned __int8)sub_2B1DE0(&v25, *(_QWORD *)(v18 + 64), *(_QWORD *)(*(_QWORD *)(v18 + 56) + 24LL)) )
  {
    *(_QWORD *)&v26 = -1;
    v25 = -1;
LABEL_31:
    v20 = *(int *)(a1 + 216);
    v21 = *(_DWORD *)(a1 + 216);
    if ( v20 < *(_QWORD *)(a1 + 16) )
      v21 += sub_D9B40(
               (__int64 *)(a1 + 144),
               *(_QWORD *)(a1 + 136),
               *(_QWORD *)(*(_QWORD *)(a1 + 136) + 56LL),
               (_QWORD *)(a1 + 8),
               v20,
               1,
               nullptr);
    LODWORD(v25) = v21;
    if ( HIDWORD(v25) != -1 )
      goto LABEL_23;
    goto LABEL_34;
  }
  if ( (_DWORD)v25 == -1 )
    goto LABEL_31;
  if ( HIDWORD(v25) == -1 )
  {
LABEL_34:
    v22 = *(_DWORD *)(a1 + 220);
    if ( (*(_DWORD *)a1 & 0xFFFFFFFB) == 2 && (unsigned __int64)v22 < *(_QWORD *)(a1 + 40) )
      v22 += sub_D9B40(
               (__int64 *)(a1 + 160),
               *(_QWORD *)(a1 + 136),
               *(_QWORD *)(*(_QWORD *)(a1 + 136) + 56LL),
               (_QWORD *)(a1 + 32),
               v22,
               1,
               nullptr);
    HIDWORD(v25) = v22;
  }
LABEL_23:
  if ( (int)v25 > 0 )
    sub_5FE10((__int64 *)(a1 + 144), v25 - 1);
  if ( SHIDWORD(v25) > 0 )
    sub_5FE10((__int64 *)(a1 + 160), HIDWORD(v25) - 1);
  v19 = -1;
  if ( (_QWORD)v26 != -1 )
    v19 = v26 - *(_QWORD *)(*(_QWORD *)(a1 + 208) + 56LL);
  *(_QWORD *)(a1 + 248) = v19;
  return v28 - __readfsqword(0x28u);
}
