void __fastcall sub_18AD550(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rdi
  _QWORD *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rsi
  _QWORD *v15; // rsi
  _QWORD *v16; // rdx
  unsigned __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 *v20; // r12
  __int64 *v21; // r14
  __int64 v22; // rdi
  unsigned int v23; // edx
  unsigned __int64 *v24; // rsi
  unsigned __int64 v25; // r8
  __int64 v26; // rax
  int v27; // esi
  bool v28; // zf
  __int64 v29; // rdi
  __int64 v30; // rcx
  unsigned int v31; // r8d
  unsigned __int64 *v32; // rsi
  unsigned __int64 v33; // r10
  int v34; // r12d
  unsigned __int64 *v35; // rbp
  __int64 v36; // r8
  __int64 v37; // rax
  __int64 v38; // rbp
  int v39; // r11d
  unsigned __int64 *v40; // r10
  int v41; // edx
  __int64 *v42; // [rsp+8h] [rbp-60h]
  unsigned __int64 v43; // [rsp+8h] [rbp-60h]
  unsigned __int64 v44; // [rsp+18h] [rbp-50h] BYREF
  __m128 v45[4]; // [rsp+20h] [rbp-48h] BYREF

  v7 = sub_BAA9D0(a2, *(_QWORD *)(*(_QWORD *)a1 + 40LL), (*(_BYTE *)(*(_QWORD *)a1 + 58LL) & 2) != 0, 1, a5, a6);
  v44 = v7;
  if ( !v7 )
  {
    *(_BYTE *)(a1 + 80) = 1;
    sub_18ADA90(a1, a2);
    return;
  }
  v10 = *(unsigned int *)(a1 + 16);
  if ( (_DWORD)v10 )
  {
    v29 = *(unsigned int *)(a1 + 24);
    v30 = a1 + 8;
    if ( (_DWORD)v29 )
    {
      v9 = *(_QWORD *)(a1 + 8);
      v31 = (v29 - 1) & (((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4));
      v32 = (unsigned __int64 *)(v9 + 8LL * v31);
      v33 = *v32;
      if ( v7 == *v32 )
      {
LABEL_39:
        sub_1898D60(v45, v32, (_QWORD *)(v9 + 8 * v29), v30, 1);
        return;
      }
      v34 = 1;
      v35 = nullptr;
      if ( v33 != -4096 )
      {
        while ( 1 )
        {
          if ( !v35 && v33 == -8192 )
            v35 = v32;
          v31 = (v29 - 1) & (v34 + v31);
          v32 = (unsigned __int64 *)(v9 + 8LL * v31);
          v33 = *v32;
          if ( v7 == *v32 )
            goto LABEL_39;
          if ( v33 == -4096 )
          {
            if ( v35 )
              v32 = v35;
            break;
          }
          ++v34;
        }
      }
      v10 = (unsigned int)(v10 + 1);
      v8 = (unsigned int)(3 * v29);
      v45[0].m128_u64[0] = (unsigned __int64)v32;
      if ( 4 * (int)v10 < (unsigned int)v8 )
      {
        v36 = (unsigned int)(v29 - *(_DWORD *)(a1 + 20) - v10);
        if ( (unsigned int)v36 > (unsigned int)v29 >> 3 )
        {
LABEL_51:
          v28 = *v32 == -4096;
          *(_DWORD *)(a1 + 16) = v10;
          if ( !v28 )
            --*(_DWORD *)(a1 + 20);
          *v32 = v7;
          sub_1898D60(v45, v32, (_QWORD *)(v9 + 8 * v29), v30, 1);
          v37 = *(unsigned int *)(a1 + 40);
          v38 = v44;
          if ( v37 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 44) )
          {
            sub_2237220(a1 + 32, a1 + 48, v37 + 1, 8);
            v37 = *(unsigned int *)(a1 + 40);
          }
          *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v37) = v38;
          ++*(_DWORD *)(a1 + 40);
          return;
        }
        v42 = (__int64 *)(a1 + 8);
        sub_18AD2F0(a1 + 8, v29, v10, v30, v36, v9);
LABEL_62:
        sub_1898490(v42, (__int64 *)&v44, v45);
        v7 = v44;
        v9 = *(_QWORD *)(a1 + 8);
        v29 = *(unsigned int *)(a1 + 24);
        LODWORD(v10) = *(_DWORD *)(a1 + 16) + 1;
        v32 = (unsigned __int64 *)v45[0].m128_u64[0];
        v30 = (__int64)v42;
        goto LABEL_51;
      }
    }
    else
    {
      v45[0].m128_u64[0] = 0;
    }
    v42 = (__int64 *)(a1 + 8);
    sub_18AD2F0(a1 + 8, 2 * v29, v10, v30, v8, v9);
    goto LABEL_62;
  }
  v11 = *(unsigned int *)(a1 + 40);
  v12 = *(_QWORD **)(a1 + 32);
  v13 = (__int64)&v12[v11];
  v14 = (8 * v11) >> 3;
  if ( !((8 * v11) >> 5) )
  {
    v16 = *(_QWORD **)(a1 + 32);
    goto LABEL_16;
  }
  if ( v7 == *v12 )
  {
    v16 = *(_QWORD **)(a1 + 32);
    goto LABEL_35;
  }
  if ( v7 == v12[1] )
  {
    v16 = v12 + 1;
    goto LABEL_35;
  }
  if ( v7 == v12[2] )
  {
    v16 = v12 + 2;
    goto LABEL_35;
  }
  v15 = &v12[4 * ((8 * v11) >> 5)];
  v16 = v12 + 3;
  if ( v7 != v12[3] )
  {
    while ( 1 )
    {
      v16 = v12 + 4;
      if ( v15 == v12 + 4 )
        break;
      if ( v7 == v12[4] )
        goto LABEL_35;
      if ( v7 == v12[5] )
      {
        v16 = v12 + 5;
        goto LABEL_35;
      }
      if ( v7 == v12[6] )
      {
        v16 = v12 + 6;
        goto LABEL_35;
      }
      if ( v7 == v12[7] )
      {
        v16 = v12 + 7;
        goto LABEL_35;
      }
      v12 += 4;
    }
    v14 = (v13 - (__int64)v16) >> 3;
LABEL_16:
    if ( v14 != 2 )
    {
      if ( v14 != 3 )
      {
        if ( v14 != 1 )
          goto LABEL_19;
        goto LABEL_46;
      }
      if ( v7 == *v16 )
        goto LABEL_35;
      ++v16;
    }
    if ( v7 == *v16 )
      goto LABEL_35;
    ++v16;
LABEL_46:
    if ( v7 != *v16 )
      goto LABEL_19;
  }
LABEL_35:
  if ( (_QWORD *)v13 != v16 )
    return;
LABEL_19:
  v17 = *(unsigned int *)(a1 + 44);
  v18 = v11 + 1;
  if ( v11 + 1 > v17 )
  {
    v43 = v7;
    sub_2237220(a1 + 32, a1 + 48, v18, 8);
    v17 = *(unsigned int *)(a1 + 40);
    v18 = *(_QWORD *)(a1 + 32);
    v7 = v43;
    v13 = v18 + 8 * v17;
  }
  *(_QWORD *)v13 = v7;
  v19 = (unsigned int)(*(_DWORD *)(a1 + 40) + 1);
  *(_DWORD *)(a1 + 40) = v19;
  if ( (unsigned int)v19 > 4 )
  {
    v20 = *(__int64 **)(a1 + 32);
    v21 = &v20[v19];
    while ( 1 )
    {
      v26 = *(unsigned int *)(a1 + 24);
      if ( !(_DWORD)v26 )
        break;
      v17 = *v20;
      v22 = *(_QWORD *)(a1 + 8);
      v23 = (v26 - 1) & (((unsigned int)*v20 >> 9) ^ ((unsigned int)*v20 >> 4));
      v24 = (unsigned __int64 *)(v22 + 8LL * v23);
      v25 = *v24;
      if ( *v20 != *v24 )
      {
        v39 = 1;
        v40 = nullptr;
        if ( v25 != -4096 )
        {
          while ( 1 )
          {
            if ( !v40 && v25 == -8192 )
              v40 = v24;
            v23 = (v26 - 1) & (v39 + v23);
            v24 = (unsigned __int64 *)(v22 + 8LL * v23);
            v25 = *v24;
            if ( v17 == *v24 )
              goto LABEL_24;
            if ( v25 == -4096 )
            {
              if ( v40 )
                v24 = v40;
              break;
            }
            ++v39;
          }
        }
        v41 = *(_DWORD *)(a1 + 16);
        v13 = (unsigned int)(3 * v26);
        v45[0].m128_u64[0] = (unsigned __int64)v24;
        v18 = (unsigned int)(v41 + 1);
        v9 = (unsigned int)(4 * v18);
        if ( (unsigned int)v9 < (unsigned int)v13 )
        {
          v13 = (unsigned int)(v26 - *(_DWORD *)(a1 + 20) - v18);
          v9 = (unsigned int)v26 >> 3;
          if ( (unsigned int)v13 <= (unsigned int)v9 )
          {
            v27 = v26;
LABEL_28:
            sub_18AD2F0(a1 + 8, v27, v18, v17, v13, v9);
            sub_1898490((__int64 *)(a1 + 8), v20, v45);
            v17 = *v20;
            v22 = *(_QWORD *)(a1 + 8);
            v26 = *(unsigned int *)(a1 + 24);
            LODWORD(v18) = *(_DWORD *)(a1 + 16) + 1;
            v24 = (unsigned __int64 *)v45[0].m128_u64[0];
          }
          v28 = *v24 == -4096;
          *(_DWORD *)(a1 + 16) = v18;
          if ( !v28 )
            --*(_DWORD *)(a1 + 20);
          *v24 = v17;
          goto LABEL_24;
        }
LABEL_27:
        v27 = 2 * v26;
        goto LABEL_28;
      }
LABEL_24:
      sub_1898D60(v45, v24, (_QWORD *)(v22 + 8 * v26), a1 + 8, 1);
      if ( v21 == ++v20 )
        return;
    }
    v45[0].m128_u64[0] = 0;
    goto LABEL_27;
  }
}
