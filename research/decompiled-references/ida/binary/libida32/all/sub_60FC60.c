__int64 __fastcall sub_60FC60(__int64 a1, __int64 a2, char a3, unsigned int a4)
{
  int *v4; // r14
  __int64 v5; // rax
  _BYTE *v6; // rbp
  char *v7; // rbx
  const char *v8; // r13
  char *v9; // rsi
  char *v10; // rax
  __int64 v11; // r13
  unsigned __int64 v12; // r15
  __int64 v13; // r9
  __int64 v14; // r11
  __int64 v15; // rdx
  char *v16; // rdi
  __m128i v17; // xmm0
  int v18; // r15d
  char *v19; // r13
  int *v20; // rax
  int v21; // edx
  int v22; // eax
  int v23; // edx
  __m128i si128; // xmm0
  unsigned int v25; // ebx
  __int64 v27; // rbx
  size_t v28; // rax
  size_t v29; // r12
  size_t v30; // r15
  size_t v31; // rdx
  __int64 v32; // rax
  int v33; // eax
  int v34; // r12d
  __int64 v35; // rax
  const char *src; // [rsp+0h] [rbp-508h]
  int v38; // [rsp+8h] [rbp-500h]
  int v40; // [rsp+10h] [rbp-4F8h]
  unsigned int v41; // [rsp+14h] [rbp-4F4h]
  __int64 v42; // [rsp+18h] [rbp-4F0h]
  __int64 v43; // [rsp+20h] [rbp-4E8h]
  __int64 v44; // [rsp+28h] [rbp-4E0h]
  _BYTE v45[24]; // [rsp+30h] [rbp-4D8h] BYREF
  int v46; // [rsp+48h] [rbp-4C0h]
  int v47; // [rsp+4Ch] [rbp-4BCh]
  int v48; // [rsp+50h] [rbp-4B8h]
  __int128 v49; // [rsp+60h] [rbp-4A8h] BYREF
  __m128i v50; // [rsp+70h] [rbp-498h]
  __int64 v51; // [rsp+80h] [rbp-488h]
  char *haystack[2]; // [rsp+88h] [rbp-480h] BYREF
  __m128i v53; // [rsp+98h] [rbp-470h]
  void *v54; // [rsp+A8h] [rbp-460h]
  __int128 v55; // [rsp+B0h] [rbp-458h]
  int v56; // [rsp+C0h] [rbp-448h] BYREF
  _BYTE v57[1028]; // [rsp+C4h] [rbp-444h] BYREF
  unsigned __int64 v58; // [rsp+4C8h] [rbp-40h]

  v40 = a1;
  v41 = a2;
  v58 = __readfsqword(0x28u);
  v4 = &v56;
  v5 = netnode_supval(a1, a2, &v56, 1024, 83);
  if ( v5 <= 0 )
    return 0;
  v6 = &v57[v5 - 4];
  v49 = 0;
  v50.m128i_i64[0] = 0;
  v50.m128i_i64[1] = -1;
  v51 = 0;
  v54 = nullptr;
  *(_OWORD *)haystack = 0;
  v53 = 0;
  v55 = 0;
  netnode_get_name((unsigned int)a1, &haystack[1]);
  v7 = nullptr;
  memset(v45, 0, sizeof(v45));
  src = ::haystack;
  if ( v53.m128i_i64[0] )
  {
    src = haystack[1];
    v7 = strstr(haystack[1], ".next");
  }
  v8 = src;
  v9 = nullptr;
  while ( v7 )
  {
    if ( v7 != v8 )
    {
      v13 = *(_QWORD *)&v45[8];
      v14 = v7 - v8;
      if ( *(_QWORD *)&v45[8] )
      {
        v13 = *(_QWORD *)&v45[8] - 1LL;
        v14 = v7 - v8 + *(_QWORD *)&v45[8] - 1LL;
      }
      v15 = v14 + 1;
      if ( *(_QWORD *)&v45[16] < (unsigned __int64)(v14 + 1) )
      {
        v44 = v13;
        v43 = v14;
        v42 = v14 + 1;
        *(_QWORD *)v45 = qvector_reserve(v45, v9, v15, 1);
        v13 = v44;
        v9 = *(char **)v45;
        v14 = v43;
        v15 = v42;
      }
      *(_QWORD *)&v45[8] = v15;
      v9[v14] = 0;
      memmove((void *)(v13 + *(_QWORD *)v45), v8, v7 - v8);
      v9 = *(char **)v45;
    }
    v11 = *(_QWORD *)&v45[8];
    v12 = 1;
    if ( *(_QWORD *)&v45[8] )
    {
      v12 = *(_QWORD *)&v45[8];
      v11 = *(_QWORD *)&v45[8] - 1LL;
    }
    if ( *(_QWORD *)&v45[16] < v12 )
    {
      *(_QWORD *)v45 = qvector_reserve(v45, v9, v12, 1);
      v9 = *(char **)v45;
    }
    *(_QWORD *)&v45[8] = v12;
    v9[v11] = 0;
    v8 = v7 + 5;
    v10 = strstr(v7 + 5, ".next");
    v9 = *(char **)v45;
    v7 = v10;
  }
  if ( v8 == src )
  {
    v16 = v9;
  }
  else
  {
    if ( *v8 && v8 )
    {
      v27 = *(_QWORD *)&v45[8];
      v28 = strlen(v8);
      v29 = v28;
      v30 = v28;
      if ( v27 )
      {
        --v27;
        v30 = v28 + v27;
      }
      v31 = v30 + 1;
      if ( *(_QWORD *)&v45[16] < v30 + 1 )
      {
        *(_QWORD *)v45 = qvector_reserve(v45, v9, v31, 1);
        v31 = v30 + 1;
        v9 = *(char **)v45;
      }
      *(_QWORD *)&v45[8] = v31;
      v9[v30] = 0;
      memmove((void *)(*(_QWORD *)v45 + v27), v8, v29);
      v9 = *(char **)v45;
    }
    v16 = haystack[1];
    haystack[1] = v9;
    v17 = _mm_loadu_si128((const __m128i *)&v45[8]);
    *(_QWORD *)v45 = v16;
    *(_QWORD *)&v45[16] = v53.m128i_i64[1];
    v53 = v17;
  }
  if ( v16 )
  {
    *(_QWORD *)&v45[8] = 0;
    qfree(v16);
  }
  if ( a3 )
  {
    v18 = 0;
    if ( v6 >= (_BYTE *)&v56 + 2 )
    {
      v18 = (__int16)v56;
      v4 = (int *)((char *)&v56 + 2);
    }
LABEL_26:
    if ( a4 != 3 )
      goto LABEL_27;
    if ( v6 >= (_BYTE *)v4 + 4 )
    {
      v38 = *v4;
      if ( v6 < (_BYTE *)v4 + 8 )
      {
        ++v4;
        v34 = 0;
      }
      else
      {
        v34 = v4[1];
        v4 += 2;
      }
      goto LABEL_74;
    }
LABEL_76:
    v38 = 0;
    v34 = 0;
LABEL_74:
    v35 = qalloc_or_throw(24, v9);
    *(_DWORD *)(v35 + 8) = v18;
    v19 = (char *)v35;
    *(_QWORD *)v35 = off_2AFE250;
    *(_DWORD *)(v35 + 16) = v34;
    *(_DWORD *)(v35 + 12) = v38;
    goto LABEL_31;
  }
  if ( v6 >= v57 )
  {
    v18 = v56;
    v4 = (int *)v57;
    goto LABEL_26;
  }
  v18 = 0;
  if ( a4 == 3 )
    goto LABEL_76;
LABEL_27:
  if ( a4 <= 3 )
  {
    if ( a4 == 1 )
    {
      v19 = (char *)qalloc_or_throw(16, v9);
      *(_QWORD *)v19 = off_2B03D60;
      v20 = v4 + 1;
      *((_QWORD *)v19 + 1) = 0;
      if ( v6 < (_BYTE *)v4 + 4 )
        goto LABEL_31;
    }
    else
    {
      v19 = (char *)qalloc_or_throw(16, v9);
      *(_QWORD *)v19 = off_2AFC770;
      v20 = v4 + 1;
      if ( v6 < (_BYTE *)v4 + 4 )
      {
LABEL_31:
        *((_DWORD *)v19 + 2) = v18;
        if ( haystack[0] )
          qfree(haystack[0]);
        haystack[0] = v19;
        v48 = 0;
        if ( v6 >= (_BYTE *)v4 + 1
          && (LOBYTE(v48) = *(_BYTE *)v4, v6 >= (_BYTE *)v4 + 5)
          && v6 >= (_BYTE *)v4 + 7
          && v6 >= (_BYTE *)v4 + 9
          && ((v22 = *(int *)((char *)v4 + 5),
               v23 = *(int *)((char *)v4 + 1),
               memset(v45, 0, sizeof(v45)),
               v47 = v22,
               v46 = v23,
               v49 = 0,
               si128 = _mm_load_si128((const __m128i *)&v45[16]),
               LODWORD(v51) = v48,
               v50 = si128,
               v48 == 1)
           || v6 >= (_BYTE *)v4 + 17 && v6 >= (_BYTE *)v4 + 25 && v6 >= (_BYTE *)v4 + 33) )
        {
          sub_4A1B60(v40, v41, (__int64)&v49, 0);
          v19 = haystack[0];
          v25 = 1;
        }
        else
        {
          v25 = 0;
        }
        goto LABEL_55;
      }
    }
    v21 = *v4;
    v4 = v20;
    *((_DWORD *)v19 + 3) = v21;
    goto LABEL_31;
  }
  if ( a4 == 4 )
  {
    v32 = qalloc_or_throw(24, v9);
    *(_DWORD *)(v32 + 8) = 0;
    v19 = (char *)v32;
    *(_QWORD *)v32 = off_2B08C90;
    *(_DWORD *)(v32 + 20) = -1;
    *(_QWORD *)(v32 + 12) = 0xFFFFFFFF00000000LL;
    v33 = -1;
    if ( v6 >= (_BYTE *)v4 + 4 )
    {
      *((_DWORD *)v19 + 3) = *v4;
      if ( v6 < (_BYTE *)v4 + 8 )
      {
        ++v4;
      }
      else
      {
        v33 = v4[1];
        v4 += 2;
        *((_DWORD *)v19 + 4) = v33;
      }
    }
    *((_DWORD *)v19 + 5) = v33;
    goto LABEL_31;
  }
  v19 = haystack[0];
  v25 = 0;
LABEL_55:
  if ( v19 )
  {
    qfree(v19);
    haystack[0] = nullptr;
  }
  if ( haystack[1] )
  {
    v53.m128i_i64[0] = 0;
    qfree(haystack[1]);
    haystack[1] = nullptr;
    v53.m128i_i64[1] = 0;
  }
  if ( v54 )
  {
    *(_QWORD *)&v55 = 0;
    qfree(v54);
  }
  if ( haystack[1] )
  {
    v53.m128i_i64[0] = 0;
    qfree(haystack[1]);
  }
  if ( haystack[0] )
    qfree(haystack[0]);
  return v25;
}

