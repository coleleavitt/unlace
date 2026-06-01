unsigned __int64 __fastcall sub_76DA60(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rdx
  unsigned __int64 v9; // rax
  _DWORD *v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // r14
  __int64 v14; // rdx
  unsigned __int64 v15; // rax
  __int64 v16; // rdi
  unsigned __int64 result; // rax
  __int64 v18; // rbx
  unsigned __int64 v19; // r13
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // r15
  __int64 v24; // r14
  __int64 v25; // rdi
  unsigned __int64 v26; // rax
  _DWORD *v27; // rdi
  _DWORD *v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  _DWORD *v31; // rdx
  _QWORD *v32; // rdx
  __int64 v33; // r14
  __int64 v34; // rcx
  _QWORD *v35; // rdx
  __int64 v36; // r15
  __int64 v37; // rcx
  _QWORD *v38; // rdi
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 *v41; // rax
  __int64 v42; // rcx
  __int64 *v43; // rdx
  __int64 v44; // rax
  int v45; // edx
  __int64 v46; // rdi
  int v47; // eax
  __int64 v48; // rdi
  int v49; // eax
  __int64 v50; // rdi
  _QWORD *v51; // rdx
  __int64 v52; // r15
  __int64 v53; // rcx
  unsigned __int64 v54; // rax
  __int64 v55; // [rsp+8h] [rbp-40h]

  v6 = *(_QWORD *)(*(_QWORD *)(sub_AB4240(a2, a1) + 72) + 48LL);
  if ( (v6 & 4) == 0 )
    goto LABEL_2;
  v6 &= 0xFFFFFFFFFFFFFFF8LL;
  if ( !*(_BYTE *)(a3 + 20) )
  {
LABEL_76:
    sub_25D5540(a3, v6);
    goto LABEL_2;
  }
  v41 = *(__int64 **)a3;
  v42 = *(unsigned int *)(a3 + 12);
  v43 = (__int64 *)(*(_QWORD *)a3 + 8 * v42);
  if ( *(__int64 **)a3 == v43 )
  {
LABEL_63:
    if ( (unsigned int)v42 < *(_DWORD *)(a3 + 8) )
    {
      *(_DWORD *)(a3 + 12) = v42 + 1;
      *v43 = v6;
      goto LABEL_2;
    }
    goto LABEL_76;
  }
  while ( v6 != *v41 )
  {
    if ( v43 == ++v41 )
      goto LABEL_63;
  }
LABEL_2:
  v7 = *(_QWORD *)(a1 + 104);
  v8 = *(_QWORD *)(v7 + 96);
  v9 = v8 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v8 & 1) != 0 )
  {
    if ( !v9 )
      goto LABEL_6;
  }
  else
  {
    if ( v9 <= 3 || (v8 & 2) == 0 )
      goto LABEL_6;
    v32 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFCLL);
    v33 = v32[2275];
    if ( !v33 )
    {
      *(_QWORD *)(v7 + 96) = v7 & 0xFFFFFFFFFFFFFFFALL | 1;
      goto LABEL_6;
    }
    v34 = v32[274];
    v32[284] += 24LL;
    v9 = (v34 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v6 = v9 + 24;
    if ( v32[275] >= v9 + 24 && v34 )
    {
      v32[274] = v6;
    }
    else
    {
      v6 = 24;
      v9 = sub_76D810((__int64)(v32 + 274), 24, 3);
    }
    *(_QWORD *)v9 = v33;
    *(_DWORD *)(v9 + 8) = 0;
    v8 = v9 | 5;
    *(_QWORD *)(v9 + 16) = v7;
    *(_QWORD *)(v7 + 96) = v9 | 5;
    LOBYTE(v9) = v9 & 0xFA | 4;
  }
  if ( (v9 & 4) != 0 )
  {
    v10 = (_DWORD *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v10 )
    {
      v48 = *(_QWORD *)v10;
      v49 = *(_DWORD *)(*(_QWORD *)v10 + 12LL);
      if ( v10[2] != v49 )
      {
        v10[2] = v49;
        v6 = v7;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v48 + 144LL))(v48, v7);
      }
    }
  }
LABEL_6:
  v11 = *(_QWORD *)(a1 + 128);
  if ( (*(_BYTE *)(v11 + 24) & 1) != 0 )
    v12 = sub_7A2E20(v11, v6);
  else
    v12 = *(_QWORD *)(v11 + 24);
  v13 = *(_QWORD *)(a1 + 104);
  v14 = *(_QWORD *)(v13 + 96);
  v15 = v14 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v14 & 1) != 0 )
  {
    if ( v15 )
      goto LABEL_27;
LABEL_49:
    v29 = *(_QWORD *)(a1 + 128);
    result = 3LL * *(unsigned int *)(v29 + 16);
    v18 = v12 + 24LL * *(unsigned int *)(v29 + 16);
    goto LABEL_50;
  }
  if ( v15 <= 3 )
  {
    if ( v15 )
      goto LABEL_30;
    goto LABEL_49;
  }
  if ( (v14 & 2) == 0 )
  {
    v16 = *(_QWORD *)(a1 + 128);
    result = 3LL * *(unsigned int *)(v16 + 16);
    v18 = v12 + 24LL * *(unsigned int *)(v16 + 16);
    goto LABEL_12;
  }
  v35 = (_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFCLL);
  v36 = v35[2275];
  if ( !v36 )
  {
    *(_QWORD *)(v13 + 96) = v13 & 0xFFFFFFFFFFFFFFFALL | 1;
    v13 = *(_QWORD *)(a1 + 104);
    goto LABEL_30;
  }
  v37 = v35[274];
  v35[284] += 24LL;
  v15 = (v37 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v6 = v15 + 24;
  if ( v35[275] >= v15 + 24 && v37 )
  {
    v35[274] = v6;
  }
  else
  {
    v6 = 24;
    v15 = sub_76D810((__int64)(v35 + 274), 24, 3);
  }
  *(_QWORD *)v15 = v36;
  *(_DWORD *)(v15 + 8) = 0;
  v14 = v15 | 5;
  *(_QWORD *)(v15 + 16) = v13;
  *(_QWORD *)(v13 + 96) = v15 | 5;
  LOBYTE(v15) = v15 & 0xFA | 4;
LABEL_27:
  if ( (v15 & 4) != 0 )
  {
    v28 = (_DWORD *)(v14 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v28 )
    {
      v46 = *(_QWORD *)v28;
      v47 = *(_DWORD *)(*(_QWORD *)v28 + 12LL);
      if ( v28[2] != v47 )
      {
        v28[2] = v47;
        v6 = v13;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v46 + 144LL))(v46, v13);
      }
    }
  }
  v13 = *(_QWORD *)(a1 + 104);
LABEL_30:
  v29 = *(_QWORD *)(a1 + 128);
  v30 = *(_QWORD *)(v13 + 96);
  v16 = v29;
  v18 = v12 + 24LL * *(unsigned int *)(v29 + 16);
  result = v30 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v30 & 1) != 0 )
  {
    if ( result )
    {
LABEL_32:
      if ( (result & 4) != 0 )
      {
        v31 = (_DWORD *)(v30 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v31 )
        {
          v50 = *(_QWORD *)v31;
          result = *(unsigned int *)(*(_QWORD *)v31 + 12LL);
          if ( v31[2] != (_DWORD)result )
          {
            v31[2] = result;
            v6 = v13;
            result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v50 + 144LL))(v50, v13);
          }
        }
        v16 = *(_QWORD *)(a1 + 128);
        if ( (*(_BYTE *)(v16 + 24) & 1) == 0 )
          goto LABEL_13;
        goto LABEL_35;
      }
      v29 = *(_QWORD *)(a1 + 128);
    }
LABEL_50:
    v16 = v29;
    goto LABEL_12;
  }
  if ( result <= 3 )
    goto LABEL_50;
  if ( (v30 & 2) != 0 )
  {
    v51 = (_QWORD *)(v30 & 0xFFFFFFFFFFFFFFFCLL);
    v52 = v51[2275];
    if ( v52 )
    {
      v53 = v51[274];
      v51[284] += 24LL;
      v54 = (v53 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      v6 = v54 + 24;
      if ( v51[275] >= v54 + 24 && v53 )
      {
        v51[274] = v6;
      }
      else
      {
        v6 = 24;
        v54 = sub_76D810((__int64)(v51 + 274), 24, 3);
      }
      *(_QWORD *)v54 = v52;
      *(_DWORD *)(v54 + 8) = 0;
      v30 = v54 | 5;
      *(_QWORD *)(v54 + 16) = v13;
      *(_QWORD *)(v13 + 96) = v54 | 5;
      result = v54 & 0xFFFFFFFFFFFFFFFALL | 4;
      goto LABEL_32;
    }
    result = v13 & 0xFFFFFFFFFFFFFFFALL | 1;
    *(_QWORD *)(v13 + 96) = result;
    v16 = *(_QWORD *)(a1 + 128);
  }
LABEL_12:
  if ( (*(_BYTE *)(v16 + 24) & 1) == 0 )
  {
LABEL_13:
    v19 = *(_QWORD *)(v16 + 24);
    goto LABEL_14;
  }
LABEL_35:
  result = sub_7A2E20(v16, v6);
  v19 = result;
LABEL_14:
  while ( v19 != v18 )
  {
    v20 = *(_QWORD *)(**(_QWORD **)(v19 + 16) & 0xFFFFFFFFFFFFFFF0LL);
    v21 = *(_QWORD *)(v20 + 8);
    if ( (v21 & 7) != 0 || (v21 & 8) != 0 )
      v20 = sub_B0CF30(**(_QWORD **)(v19 + 16), v6);
    v22 = sub_B0E890(*(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFF0LL));
    v23 = *(_QWORD *)(v22 + 104);
    v24 = v22;
    v25 = *(_QWORD *)(v23 + 96);
    v26 = v25 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v25 & 1) != 0 )
    {
      if ( v26 )
        goto LABEL_20;
    }
    else if ( v26 > 3 && (v25 & 2) != 0 )
    {
      v38 = (_QWORD *)(v25 & 0xFFFFFFFFFFFFFFFCLL);
      v39 = v38[2275];
      if ( v39 )
      {
        v40 = v38[274];
        v38[284] += 24LL;
        v26 = (v40 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        v6 = v26 + 24;
        if ( v38[275] >= v26 + 24 && v40 )
        {
          v38[274] = v6;
        }
        else
        {
          v6 = 24;
          v55 = v39;
          v26 = sub_76D810((__int64)(v38 + 274), 24, 3);
          v39 = v55;
        }
        *(_QWORD *)v26 = v39;
        *(_DWORD *)(v26 + 8) = 0;
        v25 = v26 | 5;
        *(_QWORD *)(v26 + 16) = v23;
        *(_QWORD *)(v23 + 96) = v26 | 5;
        LOBYTE(v26) = v26 & 0xFA | 4;
LABEL_20:
        if ( (v26 & 4) != 0 )
        {
          v27 = (_DWORD *)(v25 & 0xFFFFFFFFFFFFFFF8LL);
          if ( v27 )
          {
            v44 = *(_QWORD *)v27;
            v45 = *(_DWORD *)(*(_QWORD *)v27 + 12LL);
            if ( v27[2] != v45 )
            {
              v27[2] = v45;
              v6 = v23;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v44 + 144LL))(v44, v23);
            }
          }
        }
        goto LABEL_22;
      }
      *(_QWORD *)(v23 + 96) = v23 & 0xFFFFFFFFFFFFFFFALL | 1;
    }
LABEL_22:
    result = *(unsigned int *)(*(_QWORD *)(v24 + 128) + 20LL);
    if ( (_DWORD)result )
    {
      v6 = a2;
      result = sub_76DA60(v24, a2, a3);
    }
    v19 += 24LL;
  }
  return result;
}

