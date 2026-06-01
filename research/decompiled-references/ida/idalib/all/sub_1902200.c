__int64 __fastcall sub_1902200(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v8; // eax
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r10
  unsigned int v14; // edx
  __int64 v16; // rdx
  __int64 v17; // rdi
  unsigned int v18; // ecx
  __int64 *v19; // rsi
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rbp
  __int64 v23; // rax
  int v24; // r12d
  __int64 *v25; // r11
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rbp
  __int64 *v32; // rbp
  __int64 *v33; // r13
  __int64 v34; // rdi
  unsigned int v35; // edx
  __int64 *v36; // rsi
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // r10
  unsigned int v40; // r9d
  __int64 v41; // r8
  int v42; // r10d
  __int64 *v43; // r11
  __int64 v44; // r8
  __int64 v45; // r9
  unsigned int v46; // r9d
  int v47; // ecx
  __int64 *v48; // r12
  unsigned int v49; // r9d
  unsigned int v50; // r9d
  int v51; // r8d
  __int64 *v52; // r14
  int v53; // r12d
  __int64 *v54; // r11
  int v55; // r8d
  __m128 v56[4]; // [rsp+0h] [rbp-48h] BYREF

  v8 = *(_DWORD *)(a1 + 8);
  if ( v8 )
  {
    v16 = *(unsigned int *)(a1 + 16);
    if ( !(_DWORD)v16 )
      goto LABEL_33;
    a5 = *(_QWORD *)a1;
    v17 = *a2;
    v18 = (v16 - 1) & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4));
    v19 = (__int64 *)(a5 + 8LL * v18);
    v20 = *v19;
    if ( v17 == *v19 )
    {
LABEL_6:
      sub_18CD140(v56, v19, (_QWORD *)(a5 + 8 * v16), a1, 1);
      return 0;
    }
    v24 = 1;
    v25 = nullptr;
    if ( v20 != -4096 )
    {
      while ( 1 )
      {
        if ( v20 == -8192 && !v25 )
          v25 = v19;
        v18 = (v16 - 1) & (v24 + v18);
        v19 = (__int64 *)(a5 + 8LL * v18);
        v20 = *v19;
        if ( v17 == *v19 )
          goto LABEL_6;
        if ( v20 == -4096 )
          break;
        ++v24;
      }
      if ( v25 )
        v19 = v25;
    }
    v26 = v8 + 1;
    a4 = (unsigned int)(3 * v16);
    a6 = (unsigned int)(4 * v26);
    if ( (unsigned int)a6 < (unsigned int)a4 )
    {
      v27 = (unsigned int)(v16 - *(_DWORD *)(a1 + 12) - v26);
      v28 = (unsigned int)v16 >> 3;
      if ( (unsigned int)v27 > (unsigned int)v28 )
      {
        v29 = *v19;
        goto LABEL_15;
      }
      sub_1901FA0(a1, v16, v16, v27, a5, v28);
      v16 = *(unsigned int *)(a1 + 16);
      if ( (_DWORD)v16 )
      {
        v17 = *a2;
        a5 = *(_QWORD *)a1;
        v49 = (v16 - 1) & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4));
        v19 = (__int64 *)(*(_QWORD *)a1 + 8LL * v49);
        v29 = *v19;
        v26 = *(_DWORD *)(a1 + 8) + 1;
        if ( *v19 == *a2 )
        {
LABEL_40:
          v29 = v17;
LABEL_15:
          *(_DWORD *)(a1 + 8) = v26;
          if ( v29 != -4096 )
            --*(_DWORD *)(a1 + 12);
          goto LABEL_17;
        }
        v53 = 1;
        v54 = nullptr;
        if ( v29 != -4096 )
        {
          while ( 1 )
          {
            if ( v29 == -8192 && !v54 )
              v54 = v19;
            v49 = (v16 - 1) & (v53 + v49);
            v19 = (__int64 *)(a5 + 8LL * v49);
            v29 = *v19;
            if ( v17 == *v19 )
              goto LABEL_15;
            if ( v29 == -4096 )
            {
              if ( !v54 )
                goto LABEL_37;
              v29 = *v54;
              v19 = v54;
              goto LABEL_15;
            }
            ++v53;
          }
        }
        goto LABEL_37;
      }
    }
    else
    {
LABEL_33:
      sub_1901FA0(a1, 2 * v16, v16, a4, a5, a6);
      v16 = *(unsigned int *)(a1 + 16);
      if ( (_DWORD)v16 )
      {
        a5 = *(_QWORD *)a1;
        v46 = (v16 - 1) & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4));
        v19 = (__int64 *)(*(_QWORD *)a1 + 8LL * v46);
        v17 = *v19;
        v26 = *(_DWORD *)(a1 + 8) + 1;
        v29 = *v19;
        if ( *a2 == *v19 )
          goto LABEL_15;
        v47 = 1;
        v48 = nullptr;
        if ( v17 != -4096 )
        {
          while ( 1 )
          {
            if ( !v48 && v17 == -8192 )
              v48 = v19;
            v46 = (v16 - 1) & (v47 + v46);
            v19 = (__int64 *)(a5 + 8LL * v46);
            v17 = *v19;
            if ( *a2 == *v19 )
              goto LABEL_40;
            if ( v17 == -4096 )
            {
              if ( !v48 )
                break;
              v29 = *v48;
              v17 = *a2;
              v19 = v48;
              goto LABEL_15;
            }
            ++v47;
          }
        }
        v17 = *a2;
LABEL_37:
        *(_DWORD *)(a1 + 8) = v26;
LABEL_17:
        *v19 = v17;
        sub_18CD140(v56, v19, (_QWORD *)(a5 + 8 * v16), a1, 1);
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
    }
LABEL_96:
    ++*(_DWORD *)(a1 + 8);
    BUG();
  }
  v9 = sub_18BC1F0(*(_QWORD **)(a1 + 24), *(_QWORD *)(a1 + 24) + 8LL * *(unsigned int *)(a1 + 32), a2);
  v14 = 0;
  if ( (_QWORD *)v12 == v9 )
  {
    v21 = v13 + 1;
    v22 = *a2;
    if ( v13 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 36) )
    {
      sub_2237220(a1 + 24, a1 + 40, v21, 8);
      v21 = *(unsigned int *)(a1 + 32);
      v12 = *(_QWORD *)(a1 + 24) + 8 * v21;
    }
    *(_QWORD *)v12 = v22;
    v23 = (unsigned int)(*(_DWORD *)(a1 + 32) + 1);
    *(_DWORD *)(a1 + 32) = v23;
    if ( (unsigned int)v23 <= 4 )
      return 1;
    v32 = *(__int64 **)(a1 + 24);
    v33 = &v32[v23];
    while ( 1 )
    {
      v38 = *(unsigned int *)(a1 + 16);
      if ( !(_DWORD)v38 )
        goto LABEL_24;
      v10 = *v32;
      v34 = *(_QWORD *)a1;
      v35 = (v38 - 1) & (((unsigned int)*v32 >> 9) ^ ((unsigned int)*v32 >> 4));
      v36 = (__int64 *)(*(_QWORD *)a1 + 8LL * v35);
      v37 = *v36;
      if ( *v32 != *v36 )
        break;
LABEL_22:
      sub_18CD140(v56, v36, (_QWORD *)(v34 + 8 * v38), a1, 1);
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
        if ( v10 == *v36 )
          goto LABEL_22;
        if ( v37 == -4096 )
          break;
        ++v42;
      }
      if ( v43 )
        v36 = v43;
    }
    v11 = (unsigned int)(3 * v38);
    v21 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
    v12 = (unsigned int)(4 * v21);
    if ( (unsigned int)v12 >= (unsigned int)v11 )
    {
LABEL_24:
      sub_1901FA0(a1, 2 * v38, v21, v10, v11, v12);
      v38 = *(unsigned int *)(a1 + 16);
      if ( !(_DWORD)v38 )
        goto LABEL_96;
      v39 = *v32;
      v34 = *(_QWORD *)a1;
      v40 = (v38 - 1) & (((unsigned int)*v32 >> 9) ^ ((unsigned int)*v32 >> 4));
      v36 = (__int64 *)(*(_QWORD *)a1 + 8LL * v40);
      v10 = *v36;
      LODWORD(v21) = *(_DWORD *)(a1 + 8) + 1;
      v41 = *v36;
      if ( *v32 == *v36 )
        goto LABEL_26;
      v55 = 1;
      v52 = nullptr;
      if ( v10 == -4096 )
        goto LABEL_44;
      while ( 1 )
      {
        if ( !v52 && v10 == -8192 )
          v52 = v36;
        v40 = (v38 - 1) & (v55 + v40);
        v36 = (__int64 *)(v34 + 8LL * v40);
        v10 = *v36;
        if ( v39 == *v36 )
          break;
        if ( v10 == -4096 )
          goto LABEL_83;
        ++v55;
      }
    }
    else
    {
      v44 = (unsigned int)(v38 - *(_DWORD *)(a1 + 12) - v21);
      v45 = (unsigned int)v38 >> 3;
      if ( (unsigned int)v44 > (unsigned int)v45 )
      {
        v41 = *v36;
        goto LABEL_26;
      }
      sub_1901FA0(a1, v38, v21, v10, v44, v45);
      v38 = *(unsigned int *)(a1 + 16);
      if ( !(_DWORD)v38 )
        goto LABEL_96;
      v39 = *v32;
      v34 = *(_QWORD *)a1;
      v50 = (v38 - 1) & (((unsigned int)*v32 >> 9) ^ ((unsigned int)*v32 >> 4));
      v36 = (__int64 *)(*(_QWORD *)a1 + 8LL * v50);
      v10 = *v36;
      LODWORD(v21) = *(_DWORD *)(a1 + 8) + 1;
      v41 = *v36;
      if ( *v32 == *v36 )
        goto LABEL_26;
      v51 = 1;
      v52 = nullptr;
      if ( v10 == -4096 )
      {
LABEL_44:
        v10 = v39;
        *(_DWORD *)(a1 + 8) = v21;
LABEL_28:
        *v36 = v10;
        goto LABEL_22;
      }
      while ( 1 )
      {
        if ( !v52 && v10 == -8192 )
          v52 = v36;
        v50 = (v38 - 1) & (v51 + v50);
        v36 = (__int64 *)(v34 + 8LL * v50);
        v10 = *v36;
        if ( v39 == *v36 )
          break;
        if ( v10 == -4096 )
        {
LABEL_83:
          if ( !v52 )
            goto LABEL_44;
          v41 = *v52;
          v10 = v39;
          v36 = v52;
          goto LABEL_26;
        }
        ++v51;
      }
    }
    v41 = v10;
LABEL_26:
    *(_DWORD *)(a1 + 8) = v21;
    if ( v41 != -4096 )
      --*(_DWORD *)(a1 + 12);
    goto LABEL_28;
  }
  return v14;
}
