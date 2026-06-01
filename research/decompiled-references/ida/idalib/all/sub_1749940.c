__int64 __fastcall sub_1749940(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rdi
  unsigned int v9; // esi
  __int64 v10; // r9
  unsigned int v11; // edx
  __int64 *v12; // rax
  __int64 v13; // r8
  char *v14; // rdi
  char *v15; // rdx
  __int64 v16; // r13
  __int32 v17; // eax
  __int64 v18; // rsi
  char *v19; // rbx
  int v21; // r11d
  __int64 *v22; // rbx
  __int64 v23; // rsi
  int v24; // eax
  __int64 v25; // rdx
  __m128i *v26; // rbx
  int v27; // eax
  __int64 v28; // r10
  unsigned int v29; // edi
  int v30; // eax
  __int64 v31; // r10
  unsigned int v32; // edi
  __int64 v33; // r14
  __int64 *v34; // r11
  int v35; // esi
  unsigned __int16 v36; // [rsp+Eh] [rbp-4Ah] BYREF
  __m128i v37; // [rsp+10h] [rbp-48h] BYREF
  __int64 v38; // [rsp+20h] [rbp-38h]

  v8 = a1 + 48;
  v9 = *(_DWORD *)(a1 + 64);
  if ( !v9 )
    goto LABEL_50;
  a4 = *(_QWORD *)(a2 + 16);
  v10 = *(_QWORD *)(a1 + 48);
  v11 = (v9 - 1) & (((unsigned int)a4 >> 9) ^ ((unsigned int)a4 >> 4));
  v12 = (__int64 *)(v10 + 32LL * v11);
  v13 = *v12;
  if ( a4 != *v12 )
  {
    v21 = 1;
    v22 = nullptr;
    if ( v13 != -4096 )
    {
      while ( 1 )
      {
        if ( !v22 && v13 == -8192 )
          v22 = v12;
        v11 = (v9 - 1) & (v21 + v11);
        v12 = (__int64 *)(v10 + 32LL * v11);
        v13 = *v12;
        if ( a4 == *v12 )
          goto LABEL_3;
        if ( v13 == -4096 )
          break;
        ++v21;
      }
      if ( v22 )
        v12 = v22;
    }
    a5 = 3 * v9;
    a3 = (unsigned int)(*(_DWORD *)(a1 + 56) + 1);
    a6 = (unsigned int)(4 * a3);
    if ( (unsigned int)a6 < (unsigned int)a5 )
    {
      v13 = v9 - *(_DWORD *)(a1 + 60) - (unsigned int)a3;
      v10 = v9 >> 3;
      if ( (unsigned int)v13 > (unsigned int)v10 )
      {
LABEL_30:
        v23 = *v12;
        goto LABEL_31;
      }
      sub_17496F0(v8, v9, a3, a4, v13, v10);
      v30 = *(_DWORD *)(a1 + 64);
      if ( v30 )
      {
        a4 = *(_QWORD *)(a2 + 16);
        v13 = (unsigned int)(v30 - 1);
        v31 = *(_QWORD *)(a1 + 48);
        LODWORD(a3) = *(_DWORD *)(a1 + 56) + 1;
        v32 = v13 & (((unsigned int)a4 >> 9) ^ ((unsigned int)a4 >> 4));
        v12 = (__int64 *)(v31 + 32LL * v32);
        v23 = *v12;
        if ( *v12 == a4 )
        {
          v23 = *(_QWORD *)(a2 + 16);
          goto LABEL_31;
        }
        v10 = *(_QWORD *)(a2 + 16);
        if ( v23 != -4096 )
        {
          v34 = (__int64 *)(v31
                          + 32LL
                          * ((unsigned int)v13 & (((unsigned int)*(_QWORD *)(a2 + 16) >> 9) ^ ((unsigned int)a4 >> 4))));
          v10 = 1;
          v12 = nullptr;
          while ( 1 )
          {
            if ( !v12 && v23 == -8192 )
              v12 = v34;
            v32 = v13 & (v10 + v32);
            v34 = (__int64 *)(v31 + 32LL * v32);
            v23 = *v34;
            if ( a4 == *v34 )
            {
              v12 = (__int64 *)(v31 + 32LL * v32);
              goto LABEL_31;
            }
            if ( v23 == -4096 )
              break;
            v10 = (unsigned int)(v10 + 1);
          }
          if ( v12 )
            goto LABEL_30;
          v10 = *(_QWORD *)(a2 + 16);
LABEL_78:
          v12 = v34;
          goto LABEL_53;
        }
        goto LABEL_53;
      }
      goto LABEL_81;
    }
LABEL_50:
    sub_17496F0(v8, 2 * v9, a3, a4, a5, a6);
    v27 = *(_DWORD *)(a1 + 64);
    if ( v27 )
    {
      v10 = *(_QWORD *)(a2 + 16);
      v13 = (unsigned int)(v27 - 1);
      v28 = *(_QWORD *)(a1 + 48);
      LODWORD(a3) = *(_DWORD *)(a1 + 56) + 1;
      v29 = v13 & (((unsigned int)v10 >> 9) ^ ((unsigned int)v10 >> 4));
      v12 = (__int64 *)(v28 + 32LL * v29);
      a4 = *v12;
      v23 = *v12;
      if ( v10 == *v12 )
        goto LABEL_31;
      if ( a4 != -4096 )
      {
        v34 = (__int64 *)(v28
                        + 32LL
                        * ((unsigned int)v13 & (((unsigned int)*(_QWORD *)(a2 + 16) >> 9) ^ ((unsigned int)v10 >> 4))));
        v35 = 1;
        v12 = nullptr;
        while ( 1 )
        {
          if ( !v12 && a4 == -8192 )
            v12 = v34;
          v29 = v13 & (v35 + v29);
          v34 = (__int64 *)(v28 + 32LL * v29);
          a4 = *v34;
          if ( v10 == *v34 )
          {
            v23 = *v34;
            v12 = (__int64 *)(v28 + 32LL * v29);
            goto LABEL_31;
          }
          if ( a4 == -4096 )
            break;
          ++v35;
        }
        if ( v12 )
        {
          v23 = *v12;
          a4 = *(_QWORD *)(a2 + 16);
LABEL_31:
          *(_DWORD *)(a1 + 56) = a3;
          if ( v23 != -4096 )
            --*(_DWORD *)(a1 + 60);
          goto LABEL_33;
        }
        goto LABEL_78;
      }
LABEL_53:
      *(_DWORD *)(a1 + 56) = a3;
      a4 = v10;
LABEL_33:
      *v12 = a4;
      v16 = (__int64)(v12 + 1);
      v12[1] = 0;
      v12[2] = 0;
      v12[3] = 0;
      v37.m128i_i32[0] = *(_DWORD *)a2;
      goto LABEL_34;
    }
LABEL_81:
    sub_2E94E0();
  }
LABEL_3:
  v14 = (char *)v12[2];
  v15 = (char *)v12[1];
  v16 = (__int64)(v12 + 1);
  a4 = 0xAAAAAAAAAAAAAAABLL * ((v14 - v15) >> 3);
  v17 = *(_DWORD *)a2;
  v37.m128i_i32[0] = *(_DWORD *)a2;
  v18 = a4 >> 2;
  if ( a4 >> 2 <= 0 )
  {
    v19 = v15;
LABEL_16:
    if ( a4 != 2 )
    {
      if ( a4 != 3 )
      {
        if ( a4 != 1 )
          goto LABEL_34;
        goto LABEL_39;
      }
      if ( v17 == *(_DWORD *)v19 )
        goto LABEL_23;
      v19 += 24;
    }
    if ( v17 == *(_DWORD *)v19 )
      goto LABEL_23;
    v19 += 24;
LABEL_39:
    if ( v17 != *(_DWORD *)v19 )
      goto LABEL_34;
    goto LABEL_23;
  }
  if ( v17 == *(_DWORD *)v15 )
  {
    v19 = v15;
  }
  else
  {
    v19 = v15 + 24;
    if ( v17 != *((_DWORD *)v15 + 6) )
    {
      v19 = v15 + 48;
      if ( v17 != *((_DWORD *)v15 + 12) )
      {
        if ( v17 == *((_DWORD *)v15 + 18) )
        {
          v19 = v15 + 72;
        }
        else
        {
          while ( 1 )
          {
            v19 = v15 + 96;
            if ( !--v18 )
            {
              a4 = 0xAAAAAAAAAAAAAAABLL * ((v14 - v19) >> 3);
              goto LABEL_16;
            }
            if ( v17 == *((_DWORD *)v15 + 24) )
              goto LABEL_23;
            if ( v17 == *((_DWORD *)v15 + 30) )
            {
              v19 = v15 + 120;
              goto LABEL_23;
            }
            if ( v17 == *((_DWORD *)v15 + 36) )
            {
              v19 = v15 + 144;
              goto LABEL_23;
            }
            if ( v17 == *((_DWORD *)v15 + 42) )
              break;
            v15 += 96;
          }
          v19 = v15 + 168;
        }
      }
    }
  }
LABEL_23:
  if ( v19 != v14 )
    return *((unsigned int *)v19 + 4);
LABEL_34:
  v24 = *(unsigned __int16 *)(a1 + 200);
  BYTE2(v38) |= 1u;
  v25 = (unsigned int)(v24 + 1);
  LOWORD(v38) = v24;
  *(_WORD *)(a1 + 200) = v24 + 1;
  v26 = *(__m128i **)(v16 + 8);
  if ( v26 == *(__m128i **)(v16 + 16) )
  {
    v33 = *(_QWORD *)v16;
    sub_1745A70(v16, *(const void **)(v16 + 8), &v37);
    v26 = (__m128i *)((char *)v26 + *(_QWORD *)v16 - v33);
  }
  else
  {
    *v26 = _mm_load_si128(&v37);
    v26[1].m128i_i64[0] = v38;
    *(_QWORD *)(v16 + 8) = (char *)v26 + 24;
  }
  v36 = v26[1].m128i_u16[0];
  *(_QWORD *)sub_1743A80(a1 + 72, &v36, v25, a4, v13, (unsigned __int16 *)v10) = a2;
  return v26[1].m128i_u32[0];
}
