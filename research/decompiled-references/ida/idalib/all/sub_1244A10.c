__int64 __fastcall sub_1244A10(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  _BOOL8 v5; // rcx
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rbx
  _QWORD *v9; // r12
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 result; // rax
  _QWORD *v14; // rbx
  _QWORD *v15; // r12
  __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r13
  __int64 v22; // rax
  _QWORD *v23; // rbx
  __int64 v24; // r14
  __int64 v25; // rax
  unsigned __int64 v26; // rcx
  __int64 v27; // rax
  _QWORD *v28; // [rsp+8h] [rbp-60h] BYREF
  __m128 v29; // [rsp+10h] [rbp-58h] BYREF
  __int64 v30; // [rsp+20h] [rbp-48h]

  v4 = *(_DWORD *)(a1 + 64);
  v5 = (unsigned int)(v4 - 18) <= 7 || v4 == 49 || *(_DWORD *)(a1 + 60) == 39;
  if ( !(unsigned __int8)sub_21B7850(a2, 1915, 1463, v5) )
  {
    v27 = *(unsigned int *)(a3 + 8);
    if ( v27 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_2237220(a3, a3 + 16, v27 + 1, 8);
      v27 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v27) = "-fno-use-init-array";
    ++*(_DWORD *)(a3 + 8);
  }
  v29.m128_i32[0] = 750;
  v6 = sub_21B6DA0(a2, &v29, 1);
  v7 = *(_QWORD *)(a2 + 8);
  v8 = (_QWORD *)(v7 + 8LL * (unsigned int)v6);
  v9 = (_QWORD *)(v7 + 8 * HIDWORD(v6));
  if ( v8 != v9 )
  {
    while ( !*v8 || !(unsigned __int8)sub_21B9810(*v8, 750) )
    {
      if ( v9 == ++v8 )
        goto LABEL_9;
    }
    if ( v9 != v8 )
    {
      do
      {
        v17 = *v8;
        if ( *(_QWORD *)(*v8 + 16LL) )
          v17 = *(_QWORD *)(*v8 + 16LL);
        ++v8;
        *(_BYTE *)(v17 + 44) |= 1u;
        if ( v8 == v9 )
          break;
        while ( !*v8 || !(unsigned __int8)sub_21B9810(*v8, 750) )
        {
          if ( v9 == ++v8 )
            goto LABEL_22;
        }
      }
      while ( v9 != v8 );
LABEL_22:
      v18 = *(unsigned int *)(a3 + 8);
      if ( v18 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
      {
        sub_2237220(a3, a3 + 16, v18 + 1, 8);
        v18 = *(unsigned int *)(a3 + 8);
      }
      *(_QWORD *)(*(_QWORD *)a3 + 8 * v18) = "-target-feature";
      v19 = *(unsigned int *)(a3 + 12);
      v20 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
      *(_DWORD *)(a3 + 8) = v20;
      if ( v20 + 1 > v19 )
      {
        sub_2237220(a3, a3 + 16, v20 + 1, 8);
        v20 = *(unsigned int *)(a3 + 8);
      }
      *(_QWORD *)(*(_QWORD *)a3 + 8 * v20) = "+reserved-r19";
      ++*(_DWORD *)(a3 + 8);
    }
  }
LABEL_9:
  v29.m128_u64[0] = 0x5BE00000786LL;
  v10 = sub_21B6DA0(a2, &v29, 2);
  v11 = *(_QWORD *)(a2 + 8);
  v30 = 0x5BE00000786LL;
  v12 = (unsigned int)v10;
  result = HIDWORD(v10);
  v14 = (_QWORD *)(v11 + 8 * v12);
  v15 = (_QWORD *)(v11 + 8 * result);
  v28 = v15;
  v29 = _mm_loadh_ps((const double *)&v28);
  if ( v14 != v15 )
  {
    while ( 1 )
    {
      v16 = *v14;
      if ( *v14 )
      {
        if ( (unsigned __int8)sub_21B9810(*v14, 1926) )
          break;
        result = sub_21B9810(v16, 1470);
        if ( (_BYTE)result )
          break;
      }
      v29.m128_u64[0] = (unsigned __int64)++v14;
      if ( v15 == v14 )
        return result;
    }
    result = 0x5BE00000786LL;
    v28 = v15;
    v30 = 0x5BE00000786LL;
    v29 = _mm_loadh_ps((const double *)&v28);
    if ( v15 != v14 )
    {
      do
      {
        v21 = *v14;
        v22 = *(_QWORD *)(*v14 + 16LL);
        if ( !v22 )
          v22 = *v14;
        v23 = v14 + 1;
        *(_BYTE *)(v22 + 44) |= 1u;
        v29.m128_u64[0] = (unsigned __int64)v23;
        if ( v23 == v15 )
          break;
        while ( 1 )
        {
          v24 = *v23;
          if ( *v23 )
          {
            if ( (unsigned __int8)sub_21B9810(*v23, 1926) || (unsigned __int8)sub_21B9810(v24, 1470) )
              break;
          }
          v29.m128_u64[0] = (unsigned __int64)++v23;
          if ( v15 == v23 )
            goto LABEL_37;
        }
        v14 = (_QWORD *)v29.m128_u64[0];
      }
      while ( v15 != (_QWORD *)v29.m128_u64[0] );
LABEL_37:
      result = sub_21B9810(v21, 1926);
      if ( (_BYTE)result )
      {
        v25 = *(unsigned int *)(a3 + 8);
        if ( v25 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
        {
          sub_2237220(a3, a3 + 16, v25 + 1, 8);
          v25 = *(unsigned int *)(a3 + 8);
        }
        *(_QWORD *)(*(_QWORD *)a3 + 8 * v25) = "-mllvm";
        v26 = *(unsigned int *)(a3 + 12);
        result = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
        *(_DWORD *)(a3 + 8) = result;
        if ( result + 1 > v26 )
        {
          sub_2237220(a3, a3 + 16, result + 1, 8);
          result = *(unsigned int *)(a3 + 8);
        }
        *(_QWORD *)(*(_QWORD *)a3 + 8 * result) = "-hexagon-autohvx";
        ++*(_DWORD *)(a3 + 8);
      }
    }
  }
  return result;
}
