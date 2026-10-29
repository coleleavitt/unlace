char __fastcall sub_18CAF60(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char result; // al
  __int64 v7; // rdx
  __int64 v8; // r12
  __int64 v9; // rbx
  unsigned int v10; // esi
  unsigned int v11; // edx
  __int64 *v12; // rax
  unsigned __int64 *v13; // r13
  __int64 v14; // rax
  unsigned __int64 *v15; // rdx
  unsigned __int64 v16; // r12
  __int64 v17; // rax
  int v18; // eax
  unsigned __int64 v19; // r15
  __int64 v20; // r14
  unsigned __int8 v21; // bl
  __int64 v22; // r15
  __int64 v23; // rax
  __int64 v24; // rdx
  int v25; // eax
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // r14
  unsigned __int64 v28; // rdx
  __int64 *v29; // r13
  int v30; // eax
  int v31; // eax
  bool v32; // zf
  __int64 v33; // rdx
  unsigned __int64 v34; // rax
  __int64 v35; // rdx
  unsigned __int64 v36; // rax
  __int64 v37; // rax
  unsigned __int64 v38; // [rsp+0h] [rbp-50h]
  __int64 v39; // [rsp+8h] [rbp-48h] BYREF
  __int64 *v40; // [rsp+10h] [rbp-40h] BYREF

  result = 0;
  if ( (*(_BYTE *)(a2 + 3) & 2) == 0 )
    return result;
  result = 1;
  v7 = a1[7];
  if ( (*(_BYTE *)(v7 + 21) & 2) == 0 )
    return result;
  v8 = a1[213];
  v9 = a2;
  v39 = a2;
  v10 = *(_DWORD *)(v8 + 16);
  if ( !v10 )
  {
    v40 = nullptr;
    goto LABEL_63;
  }
  v11 = (v10 - 1) & (((unsigned int)v9 >> 9) ^ ((unsigned int)v9 >> 4));
  v12 = (__int64 *)(*(_QWORD *)v8 + 16LL * v11);
  a5 = *v12;
  if ( v9 != *v12 )
  {
    a6 = 1;
    v29 = nullptr;
    if ( a5 != -4096 )
    {
      while ( 1 )
      {
        if ( !v29 && a5 == -8192 )
          v29 = v12;
        v11 = (v10 - 1) & (a6 + v11);
        v12 = (__int64 *)(*(_QWORD *)v8 + 16LL * v11);
        a5 = *v12;
        if ( v9 == *v12 )
          goto LABEL_7;
        if ( a5 == -4096 )
        {
          if ( v29 )
            goto LABEL_44;
          break;
        }
        a6 = (unsigned int)(a6 + 1);
      }
    }
    v29 = v12;
LABEL_44:
    v30 = *(_DWORD *)(v8 + 8);
    v7 = 3 * v10;
    v40 = v29;
    v31 = v30 + 1;
    a4 = (unsigned int)(4 * v31);
    if ( (unsigned int)a4 < (unsigned int)v7 )
    {
      v7 = v10 - *(_DWORD *)(v8 + 12) - v31;
      a4 = v10 >> 3;
      if ( (unsigned int)v7 > (unsigned int)a4 )
      {
LABEL_46:
        v32 = *v29 == -4096;
        *(_DWORD *)(v8 + 8) = v31;
        if ( !v32 )
          --*(_DWORD *)(v8 + 12);
        *v29 = v9;
        v16 = 0;
        v13 = (unsigned __int64 *)(v29 + 1);
        v9 = v39;
        *v13 = 0;
        goto LABEL_14;
      }
LABEL_64:
      sub_12F12D0(v8, v10, v7, a4, a5, a6);
      sub_12EC520((__int64 *)v8, &v39, &v40);
      v9 = v39;
      v29 = v40;
      v31 = *(_DWORD *)(v8 + 8) + 1;
      goto LABEL_46;
    }
LABEL_63:
    v10 *= 2;
    goto LABEL_64;
  }
LABEL_7:
  v13 = (unsigned __int64 *)(v12 + 1);
  v14 = v12[1];
  v15 = (unsigned __int64 *)(v14 & 0xFFFFFFFFFFFFFFF8LL);
  v16 = v14 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v14 && (v14 & 4) != 0 )
  {
    v16 = 0;
    if ( !v15 )
      goto LABEL_14;
    v16 = *v15;
  }
  while ( v16 && (*(_BYTE *)(v16 + 12) & 3) == 2 )
    v16 = *(_QWORD *)v16;
LABEL_14:
  if ( (*(_BYTE *)(v9 + 4) & 0x10) != 0 )
  {
    sub_145CD30((__int64)a1);
    if ( (*(_BYTE *)(v9 + 3) & 2) == 0 )
    {
LABEL_59:
      v21 = 0;
      goto LABEL_25;
    }
  }
  else if ( (*(_BYTE *)(v9 + 3) & 2) == 0 )
  {
    v21 = 0;
LABEL_61:
    v24 = 0;
    goto LABEL_38;
  }
  v17 = a1[7];
  if ( (*(_BYTE *)(v17 + 21) & 2) == 0 && *(char *)(v17 + 22) >= 0 )
    goto LABEL_59;
  v18 = *(_DWORD *)(a1[213] + 48LL);
  if ( !v18 )
    goto LABEL_59;
  v19 = *v13 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !*v13 || (*v13 & 4) == 0 || (v20 = *v13 & 0xFFFFFFFFFFFFFFF8LL, !v19) )
  {
    v35 = a1[16];
    a1[26] += 32LL;
    v36 = (v35 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    if ( a1[17] >= v36 + 32 && v35 )
    {
      a1[16] = v36 + 32;
      v20 = (v35 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v20 = sub_986170((__int64)(a1 + 16), 32, 32, 4, a5, a6);
      v36 = v20 & 0xFFFFFFFFFFFFFFFBLL;
    }
    *(_QWORD *)(v20 + 8) = 0;
    *(_DWORD *)(v20 + 16) = 0;
    *(_QWORD *)(v20 + 24) = 0;
    *(_QWORD *)v20 = v19;
    *(_BYTE *)(v20 + 20) = 0;
    *v13 = v36 | 4;
    v18 = *(_DWORD *)(a1[213] + 48LL);
  }
  if ( *(_DWORD *)(v20 + 16) != v18 )
    sub_14476F0((__int64)a1, v9, v20);
  v21 = *(_BYTE *)(v20 + 20);
LABEL_25:
  v22 = v39;
  if ( (*(_BYTE *)(v39 + 4) & 0x10) != 0 )
    sub_145CD30((__int64)a1);
  if ( (*(_BYTE *)(v22 + 3) & 2) == 0 )
    goto LABEL_61;
  v23 = a1[7];
  if ( (*(_BYTE *)(v23 + 21) & 2) != 0 || (v24 = 0, *(char *)(v23 + 22) < 0) )
  {
    v25 = *(_DWORD *)(a1[213] + 48LL);
    if ( v25 )
    {
      v26 = *v13 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !*v13 || (*v13 & 4) == 0 || (v27 = *v13 & 0xFFFFFFFFFFFFFFF8LL, !v26) )
      {
        v33 = a1[16];
        a1[26] += 32LL;
        v34 = (v33 + 15) & 0xFFFFFFFFFFFFFFF0LL;
        if ( a1[17] >= v34 + 32 && v33 )
        {
          a1[16] = v34 + 32;
          v27 = (v33 + 15) & 0xFFFFFFFFFFFFFFF0LL;
        }
        else
        {
          v38 = v26;
          v37 = sub_986170((__int64)(a1 + 16), 32, 32, 4, v26, a6);
          v26 = v38;
          v27 = v37;
          v34 = v37 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)(v27 + 8) = 0;
        *(_DWORD *)(v27 + 16) = 0;
        *(_QWORD *)(v27 + 24) = 0;
        *(_QWORD *)v27 = v26;
        *(_BYTE *)(v27 + 20) = 0;
        *v13 = v34 | 4;
        v25 = *(_DWORD *)(a1[213] + 48LL);
      }
      if ( *(_DWORD *)(v27 + 16) != v25 )
        sub_14476F0((__int64)a1, v22, v27);
      v28 = *(_QWORD *)(v27 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v27 + 8) & 4) != 0 )
        v24 = *(unsigned int *)(v28 + 8);
      else
        v24 = v28 != 0;
      goto LABEL_38;
    }
    goto LABEL_61;
  }
LABEL_38:
  if ( !v16 )
    return v24 != 0;
  if ( (*(_BYTE *)(v16 + 12) & 3) != 0 )
    return v24 != 0;
  result = 1;
  if ( !((unsigned __int16)(4 * v21) & 0xFFF8 | v16 & 0xFFFFFFFFFFFFFFF8LL) )
    return v24 != 0;
  return result;
}
