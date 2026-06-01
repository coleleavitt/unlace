int *__fastcall sub_1A31240(__int64 a1, __int64 a2, __int64 a3, char a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  int v8; // esi
  unsigned __int64 v9; // r13
  const __m128i *v10; // r12
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __m128i *v14; // rax
  unsigned int v15; // esi
  int v16; // r12d
  __int64 v17; // r8
  unsigned int v18; // edx
  __int64 v19; // rax
  __int64 v20; // rdi
  int *result; // rax
  __int64 v22; // rdi
  __int64 v23; // rsi
  int v24; // r10d
  __int64 v25; // r11
  int v26; // edi
  bool v27; // zf
  unsigned __int64 v28; // [rsp+8h] [rbp-50h] BYREF
  __int64 v29; // [rsp+10h] [rbp-48h] BYREF
  int v30; // [rsp+18h] [rbp-40h]
  int v31; // [rsp+1Ch] [rbp-3Ch]
  __int64 v32; // [rsp+20h] [rbp-38h]
  char v33; // [rsp+28h] [rbp-30h]

  v7 = *(_QWORD *)(a3 + 48);
  v8 = *(_DWORD *)(a3 + 24);
  v9 = *(_QWORD *)(a2 + 1320);
  v28 = a3;
  v32 = v7;
  v10 = (const __m128i *)&v29;
  v29 = a3;
  v30 = v8;
  v11 = *(unsigned int *)(a2 + 1328);
  v31 = 0;
  v33 = a4 & 3 | v33 & 0x80;
  v12 = *(unsigned int *)(a2 + 1332);
  v13 = v11 + 1;
  v14 = (__m128i *)(v9 + 32 * v11);
  if ( v13 > v12 )
  {
    v22 = a2 + 1320;
    v23 = a2 + 1336;
    if ( v9 > (unsigned __int64)&v29 || v14 <= (__m128i *)&v29 )
    {
      sub_2237220(v22, v23, v13, 32);
      v14 = (__m128i *)(*(_QWORD *)(a2 + 1320) + 32LL * *(unsigned int *)(a2 + 1328));
    }
    else
    {
      sub_2237220(v22, v23, v13, 32);
      v13 = *(_QWORD *)(a2 + 1320);
      v10 = (const __m128i *)((char *)&v29 + v13 - v9);
      v14 = (__m128i *)(v13 + 32LL * *(unsigned int *)(a2 + 1328));
    }
  }
  *v14 = _mm_loadu_si128(v10);
  v14[1] = _mm_loadu_si128(v10 + 1);
  v15 = *(_DWORD *)(a2 + 1304);
  v16 = *(_DWORD *)(a2 + 1328) + 1;
  *(_DWORD *)(a2 + 1328) = v16;
  if ( !v15 )
  {
    v29 = 0;
    goto LABEL_16;
  }
  v12 = v28;
  a6 = v15 - 1;
  v17 = *(_QWORD *)(a2 + 1288);
  v18 = a6 & (((unsigned int)v28 >> 9) ^ ((unsigned int)v28 >> 4));
  v19 = v17 + 16LL * v18;
  v20 = *(_QWORD *)v19;
  if ( *(_QWORD *)v19 == v28 )
    goto LABEL_4;
  v24 = 1;
  v25 = 0;
  if ( v20 == -4096 )
  {
LABEL_10:
    v26 = *(_DWORD *)(a2 + 1296);
    v29 = v19;
    v13 = (unsigned int)(v26 + 1);
    a5 = (unsigned int)(4 * v13);
    if ( (unsigned int)a5 < 3 * v15 )
    {
      a5 = v15 >> 3;
      if ( v15 - *(_DWORD *)(a2 + 1300) - (unsigned int)v13 > (unsigned int)a5 )
      {
LABEL_12:
        v27 = *(_QWORD *)v19 == -4096;
        *(_DWORD *)(a2 + 1296) = v13;
        if ( !v27 )
          --*(_DWORD *)(a2 + 1300);
        *(_QWORD *)v19 = v12;
        *(_DWORD *)(v19 + 8) = 0;
        goto LABEL_4;
      }
LABEL_17:
      sub_EC2030((__int64 *)(a2 + 1288), v15, v13, v12, a5, a6);
      sub_EC1110((__int64 *)(a2 + 1288), (__int64 *)&v28, &v29);
      v12 = v28;
      LODWORD(v13) = *(_DWORD *)(a2 + 1296) + 1;
      v19 = v29;
      goto LABEL_12;
    }
LABEL_16:
    v15 *= 2;
    goto LABEL_17;
  }
  while ( 1 )
  {
    if ( !v25 && v20 == -8192 )
      v25 = v19;
    v18 = a6 & (v24 + v18);
    v19 = v17 + 16LL * v18;
    v20 = *(_QWORD *)v19;
    if ( v28 == *(_QWORD *)v19 )
      break;
    if ( v20 == -4096 )
    {
      if ( v25 )
        v19 = v25;
      goto LABEL_10;
    }
    ++v24;
  }
LABEL_4:
  result = (int *)(v19 + 8);
  *result = v16;
  return result;
}
