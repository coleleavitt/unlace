__int64 __fastcall sub_DD9E90(__int64 a1)
{
  char **v1; // rbp
  char **exception; // rbp
  char **v3; // rbp
  unsigned __int64 v4; // xmm0_8
  char **v5; // rbp
  char **v6; // rbp
  _QWORD *v7; // rbx
  __int64 v9; // rax
  char v10; // r12
  char v11; // r13
  __int64 v12; // rdi
  unsigned int v13; // eax
  _BYTE *v14; // rdi
  unsigned int v15; // eax
  _QWORD *v16; // rax
  char v17; // al
  char v18; // al
  __int64 v19; // rdi
  __int64 v20; // rax
  _BYTE *v21; // rdi
  unsigned int v22; // r13d
  size_t v23; // rsi
  unsigned int *v24; // rax
  _DWORD *v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  _BYTE *v29; // rax
  __int64 v30; // rsi
  __int64 v32; // rax
  unsigned int v33; // r12d
  size_t v34; // rsi
  unsigned int *v35; // rax
  _DWORD *v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rdi
  __int64 v39; // rax
  _BYTE *v40; // rdi
  unsigned int v41; // r13d
  size_t v42; // rsi
  unsigned int *v43; // rax
  _DWORD *v44; // rdi
  __int64 v45; // rax
  _QWORD *v46; // rax
  unsigned int v47; // ebp
  unsigned int *v48; // rdx
  _DWORD *v49; // rax
  __int64 v50; // rdx
  _QWORD *v51; // rax
  _QWORD *v52; // rax
  __int64 v53[9]; // [rsp+10h] [rbp-48h] BYREF

  v9 = *(_QWORD *)(a1 + 1368);
  if ( v9 )
    *(_DWORD *)(v9 - 4) = 0;
  sub_DD7C60(a1);
  v10 = *(_BYTE *)(a1 + 16);
  if ( *(_BYTE *)(a1 + 17) )
    goto LABEL_59;
  v11 = 0;
LABEL_5:
  if ( v10 == 10 )
  {
    while ( 1 )
    {
      v12 = *(_QWORD *)(a1 + 1368);
      ++*(_DWORD *)(a1 + 20);
      *(_DWORD *)(a1 + 12) = 0;
      if ( v12 )
        goto LABEL_10;
LABEL_20:
      v16 = (_QWORD *)sub_186B270(0xAu);
      *v16 = 2;
      v14 = v16 + 1;
      *(_QWORD *)(a1 + 1368) = v16 + 1;
LABEL_13:
      *v14 = v10;
      v11 = 0;
      ++*(_DWORD *)(*(_QWORD *)(a1 + 1368) - 4LL);
LABEL_14:
      if ( *(_BYTE *)(a1 + 1384) )
      {
        v19 = *(_QWORD *)(a1 + 1392);
        if ( v19 )
        {
          v20 = *(unsigned int *)(v19 - 4);
          if ( (_DWORD)v20 == *(_DWORD *)(v19 - 8) )
          {
            v33 = (unsigned int)(3 * v20 + 1) >> 1;
            v34 = v33 + 8;
            if ( (int)v20 + 8 >= (unsigned int)v34 || (unsigned int)v20 >= v33 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v53, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v53);
              sub_233E40((__int64)v53);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v35 = (unsigned int *)sub_186B300((void *)(v19 - 8), v34);
            v36 = v35 + 2;
            *v35 = v33;
            v37 = v35[1];
            *(_QWORD *)(a1 + 1392) = v36;
            v21 = (char *)v36 + v37;
          }
          else
          {
            v21 = (_BYTE *)(v20 + v19);
          }
        }
        else
        {
          v46 = (_QWORD *)sub_186B270(0xAu);
          *v46 = 2;
          v21 = v46 + 1;
          *(_QWORD *)(a1 + 1392) = v46 + 1;
        }
        *v21 = *(_BYTE *)(a1 + 16);
        ++*(_DWORD *)(*(_QWORD *)(a1 + 1392) - 4LL);
      }
      if ( *(_BYTE *)(a1 + 17) )
      {
        v7 = __cxa_allocate_exception(0x30u);
        sub_305660(v7, "unexpected end of file");
        __cxa_throw(v7, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
      }
      if ( *(_BYTE *)(a1 + 8) )
        break;
      v15 = *(_DWORD *)(a1 + 1356);
      if ( v15 >= *(_DWORD *)(a1 + 1360) )
      {
        std::istream::read(*(std::istream **)(a1 + 1376), (char *)(a1 + 332), 1024);
        v32 = *(_QWORD *)(*(_QWORD *)(a1 + 1376) + 8LL);
        *(_DWORD *)(a1 + 1356) = 0;
        *(_DWORD *)(a1 + 1360) = v32;
        if ( (_DWORD)v32 )
        {
          v10 = *(_BYTE *)(a1 + 332);
          *(_DWORD *)(a1 + 1356) = 1;
          *(_BYTE *)(a1 + 16) = v10;
LABEL_22:
          v18 = *(_BYTE *)(a1 + 17);
          ++*(_DWORD *)(a1 + 12);
          if ( v18 )
          {
LABEL_59:
            v3 = (char **)__cxa_allocate_exception(0x30u);
            v4 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(a1 + 20)), _mm_cvtsi32_si128(*(_DWORD *)(a1 + 12))).m128i_u64[0];
            sub_24ABB0(v53, "unexpected end of quoted symbol");
            *v3 = (char *)off_1C63128;
            sub_2333C0(v3 + 1, v53);
            v3[5] = (char *)v4;
            *v3 = (char *)off_1C64218;
            sub_233E40((__int64)v53);
            __cxa_throw(v3, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
          }
          goto LABEL_5;
        }
LABEL_58:
        ++*(_DWORD *)(a1 + 12);
        *(_BYTE *)(a1 + 17) = 1;
        goto LABEL_59;
      }
      v10 = *(_BYTE *)(a1 + v15 + 332);
      ++*(_DWORD *)(a1 + 12);
      *(_DWORD *)(a1 + 1356) = v15 + 1;
      *(_BYTE *)(a1 + 16) = v10;
      if ( v10 != 10 )
        goto LABEL_6;
    }
    v17 = std::istream::get(*(std::istream **)(a1 + 1376));
    *(_BYTE *)(a1 + 16) = v17;
    v10 = v17;
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1376) + *(_QWORD *)(**(_QWORD **)(a1 + 1376) - 24LL) + 32LL) & 2) == 0 )
      goto LABEL_22;
    goto LABEL_58;
  }
LABEL_6:
  if ( v10 != 124 )
  {
    if ( v10 == 92 )
    {
      if ( !v11 )
      {
        v11 = 1;
        goto LABEL_14;
      }
    }
    else if ( v11 )
    {
      v38 = *(_QWORD *)(a1 + 1368);
      if ( v38 )
      {
        v39 = *(unsigned int *)(v38 - 4);
        if ( (_DWORD)v39 == *(_DWORD *)(v38 - 8) )
        {
          v41 = (unsigned int)(3 * v39 + 1) >> 1;
          v42 = v41 + 8;
          if ( (int)v39 + 8 >= (unsigned int)v42 || (unsigned int)v39 >= v41 )
          {
            v5 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v53, "Overflow encountered when expanding vector");
            *v5 = (char *)off_1C63128;
            sub_2333C0(v5 + 1, v53);
            sub_233E40((__int64)v53);
            __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v43 = (unsigned int *)sub_186B300((void *)(v38 - 8), v42);
          v44 = v43 + 2;
          *v43 = v41;
          v45 = v43[1];
          *(_QWORD *)(a1 + 1368) = v44;
          v40 = (char *)v44 + v45;
        }
        else
        {
          v40 = (_BYTE *)(v39 + v38);
        }
      }
      else
      {
        v51 = (_QWORD *)sub_186B270(0xAu);
        *v51 = 2;
        v40 = v51 + 1;
        *(_QWORD *)(a1 + 1368) = v51 + 1;
      }
      *v40 = 92;
      v12 = *(_QWORD *)(a1 + 1368);
      v13 = *(_DWORD *)(v12 - 4) + 1;
      *(_DWORD *)(v12 - 4) = v13;
      goto LABEL_11;
    }
LABEL_9:
    v12 = *(_QWORD *)(a1 + 1368);
    if ( !v12 )
      goto LABEL_20;
LABEL_10:
    v13 = *(_DWORD *)(v12 - 4);
LABEL_11:
    if ( *(_DWORD *)(v12 - 8) == v13 )
    {
      v22 = (3 * v13 + 1) >> 1;
      v23 = v22 + 8;
      if ( v13 + 8 >= (unsigned int)v23 || v13 >= v22 )
      {
        v6 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v53, "Overflow encountered when expanding vector");
        *v6 = (char *)off_1C63128;
        sub_2333C0(v6 + 1, v53);
        sub_233E40((__int64)v53);
        __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v24 = (unsigned int *)sub_186B300((void *)(v12 - 8), v23);
      v25 = v24 + 2;
      *v24 = v22;
      v26 = v24[1];
      *(_QWORD *)(a1 + 1368) = v25;
      v14 = (char *)v25 + v26;
    }
    else
    {
      v14 = (_BYTE *)(*(unsigned int *)(v12 - 4) + v12);
    }
    goto LABEL_13;
  }
  if ( v11 )
    goto LABEL_9;
  sub_DD7C60(a1);
  v27 = *(_QWORD *)(a1 + 1368);
  if ( v27 )
  {
    v28 = *(unsigned int *)(v27 - 4);
    if ( (_DWORD)v28 == *(_DWORD *)(v27 - 8) )
    {
      v47 = (unsigned int)(3 * v28 + 1) >> 1;
      if ( (int)v28 + 8 >= v47 + 8 || (unsigned int)v28 >= v47 )
      {
        v1 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v53, "Overflow encountered when expanding vector");
        *v1 = (char *)off_1C63128;
        sub_2333C0(v1 + 1, v53);
        sub_233E40((__int64)v53);
        __cxa_throw(v1, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v48 = (unsigned int *)sub_186B300((void *)(v27 - 8), v47 + 8);
      v49 = v48 + 2;
      *v48 = v47;
      v50 = v48[1];
      *(_QWORD *)(a1 + 1368) = v49;
      v29 = (char *)v49 + v50;
    }
    else
    {
      v29 = (_BYTE *)(v28 + v27);
    }
  }
  else
  {
    v52 = (_QWORD *)sub_186B270(0xAu);
    *v52 = 2;
    v29 = v52 + 1;
    *(_QWORD *)(a1 + 1368) = v29;
  }
  *v29 = 0;
  v30 = *(_QWORD *)(a1 + 1368);
  ++*(_DWORD *)(v30 - 4);
  sub_180C9E0(a1 + 32, v30);
  return 4;
}

