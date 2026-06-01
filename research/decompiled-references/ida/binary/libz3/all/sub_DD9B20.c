__int64 __fastcall sub_DD9B20(__int64 a1)
{
  char **v1; // rbp
  char **v2; // rbp
  _QWORD *v3; // rbx
  char **v4; // rbp
  unsigned __int64 v5; // xmm0_8
  char **exception; // rbp
  __int64 v8; // rax
  char v9; // r13
  __int64 v10; // rdi
  __int64 v11; // rax
  _BYTE *v12; // rdi
  unsigned int v13; // eax
  _QWORD *v14; // rax
  unsigned int v15; // r14d
  size_t v16; // rsi
  unsigned int *v17; // rax
  _DWORD *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rax
  _BYTE *v22; // rdi
  char v23; // al
  char v24; // al
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  _BYTE *v28; // rax
  unsigned int v30; // r13d
  size_t v31; // rsi
  unsigned int *v32; // rax
  _DWORD *v33; // rdi
  __int64 v34; // rax
  _QWORD *v35; // rax
  unsigned int v36; // ebp
  unsigned int *v37; // rdx
  _DWORD *v38; // rax
  __int64 v39; // rdx
  _QWORD *v40; // rax
  __int64 v41[9]; // [rsp+10h] [rbp-48h] BYREF

  sub_DD7C60(a1);
  v8 = *(_QWORD *)(a1 + 1368);
  if ( v8 )
    *(_DWORD *)(v8 - 4) = 0;
  v9 = *(_BYTE *)(a1 + 16);
  if ( *(_BYTE *)(a1 + 17) )
    goto LABEL_45;
  while ( v9 == 10 )
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)(a1 + 1368);
      ++*(_DWORD *)(a1 + 20);
      *(_DWORD *)(a1 + 12) = 0;
      if ( v10 )
        goto LABEL_7;
LABEL_15:
      v14 = (_QWORD *)sub_186B270(0xAu);
      *v14 = 2;
      v12 = v14 + 1;
      *(_QWORD *)(a1 + 1368) = v14 + 1;
LABEL_9:
      *v12 = v9;
      ++*(_DWORD *)(*(_QWORD *)(a1 + 1368) - 4LL);
      if ( *(_BYTE *)(a1 + 1384) )
      {
        v20 = *(_QWORD *)(a1 + 1392);
        if ( v20 )
        {
          v21 = *(unsigned int *)(v20 - 4);
          if ( (_DWORD)v21 == *(_DWORD *)(v20 - 8) )
          {
            v30 = (unsigned int)(3 * v21 + 1) >> 1;
            v31 = v30 + 8;
            if ( (int)v21 + 8 >= (unsigned int)v31 || (unsigned int)v21 >= v30 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v41, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v41);
              sub_233E40((__int64)v41);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v32 = (unsigned int *)sub_186B300((void *)(v20 - 8), v31);
            v33 = v32 + 2;
            *v32 = v30;
            v34 = v32[1];
            *(_QWORD *)(a1 + 1392) = v33;
            v22 = (char *)v33 + v34;
          }
          else
          {
            v22 = (_BYTE *)(v21 + v20);
          }
        }
        else
        {
          v35 = (_QWORD *)sub_186B270(0xAu);
          *v35 = 2;
          v22 = v35 + 1;
          *(_QWORD *)(a1 + 1392) = v35 + 1;
        }
        *v22 = *(_BYTE *)(a1 + 16);
        ++*(_DWORD *)(*(_QWORD *)(a1 + 1392) - 4LL);
      }
      if ( *(_BYTE *)(a1 + 17) )
      {
        v3 = __cxa_allocate_exception(0x30u);
        sub_305660(v3, "unexpected end of file");
        __cxa_throw(v3, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
      }
      if ( *(_BYTE *)(a1 + 8) )
      {
        v23 = std::istream::get(*(std::istream **)(a1 + 1376));
        *(_BYTE *)(a1 + 16) = v23;
        v9 = v23;
        if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1376) + *(_QWORD *)(**(_QWORD **)(a1 + 1376) - 24LL) + 32LL) & 2) == 0 )
          goto LABEL_24;
LABEL_44:
        ++*(_DWORD *)(a1 + 12);
        *(_BYTE *)(a1 + 17) = 1;
        goto LABEL_45;
      }
      v13 = *(_DWORD *)(a1 + 1356);
      if ( v13 >= *(_DWORD *)(a1 + 1360) )
        break;
      v9 = *(_BYTE *)(a1 + v13 + 332);
      ++*(_DWORD *)(a1 + 12);
      *(_DWORD *)(a1 + 1356) = v13 + 1;
      *(_BYTE *)(a1 + 16) = v9;
      if ( v9 != 10 )
        goto LABEL_5;
    }
    std::istream::read(*(std::istream **)(a1 + 1376), (char *)(a1 + 332), 1024);
    v25 = *(_QWORD *)(*(_QWORD *)(a1 + 1376) + 8LL);
    *(_DWORD *)(a1 + 1356) = 0;
    *(_DWORD *)(a1 + 1360) = v25;
    if ( !(_DWORD)v25 )
      goto LABEL_44;
    v9 = *(_BYTE *)(a1 + 332);
    *(_DWORD *)(a1 + 1356) = 1;
    *(_BYTE *)(a1 + 16) = v9;
LABEL_24:
    v24 = *(_BYTE *)(a1 + 17);
    ++*(_DWORD *)(a1 + 12);
    if ( v24 )
    {
LABEL_45:
      v4 = (char **)__cxa_allocate_exception(0x30u);
      v5 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(a1 + 20)), _mm_cvtsi32_si128(*(_DWORD *)(a1 + 12))).m128i_u64[0];
      sub_24ABB0(v41, "unexpected end of string");
      *v4 = (char *)off_1C63128;
      sub_2333C0(v4 + 1, v41);
      v4[5] = (char *)v5;
      *v4 = (char *)off_1C64218;
      sub_233E40((__int64)v41);
      __cxa_throw(v4, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
    }
  }
LABEL_5:
  if ( v9 != 34 || (sub_DD7C60(a1), *(_BYTE *)(a1 + 16) == 34) )
  {
    v10 = *(_QWORD *)(a1 + 1368);
    if ( !v10 )
      goto LABEL_15;
LABEL_7:
    v11 = *(unsigned int *)(v10 - 4);
    if ( (_DWORD)v11 == *(_DWORD *)(v10 - 8) )
    {
      v15 = (unsigned int)(3 * v11 + 1) >> 1;
      v16 = v15 + 8;
      if ( (int)v11 + 8 >= (unsigned int)v16 || (unsigned int)v11 >= v15 )
      {
        v2 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v41, "Overflow encountered when expanding vector");
        *v2 = (char *)off_1C63128;
        sub_2333C0(v2 + 1, v41);
        sub_233E40((__int64)v41);
        __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v17 = (unsigned int *)sub_186B300((void *)(v10 - 8), v16);
      v18 = v17 + 2;
      *v17 = v15;
      v19 = v17[1];
      *(_QWORD *)(a1 + 1368) = v18;
      v12 = (char *)v18 + v19;
    }
    else
    {
      v12 = (_BYTE *)(v11 + v10);
    }
    goto LABEL_9;
  }
  v26 = *(_QWORD *)(a1 + 1368);
  if ( v26 )
  {
    v27 = *(unsigned int *)(v26 - 4);
    if ( (_DWORD)v27 == *(_DWORD *)(v26 - 8) )
    {
      v36 = (unsigned int)(3 * v27 + 1) >> 1;
      if ( (int)v27 + 8 >= v36 + 8 || (unsigned int)v27 >= v36 )
      {
        v1 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v41, "Overflow encountered when expanding vector");
        *v1 = (char *)off_1C63128;
        sub_2333C0(v1 + 1, v41);
        sub_233E40((__int64)v41);
        __cxa_throw(v1, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v37 = (unsigned int *)sub_186B300((void *)(v26 - 8), v36 + 8);
      v38 = v37 + 2;
      *v37 = v36;
      v39 = v37[1];
      *(_QWORD *)(a1 + 1368) = v38;
      v28 = (char *)v38 + v39;
    }
    else
    {
      v28 = (_BYTE *)(v27 + v26);
    }
  }
  else
  {
    v40 = (_QWORD *)sub_186B270(0xAu);
    *v40 = 2;
    v28 = v40 + 1;
    *(_QWORD *)(a1 + 1368) = v28;
  }
  *v28 = 0;
  ++*(_DWORD *)(*(_QWORD *)(a1 + 1368) - 4LL);
  return 5;
}

