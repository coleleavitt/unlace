__int64 __fastcall sub_1AFA770(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall *a3)(__int64, __int64, _QWORD),
        __int64 a4,
        unsigned int a5,
        unsigned int a6)
{
  __int64 v6; // r10
  __int64 result; // rax
  __int64 v9; // rdi
  unsigned int v10; // edi
  unsigned int v11; // r10d
  __int64 v12; // rbx
  __int64 v16; // r15
  __int64 v17; // rbx
  char v18; // si
  __int64 v19; // rcx
  unsigned int v20; // eax
  __int64 v21; // r14
  __int64 v22; // rax
  char v23; // r8
  __int64 v24; // rdi
  unsigned int v25; // eax
  __int64 *v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned __int64 v29; // r15
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rdi
  int v33; // r8d
  __int64 v34; // rcx
  unsigned int v35; // edx
  int v36; // r9d
  __int64 v37; // rdx
  __int64 v38; // rsi
  int v39; // edx
  int v40; // edx
  __m128 v41[4]; // [rsp+0h] [rbp-48h] BYREF

  v6 = *(unsigned int *)(a1 + 344);
  if ( !(_DWORD)v6 )
    return 0;
  v9 = *(_QWORD *)(a1 + 336) + 6776 * v6 - 6776;
  if ( *(_QWORD *)(a1 + 328) != *(_QWORD *)(v9 + 6768) )
    return 0;
  v10 = *(_DWORD *)(v9 + 8);
  v11 = *(_DWORD *)(a1 + 27504);
  if ( v11 >= v10 )
    return 0;
  v12 = a5;
  if ( a5 >= v10 - (unsigned __int64)v11 )
    return 0;
  v16 = sub_1AEE450(a2);
  v17 = *(_QWORD *)(*(_QWORD *)(a1 + 336) + 6776LL * *(unsigned int *)(a1 + 344) - 6776) + 1688 * v12;
  v18 = *(_BYTE *)v17 & 1;
  if ( !v18 )
  {
    v32 = *(unsigned int *)(v17 + 16);
    v19 = *(_QWORD *)(v17 + 8);
    if ( (_DWORD)v32 )
    {
      v33 = v32 - 1;
      v20 = (v32 - 1) & (((unsigned int)v16 >> 4) ^ ((unsigned int)v16 >> 9));
      v21 = v19 + 40LL * v20;
      if ( v16 == *(_QWORD *)v21 )
        goto LABEL_25;
      if ( *(_QWORD *)v21 != -4096 )
        goto LABEL_38;
    }
LABEL_31:
    v37 = 40 * v32;
LABEL_32:
    v21 = v19 + v37;
    if ( v18 )
      goto LABEL_10;
LABEL_25:
    v22 = 40LL * *(unsigned int *)(v17 + 16);
    goto LABEL_11;
  }
  v19 = v17 + 8;
  v20 = ((unsigned __int8)((unsigned int)v16 >> 9) ^ (unsigned __int8)((unsigned int)v16 >> 4)) & 7;
  v21 = v17 + 8 + 40LL * (((unsigned __int8)((unsigned int)v16 >> 9) ^ (unsigned __int8)((unsigned int)v16 >> 4)) & 7);
  if ( *(_QWORD *)v21 != v16 )
  {
    v37 = 320;
    v33 = 7;
    if ( *(_QWORD *)v21 != -4096 )
    {
LABEL_38:
      v39 = 1;
      while ( 1 )
      {
        v20 = v33 & (v39 + v20);
        v21 = v19 + 40LL * v20;
        if ( v16 == *(_QWORD *)v21 )
          break;
        ++v39;
        if ( *(_QWORD *)v21 == -4096 )
        {
          if ( !v18 )
          {
            v32 = *(unsigned int *)(v17 + 16);
            goto LABEL_31;
          }
          v37 = 320;
          goto LABEL_32;
        }
      }
      if ( v18 )
        goto LABEL_10;
      goto LABEL_25;
    }
    goto LABEL_32;
  }
LABEL_10:
  v22 = 320;
LABEL_11:
  if ( v21 == v19 + v22
    || (*(_QWORD *)(v21 + 16) & 0xFFFFFFFFFFFFFFFCLL) == 0
    || (result = a3(a4, *(unsigned int *)(v21 + 8), *(unsigned __int8 *)(v21 + 32)), !(_BYTE)result)
    || (_BYTE)a6 && (result = a6, (*(_BYTE *)(v21 + 16) & 2) != 0) )
  {
    v23 = *(_BYTE *)(v17 + 728) & 1;
    if ( v23 )
    {
      v24 = v17 + 736;
      v25 = ((unsigned __int8)((unsigned int)v16 >> 4) ^ (unsigned __int8)((unsigned int)v16 >> 9)) & 7;
      v26 = (__int64 *)(v17
                      + 736
                      + 24LL
                      * (((unsigned __int8)((unsigned int)v16 >> 4) ^ (unsigned __int8)((unsigned int)v16 >> 9)) & 7));
      v27 = 192;
      v28 = *v26;
      if ( v16 == *v26 )
      {
LABEL_18:
        sub_1AF9650(v41, v26, (_QWORD *)(v24 + v27), v17 + 728, 1);
        v29 = v41[0].m128_u64[0];
        goto LABEL_19;
      }
      v38 = 192;
      v36 = 7;
      if ( v28 != -4096 )
        goto LABEL_43;
    }
    else
    {
      v34 = *(unsigned int *)(v17 + 744);
      v24 = *(_QWORD *)(v17 + 736);
      v35 = v34;
      if ( (_DWORD)v34 )
      {
        v36 = v34 - 1;
        v25 = (v34 - 1) & (((unsigned int)v16 >> 4) ^ ((unsigned int)v16 >> 9));
        v26 = (__int64 *)(v24 + 24LL * v25);
        if ( v16 == *v26 )
        {
LABEL_29:
          v27 = 24LL * v35;
          goto LABEL_18;
        }
        if ( *v26 != -4096 )
        {
LABEL_43:
          v40 = 1;
          while ( 1 )
          {
            v25 = v36 & (v40 + v25);
            v26 = (__int64 *)(v24 + 24LL * v25);
            if ( v16 == *v26 )
              break;
            ++v40;
            if ( *v26 == -4096 )
            {
              if ( !v23 )
              {
                v34 = *(unsigned int *)(v17 + 744);
                goto LABEL_35;
              }
              v38 = 192;
              goto LABEL_36;
            }
          }
          if ( !v23 )
          {
            v35 = *(_DWORD *)(v17 + 744);
            goto LABEL_29;
          }
          v27 = 192;
          goto LABEL_18;
        }
      }
LABEL_35:
      v38 = 24 * v34;
    }
LABEL_36:
    sub_1AF9650(v41, (_QWORD *)(v24 + v38), (_QWORD *)(v24 + v38), v17 + 728, 1);
    v29 = v41[0].m128_u64[0];
LABEL_19:
    if ( (*(_BYTE *)(v17 + 728) & 1) != 0 )
    {
      v30 = v17 + 736;
      v31 = 192;
    }
    else
    {
      v30 = *(_QWORD *)(v17 + 736);
      v31 = 24LL * *(unsigned int *)(v17 + 744);
    }
    sub_1AF9650(v41, (_QWORD *)(v31 + v30), (_QWORD *)(v31 + v30), v17 + 728, 1);
    if ( v41[0].m128_u64[0] != v29 )
      return a3(a4, 82, 0);
    return 0;
  }
  return result;
}
