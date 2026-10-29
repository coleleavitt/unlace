_BYTE *__fastcall sub_7137E0(__int64 a1, __int64 a2, __int64 a3)
{
  char **v3; // rbp
  __int64 v4; // rdx
  char **exception; // rbp
  __int64 v6; // rdx
  __int64 v8; // rax
  int v9; // r12d
  _QWORD *v10; // rdx
  int v11; // eax
  __int64 v12; // r13
  char v13; // al
  int v14; // edx
  _QWORD *v15; // r14
  __int16 v16; // dx
  __int64 v17; // rax
  __int64 *v18; // rbp
  __int64 v19; // r14
  __int64 v20; // r15
  __int64 v21; // rsi
  unsigned int v22; // eax
  unsigned int v23; // r9d
  size_t v24; // rsi
  unsigned int v25; // r13d
  unsigned int *v26; // rax
  __int64 v27; // rsi
  _QWORD *v28; // rax
  _QWORD *v29; // rsi
  int v30; // eax
  _DWORD *v31; // rax
  _QWORD *v32; // rdx
  unsigned int v33; // eax
  __int64 v34; // rsi
  int v35; // eax
  _QWORD *v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rbp
  char *v39; // rax
  char *v40; // rdi
  unsigned __int64 v41; // rax
  __int64 v42; // r8
  _BYTE *v43; // rdi
  char *v44; // rcx
  char *v45; // rax
  __int64 v46; // rdx
  _BYTE *result; // rax
  __int64 v48; // rbp
  int v49; // eax
  unsigned __int64 v50; // rax
  __int64 v51; // r9
  unsigned int v52; // ebp
  size_t v53; // rsi
  unsigned int *v54; // rax
  __int64 v55; // rsi
  _QWORD *v56; // rax
  unsigned int **v58; // [rsp+10h] [rbp-F8h]
  __int64 v59; // [rsp+18h] [rbp-F0h] BYREF
  __int64 v60[4]; // [rsp+20h] [rbp-E8h] BYREF
  void *v61; // [rsp+40h] [rbp-C8h]
  __int64 v62; // [rsp+48h] [rbp-C0h]
  _BYTE v63[184]; // [rsp+50h] [rbp-B8h] BYREF

  v59 = a2;
  v61 = v63;
  v62 = 0x1000000000LL;
  v8 = *(_QWORD *)(a1 + 160);
  if ( v8 )
    v9 = *(_DWORD *)(v8 - 4);
  else
    v9 = 0;
  v58 = (unsigned int **)(a1 + 160);
  sub_712A90((_QWORD *)(a1 + 160), &v59);
LABEL_4:
  v10 = *(_QWORD **)(a1 + 160);
LABEL_5:
  v11 = 0;
  if ( !v10 )
    goto LABEL_7;
  while ( 1 )
  {
    v11 = *((_DWORD *)v10 - 1);
LABEL_7:
    if ( v9 == v11 )
      break;
    v12 = v10[v11 - 1];
    --*((_DWORD *)v10 - 1);
    v13 = *(_BYTE *)(v12 + 6);
    if ( (v13 & 1) == 0 && *(_WORD *)(v12 + 4) != 1 )
    {
      *(_BYTE *)(v12 + 6) = v13 | 1;
      v14 = v62;
      if ( (unsigned int)v62 >= HIDWORD(v62) )
      {
        v38 = (unsigned int)(2 * HIDWORD(v62));
        v39 = (char *)sub_186B270(8 * v38);
        v14 = v62;
        v40 = (char *)v61;
        v15 = v39;
        if ( (_DWORD)v62 )
        {
          if ( (unsigned int)(v62 - 1) <= 2 || v39 == (char *)v61 + 8 )
          {
            v50 = 0;
            v51 = 8LL * (unsigned int)v62;
            do
            {
              v15[v50 / 8] = *(_QWORD *)&v40[v50];
              v50 += 8LL;
            }
            while ( v51 != v50 );
          }
          else
          {
            v41 = 0;
            v42 = 16LL * ((unsigned int)v62 >> 1);
            do
            {
              *(__m128i *)&v15[v41 / 8] = _mm_loadu_si128((const __m128i *)&v40[v41]);
              v41 += 16LL;
            }
            while ( v41 != v42 );
            if ( (v14 & 1) != 0 )
              v15[v14 & 0xFFFFFFFE] = *(_QWORD *)&v40[8 * (v14 & 0xFFFFFFFE)];
          }
        }
        if ( v40 != v63 && v40 )
        {
          sub_186B220(v40);
          v14 = v62;
        }
        v61 = v15;
        HIDWORD(v62) = v38;
      }
      else
      {
        v15 = v61;
      }
      v15[v14] = v12;
      LODWORD(v62) = v14 + 1;
      v16 = *(_WORD *)(v12 + 4);
      if ( v16 == 2 )
      {
        v10 = *(_QWORD **)(a1 + 160);
        v48 = *(_QWORD *)(v12 + 24);
        if ( !v10 || (v49 = *((_DWORD *)v10 - 1), v49 == *((_DWORD *)v10 - 2)) )
        {
          sub_23A6F0(v58);
          v10 = *(_QWORD **)(a1 + 160);
          v49 = *((_DWORD *)v10 - 1);
        }
        v10[v49] = v48;
        *((_DWORD *)v10 - 1) = v49 + 1;
      }
      else
      {
        v17 = *(unsigned int *)(v12 + 24);
        if ( !v16 )
        {
          if ( (_DWORD)v17 )
          {
            v18 = (__int64 *)(v12 + 32);
            v10 = *(_QWORD **)(a1 + 160);
            v19 = v12 + 32 + 8 * v17;
            goto LABEL_16;
          }
          v31 = *(_DWORD **)(*(_QWORD *)(v12 + 16) + 24LL);
          if ( v31 && *v31 != -1 )
            goto LABEL_4;
          ++*(_DWORD *)(v12 + 8);
          v32 = *(_QWORD **)(a3 + 8);
          if ( v32 )
          {
            v33 = *((_DWORD *)v32 - 1);
            if ( v33 == *((_DWORD *)v32 - 2) )
            {
              v52 = (3 * v33 + 1) >> 1;
              v53 = 8 * v52 + 8;
              if ( 8 * v33 + 8 >= (unsigned int)v53 || v33 >= v52 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_109F38(v60, "Overflow encountered when expanding vector", v6);
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v60);
                sub_233E40((__int64)v60);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v54 = (unsigned int *)sub_186B300(v32 - 1, v53);
              v55 = v54[1];
              v32 = v54 + 2;
              *v54 = v52;
              LODWORD(v54) = v55;
              *(_QWORD *)(a3 + 8) = v32;
              v36 = &v32[v55];
              v35 = (_DWORD)v54 + 1;
            }
            else
            {
              v34 = v33;
              v35 = v33 + 1;
              v36 = &v32[v34];
            }
          }
          else
          {
            v56 = (_QWORD *)sub_186B270(0x18u);
            *v56 = 2;
            v32 = v56 + 1;
            *(_QWORD *)(a3 + 8) = v56 + 1;
            v36 = v56 + 1;
            v35 = 1;
          }
          *v36 = v12;
          *((_DWORD *)v32 - 1) = v35;
          v17 = *(unsigned int *)(v12 + 24);
        }
        v18 = (__int64 *)(v12 + 32);
        v37 = 8 * v17;
        v10 = *(_QWORD **)(a1 + 160);
        v19 = v12 + 32 + v37;
        if ( !v37 )
          goto LABEL_5;
LABEL_16:
        v20 = *v18;
        if ( !v10 )
        {
          v28 = (_QWORD *)sub_186B270(0x18u);
          v10 = v28 + 1;
          *(_QWORD *)(a1 + 160) = v28 + 1;
          v29 = v28 + 1;
          *v28 = 2;
          v30 = 1;
          goto LABEL_19;
        }
        while ( 1 )
        {
          v22 = *((_DWORD *)v10 - 1);
          if ( v22 == *((_DWORD *)v10 - 2) )
          {
            v23 = (3 * v22 + 1) >> 1;
            v24 = 8 * v23 + 8;
            v25 = v23;
            if ( 8 * v22 + 8 >= (unsigned int)v24 || v22 >= v23 )
            {
              v3 = (char **)__cxa_allocate_exception(0x28u);
              sub_109F38(v60, "Overflow encountered when expanding vector", v4);
              *v3 = (char *)off_1C63128;
              sub_2333C0(v3 + 1, v60);
              sub_233E40((__int64)v60);
              __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v26 = (unsigned int *)sub_186B300(v10 - 1, v24);
            v27 = v26[1];
            v10 = v26 + 2;
            *v26 = v25;
            *(_QWORD *)(a1 + 160) = v26 + 2;
            LODWORD(v26) = v27;
            v29 = &v10[v27];
            v30 = (_DWORD)v26 + 1;
          }
          else
          {
            v21 = v22;
            v30 = v22 + 1;
            v29 = &v10[v21];
          }
LABEL_19:
          ++v18;
          *v29 = v20;
          *((_DWORD *)v10 - 1) = v30;
          if ( v18 == (__int64 *)v19 )
            break;
          v20 = *v18;
        }
      }
    }
  }
  v43 = v61;
  v44 = (char *)v61 + 8 * (unsigned int)v62;
  v45 = (char *)v61;
  if ( v61 != v44 )
  {
    do
    {
      v46 = *(_QWORD *)v45;
      v45 += 8;
      *(_BYTE *)(v46 + 6) &= ~1u;
    }
    while ( v44 != v45 );
  }
  result = v63;
  LODWORD(v62) = 0;
  if ( v43 != v63 && v43 )
    return (_BYTE *)sub_186B220(v43);
  return result;
}

