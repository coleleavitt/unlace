__int64 __fastcall sub_B4F7F0(__int64 a1, unsigned int *a2, char a3)
{
  char **exception; // r13
  _BYTE *v6; // rsi
  unsigned int v7; // r8d
  __int64 v8; // r13
  _DWORD *v9; // rsi
  unsigned int v10; // edx
  __int64 v11; // rax
  int v12; // r12d
  unsigned int v13; // edx
  __int64 v14; // r14
  __int64 v15; // rax
  char *v16; // rdi
  unsigned __int64 v17; // rax
  __int64 v18; // r9
  unsigned int v19; // eax
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // rax
  char *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // r8
  unsigned int v27; // eax
  __int64 v28; // r8
  __int64 v29; // rax
  unsigned int v30; // r14d
  char *v32; // rax
  _BYTE *v33; // r8
  char *v34; // r10
  int v35; // ecx
  char *v36; // rax
  _DWORD *v37; // r9
  char *v38; // r11
  int v39; // ecx
  __int64 v40; // rcx
  unsigned int v41; // r14d
  unsigned int v42; // r12d
  __int64 v43; // r11
  unsigned int *v44; // r10
  __int64 v45; // rax
  __int64 v46; // rsi
  __int64 v47; // rdx
  unsigned int v48; // edx
  size_t v49; // rsi
  unsigned int *v50; // rax
  unsigned int v51; // eax
  __int64 v52; // rax
  __int64 v53; // rdx
  _QWORD *v54; // rax
  __int64 v55; // [rsp+8h] [rbp-128h]
  unsigned int v56; // [rsp+10h] [rbp-120h]
  unsigned int v57; // [rsp+10h] [rbp-120h]
  __int64 v59[4]; // [rsp+40h] [rbp-F0h] BYREF
  void *v60; // [rsp+60h] [rbp-D0h]
  __int64 v61; // [rsp+68h] [rbp-C8h]
  _BYTE v62[64]; // [rsp+70h] [rbp-C0h] BYREF
  void *ptr; // [rsp+B0h] [rbp-80h]
  __int64 v64; // [rsp+B8h] [rbp-78h]
  _BYTE v65[112]; // [rsp+C0h] [rbp-70h] BYREF

  v6 = v65;
  v7 = *(_DWORD *)(a1 + 168);
  v60 = v62;
  v61 = 0x1000000000LL;
  ptr = v65;
  v64 = 0x1000000000LL;
  if ( !v7 )
  {
    v40 = *(_QWORD *)(a1 + 176);
    v41 = 1;
    if ( !v40 )
      goto LABEL_71;
LABEL_51:
    v42 = *(_DWORD *)(v40 - 4);
    if ( v42 < v41 )
    {
LABEL_64:
      while ( 1 )
      {
        v51 = *(_DWORD *)(v40 - 8);
        if ( v51 >= v41 )
          break;
        v48 = (3 * v51 + 1) >> 1;
        v49 = 8 * v48 + 8;
        if ( 8 * v51 + 8 >= (unsigned int)v49 || v51 >= v48 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v59, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v59);
          sub_233E40((__int64)v59);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v56 = (3 * v51 + 1) >> 1;
        v50 = (unsigned int *)sub_186B300((void *)(v40 - 8), v49);
        v40 = (__int64)(v50 + 2);
        *(_QWORD *)(a1 + 176) = v50 + 2;
        *v50 = v56;
      }
      *(_DWORD *)(v40 - 4) = v41;
      v7 = *(_DWORD *)(a1 + 168);
      v52 = 8LL * v42;
      v53 = 8LL * v41;
      if ( v52 != v53 )
      {
        v55 = v40;
        v57 = *(_DWORD *)(a1 + 168);
        memset((void *)(v40 + v52), 0, v53 - v52);
        v40 = v55;
        v7 = v57;
      }
    }
LABEL_52:
    v30 = 0;
    while ( 1 )
    {
      if ( v7 )
      {
        v43 = *(_QWORD *)(a1 + 104);
        v44 = (unsigned int *)ptr;
        v45 = 0;
        do
        {
          v46 = *(_QWORD *)(*(_QWORD *)(v43 + 8 * v45) + 8LL * v44[v45]);
          v47 = v7 - 1 - (unsigned int)v45++;
          *(_QWORD *)(v40 + 8 * v47) = v46;
        }
        while ( v45 != v7 );
      }
      if ( !(unsigned __int8)sub_8E86C0(*(_QWORD *)a1, a2, v7, v40) )
      {
        if ( a3 )
        {
          if ( !(unsigned __int8)sub_B4F4F0(a1, (__int64)a2, 0) )
            goto LABEL_59;
        }
        else if ( (unsigned __int8)sub_B4F4F0(a1, (__int64)a2, 1u) == 1 )
        {
          goto LABEL_59;
        }
        sub_B397A0(*(_DWORD *)(a1 + 168), *(_QWORD *)(a1 + 176));
        v30 |= sub_8E86E0(*(_QWORD *)a1);
      }
LABEL_59:
      if ( !(unsigned __int8)sub_180B260((unsigned int)v61, v60, ptr) )
      {
        v6 = ptr;
        goto LABEL_37;
      }
      v7 = *(_DWORD *)(a1 + 168);
      v40 = *(_QWORD *)(a1 + 176);
    }
  }
  v8 = 0;
  while ( 1 )
  {
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 8 * v8);
    if ( !v11 )
      break;
    v12 = *(_DWORD *)(v11 - 4);
    if ( !v12 )
      break;
    v13 = v61;
    if ( (unsigned int)v61 < HIDWORD(v61) )
    {
      v9 = v60;
    }
    else
    {
      v14 = (unsigned int)(2 * HIDWORD(v61));
      v15 = sub_186B270(4 * v14);
      v13 = v61;
      v16 = (char *)v60;
      v9 = (_DWORD *)v15;
      if ( (_DWORD)v61 )
      {
        if ( (unsigned int)(v61 - 1) <= 2 || (unsigned __int64)(v15 - ((_QWORD)v60 + 4)) <= 8 )
        {
          v36 = (char *)v60;
          v37 = v9;
          v38 = (char *)v60 + 4 * (unsigned int)v61;
          do
          {
            v39 = *(_DWORD *)v36;
            v36 += 4;
            *v37++ = v39;
          }
          while ( v36 != v38 );
        }
        else
        {
          v17 = 0;
          v18 = 16LL * ((unsigned int)v61 >> 2);
          do
          {
            *(__m128i *)&v9[v17 / 4] = _mm_loadu_si128((const __m128i *)&v16[v17]);
            v17 += 16LL;
          }
          while ( v18 != v17 );
          v19 = v13 & 0xFFFFFFFC;
          if ( (v13 & 3) != 0 )
          {
            v9[v19] = *(_DWORD *)&v16[4 * v19];
            v20 = v19 + 1;
            if ( (unsigned int)v20 < v13 )
            {
              v21 = v19 + 2;
              v9[v20] = *(_DWORD *)&v16[4 * v20];
              if ( (unsigned int)v21 < v13 )
                v9[v21] = *(_DWORD *)&v16[4 * v21];
            }
          }
        }
      }
      if ( v16 != v62 && v16 )
      {
        sub_186B220(v16);
        v13 = v61;
      }
      v60 = v9;
      HIDWORD(v61) = v14;
    }
    v9[v13] = v12;
    v10 = v64;
    LODWORD(v61) = v61 + 1;
    if ( (unsigned int)v64 >= HIDWORD(v64) )
    {
      v22 = (unsigned int)(2 * HIDWORD(v64));
      v23 = sub_186B270(4 * v22);
      v10 = v64;
      v24 = (char *)ptr;
      v6 = (_BYTE *)v23;
      if ( (_DWORD)v64 )
      {
        if ( (unsigned int)(v64 - 1) <= 2 || (unsigned __int64)(v23 - ((_QWORD)ptr + 4)) <= 8 )
        {
          v32 = (char *)ptr;
          v33 = v6;
          v34 = (char *)ptr + 4 * (unsigned int)v64;
          do
          {
            v35 = *(_DWORD *)v32;
            v32 += 4;
            v33 += 4;
            *((_DWORD *)v33 - 1) = v35;
          }
          while ( v32 != v34 );
        }
        else
        {
          v25 = 0;
          v26 = 16LL * ((unsigned int)v64 >> 2);
          do
          {
            *(__m128i *)&v6[v25] = _mm_loadu_si128((const __m128i *)&v24[v25]);
            v25 += 16;
          }
          while ( v25 != v26 );
          v27 = v10 & 0xFFFFFFFC;
          if ( (v10 & 3) != 0 )
          {
            *(_DWORD *)&v6[4 * v27] = *(_DWORD *)&v24[4 * v27];
            v28 = v27 + 1;
            if ( (unsigned int)v28 < v10 )
            {
              v29 = v27 + 2;
              *(_DWORD *)&v6[4 * v28] = *(_DWORD *)&v24[4 * v28];
              if ( (unsigned int)v29 < v10 )
                *(_DWORD *)&v6[4 * v29] = *(_DWORD *)&v24[4 * v29];
            }
          }
        }
      }
      if ( v24 && v24 != v65 )
      {
        sub_186B220(v24);
        v10 = v64;
      }
      ptr = v6;
      HIDWORD(v64) = v22;
    }
    else
    {
      v6 = ptr;
    }
    ++v8;
    *(_DWORD *)&v6[4 * v10] = 0;
    v7 = *(_DWORD *)(a1 + 168);
    LODWORD(v64) = v64 + 1;
    if ( (unsigned int)v8 >= v7 )
    {
      v40 = *(_QWORD *)(a1 + 176);
      v41 = v7 + 1;
      if ( v40 )
        goto LABEL_51;
      v7 = -1;
      if ( v41 )
      {
LABEL_71:
        v54 = (_QWORD *)sub_186B270(0x18u);
        *v54 = 2;
        v42 = 0;
        v40 = (__int64)(v54 + 1);
        *(_QWORD *)(a1 + 176) = v54 + 1;
        goto LABEL_64;
      }
      goto LABEL_52;
    }
  }
  v30 = 0;
LABEL_37:
  if ( v6 && v6 != v65 )
    sub_186B220(v6);
  if ( v60 && v60 != v62 )
    sub_186B220(v60);
  return v30;
}

