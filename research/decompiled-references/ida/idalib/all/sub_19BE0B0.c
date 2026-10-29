__int64 __fastcall sub_19BE0B0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v8; // eax
  __int64 v9; // rdx
  __int64 *v10; // rax
  __int64 v11; // rbp
  __int64 *v12; // rdi
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 *v15; // rsi
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v19; // rdx
  __int64 v20; // rdi
  unsigned int v21; // ecx
  __int64 *v22; // rsi
  __int64 v23; // r9
  int v24; // r12d
  __int64 *v25; // r11
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // r9
  bool v29; // zf
  __int64 v30; // rax
  __int64 v31; // rbp
  __int64 *v32; // rbp
  __int64 *v33; // r13
  __int64 v34; // rdi
  unsigned int v35; // edx
  __int64 *v36; // rsi
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // r9
  unsigned int v40; // r10d
  __int64 v41; // r8
  int v42; // r10d
  __int64 *v43; // r11
  __int64 v44; // r8
  __int64 v45; // r9
  unsigned int v46; // r10d
  int v47; // r8d
  __int64 *v48; // r14
  int v49; // r8d
  __m128 v50[4]; // [rsp+0h] [rbp-48h] BYREF

  v8 = *(_DWORD *)(a1 + 8);
  if ( !v8 )
  {
    v9 = *(unsigned int *)(a1 + 32);
    v10 = *(__int64 **)(a1 + 24);
    v11 = *a2;
    v12 = &v10[v9];
    v13 = (8 * v9) >> 3;
    v14 = (8 * v9) >> 5;
    if ( v14 )
    {
      if ( *v10 == v11 )
      {
        v15 = v10;
        goto LABEL_23;
      }
      v15 = v10 + 1;
      if ( v10[1] == v11
        || (v15 = v10 + 2, v10[2] == v11)
        || (v15 = v10 + 3, v14 = (__int64)&v10[4 * v14], v10[3] == v11) )
      {
LABEL_23:
        if ( v12 != v15 )
          return 0;
        goto LABEL_18;
      }
      while ( 1 )
      {
        v15 = v10 + 4;
        if ( (__int64 *)v14 == v10 + 4 )
          break;
        if ( v10[4] == v11 )
          goto LABEL_23;
        if ( v10[5] == v11 )
        {
          v15 = v10 + 5;
          goto LABEL_23;
        }
        if ( v10[6] == v11 )
        {
          v15 = v10 + 6;
          goto LABEL_23;
        }
        if ( v10[7] == v11 )
        {
          v15 = v10 + 7;
          goto LABEL_23;
        }
        v10 += 4;
      }
      v13 = v12 - v15;
    }
    else
    {
      v15 = v10;
    }
    if ( v13 != 2 )
    {
      if ( v13 != 3 )
      {
        if ( v13 != 1 )
          goto LABEL_18;
        goto LABEL_34;
      }
      if ( *v15 == v11 )
        goto LABEL_23;
      ++v15;
    }
    if ( *v15 == v11 )
      goto LABEL_23;
    ++v15;
LABEL_34:
    if ( *v15 == v11 )
      goto LABEL_23;
LABEL_18:
    v16 = v9 + 1;
    if ( v16 > *(unsigned int *)(a1 + 36) )
    {
      sub_2237220(a1 + 24, a1 + 40, v16, 8);
      v16 = *(unsigned int *)(a1 + 32);
      v12 = (__int64 *)(*(_QWORD *)(a1 + 24) + 8 * v16);
    }
    *v12 = v11;
    v17 = (unsigned int)(*(_DWORD *)(a1 + 32) + 1);
    *(_DWORD *)(a1 + 32) = v17;
    if ( (unsigned int)v17 <= 1 )
      return 1;
    v32 = *(__int64 **)(a1 + 24);
    v33 = &v32[v17];
    while ( 1 )
    {
      v38 = *(unsigned int *)(a1 + 16);
      if ( !(_DWORD)v38 )
        goto LABEL_48;
      v14 = *v32;
      v34 = *(_QWORD *)a1;
      v35 = (v38 - 1) & (((unsigned int)*v32 >> 9) ^ ((unsigned int)*v32 >> 4));
      v36 = (__int64 *)(*(_QWORD *)a1 + 8LL * v35);
      v37 = *v36;
      if ( *v32 != *v36 )
        break;
LABEL_46:
      sub_19A7820(v50, v36, (_QWORD *)(v34 + 8 * v38), a1, 1);
      if ( v33 == ++v32 )
        return 1;
    }
    v42 = 1;
    v43 = nullptr;
    if ( v37 != -4096 )
    {
      while ( 1 )
      {
        if ( !v43 && v37 == -8192 )
          v43 = v36;
        v35 = (v38 - 1) & (v42 + v35);
        v36 = (__int64 *)(v34 + 8LL * v35);
        v37 = *v36;
        if ( v14 == *v36 )
          goto LABEL_46;
        if ( v37 == -4096 )
          break;
        ++v42;
      }
      if ( v43 )
        v36 = v43;
    }
    v13 = (unsigned int)(3 * v38);
    v16 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
    a6 = (unsigned int)(4 * v16);
    if ( (unsigned int)a6 >= (unsigned int)v13 )
    {
LABEL_48:
      sub_19BDE50(a1, 2 * v38, v16, v14, v13, a6);
      v38 = *(unsigned int *)(a1 + 16);
      if ( !(_DWORD)v38 )
        goto LABEL_101;
      v39 = *v32;
      v34 = *(_QWORD *)a1;
      v40 = (v38 - 1) & (((unsigned int)*v32 >> 9) ^ ((unsigned int)*v32 >> 4));
      v36 = (__int64 *)(*(_QWORD *)a1 + 8LL * v40);
      v14 = *v36;
      LODWORD(v16) = *(_DWORD *)(a1 + 8) + 1;
      v41 = *v36;
      if ( *v32 == *v36 )
        goto LABEL_50;
      v49 = 1;
      v48 = nullptr;
      if ( v14 == -4096 )
        goto LABEL_60;
      while ( 1 )
      {
        if ( !v48 && v14 == -8192 )
          v48 = v36;
        v40 = (v38 - 1) & (v49 + v40);
        v36 = (__int64 *)(v34 + 8LL * v40);
        v14 = *v36;
        if ( v39 == *v36 )
          break;
        if ( v14 == -4096 )
          goto LABEL_97;
        ++v49;
      }
    }
    else
    {
      v44 = (unsigned int)(v38 - *(_DWORD *)(a1 + 12) - v16);
      v45 = (unsigned int)v38 >> 3;
      if ( (unsigned int)v44 > (unsigned int)v45 )
      {
        v41 = *v36;
        goto LABEL_50;
      }
      sub_19BDE50(a1, v38, v16, v14, v44, v45);
      v38 = *(unsigned int *)(a1 + 16);
      if ( !(_DWORD)v38 )
      {
LABEL_101:
        ++*(_DWORD *)(a1 + 8);
        BUG();
      }
      v39 = *v32;
      v34 = *(_QWORD *)a1;
      v46 = (v38 - 1) & (((unsigned int)*v32 >> 9) ^ ((unsigned int)*v32 >> 4));
      v36 = (__int64 *)(*(_QWORD *)a1 + 8LL * v46);
      v14 = *v36;
      LODWORD(v16) = *(_DWORD *)(a1 + 8) + 1;
      v41 = *v36;
      if ( *v32 == *v36 )
        goto LABEL_50;
      v47 = 1;
      v48 = nullptr;
      if ( v14 == -4096 )
      {
LABEL_60:
        *(_DWORD *)(a1 + 8) = v16;
        v14 = v39;
LABEL_52:
        *v36 = v14;
        goto LABEL_46;
      }
      while ( 1 )
      {
        if ( !v48 && v14 == -8192 )
          v48 = v36;
        v46 = (v38 - 1) & (v47 + v46);
        v36 = (__int64 *)(v34 + 8LL * v46);
        v14 = *v36;
        if ( v39 == *v36 )
          break;
        if ( v14 == -4096 )
        {
LABEL_97:
          if ( !v48 )
            goto LABEL_60;
          v41 = *v48;
          v14 = v39;
          v36 = v48;
          goto LABEL_50;
        }
        ++v47;
      }
    }
    v41 = v14;
LABEL_50:
    *(_DWORD *)(a1 + 8) = v16;
    if ( v41 != -4096 )
      --*(_DWORD *)(a1 + 12);
    goto LABEL_52;
  }
  v19 = *(unsigned int *)(a1 + 16);
  if ( !(_DWORD)v19 )
  {
    v50[0].m128_u64[0] = 0;
    goto LABEL_62;
  }
  a5 = *(_QWORD *)a1;
  v20 = *a2;
  v21 = (v19 - 1) & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4));
  v22 = (__int64 *)(a5 + 8LL * v21);
  v23 = *v22;
  if ( *v22 != v20 )
  {
    v24 = 1;
    v25 = nullptr;
    if ( v23 != -4096 )
    {
      while ( 1 )
      {
        if ( v23 == -8192 && !v25 )
          v25 = v22;
        v21 = (v19 - 1) & (v24 + v21);
        v22 = (__int64 *)(a5 + 8LL * v21);
        v23 = *v22;
        if ( v20 == *v22 )
          goto LABEL_27;
        if ( v23 == -4096 )
        {
          if ( v25 )
            v22 = v25;
          break;
        }
        ++v24;
      }
    }
    v26 = v8 + 1;
    a4 = (unsigned int)(3 * v19);
    v50[0].m128_u64[0] = (unsigned __int64)v22;
    a6 = (unsigned int)(4 * v26);
    if ( (unsigned int)a6 < (unsigned int)a4 )
    {
      v27 = (unsigned int)(v19 - *(_DWORD *)(a1 + 12) - v26);
      v28 = (unsigned int)v19 >> 3;
      if ( (unsigned int)v27 > (unsigned int)v28 )
      {
LABEL_39:
        v29 = *v22 == -4096;
        *(_DWORD *)(a1 + 8) = v26;
        if ( !v29 )
          --*(_DWORD *)(a1 + 12);
        *v22 = v20;
        sub_19A7820(v50, v22, (_QWORD *)(a5 + 8 * v19), a1, 1);
        v30 = *(unsigned int *)(a1 + 32);
        v31 = *a2;
        if ( v30 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 36) )
        {
          sub_2237220(a1 + 24, a1 + 40, v30 + 1, 8);
          v30 = *(unsigned int *)(a1 + 32);
        }
        *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v30) = v31;
        ++*(_DWORD *)(a1 + 32);
        return 1;
      }
      sub_19BDE50(a1, v19, v19, v27, a5, v28);
LABEL_63:
      sub_19A7500((__int64 *)a1, a2, v50);
      v20 = *a2;
      a5 = *(_QWORD *)a1;
      v19 = *(unsigned int *)(a1 + 16);
      v26 = *(_DWORD *)(a1 + 8) + 1;
      v22 = (__int64 *)v50[0].m128_u64[0];
      goto LABEL_39;
    }
LABEL_62:
    sub_19BDE50(a1, 2 * v19, v19, a4, a5, a6);
    goto LABEL_63;
  }
LABEL_27:
  sub_19A7820(v50, v22, (_QWORD *)(a5 + 8 * v19), a1, 1);
  return 0;
}
