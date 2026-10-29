__int64 __fastcall sub_198A950(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v4; // rbx
  unsigned int *v5; // rcx
  int v6; // eax
  __int64 v7; // r13
  __int64 v8; // rbp
  int v9; // eax
  int v10; // edx
  unsigned __int64 v11; // rax
  unsigned int v12; // edx
  unsigned __int64 v13; // rdx
  __m128 *v14; // rcx
  const __m128i *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int16 *v19; // r15
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  bool v22; // [rsp+7h] [rbp-E1h]
  _QWORD *v23; // [rsp+10h] [rbp-D8h]
  _BYTE *v24; // [rsp+18h] [rbp-D0h]
  _DWORD v25[2]; // [rsp+20h] [rbp-C8h] BYREF
  char v26; // [rsp+28h] [rbp-C0h]
  unsigned __int64 v27; // [rsp+30h] [rbp-B8h]
  void *ptr; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+48h] [rbp-A0h]
  _BYTE v30[152]; // [rsp+50h] [rbp-98h] BYREF

  v4 = a2;
  v23 = sub_1988430(a1, *(_QWORD *)(a2 + 24), a3, a4);
  if ( !v23 )
    return 1;
  v5 = (unsigned int *)v30;
  v29 = 0x400000000LL;
  v6 = *(_DWORD *)(a2 + 32);
  ptr = v30;
  if ( v6 )
  {
    v7 = a2 + 40;
    v22 = 0;
    v8 = a2 + 16LL * (unsigned int)(v6 - 1) + 56;
    while ( 1 )
    {
      v9 = *(_DWORD *)(v7 + 4);
      v10 = *(_DWORD *)v7;
      v26 = 1;
      v25[1] = v9;
      v11 = *(_QWORD *)(v7 + 8);
      v25[0] = v10;
      v12 = v11 & 3;
      if ( (v11 & 3) == 0 )
        goto LABEL_18;
      if ( v12 > 2 )
      {
        if ( v12 == 3 )
          goto LABEL_5;
LABEL_18:
        v19 = *(unsigned __int16 **)(a2 + 16LL * *(unsigned int *)(a2 + 32) + 8LL * (unsigned int)(v11 >> 2) + 40);
        v20 = sub_190CCA0(a1, v19, *(double *)a3.m128_u64, a4);
        if ( v20 == 1 )
        {
          v4 = 1;
          v5 = (unsigned int *)ptr;
          goto LABEL_15;
        }
        v21 = v20 & 0xFFFFFFFFFFFFFFFELL;
        if ( !v22 )
          v22 = v19 != (unsigned __int16 *)v21;
        v27 = v21;
LABEL_9:
        v13 = (unsigned int)v29 + 1LL;
        v14 = (__m128 *)((char *)ptr + 24 * (unsigned int)v29);
        v15 = (const __m128i *)v25;
        if ( v13 > HIDWORD(v29) )
        {
          if ( ptr > v25 || v14 <= (__m128 *)v25 )
          {
            sub_2237220(&ptr, v30, v13, 24);
            v14 = (__m128 *)((char *)ptr + 24 * (unsigned int)v29);
            v15 = (const __m128i *)v25;
          }
          else
          {
            v24 = ptr;
            sub_2237220(&ptr, v30, v13, 24);
            v15 = (const __m128i *)((char *)ptr + (char *)v25 - v24);
            v14 = (__m128 *)((char *)ptr + 24 * (unsigned int)v29);
          }
        }
        a3 = (__m128)_mm_loadu_si128(v15);
        v7 += 16;
        *v14 = a3;
        v16 = v15[1].m128i_i64[0];
        LODWORD(v29) = v29 + 1;
        v14[1].m128_u64[0] = v16;
        if ( v8 == v7 )
        {
LABEL_11:
          v5 = (unsigned int *)ptr;
          goto LABEL_12;
        }
      }
      else
      {
        v26 = 0;
        v27 = sub_BF9AD0(v7);
        if ( v27 )
          goto LABEL_9;
LABEL_5:
        v7 += 16;
        if ( v8 == v7 )
          goto LABEL_11;
      }
    }
  }
  v22 = 0;
LABEL_12:
  if ( *(_QWORD **)(a2 + 24) != v23 || v22 )
  {
    v17 = sub_19162B0(*a1, *(_DWORD *)(a2 + 16), (__int64)v23, v5, (unsigned int)v29, *(_DWORD *)(a2 + 20), a3, a4);
    v5 = (unsigned int *)ptr;
    v4 = v17;
  }
LABEL_15:
  if ( v5 != (unsigned int *)v30 )
    free(v5);
  return v4;
}
