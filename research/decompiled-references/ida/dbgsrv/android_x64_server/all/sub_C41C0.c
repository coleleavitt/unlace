/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C41C0
// Address: 0x00000000000C41C0

//----- (00000000000C41C0) ----------------------------------------------------
__int64 __fastcall sub_C41C0(char a1)
{
  char *v2; // rbp
  char *v3; // r14
  char *v4; // rdi
  unsigned __int64 v5; // rcx
  char *v6; // rax
  char *v7; // rcx
  __int64 v8; // rdx
  FILE *v9; // r15
  char *v10; // r14
  const char *v11; // rbp
  char *v12; // rax
  __int64 v13; // r14
  __int128 v14; // rax
  signed __int64 v15; // rsi
  char *v16; // rsi
  __int64 v17; // rsi
  bool v18; // cc
  void *v19; // rax
  char *v20; // rbx
  char *v21; // r15
  char *v22; // rdi
  unsigned __int64 v23; // rcx
  char *v24; // rax
  char *v25; // rcx
  __int64 v26; // rdx
  char *v27; // rcx
  const char *v28; // rbp
  int v29; // eax
  int v30; // eax
  unsigned __int64 v31; // r8
  __int64 v32; // rsi
  __int64 v33; // rbx
  __int64 v34; // rdx
  __int128 v35; // xmm1
  __int128 v36; // xmm1
  __int128 v37; // xmm1
  __int128 v38; // xmm1
  __int64 v39; // rdx
  __int64 v40; // rbx
  __int64 v41; // rsi
  __int64 v42; // rbp
  __int128 v43; // xmm1
  void *v44; // rbx
  void *v45; // rsi
  int v46; // ecx
  __int64 v47; // rdi
  unsigned __int64 v49; // r8
  __int64 v50; // rsi
  __int64 v51; // rbx
  __int64 v52; // rdx
  __int128 v53; // xmm1
  __int128 v54; // xmm1
  __int128 v55; // xmm1
  __int128 v56; // xmm1
  __int64 v57; // rdx
  __int64 v58; // rsi
  __int128 v59; // xmm1
  char v60; // [rsp+4h] [rbp-84h]
  FILE *v61; // [rsp+8h] [rbp-80h]
  void *v62[2]; // [rsp+10h] [rbp-78h] BYREF
  __int64 v63; // [rsp+20h] [rbp-68h]
  void *ptr[2]; // [rsp+30h] [rbp-58h] BYREF
  char *v65; // [rsp+40h] [rbp-48h]
  unsigned __int64 v66; // [rsp+50h] [rbp-38h]

  v66 = __readfsqword(0x28u);
  v61 = qfopen("/proc/cpuinfo", (__int64)"r");
  if ( !v61 )
  {
    LODWORD(v44) = -1;
    return (unsigned int)v44;
  }
  *(_OWORD *)ptr = 0;
  v65 = nullptr;
  v2 = (char *)qvector_reserve((__int64)ptr, nullptr, 1u, 8u);
  v3 = v65;
  v65 = nullptr;
  v4 = (char *)ptr[0];
  v5 = (unsigned __int64)ptr[1];
  v6 = (char *)ptr[1] - 1;
  if ( (__int64)ptr[1] - 1 < 0 )
    goto LABEL_10;
  if ( ptr[1] < &byte_4 || v2 < (char *)ptr[0] + 8 * (__int64)ptr[1] && &v2[8 * (__int64)ptr[1]] > ptr[0] )
  {
    v7 = v2;
    goto LABEL_7;
  }
  v49 = (unsigned __int64)ptr[1] & 0xFFFFFFFFFFFFFFFCLL;
  v50 = ((unsigned __int8)((((unsigned __int64)ptr[1] & 0xFFFFFFFFFFFFFFFCLL) - 4) >> 2) + 1) & 3;
  if ( ((unsigned __int64)ptr[1] & 0xFFFFFFFFFFFFFFFCLL) - 4 < 0xC )
  {
    v51 = 0;
    if ( (((unsigned __int8)((((unsigned __int64)ptr[1] & 0xFFFFFFFFFFFFFFFCLL) - 4) >> 2) + 1) & 3) == 0 )
      goto LABEL_82;
    goto LABEL_80;
  }
  v52 = v50 - (((((unsigned __int64)ptr[1] & 0xFFFFFFFFFFFFFFFCLL) - 4) >> 2) + 1);
  v51 = 0;
  do
  {
    v53 = *(_OWORD *)&v4[8 * v51 + 16];
    *(_OWORD *)&v2[8 * v51] = *(_OWORD *)&v4[8 * v51];
    *(_OWORD *)&v2[8 * v51 + 16] = v53;
    v54 = *(_OWORD *)&v4[8 * v51 + 48];
    *(_OWORD *)&v2[8 * v51 + 32] = *(_OWORD *)&v4[8 * v51 + 32];
    *(_OWORD *)&v2[8 * v51 + 48] = v54;
    v55 = *(_OWORD *)&v4[8 * v51 + 80];
    *(_OWORD *)&v2[8 * v51 + 64] = *(_OWORD *)&v4[8 * v51 + 64];
    *(_OWORD *)&v2[8 * v51 + 80] = v55;
    v56 = *(_OWORD *)&v4[8 * v51 + 112];
    *(_OWORD *)&v2[8 * v51 + 96] = *(_OWORD *)&v4[8 * v51 + 96];
    *(_OWORD *)&v2[8 * v51 + 112] = v56;
    v51 += 16;
    v52 += 4;
  }
  while ( v52 );
  if ( (((unsigned __int8)(((v5 & 0xFFFFFFFFFFFFFFFCLL) - 4) >> 2) + 1) & 3) != 0 )
  {
LABEL_80:
    v57 = 8 * v51 + 16;
    v58 = -v50;
    do
    {
      v59 = *(_OWORD *)&v4[v57];
      *(_OWORD *)&v2[v57 - 16] = *(_OWORD *)&v4[v57 - 16];
      *(_OWORD *)&v2[v57] = v59;
      v57 += 32;
      ++v58;
    }
    while ( v58 );
  }
LABEL_82:
  if ( v5 != v49 )
  {
    v6 -= v49;
    v7 = &v2[8 * v49];
    v4 += 8 * v49;
LABEL_7:
    v8 = 0;
    do
    {
      *(_QWORD *)&v7[v8] = *(_QWORD *)&v4[v8];
      v8 += 8;
      --v6;
    }
    while ( (__int64)v6 >= 0 );
  }
  v4 = (char *)ptr[0];
LABEL_10:
  qfree(v4);
  v60 = a1;
  ptr[0] = v2;
  v65 = v3;
  *(_QWORD *)&v2[8 * (__int64)ptr[1]++] = -1;
  *(_OWORD *)v62 = 0;
  v63 = 0;
  v9 = v61;
  while ( qgetline(v62, v9) >= 0 )
  {
    v11 = s1;
    if ( v62[1] )
      v11 = (const char *)v62[0];
    v12 = strchr(v11, 58);
    if ( !v12 || (v13 = v12 - v11, v12 - v11 == -1) )
    {
      v19 = ptr[1];
      v20 = v65;
      if ( v65 >= (char *)ptr[1] + 1 )
      {
        v10 = (char *)ptr[0];
        goto LABEL_11;
      }
      v10 = (char *)qvector_reserve((__int64)ptr, nullptr, (unsigned __int64)ptr[1] + 1, 8u);
      v21 = v65;
      v65 = v20;
      v22 = (char *)ptr[0];
      v23 = (unsigned __int64)ptr[1];
      v24 = (char *)ptr[1] - 1;
      if ( (__int64)ptr[1] - 1 >= 0 )
      {
        if ( ptr[1] < &byte_4 || v10 < (char *)ptr[0] + 8 * (__int64)ptr[1] && &v10[8 * (__int64)ptr[1]] > ptr[0] )
        {
          v25 = v10;
LABEL_32:
          v26 = 0;
          do
          {
            *(_QWORD *)&v25[v26] = *(_QWORD *)&v22[v26];
            v26 += 8;
            --v24;
          }
          while ( (__int64)v24 >= 0 );
          goto LABEL_34;
        }
        v31 = (unsigned __int64)ptr[1] & 0xFFFFFFFFFFFFFFFCLL;
        v32 = ((unsigned __int8)((((unsigned __int64)ptr[1] & 0xFFFFFFFFFFFFFFFCLL) - 4) >> 2) + 1) & 3;
        if ( ((unsigned __int64)ptr[1] & 0xFFFFFFFFFFFFFFFCLL) - 4 >= 0xC )
        {
          v34 = v32 - (((((unsigned __int64)ptr[1] & 0xFFFFFFFFFFFFFFFCLL) - 4) >> 2) + 1);
          v33 = 0;
          do
          {
            v35 = *(_OWORD *)&v22[8 * v33 + 16];
            *(_OWORD *)&v10[8 * v33] = *(_OWORD *)&v22[8 * v33];
            *(_OWORD *)&v10[8 * v33 + 16] = v35;
            v36 = *(_OWORD *)&v22[8 * v33 + 48];
            *(_OWORD *)&v10[8 * v33 + 32] = *(_OWORD *)&v22[8 * v33 + 32];
            *(_OWORD *)&v10[8 * v33 + 48] = v36;
            v37 = *(_OWORD *)&v22[8 * v33 + 80];
            *(_OWORD *)&v10[8 * v33 + 64] = *(_OWORD *)&v22[8 * v33 + 64];
            *(_OWORD *)&v10[8 * v33 + 80] = v37;
            v38 = *(_OWORD *)&v22[8 * v33 + 112];
            *(_OWORD *)&v10[8 * v33 + 96] = *(_OWORD *)&v22[8 * v33 + 96];
            *(_OWORD *)&v10[8 * v33 + 112] = v38;
            v33 += 16;
            v34 += 4;
          }
          while ( v34 );
          if ( (((unsigned __int8)(((v23 & 0xFFFFFFFFFFFFFFFCLL) - 4) >> 2) + 1) & 3) != 0 )
            goto LABEL_51;
        }
        else
        {
          v33 = 0;
          if ( (((unsigned __int8)((((unsigned __int64)ptr[1] & 0xFFFFFFFFFFFFFFFCLL) - 4) >> 2) + 1) & 3) == 0 )
            goto LABEL_53;
LABEL_51:
          v39 = (__int64)&v22[8 * v33 + 16];
          v40 = (__int64)&v10[8 * v33 + 16];
          v41 = 32 * v32;
          v42 = 0;
          do
          {
            v43 = *(_OWORD *)(v39 + v42);
            *(_OWORD *)(v40 + v42 - 16) = *(_OWORD *)(v39 + v42 - 16);
            *(_OWORD *)(v40 + v42) = v43;
            v42 += 32;
          }
          while ( v41 != v42 );
        }
LABEL_53:
        if ( v23 != v31 )
        {
          v24 -= v31;
          v25 = &v10[8 * v31];
          v22 += 8 * v31;
          goto LABEL_32;
        }
LABEL_34:
        v22 = (char *)ptr[0];
      }
      qfree(v22);
      ptr[0] = v10;
      v65 = v21;
      v19 = ptr[1];
      v9 = v61;
LABEL_11:
      *(_QWORD *)&v10[8 * (_QWORD)v19] = -1;
      ++ptr[1];
    }
    else
    {
      *((void **)&v14 + 1) = v62[1];
      v15 = v12 - v11;
      if ( v13 > 0 )
      {
        *(_QWORD *)&v14 = v12 - 1 - v11;
        while ( 1 )
        {
          v16 = (char *)v62[0] + v14;
          if ( v14 == 0 )
            v16 = byte_155771;
          if ( *v16 != 32 && *v16 != 9 )
            break;
          v17 = v14 - 1;
          v18 = (__int64)v14 + 1 <= 1;
          *(_QWORD *)&v14 = v14 - 1;
          if ( v18 )
          {
            v15 = v17 + 1;
            goto LABEL_37;
          }
        }
        v15 = v14 + 1;
      }
LABEL_37:
      v27 = (char *)v62[0] + v15;
      if ( !(v15 | (signed __int64)v62[1]) )
        v27 = byte_155771;
      *v27 = 0;
      v28 = s1;
      if ( v62[1] )
        v28 = (const char *)v62[0];
      if ( !strcmp(v28, "processor") )
      {
        v30 = atoi(&v28[v13 + 1]);
        *((_DWORD *)ptr[0] + 2 * (__int64)ptr[1] - 2) = v30;
      }
      else if ( !strcmp(v28, "core id") )
      {
        v29 = atoi(&v28[v13 + 1]);
        *((_DWORD *)ptr[0] + 2 * (__int64)ptr[1] - 1) = v29;
      }
    }
  }
  qfclose(v9);
  v44 = ptr[1];
  if ( ptr[1] && *((_DWORD *)ptr[0] + 2 * (__int64)ptr[1] - 2) == -1 )
    v44 = --ptr[1];
  if ( !v60 )
  {
    sub_C4A80((unsigned int *)ptr[0], (char *)ptr[0] + 8 * (_QWORD)v44);
    if ( ptr[1] )
    {
      v45 = nullptr;
      v46 = 1;
      LODWORD(v44) = 0;
      do
      {
        if ( v46 == 1
          || (v47 = v46 - 2, *((_DWORD *)ptr[0] + 2 * (_QWORD)v45) != *((_DWORD *)ptr[0] + 2 * v47))
          || *((_DWORD *)ptr[0] + 2 * (_QWORD)v45 + 1) != *((_DWORD *)ptr[0] + 2 * v47 + 1) )
        {
          LODWORD(v44) = (_DWORD)v44 + 1;
        }
        v45 = (void *)v46++;
      }
      while ( ptr[1] > v45 );
    }
    else
    {
      LODWORD(v44) = 0;
    }
  }
  if ( v62[0] )
  {
    v62[1] = nullptr;
    qfree(v62[0]);
    v62[0] = nullptr;
    v63 = 0;
  }
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
    ptr[0] = nullptr;
    v65 = nullptr;
  }
  return (unsigned int)v44;
}
// 4: using guessed type char byte_4;
