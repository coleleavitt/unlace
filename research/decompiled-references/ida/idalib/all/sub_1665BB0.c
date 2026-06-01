void __fastcall sub_1665BB0(__int64 a1, __int32 a2, int a3, const void *a4, size_t a5, unsigned int a6)
{
  char v9; // r14
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // rcx
  __int64 v20; // rsi
  __m128i *v21; // rax
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // r12
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // r10
  int v28; // eax
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rdx
  unsigned __int64 v32; // rdx
  const __m128i *v33; // rbx
  __int64 v34; // rbp
  bool v35; // al
  __int64 v36; // r10
  __int64 v37; // rbp
  bool v38; // al
  __int64 v39; // rsi
  __int64 v40; // rax
  __int64 v42; // [rsp+8h] [rbp-80h]
  __int64 v43; // [rsp+8h] [rbp-80h]
  __int64 v44; // [rsp+8h] [rbp-80h]
  __int64 v45; // [rsp+8h] [rbp-80h]
  unsigned __int64 v46; // [rsp+18h] [rbp-70h]
  _QWORD v47[2]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v48[3]; // [rsp+30h] [rbp-58h] BYREF
  __int32 v49; // [rsp+48h] [rbp-40h]

  v47[0] = a4;
  v47[1] = a5;
  if ( !a3 )
  {
    v22 = *(_DWORD *)(a1 + 80);
    *(_DWORD *)(a1 + 88) = a2;
    *(_DWORD *)(a1 + 84) = v22;
    return;
  }
  v9 = a3;
  if ( (a3 & 2) != 0 )
  {
    v17 = *(unsigned int *)(a1 + 8);
    v18 = *(_QWORD *)a1;
    v19 = *(unsigned int *)(a1 + 12);
    v20 = *(_QWORD *)(a1 + 84);
    v21 = (__m128i *)(*(_QWORD *)a1 + 32 * v17);
    if ( v17 >= v19 )
    {
      v48[2] = *(_QWORD *)(a1 + 84);
      v32 = v17 + 1;
      v33 = (const __m128i *)v48;
      v48[0] = a4;
      v48[1] = a5;
      v49 = a2;
      if ( v19 < v32 )
      {
        v39 = a1 + 16;
        if ( v18 > (unsigned __int64)v48 || v21 <= (__m128i *)v48 )
        {
          sub_2237220(a1, v39, v32, 32);
          v21 = (__m128i *)(*(_QWORD *)a1 + 32LL * *(unsigned int *)(a1 + 8));
        }
        else
        {
          sub_2237220(a1, v39, v32, 32);
          v33 = (const __m128i *)((char *)v48 + *(_QWORD *)a1 - v18);
          v21 = (__m128i *)(32LL * *(unsigned int *)(a1 + 8) + *(_QWORD *)a1);
        }
      }
      *v21 = _mm_loadu_si128(v33);
      v21[1] = _mm_loadu_si128(v33 + 1);
      ++*(_DWORD *)(a1 + 8);
    }
    else
    {
      v21->m128i_i64[0] = (__int64)a4;
      v21->m128i_i64[1] = a5;
      v21[1].m128i_i64[0] = v20;
      v21[1].m128i_i32[2] = a2;
      ++*(_DWORD *)(a1 + 8);
    }
    goto LABEL_27;
  }
  if ( (a3 & 4) == 0 )
    goto LABEL_27;
  v10 = *(unsigned int *)(a1 + 8);
  if ( a5 )
  {
    v23 = 32 * v10;
    v24 = *(_QWORD *)a1 + v23;
    v25 = v23 >> 5;
    v26 = v23 >> 7;
    v46 = *(_QWORD *)a1;
    if ( v26 )
    {
      v42 = v24 - (v26 << 7);
      while ( a5 != *(_QWORD *)(v24 - 24) || memcmp(*(const void **)(v24 - 32), a4, a5) )
      {
        if ( a5 == *(_QWORD *)(v24 - 56) && !memcmp(*(const void **)(v24 - 64), a4, a5) )
        {
          v24 -= 32;
          goto LABEL_43;
        }
        if ( a5 == *(_QWORD *)(v24 - 88) && !memcmp(*(const void **)(v24 - 96), a4, a5) )
        {
          v24 -= 64;
          goto LABEL_43;
        }
        v27 = v24 - 128;
        if ( a5 == *(_QWORD *)(v24 - 120) )
        {
          v29 = memcmp(*(const void **)(v24 - 128), a4, a5);
          v27 = v24 - 128;
          if ( !v29 )
          {
            v24 -= 96;
            goto LABEL_43;
          }
        }
        v24 = v27;
        if ( v42 == v27 )
        {
          v25 = (__int64)(v27 - v46) >> 5;
          goto LABEL_58;
        }
      }
      goto LABEL_43;
    }
    v27 = v24;
LABEL_58:
    if ( v25 != 2 )
    {
      if ( v25 != 3 )
      {
        if ( v25 != 1 )
          goto LABEL_27;
        goto LABEL_61;
      }
      v34 = v27 - 32;
      v44 = v27;
      v35 = sub_1664D10((__int64)v47, v27 - 32);
      v36 = v44;
      if ( v35 )
      {
LABEL_67:
        v24 = v36;
        goto LABEL_43;
      }
      v27 = v34;
    }
    v37 = v27 - 32;
    v45 = v27;
    v38 = sub_1664D10((__int64)v47, v27 - 32);
    v36 = v45;
    if ( !v38 )
    {
      v27 = v37;
LABEL_61:
      v43 = v27;
      if ( !sub_1664D10((__int64)v47, v27 - 32) )
        goto LABEL_27;
      v24 = v43;
LABEL_43:
      if ( v46 != v24 )
      {
        *(_DWORD *)(a1 + 84) = *(_DWORD *)(v24 - 16);
        v28 = *(_DWORD *)(v24 - 12);
        *(_DWORD *)(a1 + 8) = (__int64)(v24 - 32 - v46) >> 5;
        *(_DWORD *)(a1 + 88) = v28;
      }
      goto LABEL_27;
    }
    goto LABEL_67;
  }
  if ( !HIBYTE(a6) )
  {
LABEL_49:
    if ( !(_DWORD)v10 )
      goto LABEL_27;
    goto LABEL_50;
  }
  if ( !(_BYTE)a6 )
  {
    if ( *(_BYTE *)(a1 + 84) )
    {
      v11 = *(_QWORD *)a1;
      v12 = 32 * v10;
      v13 = *(_QWORD *)a1 + v12;
      v14 = v12 >> 7;
      if ( v14 )
      {
        if ( !*(_BYTE *)(v13 - 16) )
        {
          v40 = v13;
          goto LABEL_24;
        }
        if ( !*(_BYTE *)(v13 - 48) )
        {
          v40 = v13 - 32;
          goto LABEL_24;
        }
        if ( !*(_BYTE *)(v13 - 80) )
        {
          v40 = v13 - 64;
          goto LABEL_24;
        }
        v15 = v13 - (v14 << 7);
        if ( !*(_BYTE *)(v13 - 112) )
        {
          v40 = v13 - 96;
LABEL_24:
          if ( v11 == v40 )
            goto LABEL_27;
          v10 = (__int64)(v40 - 32 - v11) >> 5;
          *(_DWORD *)(a1 + 8) = v10;
          if ( !(_DWORD)v10 )
          {
            *(_DWORD *)(a1 + 84) = *(_DWORD *)(a1 + 80);
            *(_DWORD *)(a1 + 88) = a2;
            goto LABEL_27;
          }
          v30 = 32LL * (unsigned int)v10;
          goto LABEL_51;
        }
        while ( 1 )
        {
          v40 = v13 - 128;
          if ( v15 == v13 - 128 )
            break;
          if ( !*(_BYTE *)(v13 - 144) )
            goto LABEL_24;
          if ( !*(_BYTE *)(v13 - 176) )
          {
            v40 = v13 - 160;
            goto LABEL_24;
          }
          if ( !*(_BYTE *)(v13 - 208) )
          {
            v40 = v13 - 192;
            goto LABEL_24;
          }
          if ( !*(_BYTE *)(v13 - 240) )
          {
            v40 = v13 - 224;
            goto LABEL_24;
          }
          v13 -= 128;
        }
      }
      else
      {
        v40 = v13;
      }
      v16 = (__int64)(v40 - v11) >> 5;
      if ( v16 != 2 )
      {
        if ( v16 != 3 )
        {
          if ( v16 != 1 )
            goto LABEL_27;
          goto LABEL_23;
        }
        if ( !*(_BYTE *)(v40 - 16) )
          goto LABEL_24;
        v40 -= 32;
      }
      if ( !*(_BYTE *)(v40 - 16) )
        goto LABEL_24;
      v40 -= 32;
LABEL_23:
      if ( *(_BYTE *)(v40 - 16) )
        goto LABEL_27;
      goto LABEL_24;
    }
    goto LABEL_49;
  }
  if ( (_DWORD)v10 )
  {
    if ( !*(_BYTE *)(a1 + 84) )
      return;
LABEL_50:
    v11 = *(_QWORD *)a1;
    v30 = 32LL * (unsigned int)v10;
LABEL_51:
    v31 = v11 + v30 - 32;
    *(_DWORD *)(a1 + 84) = *(_DWORD *)(v31 + 16);
    LODWORD(v31) = *(_DWORD *)(v31 + 20);
    *(_DWORD *)(a1 + 8) = v10 - 1;
    *(_DWORD *)(a1 + 88) = v31;
  }
LABEL_27:
  if ( (v9 & 1) != 0 )
  {
    *(_DWORD *)(a1 + 84) = a6;
    *(_DWORD *)(a1 + 88) = a2;
  }
}
