__int64 *__fastcall sub_729200(__int64 *a1, __int64 a2, unsigned int *a3, __int64 a4)
{
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 *v10; // rcx
  int v11; // edi
  unsigned int v12; // edx
  __int64 *v13; // rsi
  __int64 v14; // rdx
  __int64 *v15; // r8
  __int64 *i; // rax
  __int64 v17; // rdx
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rax
  unsigned int v21; // ecx
  __m128i *v22; // r13
  int v23; // edx
  __int64 v24; // r9
  __int64 *v25; // rcx
  int v26; // edi
  __int64 v27; // rax
  __m128i *v28; // r8
  __m128i *v29; // rax
  __int64 *v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rdx
  void *v33; // rdi
  int v34; // ecx
  int v35; // r8d
  int v36; // r9d
  __int64 v37; // rdi
  __int64 v38; // rax
  void *v39; // r15
  __int64 v40; // r14
  int v41; // r8d
  int v42; // r9d
  __int64 v43; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __m128i *v47; // rax
  __m128i *v48; // r11
  __int64 v49; // r8
  __int64 v50; // rsi
  void *v51; // r10
  const __m128i *v52; // r12
  __int64 v53; // r10
  const __m128i *v54; // rbx
  __int64 v55; // rdx
  __m128i *v56; // rsi
  __m128i *v57; // rdx
  int v58[2]; // [rsp+0h] [rbp-A8h]
  void *v59; // [rsp+8h] [rbp-A0h]
  __int64 v60; // [rsp+10h] [rbp-98h]
  int v61; // [rsp+18h] [rbp-90h]
  __int64 *v62; // [rsp+20h] [rbp-88h]
  char v63; // [rsp+28h] [rbp-80h]
  int v64; // [rsp+30h] [rbp-78h]
  int v65; // [rsp+38h] [rbp-70h]
  int v66; // [rsp+40h] [rbp-68h]
  void *v67; // [rsp+48h] [rbp-60h] BYREF
  int v68[2]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v69; // [rsp+58h] [rbp-50h]
  _QWORD v70[9]; // [rsp+60h] [rbp-48h] BYREF

  v7 = *(_QWORD *)(a2 + 16);
  if ( a4 == *(_QWORD *)(v7 + 840) )
  {
    *(_QWORD *)v58 = *(_QWORD *)(a2 + 824);
    goto LABEL_23;
  }
  v8 = *(unsigned int *)(a2 + 848);
  v9 = a4;
  v10 = *(__int64 **)(a2 + 840);
  v11 = *(_DWORD *)(v9 + 12);
  v12 = v8 - 1;
  v8 *= 16;
  v13 = (__int64 *)((char *)v10 + v8);
  v14 = 16LL * (v11 & v12);
  v15 = &v10[(unsigned __int64)v14 / 8];
  if ( v14 != v8 )
  {
    for ( i = &v10[(unsigned __int64)v14 / 8]; v13 != i; i += 2 )
    {
      v17 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v17 + 12) == v11 && v9 == v17 )
          goto LABEL_22;
      }
      else if ( !v17 )
      {
        goto LABEL_9;
      }
    }
  }
  for ( ; v15 != v10; v10 += 2 )
  {
    v45 = *v10;
    if ( (unsigned __int64)*v10 > 1 )
    {
      if ( *(_DWORD *)(v45 + 12) == v11 && v9 == v45 )
      {
        i = v10;
LABEL_22:
        *(_QWORD *)v58 = i[1];
        goto LABEL_23;
      }
    }
    else if ( !v45 )
    {
      break;
    }
  }
LABEL_9:
  v18 = sub_15D2CD0(*(_QWORD *)(a2 + 800), 5, 1, 0, 0);
  v19 = *a3;
  *(_QWORD *)v68 = v18;
  v67 = (void *)(8LL * (unsigned int)(v19 + 200208641) + 1);
  v20 = sub_15E3510(v7, &v67, 1, v68, v9, 0);
  *(_QWORD *)v58 = v20;
  if ( v20 )
    ++*(_DWORD *)(v20 + 8);
  v21 = *(_DWORD *)(a2 + 848);
  LODWORD(v59) = 2 * v21;
  if ( 3 * v21 < 4 * (*(_DWORD *)(a2 + 852) + *(_DWORD *)(a2 + 856)) )
  {
    v60 = 16LL * (unsigned int)v59;
    v47 = (__m128i *)sub_186B270(v60);
    v24 = v60;
    v22 = v47;
    v48 = (__m128i *)((char *)v47 + v60);
    if ( (_DWORD)v59 )
    {
      if ( (v60 & 0x10) == 0 || (*v47 = 0, ++v47, v47 != v48) )
      {
        do
        {
          *v47 = 0;
          v47 += 2;
          v47[-1] = 0;
        }
        while ( v47 != v48 );
      }
    }
    v49 = *(_QWORD *)(a2 + 840);
    v25 = (__int64 *)v48;
    v50 = 16LL * *(unsigned int *)(a2 + 848);
    v51 = (void *)(v49 + v50);
    v23 = (_DWORD)v59 - 1;
    if ( v49 != v49 + v50 )
    {
      v52 = (const __m128i *)(v49 + v50);
      v53 = v9;
      v54 = *(const __m128i **)(a2 + 840);
      do
      {
        if ( v54->m128i_i64[0] > 1uLL )
        {
          v55 = 16LL * (*(_DWORD *)(v54->m128i_i64[0] + 12) & (unsigned int)((_DWORD)v59 - 1));
          v56 = &v22[(unsigned __int64)v55 / 0x10];
          if ( v60 == v55 )
          {
LABEL_62:
            if ( v22 == v56 )
            {
LABEL_75:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v57 = v22;
            while ( v57->m128i_i64[0] )
            {
              if ( v56 == ++v57 )
                goto LABEL_75;
            }
          }
          else
          {
            v57 = &v22[(unsigned __int64)v55 / 0x10];
            while ( v57->m128i_i64[0] )
            {
              if ( v48 == ++v57 )
                goto LABEL_62;
            }
          }
          *v57 = _mm_loadu_si128(v54);
        }
        ++v54;
      }
      while ( v52 != v54 );
      v9 = v53;
      v51 = *(void **)(a2 + 840);
      v23 = (_DWORD)v59 - 1;
    }
    if ( v51 )
    {
      v62 = (__int64 *)v48;
      v61 = 16 * (_DWORD)v59;
      LODWORD(v60) = v23;
      sub_186B220(v51);
      v25 = v62;
      v24 = 16LL * (unsigned int)v59;
      v23 = v60;
    }
    *(_QWORD *)(a2 + 840) = v22;
    *(_DWORD *)(a2 + 856) = 0;
    *(_DWORD *)(a2 + 848) = (_DWORD)v59;
  }
  else
  {
    v22 = *(__m128i **)(a2 + 840);
    v23 = v21 - 1;
    v24 = 16LL * v21;
    v25 = (__int64 *)((char *)v22->m128i_i64 + v24);
  }
  v26 = *(_DWORD *)(v9 + 12);
  v27 = 16LL * (v26 & (unsigned int)v23);
  v28 = &v22[(unsigned __int64)v27 / 0x10];
  if ( v27 != v24 )
  {
    v29 = &v22[(unsigned __int64)v27 / 0x10];
    v30 = nullptr;
    while ( 1 )
    {
      v31 = v29->m128i_i64[0];
      if ( v29->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v31 + 12) == v26 && v9 == v31 )
        {
          v29->m128i_i64[0] = v9;
          v29->m128i_i64[1] = *(_QWORD *)v58;
          goto LABEL_61;
        }
      }
      else
      {
        if ( !v31 )
        {
          if ( v30 )
            goto LABEL_72;
          v30 = (__int64 *)v29;
          goto LABEL_73;
        }
        v30 = (__int64 *)v29;
      }
      if ( ++v29 == (__m128i *)v25 )
        goto LABEL_43;
    }
  }
  v30 = nullptr;
  while ( 1 )
  {
LABEL_43:
    if ( v28 == v22 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v46 = v22->m128i_i64[0];
    if ( v22->m128i_i64[0] <= 1uLL )
      break;
    if ( *(_DWORD *)(v46 + 12) == v26 && v9 == v46 )
    {
      v22->m128i_i64[0] = v9;
      v22->m128i_i64[1] = *(_QWORD *)v58;
      goto LABEL_61;
    }
LABEL_42:
    ++v22;
  }
  if ( v46 )
  {
    v30 = (__int64 *)v22;
    goto LABEL_42;
  }
  if ( v30 )
LABEL_72:
    --*(_DWORD *)(a2 + 856);
  else
    v30 = (__int64 *)v22;
LABEL_73:
  *v30 = v9;
  v30[1] = *(_QWORD *)v58;
  ++*(_DWORD *)(a2 + 852);
LABEL_61:
  v7 = *(_QWORD *)(a2 + 16);
LABEL_23:
  *(_QWORD *)v68 = 0;
  v32 = *a3;
  v69 = 0;
  v70[0] = 1;
  *a3 = v32 + 1;
  v70[1] = 0;
  v33 = qword_1C7F2C0;
  if ( (int)v32 < 0 )
  {
    v59 = qword_1C7F2C0;
    sub_1830C40(qword_1C7F2C0, v68, v32);
    v33 = v59;
  }
  else
  {
    v68[0] = v32;
  }
  sub_182CBA0(v33, v70);
  v37 = *(_QWORD *)(a2 + 808);
  BYTE4(v70[0]) &= ~1u;
  LODWORD(v70[0]) = 1;
  if ( !v37 )
  {
    sub_16669E0(a2 + 800);
    v37 = *(_QWORD *)(a2 + 808);
  }
  v38 = sub_166A700(v37, (unsigned int)v68, 1, v34, v35, v36);
  v39 = qword_1C7F2C0;
  v40 = v38;
  sub_182CBA0(qword_1C7F2C0, v68);
  sub_182CBA0(v39, v70);
  *(_QWORD *)v68 = v40;
  v43 = sub_15DC610(v7, v58[0], 1, (int)v68, v41, v42, v58[0], (int)v59, v60, v61, (int)v62, v63, v64, v65, v66, v67);
  a1[1] = v7;
  *a1 = v43;
  if ( v43 )
    ++*(_DWORD *)(v43 + 8);
  return a1;
}

