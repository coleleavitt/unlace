/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6F610
// Address: 0x000000000006F610

//----- (000000000006F610) ----------------------------------------------------
unsigned __int64 __fastcall sub_6F610(_QWORD *a1, const void *a2, int a3)
{
  _QWORD *v5; // rdi
  __int64 v6; // rax
  _QWORD *v7; // rbp
  _QWORD *v8; // rcx
  __int64 v9; // rbx
  char **v10; // r12
  size_t v11; // rax
  size_t v12; // r13
  unsigned __int64 v13; // r15
  bool v14; // cf
  char *v15; // rax
  _QWORD *v16; // r12
  char **v17; // rbx
  char *v18; // rax
  unsigned __int64 v19; // rbx
  __int64 v20; // rbp
  const char **v21; // r14
  __int64 v22; // r15
  __int64 v23; // r12
  const char **v24; // r13
  const char **v25; // rcx
  __int64 v26; // rdi
  int v27; // ecx
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  char *v30; // rax
  __int64 v31; // rcx
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned __int64 v36; // r8
  __int64 v37; // rdi
  __int64 v38; // rbp
  char *v39; // rdi
  const char **v40; // rbx
  __int64 v41; // rsi
  __int128 v42; // xmm1
  __int128 v43; // xmm2
  __int128 v44; // xmm3
  __int128 v45; // xmm1
  __int128 v46; // xmm1
  const char **v47; // rsi
  __int64 v48; // rdi
  unsigned __int64 v49; // rbp
  __int128 v50; // xmm1
  _QWORD *v51; // r13
  unsigned __int64 v52; // rax
  char *v53; // rdi
  int v54; // edx
  unsigned __int64 v55; // rcx
  __int64 v56; // rcx
  const char *src; // [rsp+0h] [rbp-78h]
  int v59; // [rsp+Ch] [rbp-6Ch]
  _QWORD *v60; // [rsp+18h] [rbp-60h]
  unsigned __int64 v61; // [rsp+20h] [rbp-58h]
  char *v62; // [rsp+28h] [rbp-50h]
  const char *v63; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v64[8]; // [rsp+38h] [rbp-40h] BYREF

  v64[1] = __readfsqword(0x28u);
  v5 = a1 + 2;
  v6 = a1[3];
  if ( a1[4] >= (unsigned __int64)(v6 + 1) )
  {
    v7 = (_QWORD *)*v5;
  }
  else
  {
    v7 = qvector_reserve((__int64)v5, (char *)a1[2], v6 + 1, 0x18u);
    a1[2] = v7;
    v6 = a1[3];
  }
  v8 = a1;
  v9 = 3 * v6;
  v10 = (char **)&v7[3 * v6];
  *(_OWORD *)&v7[v9] = 0;
  v7[v9 + 2] = 0;
  v60 = v8;
  ++v8[3];
  if ( a2 && (v11 = strlen((const char *)a2)) != 0 )
  {
    v12 = v11;
    v13 = v11 + 1;
    v14 = v7[v9 + 2] < v11 + 1;
    v15 = *v10;
    if ( v14 )
    {
      v15 = (char *)qvector_reserve((__int64)v10, *v10, v13, 1u);
      *v10 = v15;
    }
    v7[v9 + 1] = v13;
    memmove(v15, a2, v12);
    (*v10)[v12] = 0;
  }
  else
  {
    v7[v9 + 1] = 0;
  }
  src = qstrtok(*v10, "|", &v63);
  v16 = v60;
  if ( src )
  {
    v17 = (char **)(v60 + 5);
    v59 = a3;
    while ( 1 )
    {
      v61 = v16[6];
      if ( !v61 )
        goto LABEL_50;
      v18 = *v17;
      v19 = 0;
      v62 = v18;
      while ( 1 )
      {
        v20 = 32 * v19;
        v21 = *(const char ***)&v18[32 * v19];
        v22 = *(_QWORD *)&v18[32 * v19 + 8];
        v23 = 8 * v22;
        v24 = v21;
        if ( 8 * v22 )
        {
          v24 = *(const char ***)&v18[32 * v19];
          while ( strcmp(*v24, src) )
          {
            ++v24;
            v23 -= 8;
            if ( !v23 )
              goto LABEL_20;
          }
        }
        v25 = &v21[v22];
        if ( v24 != v25 )
          break;
LABEL_20:
        v19 = (int)v19 + 1;
        v18 = v62;
        if ( v61 <= v19 )
        {
          a3 = v59;
          v16 = v60;
          v17 = (char **)(v60 + 5);
          v26 = v60[5];
          v27 = 1;
          v28 = 0;
          while ( 1 )
          {
            v29 = 32 * v28;
            if ( *(_DWORD *)(v26 + v29 + 24) == v59 )
              break;
            v28 = v27++;
            if ( v61 <= v28 )
              goto LABEL_50;
          }
          v39 = (char *)(v29 + v26);
          if ( v39 )
            goto LABEL_51;
          goto LABEL_50;
        }
      }
      a3 = v59;
      v16 = v60;
      v17 = (char **)(v60 + 5);
      if ( *(_DWORD *)&v62[v20 + 24] == v59 )
        goto LABEL_52;
      v30 = &v62[v20 + 8];
      v31 = (char *)v25 - (char *)v24;
      if ( v31 >= 9 )
        break;
LABEL_44:
      *(_QWORD *)v30 = v22 - 1;
      v52 = v60[6];
      if ( v52 )
      {
        v53 = *v17;
        v54 = 1;
        v55 = 0;
        while ( 1 )
        {
          v56 = 32 * v55;
          if ( *(_DWORD *)&v53[v56 + 24] == v59 )
            break;
          v55 = v54++;
          if ( v52 <= v55 )
            goto LABEL_50;
        }
        v39 = &v53[v56];
        if ( v39 )
          goto LABEL_51;
      }
LABEL_50:
      v39 = sub_70010(v17);
      *((_DWORD *)v39 + 6) = a3;
LABEL_51:
      v64[0] = src;
      sub_6FCC0((char **)v39, (char *)v64);
LABEL_52:
      src = qstrtok(nullptr, "|", &v63);
      if ( !src )
        return __readfsqword(0x28u);
    }
    v32 = (unsigned __int64)v31 >> 3;
    v33 = 2 - v32;
    if ( (__int64)(2 - v32) < 0 )
      v33 = 0;
    v34 = v32 + v33 - 1;
    v35 = v32 - 2;
    if ( v34 >= 4 )
    {
      v36 = v34 & 0xFFFFFFFFFFFFFFFCLL;
      v37 = ((unsigned __int8)(((v34 & 0xFFFFFFFFFFFFFFFCLL) - 4) >> 2) + 1) & 3;
      if ( (v34 & 0xFFFFFFFFFFFFFFFCLL) - 4 >= 0xC )
      {
        v40 = v24 + 15;
        v41 = v37 - ((((v34 & 0xFFFFFFFFFFFFFFFCLL) - 4) >> 2) + 1);
        v38 = 0;
        do
        {
          v42 = *(_OWORD *)&v40[v38 - 12];
          v43 = *(_OWORD *)&v40[v38 - 10];
          v44 = *(_OWORD *)&v40[v38 - 8];
          *(_OWORD *)&v24[v38] = *(_OWORD *)&v24[v38 + 1];
          *(_OWORD *)&v40[v38 - 13] = v42;
          *(_OWORD *)&v40[v38 - 11] = v43;
          *(_OWORD *)&v40[v38 - 9] = v44;
          v45 = *(_OWORD *)&v40[v38 - 4];
          *(_OWORD *)&v40[v38 - 7] = *(_OWORD *)&v40[v38 - 6];
          *(_OWORD *)&v40[v38 - 5] = v45;
          v46 = *(_OWORD *)&v40[v38];
          *(_OWORD *)&v40[v38 - 3] = *(_OWORD *)&v40[v38 - 2];
          *(_OWORD *)&v40[v38 - 1] = v46;
          v38 += 16;
          v41 += 4;
        }
        while ( v41 );
      }
      else
      {
        v38 = 0;
      }
      v17 = (char **)(v60 + 5);
      if ( (((unsigned __int8)(((v34 & 0xFFFFFFFFFFFFFFFCLL) - 4) >> 2) + 1) & 3) != 0 )
      {
        v47 = &v24[v38 + 3];
        v48 = 32 * v37;
        v49 = 0;
        do
        {
          v50 = *(_OWORD *)&v47[v49 / 8];
          *(_OWORD *)&v47[v49 / 8 - 3] = *(_OWORD *)&v47[v49 / 8 - 2];
          *(_OWORD *)&v47[v49 / 8 - 1] = v50;
          v49 += 32LL;
        }
        while ( v48 != v49 );
      }
      if ( v34 == v36 )
        goto LABEL_43;
      v35 -= v36;
      v24 += v36;
    }
    v51 = v24 + 1;
    do
    {
      *(v51 - 1) = *v51;
      ++v51;
      --v35;
    }
    while ( v35 >= 0 );
LABEL_43:
    v22 = *(_QWORD *)v30;
    goto LABEL_44;
  }
  return __readfsqword(0x28u);
}
// 6F7E0: conditional instruction was optimized away because %var_58.8!=0
