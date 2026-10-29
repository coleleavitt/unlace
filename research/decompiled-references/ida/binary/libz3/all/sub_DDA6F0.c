__int64 __fastcall sub_DDA6F0(__int64 a1)
{
  char **v1; // rbp
  char **exception; // rbp
  char **v3; // rbp
  char **v4; // rbp
  _QWORD *v5; // rbx
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // r12
  __int64 v10; // rax
  _BYTE *v11; // rax
  unsigned int v12; // eax
  char v13; // dl
  unsigned int v14; // r13d
  size_t v15; // rsi
  unsigned int *v16; // rax
  _DWORD *v17; // rdx
  __int64 v18; // rax
  _DWORD *v19; // rdx
  __int64 v20; // rax
  __int64 v22; // rdi
  __int64 v23; // rax
  _BYTE *v24; // rdi
  __int64 v25; // rax
  char v26; // al
  char v27; // al
  unsigned int v28; // r12d
  size_t v29; // rsi
  unsigned int *v30; // rax
  _DWORD *v31; // rdi
  __int64 v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // rax
  _BYTE *v35; // rdx
  __int64 v36; // rsi
  _QWORD *v37; // rax
  __int64 v38; // rsi
  unsigned int v39; // ebp
  size_t v40; // rsi
  unsigned int *v41; // rax
  _DWORD *v42; // rdx
  __int64 v43; // rax
  unsigned int v44; // ebp
  unsigned int *v45; // rax
  _QWORD *v46; // rax
  __int64 v47[9]; // [rsp+10h] [rbp-48h] BYREF

  if ( !*(_BYTE *)(a1 + 17) )
  {
    v7 = 0x10000000000009LL;
    while ( 1 )
    {
      v8 = *(_QWORD *)(a1 + 1368);
      v9 = *(unsigned __int8 *)(a1 + 16);
      if ( (unsigned __int8)(*(_BYTE *)(a1 + v9 + 76) - 45) > 0x34u
        || !_bittest64(&v7, (unsigned int)*(unsigned __int8 *)(a1 + v9 + 76) - 45) )
      {
        if ( v8 )
        {
          v34 = *(unsigned int *)(v8 - 4);
          if ( (_DWORD)v34 == *(_DWORD *)(v8 - 8) )
          {
            v39 = (unsigned int)(3 * v34 + 1) >> 1;
            v40 = v39 + 8;
            if ( (int)v34 + 8 >= (unsigned int)v40 || (unsigned int)v34 >= v39 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v47, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v47);
              sub_233E40((__int64)v47);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v41 = (unsigned int *)sub_186B300((void *)(v8 - 8), v40);
            v42 = v41 + 2;
            *v41 = v39;
            v43 = v41[1];
            *(_QWORD *)(a1 + 1368) = v42;
            v35 = (char *)v42 + v43;
          }
          else
          {
            v35 = (_BYTE *)(v34 + v8);
          }
        }
        else
        {
          v46 = (_QWORD *)sub_186B270(0xAu);
          *v46 = 2;
          v35 = v46 + 1;
          *(_QWORD *)(a1 + 1368) = v46 + 1;
        }
        *v35 = 0;
        v36 = *(_QWORD *)(a1 + 1368);
        ++*(_DWORD *)(v36 - 4);
        sub_180C9E0(a1 + 32, v36);
        return 4;
      }
      if ( v8 )
      {
        v10 = *(unsigned int *)(v8 - 4);
        if ( (_DWORD)v10 == *(_DWORD *)(v8 - 8) )
        {
          v14 = (unsigned int)(3 * v10 + 1) >> 1;
          v15 = v14 + 8;
          if ( (int)v10 + 8 >= (unsigned int)v15 || (unsigned int)v10 >= v14 )
          {
            v3 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v47, "Overflow encountered when expanding vector");
            *v3 = (char *)off_1C63128;
            sub_2333C0(v3 + 1, v47);
            sub_233E40((__int64)v47);
            __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v16 = (unsigned int *)sub_186B300((void *)(v8 - 8), v15);
          v17 = v16 + 2;
          *v16 = v14;
          v18 = v16[1];
          *(_QWORD *)(a1 + 1368) = v17;
          v11 = (char *)v17 + v18;
        }
        else
        {
          v11 = (_BYTE *)(v8 + v10);
        }
      }
      else
      {
        v33 = (_QWORD *)sub_186B270(0xAu);
        *v33 = 2;
        v11 = v33 + 1;
        *(_QWORD *)(a1 + 1368) = v11;
      }
      *v11 = v9;
      ++*(_DWORD *)(*(_QWORD *)(a1 + 1368) - 4LL);
      if ( *(_BYTE *)(a1 + 1384) )
      {
        v22 = *(_QWORD *)(a1 + 1392);
        if ( v22 )
        {
          v23 = *(unsigned int *)(v22 - 4);
          if ( (_DWORD)v23 == *(_DWORD *)(v22 - 8) )
          {
            v28 = (unsigned int)(3 * v23 + 1) >> 1;
            v29 = v28 + 8;
            if ( (int)v23 + 8 >= (unsigned int)v29 || (unsigned int)v23 >= v28 )
            {
              v4 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v47, "Overflow encountered when expanding vector");
              *v4 = (char *)off_1C63128;
              sub_2333C0(v4 + 1, v47);
              sub_233E40((__int64)v47);
              __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v30 = (unsigned int *)sub_186B300((void *)(v22 - 8), v29);
            v31 = v30 + 2;
            *v30 = v28;
            v32 = v30[1];
            *(_QWORD *)(a1 + 1392) = v31;
            v24 = (char *)v31 + v32;
          }
          else
          {
            v24 = (_BYTE *)(v23 + v22);
          }
        }
        else
        {
          v37 = (_QWORD *)sub_186B270(0xAu);
          *v37 = 2;
          v24 = v37 + 1;
          *(_QWORD *)(a1 + 1392) = v37 + 1;
        }
        *v24 = *(_BYTE *)(a1 + 16);
        ++*(_DWORD *)(*(_QWORD *)(a1 + 1392) - 4LL);
      }
      if ( *(_BYTE *)(a1 + 17) )
      {
        v5 = __cxa_allocate_exception(0x30u);
        sub_305660(v5, "unexpected end of file");
        __cxa_throw(v5, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
      }
      if ( *(_BYTE *)(a1 + 8) )
        break;
      v12 = *(_DWORD *)(a1 + 1356);
      if ( v12 >= *(_DWORD *)(a1 + 1360) )
      {
        std::istream::read(*(std::istream **)(a1 + 1376), (char *)(a1 + 332), 1024);
        v25 = *(_QWORD *)(*(_QWORD *)(a1 + 1376) + 8LL);
        *(_DWORD *)(a1 + 1356) = 0;
        *(_DWORD *)(a1 + 1360) = v25;
        if ( !(_DWORD)v25 )
        {
LABEL_17:
          ++*(_DWORD *)(a1 + 12);
          *(_BYTE *)(a1 + 17) = 1;
          goto LABEL_18;
        }
        v26 = *(_BYTE *)(a1 + 332);
        *(_DWORD *)(a1 + 1356) = 1;
        *(_BYTE *)(a1 + 16) = v26;
LABEL_27:
        v27 = *(_BYTE *)(a1 + 17);
        ++*(_DWORD *)(a1 + 12);
        if ( v27 )
          goto LABEL_18;
      }
      else
      {
        v13 = *(_BYTE *)(a1 + v12 + 332);
        ++*(_DWORD *)(a1 + 12);
        *(_DWORD *)(a1 + 1356) = v12 + 1;
        *(_BYTE *)(a1 + 16) = v13;
      }
    }
    *(_BYTE *)(a1 + 16) = std::istream::get(*(std::istream **)(a1 + 1376));
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1376) + *(_QWORD *)(**(_QWORD **)(a1 + 1376) - 24LL) + 32LL) & 2) != 0 )
      goto LABEL_17;
    goto LABEL_27;
  }
LABEL_18:
  v19 = *(_DWORD **)(a1 + 1368);
  if ( v19 )
  {
    v20 = (unsigned int)*(v19 - 1);
    if ( (_DWORD)v20 )
    {
      if ( (_DWORD)v20 == *(v19 - 2) )
      {
        v44 = (unsigned int)(3 * v20 + 1) >> 1;
        if ( (int)v20 + 8 >= v44 + 8 || (unsigned int)v20 >= v44 )
        {
          v1 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v47, "Overflow encountered when expanding vector");
          *v1 = (char *)off_1C63128;
          sub_2333C0(v1 + 1, v47);
          sub_233E40((__int64)v47);
          __cxa_throw(v1, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v45 = (unsigned int *)sub_186B300(v19 - 2, v44 + 8);
        v19 = v45 + 2;
        *v45 = v44;
        v20 = v45[1];
        *(_QWORD *)(a1 + 1368) = v19;
      }
      *((_BYTE *)v19 + v20) = 0;
      v38 = *(_QWORD *)(a1 + 1368);
      ++*(_DWORD *)(v38 - 4);
      sub_180C9E0(a1 + 32, v38);
      return 4;
    }
  }
  return 9;
}

