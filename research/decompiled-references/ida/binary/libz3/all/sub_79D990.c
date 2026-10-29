__int64 __fastcall sub_79D990(__int64 a1, __int64 a2)
{
  char **exception; // r12
  char **v3; // r12
  _QWORD *v6; // rdx
  unsigned int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  _QWORD *v10; // rcx
  unsigned int v11; // r12d
  int v12; // eax
  __int64 v13; // rcx
  unsigned int *v14; // r14
  char v15; // al
  unsigned int v16; // ecx
  _QWORD *v17; // r15
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // eax
  _BYTE *v22; // rdi
  char *v23; // rcx
  char *v24; // rax
  __int64 v25; // rdx
  unsigned int v27; // r13d
  size_t v28; // rsi
  unsigned int *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r13
  char *v32; // rax
  char *v33; // rdi
  __int64 v34; // rax
  unsigned int *v35; // r13
  __int64 v36; // rax
  unsigned int *v37; // r15
  __int64 v38; // r14
  __int64 v39; // rcx
  unsigned int v40; // eax
  unsigned int v41; // ecx
  size_t v42; // rsi
  unsigned int *v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // rax
  _QWORD *v46; // rdx
  int v47; // eax
  _QWORD *v48; // rcx
  unsigned int v49; // [rsp+Ch] [rbp-FCh]
  __int64 v50[4]; // [rsp+20h] [rbp-E8h] BYREF
  void *v51; // [rsp+40h] [rbp-C8h]
  __int64 v52; // [rsp+48h] [rbp-C0h]
  _BYTE v53[184]; // [rsp+50h] [rbp-B8h] BYREF

  v6 = *(_QWORD **)(a1 + 2320);
  v51 = v53;
  v52 = 0x1000000000LL;
  if ( v6 )
  {
    v7 = *((_DWORD *)v6 - 1);
    if ( v7 == *((_DWORD *)v6 - 2) )
    {
      v27 = (3 * v7 + 1) >> 1;
      v28 = 8 * v27 + 8;
      if ( 8 * v7 + 8 >= (unsigned int)v28 || v7 >= v27 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v50, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v50);
        sub_233E40((__int64)v50);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v29 = (unsigned int *)sub_186B300(v6 - 1, v28);
      v30 = v29[1];
      v6 = v29 + 2;
      *v29 = v27;
      *(_QWORD *)(a1 + 2320) = v29 + 2;
      LODWORD(v29) = v30;
      v10 = &v6[v30];
      v9 = (_DWORD)v29 + 1;
    }
    else
    {
      v8 = v7;
      v9 = v7 + 1;
      v10 = &v6[v8];
    }
  }
  else
  {
    v44 = (_QWORD *)sub_186B270(0x18u);
    v6 = v44 + 1;
    *v44 = 2;
    v9 = 1;
    *(_QWORD *)(a1 + 2320) = v6;
    v10 = v6;
  }
  *v10 = a2;
  v11 = 0;
  *((_DWORD *)v6 - 1) = v9;
  while ( 1 )
  {
    v12 = *((_DWORD *)v6 - 1);
    if ( !v12 )
      break;
    v13 = (unsigned int)(v12 - 1);
    v14 = (unsigned int *)v6[v13];
    *((_DWORD *)v6 - 1) = v13;
    v15 = *((_BYTE *)v14 + 6);
    if ( (v15 & 1) == 0 )
    {
      *((_BYTE *)v14 + 6) = v15 | 1;
      v16 = v52;
      if ( (unsigned int)v52 >= HIDWORD(v52) )
      {
        v31 = (unsigned int)(2 * HIDWORD(v52));
        v32 = (char *)sub_186B270(8 * v31);
        v16 = v52;
        v33 = (char *)v51;
        v17 = v32;
        if ( (_DWORD)v52 )
        {
          if ( (unsigned int)(v52 - 1) <= 2 || v32 == (char *)v51 + 8 )
          {
            v45 = 0;
            do
            {
              v17[v45] = *(_QWORD *)&v33[v45 * 8];
              ++v45;
            }
            while ( v16 != v45 );
          }
          else
          {
            v34 = 0;
            do
            {
              *(__m128i *)&v17[v34] = _mm_loadu_si128((const __m128i *)&v33[v34 * 8]);
              v34 += 2;
            }
            while ( v34 != 2LL * (v16 >> 1) );
            if ( (v16 & 1) != 0 )
              v17[v16 & 0xFFFFFFFE] = *(_QWORD *)&v33[8 * (v16 & 0xFFFFFFFE)];
          }
        }
        if ( v33 != v53 && v33 )
        {
          sub_186B220(v33);
          v16 = v52;
        }
        v51 = v17;
        v6 = *(_QWORD **)(a1 + 2320);
        HIDWORD(v52) = v31;
      }
      else
      {
        v17 = v51;
      }
      v17[v16] = v14;
      v18 = *(_QWORD *)(a1 + 1720);
      LODWORD(v52) = v16 + 1;
      if ( v18 )
      {
        v19 = *v14;
        if ( (unsigned int)v19 < *(_DWORD *)(v18 - 4) )
        {
          v20 = *(_QWORD *)(v18 + 8 * v19);
          if ( v20 )
          {
            v21 = *(_DWORD *)(v20 + 40);
            if ( v11 < v21 )
              v11 = v21;
            goto LABEL_14;
          }
        }
      }
      if ( *((_WORD *)v14 + 2) || (v35 = v14 + 8, v36 = 2LL * v14[6], v37 = &v14[v36 + 8], !(v36 * 4)) )
      {
LABEL_14:
        if ( !v6 )
          break;
      }
      else
      {
        v38 = *((_QWORD *)v14 + 4);
        if ( !v6 )
        {
          v46 = (_QWORD *)sub_186B270(0x18u);
          *v46 = 2;
          v47 = 1;
          v6 = v46 + 1;
          *(_QWORD *)(a1 + 2320) = v6;
          v48 = v6;
          goto LABEL_40;
        }
        while ( 1 )
        {
          v40 = *((_DWORD *)v6 - 1);
          if ( v40 == *((_DWORD *)v6 - 2) )
          {
            v41 = (3 * v40 + 1) >> 1;
            v42 = 8 * v41 + 8;
            if ( 8 * v40 + 8 >= (unsigned int)v42 || v40 >= v41 )
            {
              v3 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v50, "Overflow encountered when expanding vector");
              *v3 = (char *)off_1C63128;
              sub_2333C0(v3 + 1, v50);
              sub_233E40((__int64)v50);
              __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v49 = (3 * v40 + 1) >> 1;
            v43 = (unsigned int *)sub_186B300(v6 - 1, v42);
            v6 = v43 + 2;
            *(_QWORD *)(a1 + 2320) = v43 + 2;
            *v43 = v49;
            LODWORD(v43) = v43[1];
            v48 = &v6[(unsigned int)v43];
            v47 = (_DWORD)v43 + 1;
          }
          else
          {
            v39 = v40;
            v47 = v40 + 1;
            v48 = &v6[v39];
          }
LABEL_40:
          v35 += 2;
          *v48 = v38;
          *((_DWORD *)v6 - 1) = v47;
          if ( v37 == v35 )
            break;
          v38 = *(_QWORD *)v35;
        }
      }
    }
  }
  v22 = v51;
  v23 = (char *)v51 + 8 * (unsigned int)v52;
  v24 = (char *)v51;
  if ( v51 != v23 )
  {
    do
    {
      v25 = *(_QWORD *)v24;
      v24 += 8;
      *(_BYTE *)(v25 + 6) &= ~1u;
    }
    while ( v23 != v24 );
  }
  LODWORD(v52) = 0;
  if ( v22 && v22 != v53 )
    sub_186B220(v22);
  return v11;
}

