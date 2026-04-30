__int64 __fastcall sub_576B40(__int64 *a1, unsigned __int8 (__fastcall *a2)(_QWORD *, __m128i *, char *))
{
  unsigned int v2; // r15d
  unsigned int v4; // edx
  __int64 v5; // rax
  __int64 v6; // rcx
  __m128i v7; // xmm1
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 *v10; // rcx
  __int64 v11; // rax
  int v12; // esi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __m128i v16; // xmm4
  int v17; // edx
  __int64 v18; // rax
  __int64 v20; // rax
  __m128i v21; // xmm2
  int v22; // edx
  __int64 v23; // rax
  char v24; // [rsp+Fh] [rbp-89h] BYREF
  __m128i v25; // [rsp+10h] [rbp-88h] BYREF
  __m128i v26; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v27[3]; // [rsp+30h] [rbp-68h] BYREF
  __m128i v28; // [rsp+48h] [rbp-50h]
  __int64 v29; // [rsp+58h] [rbp-40h]

  v2 = *((_DWORD *)a1 + 4);
  if ( v2 > 1 )
  {
    v4 = *((_DWORD *)a1 + 4);
    while ( 2 )
    {
      v5 = v4 - 1;
      v6 = a1[1];
      *((_DWORD *)a1 + 4) = v5;
      v25 = _mm_loadu_si128((const __m128i *)(v6 + 32 * v5));
      v7 = _mm_loadu_si128((const __m128i *)(v6 + 32 * v5 + 16));
      v8 = v4 - 2;
      v9 = *a1;
      v10 = *(__int64 **)(v6 + 32 * v8);
      v26 = v7;
      v11 = *v10;
      if ( (*v10 & 1) != 0 || !*(_DWORD *)(v11 + 36) )
      {
        v27[0] = 0;
        v13 = 0;
      }
      else
      {
        v12 = *(unsigned __int16 *)(v11 + 66);
        v13 = 0;
        if ( v12 )
          v13 = *(_QWORD *)(*(_QWORD *)(v9 + 8) + 128LL)
              + 2LL * v12 * (unsigned int)*(unsigned __int16 *)(*(_QWORD *)(v9 + 8) + 36LL);
        v27[0] = *v10;
      }
      v29 = v13;
      v27[1] = v9;
      v28 = v26;
      v24 = 0;
      v27[2] = v25.m128i_i64[1];
      a2(v27, &v25, &v24);
      if ( !v24 || *((_DWORD *)a1 + 4) + 1 >= v2 )
      {
        while ( a2(v27, &v25, &v24) )
        {
          if ( v24 )
          {
            sub_55ECB0((__int64)(a1 + 1), 32);
            v20 = *((unsigned int *)a1 + 4);
            v21 = _mm_load_si128(&v25);
            v22 = v20 + 1;
            v23 = a1[1] + 32 * v20;
            *((_DWORD *)a1 + 4) = v22;
            *(__m128i *)v23 = v21;
            *(__m128i *)(v23 + 16) = _mm_load_si128(&v26);
            return 2;
          }
          v14 = *(_QWORD *)v25.m128i_i64[0];
          if ( (*(_QWORD *)v25.m128i_i64[0] & 1) == 0 && *(_DWORD *)(v14 + 36) && *(_DWORD *)(v14 + 48) )
          {
            sub_55ECB0((__int64)(a1 + 1), 32);
            v15 = *((unsigned int *)a1 + 4);
            v16 = _mm_load_si128(&v25);
            v17 = v15 + 1;
            v18 = a1[1] + 32 * v15;
            *((_DWORD *)a1 + 4) = v17;
            *(__m128i *)v18 = v16;
            *(__m128i *)(v18 + 16) = _mm_load_si128(&v26);
            return 1;
          }
        }
        v4 = *((_DWORD *)a1 + 4);
        if ( v4 > 1 )
          continue;
      }
      break;
    }
  }
  *((_DWORD *)a1 + 4) = v2;
  return 0;
}
