__int64 __fastcall sub_55F8B0(__int64 a1)
{
  __int64 v1; // r14
  unsigned int v2; // eax
  unsigned int v3; // ebx
  unsigned int v4; // ebp
  __m128i v5; // xmm2
  __m128i v6; // xmm0
  __int64 v7; // rdx
  __int64 *v8; // rcx
  __int64 v9; // rax
  unsigned __int32 v10; // r14d
  unsigned __int32 v11; // r13d
  unsigned int v12; // r8d
  __int32 v13; // esi
  __int64 v14; // rcx
  __int32 v15; // ebp
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r11
  int v18; // ebx
  int v19; // ecx
  unsigned int v20; // ebx
  unsigned int v21; // r9d
  __int64 v22; // rcx
  __int64 v23; // r15
  unsigned __int64 v24; // r11
  __int64 v25; // rax
  __int64 v26; // rdx
  unsigned __int32 v27; // r12d
  _DWORD *v28; // rdx
  __int32 v29; // edi
  __int32 v30; // edi
  int v31; // r11d
  __int64 v32; // rax
  __m128i v33; // xmm4
  __m128i v34; // xmm5
  int v35; // edx
  __m128i *v36; // rax
  __int64 v38; // rax
  __m128i v39; // xmm6
  __m128i v40; // xmm7
  int v41; // edx
  __m128i *v42; // rax
  __int32 v43; // [rsp+0h] [rbp-108h]
  __int64 v44; // [rsp+28h] [rbp-E0h]
  unsigned int v45; // [rsp+30h] [rbp-D8h]
  char v46; // [rsp+34h] [rbp-D4h]
  unsigned __int8 v47; // [rsp+35h] [rbp-D3h]
  unsigned __int8 v48; // [rsp+37h] [rbp-D1h]
  const __m128i *v50; // [rsp+40h] [rbp-C8h]
  __int64 v51; // [rsp+60h] [rbp-A8h]
  unsigned int v52; // [rsp+68h] [rbp-A0h]
  unsigned int v53; // [rsp+6Ch] [rbp-9Ch]
  bool v54; // [rsp+7Fh] [rbp-89h] BYREF
  __m128i v55; // [rsp+80h] [rbp-88h] BYREF
  __m128i v56; // [rsp+90h] [rbp-78h] BYREF
  __m128i v57; // [rsp+A0h] [rbp-68h] BYREF
  unsigned __int64 v58; // [rsp+B0h] [rbp-58h]
  __m128i v59; // [rsp+B8h] [rbp-50h]
  __int64 v60; // [rsp+C8h] [rbp-40h]

  v1 = a1;
  v2 = *(_DWORD *)(a1 + 16);
  if ( v2 <= 1 )
    goto LABEL_54;
  v53 = *(_DWORD *)(a1 + 16);
  v3 = v53;
  v50 = (const __m128i *)(*(_QWORD *)(a1 + 8) + 32LL * (v2 - 1));
  v51 = *(_QWORD *)(a1 + 8);
  while ( 1 )
  {
    v4 = v3 - 1;
    v5 = _mm_loadu_si128(v50 + 1);
    v6 = _mm_loadu_si128(v50);
    *(_DWORD *)(a1 + 16) = v3 - 1;
    v7 = *(_QWORD *)a1;
    v8 = *(__int64 **)(v51 + 32LL * (v3 - 2));
    v55 = v6;
    v9 = *v8;
    v56 = v5;
    if ( (v9 & 1) != 0 || !*(_DWORD *)(v9 + 36) )
    {
      v57.m128i_i64[0] = 0;
      v44 = 0;
    }
    else
    {
      v44 = 0;
      if ( *(_WORD *)(v9 + 66) )
        v44 = *(_QWORD *)(*(_QWORD *)(v7 + 8) + 128LL)
            + 2LL * *(unsigned __int16 *)(v9 + 66) * (unsigned int)*(unsigned __int16 *)(*(_QWORD *)(v7 + 8) + 36LL);
      v57.m128i_i64[0] = *v8;
    }
    v54 = 0;
    v57.m128i_i64[1] = v7;
    v60 = v44;
    v59 = v56;
    v58 = v55.m128i_u64[1];
    sub_55CAE0(&v57, (__int64)&v55, &v54);
    if ( v54 )
    {
      v2 = v53;
      if ( v3 < v53 )
        goto LABEL_53;
    }
    v10 = v59.m128i_u32[1];
    v43 = v59.m128i_i32[3];
    v11 = v59.m128i_u32[2];
    if ( v57.m128i_i64[0] )
    {
      v52 = v3 - 1;
      v45 = *(_DWORD *)(v57.m128i_i64[0] + 36);
      while ( 1 )
      {
        if ( v10 == v45 )
        {
          v4 = v52;
          goto LABEL_46;
        }
        v22 = 0;
        if ( (v57.m128i_i8[0] & 1) == 0 )
          v22 = v57.m128i_i64[0] - 8LL * v45;
        v23 = v22 + 8LL * v10;
        v24 = *(_QWORD *)v23;
        v55.m128i_i64[1] = v58;
        v56.m128i_i32[0] = v59.m128i_i32[0];
        if ( (v24 & 1) != 0 )
          v25 = (v24 >> 1) & 1;
        else
          LOBYTE(v25) = *(_BYTE *)(v24 + 44) & 1;
        if ( (v24 & 1) != 0 )
          v26 = (v24 >> 3) & 1;
        else
          LOBYTE(v26) = (*(_BYTE *)(v24 + 44) & 4) != 0;
        v27 = v11;
        if ( !(_BYTE)v26 )
        {
          if ( v44 )
            LOBYTE(v25) = ((unsigned __int8)v25 | *(unsigned __int16 *)(v44 + 2LL * v11)) != 0;
          v27 = v11 + 1;
        }
        v28 = *(_DWORD **)v23;
        v29 = v43;
        v46 = *(_BYTE *)v23 & 1;
        if ( !v46 && v28[9] )
          v29 = v28[14] + v43;
        v13 = *(unsigned __int8 *)(v23 + 7);
        v30 = v29 - (((_BYTE)v25 == 0) - 1);
        v21 = HIDWORD(v58);
        if ( (v24 & 1) != 0 )
          break;
        v31 = v28[5];
        v13 = v28[6];
        v12 = v28[4] + v58;
        if ( !v31 )
          goto LABEL_14;
        v21 = v31 + HIDWORD(v58);
LABEL_15:
        v58 = __PAIR64__(v21, v12);
        v59.m128i_i32[0] = v13;
        if ( v10 + 1 < v45 )
        {
          v14 = v22 + 8LL * (v10 + 1);
          v15 = *(unsigned __int8 *)(v14 + 4);
          v48 = *(_BYTE *)(v14 + 5) & 0xF;
          v47 = *(_BYTE *)(v14 + 6);
          v16 = ((unsigned __int64)v48 << 40) & 0xFF00FFFFFFFFFFFFLL
              | ((unsigned __int64)(unsigned __int8)v15 << 32) & 0xFF00F0FFFFFFFFFFLL
              | *(_QWORD *)v14 & 0xFF00F000FFFFFFFFLL;
          v17 = v16 | ((unsigned __int64)v47 << 48);
          if ( (v16 & 1) != 0 )
          {
            v18 = v47;
            v19 = v48;
          }
          else
          {
            v18 = *(_DWORD *)&byte_4[v16 | ((unsigned __int64)v47 << 48)];
            v19 = *(_DWORD *)&byte_8[v16 | ((unsigned __int64)v47 << 48)];
            v15 = *(_DWORD *)(v17 + 12);
          }
          v20 = v12 + v18;
          if ( v19 )
            v21 += v19;
          else
            v15 += v13;
          v58 = __PAIR64__(v21, v20);
          v59.m128i_i32[0] = v15;
        }
        if ( (_BYTE)v25 )
        {
          v56.m128i_i32[3] = v43;
          *(__int64 *)((char *)v56.m128i_i64 + 4) = __PAIR64__(v11, v10);
          v55.m128i_i64[0] = v23;
          sub_55ECB0(a1 + 8, 32);
          v32 = *(unsigned int *)(a1 + 16);
          v33 = _mm_load_si128(&v55);
          v34 = _mm_load_si128(&v56);
          v35 = v32 + 1;
          v36 = (__m128i *)(*(_QWORD *)(a1 + 8) + 32 * v32);
          *(_DWORD *)(a1 + 16) = v35;
          *v36 = v33;
          v36[1] = v34;
          return 2;
        }
        if ( !v46 && v28[9] && v28[12] )
        {
          v56.m128i_i32[3] = v43;
          *(__int64 *)((char *)v56.m128i_i64 + 4) = __PAIR64__(v11, v10);
          v55.m128i_i64[0] = v23;
          sub_55ECB0(a1 + 8, 32);
          v38 = *(unsigned int *)(a1 + 16);
          v39 = _mm_load_si128(&v55);
          v40 = _mm_load_si128(&v56);
          v41 = v38 + 1;
          v42 = (__m128i *)(*(_QWORD *)(a1 + 8) + 32 * v38);
          *(_DWORD *)(a1 + 16) = v41;
          *v42 = v39;
          v42[1] = v40;
          return 1;
        }
        v43 = v30;
        ++v10;
        v11 = v27;
      }
      v12 = v13 + v58;
LABEL_14:
      v13 += v59.m128i_i32[0];
      goto LABEL_15;
    }
LABEL_46:
    v50 -= 2;
    if ( v4 == 1 )
      break;
    v3 = v4;
  }
  v2 = v53;
LABEL_53:
  v1 = a1;
LABEL_54:
  *(_DWORD *)(v1 + 16) = v2;
  return 0;
}
