__int64 __fastcall sub_30E380(__int64 a1, unsigned int *a2)
{
  int v2; // eax
  unsigned int v3; // edx
  int v5; // esi
  int v7; // edi
  int v8; // eax
  int v9; // ecx
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r11
  __int64 v13; // rax
  __int64 v14; // r10
  __int64 v15; // r8
  unsigned __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rbx
  __int64 v20; // r13
  __int64 v21; // rdx
  __m128i v22; // xmm0
  __int64 v23; // rax
  int v24; // esi
  _QWORD *v25; // r10
  __int64 v26; // rbx
  _QWORD *v27; // rax
  _QWORD *v28; // rdx
  int v29; // ecx
  __int64 v30; // rax
  unsigned __int64 i; // [rsp+8h] [rbp-80h]
  __int64 v32; // [rsp+10h] [rbp-78h]
  __int64 v33; // [rsp+18h] [rbp-70h]
  __m128 v34; // [rsp+20h] [rbp-68h] BYREF
  __int64 v35; // [rsp+30h] [rbp-58h] BYREF
  __m128i v36; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v37; // [rsp+48h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  v2 = *(_DWORD *)a1;
  if ( !*(_DWORD *)a1 )
    return 0;
  v3 = *a2;
  if ( !*a2 )
    return 0;
  v5 = *(_DWORD *)(a1 + 4);
  v7 = v5 + a2[1];
  if ( (unsigned __int64)v7 > 8 )
    return 0;
  v8 = v2 & 0xF;
  v9 = v3 & 0xF;
  LOBYTE(v3) = v9 == 5 || v8 == 5;
  if ( (_BYTE)v3 )
  {
    if ( v8 == 5 && v9 == 5 )
    {
      *(_QWORD *)(a1 + 8) |= *((_QWORD *)a2 + 1) << (8 * (unsigned __int8)v5);
      *(_QWORD *)(a1 + 16) |= *((_QWORD *)a2 + 2) << (8 * (unsigned __int8)v5);
      *(_DWORD *)(a1 + 4) = a2[1] + v5;
      sub_30D6A0(a1);
      return 1;
    }
    return 0;
  }
  if ( v9 != 2 )
  {
    if ( v8 != 2 )
      return v3;
    v11 = *(_QWORD *)(a1 + 16);
    if ( !v11 )
      return v3;
    goto LABEL_14;
  }
  if ( *((_QWORD *)a2 + 2) == 1 )
  {
    v25 = *((_QWORD **)a2 + 1);
    if ( v25[1] == 1 )
    {
      v26 = *v25 << (8 * (unsigned __int8)v5);
      if ( v8 == 1 )
      {
        sub_30D2C0(a1);
        v29 = *(_DWORD *)(a1 + 4);
        v30 = 0;
        *(_DWORD *)a1 = 2;
        *(_QWORD *)(a1 + 8) = 0;
        *(_OWORD *)(a1 + 16) = 0;
        if ( v29 != 8 )
          v30 = 1LL << (8 * (unsigned __int8)v29);
        v35 = v26;
        v36.m128i_i64[0] = v30;
        sub_3112F0(a1 + 8, &v35);
        v7 = *(_DWORD *)(a1 + 4) + a2[1];
      }
      else
      {
        if ( v8 != 2 )
          return v3;
        v27 = *(_QWORD **)(a1 + 8);
        v28 = &v27[2 * *(_QWORD *)(a1 + 16)];
        if ( v28 != v27 )
        {
          if ( ((16 * *(_BYTE *)(a1 + 16)) & 0x10) == 0 || (*v27 += v26, v27 += 2, v27 != v28) )
          {
            do
            {
              *v27 += v26;
              v27[2] += v26;
              v27 += 4;
            }
            while ( v27 != v28 );
          }
          v7 = *(_DWORD *)(a1 + 4) + a2[1];
        }
      }
      *(_DWORD *)(a1 + 4) = v7;
      return 1;
    }
  }
  if ( v8 != 2 )
    return v3;
  v11 = *(_QWORD *)(a1 + 16);
  v12 = 0;
  if ( v11 )
  {
LABEL_14:
    v12 = 0;
    v13 = 0;
    while ( 1 )
    {
      v12 += *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL * (int)v13 + 8);
      if ( v12 > 0x10 )
        return v3;
      if ( ++v13 >= v11 )
      {
        if ( v9 != 2 )
          return v3;
        break;
      }
    }
  }
  v14 = *((_QWORD *)a2 + 2);
  v15 = *((_QWORD *)a2 + 1);
  if ( !v14 )
  {
    v18 = *(_QWORD *)(a1 + 8);
    v35 = 0;
    v36 = 0;
LABEL_32:
    v21 = v35;
    v22 = _mm_loadu_si128(&v36);
    v35 = v18;
    v23 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 8) = v21;
    *(__m128i *)(a1 + 16) = v22;
    v24 = a2[1] + v5;
    v36.m128i_i64[1] = v23;
    *(_DWORD *)(a1 + 4) = v24;
    if ( v18 )
    {
      v36.m128i_i64[0] = 0;
      qfree(v18);
    }
    return 1;
  }
  v16 = 0;
  v17 = 0;
  while ( 1 )
  {
    v16 += *(_QWORD *)(v15 + 16LL * (int)v17 + 8);
    if ( v16 > 0x10 )
      return v3;
    if ( ++v17 == v14 )
    {
      if ( v16 * v12 > 0x10 )
        return v3;
      v35 = 0;
      v18 = *(_QWORD *)(a1 + 8);
      v33 = v15 + 16 * v17;
      v36 = 0;
      if ( v33 != v15 )
      {
        v32 = v15;
        do
        {
          for ( i = 0; i < *(_QWORD *)(v32 + 8); ++i )
          {
            v19 = v18 + 16LL * *(_QWORD *)(a1 + 16);
            if ( v19 != v18 )
            {
              v20 = v18;
              do
              {
                v34 = _mm_loadh_ps((const double *)(v20 + 8));
                sub_3112F0(&v35, &v34);
                v20 += 16;
              }
              while ( v19 != v20 );
              v18 = *(_QWORD *)(a1 + 8);
              v5 = *(_DWORD *)(a1 + 4);
            }
          }
          v32 += 16;
        }
        while ( v33 != v32 );
      }
      goto LABEL_32;
    }
  }
}
