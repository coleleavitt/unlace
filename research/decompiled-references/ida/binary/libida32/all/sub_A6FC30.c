__int64 __fastcall sub_A6FC30(__int64 a1, _BYTE *a2, __int64 a3, char a4)
{
  __int64 v6; // rdi
  void (*v7)(); // rax
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // esi
  __int64 v14; // rdi
  unsigned int v15; // edx
  __int64 *v16; // rbx
  __int64 v17; // rcx
  unsigned __int64 *v18; // rdx
  unsigned __int64 v19; // rbp
  __int64 v20; // rax
  __m128i si128; // xmm0
  __int64 *v22; // r10
  int v23; // edi
  bool v24; // zf
  __m128 v25; // [rsp+0h] [rbp-48h] BYREF
  __int64 v26; // [rsp+10h] [rbp-38h] BYREF
  __int64 *v27; // [rsp+18h] [rbp-30h] BYREF

  if ( a4 )
  {
    v6 = *(_QWORD *)(a1 + 18368);
    if ( v6 )
    {
      if ( (a2[8] & 6) != 0 )
      {
        v7 = *(void (**)())(*(_QWORD *)v6 + 176LL);
        if ( v7 != nullsub_428 )
          ((void (__fastcall *)(__int64, _BYTE *, __int64))v7)(v6, a2, a3);
      }
    }
  }
  result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a2 + 32LL))(a2);
  v13 = *(_DWORD *)(a1 + 1768);
  v26 = result;
  if ( !v13 )
  {
    v27 = nullptr;
    goto LABEL_22;
  }
  v11 = v13 - 1;
  v14 = *(_QWORD *)(a1 + 1752);
  v15 = v11 & (((unsigned int)result >> 9) ^ ((unsigned int)result >> 4));
  v16 = (__int64 *)(v14 + 16LL * v15);
  v17 = *v16;
  if ( result == *v16 )
    goto LABEL_8;
  v12 = 1;
  v22 = nullptr;
  if ( v17 == -4096 )
  {
LABEL_15:
    v23 = *(_DWORD *)(a1 + 1760);
    v10 = 3 * v13;
    v27 = v16;
    v9 = (unsigned int)(v23 + 1);
    if ( 4 * (int)v9 < (unsigned int)v10 )
    {
      v10 = v13 - *(_DWORD *)(a1 + 1764) - (unsigned int)v9;
      if ( (unsigned int)v10 > v13 >> 3 )
      {
LABEL_17:
        v24 = *v16 == -4096;
        *(_DWORD *)(a1 + 1760) = v9;
        if ( !v24 )
          --*(_DWORD *)(a1 + 1764);
        *v16 = result;
        v18 = (unsigned __int64 *)(v16 + 1);
        v16[1] = 0;
        goto LABEL_20;
      }
LABEL_23:
      sub_A6F9D0(a1 + 1752, v13, v9, v10, v11, v12);
      sub_A4A550((__int64 *)(a1 + 1752), &v26, &v27);
      result = v26;
      v16 = v27;
      LODWORD(v9) = *(_DWORD *)(a1 + 1760) + 1;
      goto LABEL_17;
    }
LABEL_22:
    v13 *= 2;
    goto LABEL_23;
  }
  while ( 1 )
  {
    if ( !v22 && v17 == -8192 )
      v22 = v16;
    v15 = v11 & (v12 + v15);
    v16 = (__int64 *)(v14 + 16LL * v15);
    v17 = *v16;
    if ( result == *v16 )
      break;
    if ( v17 == -4096 )
    {
      if ( v22 )
        v16 = v22;
      goto LABEL_15;
    }
    v12 = (unsigned int)(v12 + 1);
  }
LABEL_8:
  result = v16[1];
  v18 = (unsigned __int64 *)(v16 + 1);
  v19 = result & 0xFFFFFFFFFFFFFFF8LL;
  if ( (result & 0xFFFFFFFFFFFFFFF8LL) == 0 )
  {
LABEL_20:
    *v18 = a3 & 0xFFFFFFFFFFFFFFFBLL;
    return result;
  }
  if ( (result & 4) != 0 )
  {
    result = *(unsigned int *)(v19 + 8);
    if ( result + 1 > (unsigned __int64)*(unsigned int *)(v19 + 12) )
    {
      sub_22134E0(v16[1] & 0xFFFFFFFFFFFFFFF8LL, v19 + 16, result + 1, 8);
      result = *(unsigned int *)(v19 + 8);
    }
    *(_QWORD *)(*(_QWORD *)v19 + 8 * result) = a3;
    ++*(_DWORD *)(v19 + 8);
  }
  else
  {
    v25.m128_u64[0] = a3;
    v25 = _mm_loadh_ps((const double *)v25.m128_u64);
    v20 = operator new(0x30u);
    si128 = _mm_load_si128((const __m128i *)&v25);
    *(_QWORD *)(v20 + 8) = 0x400000002LL;
    *(_QWORD *)v20 = v20 + 16;
    *(__m128i *)(v20 + 16) = si128;
    result = v20 | 4;
    v16[1] = result;
  }
  return result;
}

