__int64 __fastcall sub_5991F0(__int64 a1, _QWORD *a2, unsigned int a3, unsigned int *a4)
{
  char **exception; // r13
  __int64 v5; // rax
  __int64 v10; // rsi
  __int64 v11; // rdx
  int v12; // r8d
  unsigned int *v13; // rax
  __int64 v14; // rcx
  _BYTE *v15; // rbp
  unsigned int v16; // ebx
  __int64 v17; // rax
  _BYTE *v18; // rsi
  size_t v19; // rdx
  _QWORD *v20; // rbx
  __int64 v21; // r8
  char v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rax
  _BYTE *v25; // rdx
  unsigned int v26; // edx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rdx
  _BYTE *v30; // rax
  __int64 v31; // rsi
  _QWORD *v32; // rax
  _QWORD *v33; // rsi
  size_t v34; // rdx
  __int64 v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // rax
  _QWORD *v38; // rcx
  unsigned int v39; // ecx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  _QWORD *v43; // rax
  __int64 v44; // r14
  _QWORD *v45; // rax
  _QWORD *v46; // r13
  __int64 v47; // r12
  char *v48; // r15
  char *v49; // r12
  _QWORD *v50; // rax
  _BYTE *v51; // rax
  unsigned int v52; // edx
  _DWORD *v53; // rcx
  char v54; // si
  __int64 v55; // rax
  unsigned int v56; // r8d
  size_t v57; // rsi
  unsigned int *v58; // rax
  __int64 v59; // rax
  int v60; // edx
  _QWORD *v61; // rax
  __int64 v62; // rdx
  size_t v63; // rdx
  unsigned int v65; // [rsp+8h] [rbp-80h]
  unsigned int v66; // [rsp+8h] [rbp-80h]
  unsigned int v67; // [rsp+8h] [rbp-80h]
  unsigned int v68; // [rsp+8h] [rbp-80h]
  unsigned int v69; // [rsp+Ch] [rbp-7Ch]
  char v70; // [rsp+1Eh] [rbp-6Ah] BYREF
  __int64 v71; // [rsp+20h] [rbp-68h] BYREF
  unsigned int *v72; // [rsp+28h] [rbp-60h] BYREF
  __int64 v73[11]; // [rsp+30h] [rbp-58h] BYREF

  if ( a1 != a2[1] )
    return 0;
  v5 = a2[2];
  if ( v5 )
    v10 = *(unsigned int *)(v5 - 4);
  else
    v10 = 0;
  v71 = 0;
  sub_647A70(0, v10, &v71);
  if ( a3 > 1 )
  {
    v11 = v71;
    v12 = *(_DWORD *)(v71 + 4LL * *a4);
    v13 = a4;
    do
    {
      v14 = v13[1];
      *(_DWORD *)(v11 + 4LL * *v13++) = *(_DWORD *)(v11 + 4 * v14);
    }
    while ( &a4[a3 - 1] != v13 );
    *(_DWORD *)(v11 + 4LL * a4[a3 - 1]) = v12;
  }
  v72 = nullptr;
  sub_647FC0(&v71, a2 + 5, &v72, &v70);
  v15 = (_BYTE *)a2[4];
  if ( v15 )
  {
    v16 = *((_DWORD *)v15 - 1);
    v65 = *((_DWORD *)v15 - 2);
    v17 = sub_186B270(v65 + 8LL);
    v18 = (_BYTE *)a2[4];
    v15 = (_BYTE *)(v17 + 8);
    *(_QWORD *)v17 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v65), _mm_cvtsi32_si128(v16)).m128i_u64[0];
    if ( v18 )
    {
      v19 = *((unsigned int *)v18 - 1);
      if ( v19 <= 1 )
      {
        if ( v19 == 1 )
          *(_BYTE *)(v17 + 8) = *v18;
      }
      else
      {
        memmove((void *)(v17 + 8), v18, v19);
      }
    }
  }
  v20 = (_QWORD *)a2[2];
  if ( a3 <= 1 )
  {
    if ( !v20 )
      goto LABEL_30;
  }
  else
  {
    v21 = *a4;
    v22 = v15[v21];
    v23 = v21;
    if ( a3 <= 3 )
    {
      v26 = 1;
    }
    else
    {
      v24 = 3;
      do
      {
        v25 = &v15[a4[v24 - 2]];
        v15[v23] = *v25;
        v23 = a4[v24 - 1];
        *v25 = v15[v23];
        v26 = v24;
        v24 += 2;
      }
      while ( v24 != 2 * ((a3 - 4) >> 1) + 5LL );
    }
    v27 = v26;
    v28 = v26 - 1;
    v29 = v26 + 1;
    v30 = &v15[a4[v27]];
    v15[a4[v28]] = *v30;
    if ( (unsigned int)v29 < a3 )
      *v30 = v15[a4[v29]];
    v31 = a4[a3 - 1];
    v15[v31] = v22;
    if ( !v20 )
      goto LABEL_24;
  }
  v66 = *((_DWORD *)v20 - 2);
  v69 = _mm_cvtsi128_si32(_mm_cvtsi32_si128(*((_DWORD *)v20 - 1)));
  v32 = (_QWORD *)sub_186B270(8LL * v66 + 8);
  v20 = v32 + 1;
  v33 = (_QWORD *)a2[2];
  *v32 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v66), _mm_cvtsi32_si128(v69)).m128i_u64[0];
  if ( v33 )
  {
    v34 = 8LL * *((unsigned int *)v33 - 1);
    if ( v34 <= 8 )
    {
      if ( v34 == 8 )
        v32[1] = *v33;
    }
    else
    {
      memmove(v32 + 1, v33, v34);
    }
  }
  if ( a3 > 1 )
  {
    v21 = *a4;
    v31 = a4[a3 - 1];
LABEL_24:
    v35 = v20[v21];
    if ( a3 <= 3 )
    {
      v39 = 1;
    }
    else
    {
      v36 = *a4;
      v37 = 3;
      do
      {
        v38 = &v20[a4[v37 - 2]];
        v20[v36] = *v38;
        v36 = a4[v37 - 1];
        *v38 = v20[v36];
        v39 = v37;
        v37 += 2;
      }
      while ( v37 != 2 * ((a3 - 4) >> 1) + 5LL );
    }
    v40 = v39;
    v41 = v39 - 1;
    v42 = v39 + 1;
    v43 = &v20[a4[v40]];
    v20[a4[v41]] = *v43;
    if ( (unsigned int)v42 < a3 )
      *v43 = v20[a4[v42]];
    v20[v31] = v35;
  }
LABEL_30:
  v44 = sub_4C5CF0(*(_QWORD *)(a1 + 24), a2[8], v72);
  if ( v44 )
  {
    v45 = (_QWORD *)sub_186B270(0x20u);
    v45[1] = 0;
    v46 = v45;
    *v45 = &off_1C51EB8;
    if ( !v20 )
    {
      v45[3] = v44;
      v44 = (__int64)v45;
      v45[2] = 0;
      goto LABEL_45;
    }
    v47 = *((unsigned int *)v20 - 1);
    v45[2] = 0;
    if ( (_DWORD)v47 )
    {
      v48 = v15;
      v49 = &v15[v47];
      v50 = (_QWORD *)sub_186B270(0xAu);
      *v50 = 2;
      v51 = v50 + 1;
      v52 = 1;
      v46[2] = v51;
      v53 = v51;
      while ( 1 )
      {
        v54 = *v48++;
        *v51 = v54;
        *(v53 - 1) = v52;
        if ( v49 == v48 )
          break;
        if ( *(v53 - 2) == v52 )
        {
          v56 = (3 * v52 + 1) >> 1;
          v57 = v56 + 8;
          if ( v52 + 8 >= (unsigned int)v57 || v52 >= v56 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v73, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v73);
            sub_233E40((__int64)v73);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v67 = (3 * v52 + 1) >> 1;
          v58 = (unsigned int *)sub_186B300(v53 - 2, v57);
          v53 = v58 + 2;
          v46[2] = v58 + 2;
          *v58 = v67;
          v59 = v58[1];
          v60 = v59;
          v51 = (char *)v53 + v59;
          v52 = v60 + 1;
        }
        else
        {
          v55 = v52++;
          v51 = (char *)v53 + v55;
        }
      }
      v46[3] = v44;
      LODWORD(v47) = *((_DWORD *)v20 - 1);
    }
    else
    {
      v45[3] = v44;
    }
    v68 = *((_DWORD *)v20 - 2);
    v61 = (_QWORD *)sub_186B270(8LL * v68 + 8);
    v62 = *((unsigned int *)v20 - 1);
    v46[1] = v61 + 1;
    v63 = 8 * v62;
    *v61 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v68), _mm_cvtsi32_si128(v47)).m128i_u64[0];
    if ( v63 <= 8 )
    {
      if ( v63 == 8 )
        v61[1] = *v20;
    }
    else
    {
      memcpy(v61 + 1, v20, v63);
    }
    v44 = (__int64)v46;
  }
  else if ( !v20 )
  {
    goto LABEL_45;
  }
  sub_186B220(v20 - 1);
LABEL_45:
  if ( v15 )
    sub_186B220(v15 - 8);
  if ( v72 )
    sub_186B220(v72 - 2);
  if ( v71 )
    sub_186B220((void *)(v71 - 8));
  return v44;
}

