__int64 __fastcall sub_DDAC60(__int64 a1)
{
  char **v1; // rbp
  char **exception; // rbp
  _QWORD *v3; // rbx
  _BYTE *v5; // rax
  int v6; // edx
  char v7; // bp
  unsigned int v8; // eax
  char v9; // dl
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  _BYTE *v14; // rdi
  _QWORD *v15; // rax
  char v16; // al
  unsigned int v17; // ebp
  size_t v18; // rsi
  unsigned int *v19; // rax
  _DWORD *v20; // rdi
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23[7]; // [rsp+10h] [rbp-38h] BYREF

  v5 = *(_BYTE **)(a1 + 1368);
  if ( v5 )
  {
    v6 = *((_DWORD *)v5 - 2);
    *((_DWORD *)v5 - 1) = 0;
    if ( !v6 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v23, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v23);
      sub_233E40((__int64)v23);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v7 = *(_BYTE *)(a1 + 16);
  }
  else
  {
    v7 = *(_BYTE *)(a1 + 16);
    v15 = (_QWORD *)sub_186B270(0xAu);
    *v15 = 2;
    v5 = v15 + 1;
    *(_QWORD *)(a1 + 1368) = v5;
  }
  *v5 = v7;
  ++*(_DWORD *)(*(_QWORD *)(a1 + 1368) - 4LL);
  if ( *(_BYTE *)(a1 + 1384) )
  {
    v12 = *(_QWORD *)(a1 + 1392);
    if ( v12 )
    {
      v13 = *(unsigned int *)(v12 - 4);
      if ( (_DWORD)v13 == *(_DWORD *)(v12 - 8) )
      {
        v17 = (unsigned int)(3 * v13 + 1) >> 1;
        v18 = v17 + 8;
        if ( (int)v13 + 8 >= (unsigned int)v18 || (unsigned int)v13 >= v17 )
        {
          v1 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v23, "Overflow encountered when expanding vector");
          *v1 = (char *)off_1C63128;
          sub_2333C0(v1 + 1, v23);
          sub_233E40((__int64)v23);
          __cxa_throw(v1, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v19 = (unsigned int *)sub_186B300((void *)(v12 - 8), v18);
        v20 = v19 + 2;
        *v19 = v17;
        v21 = v19[1];
        *(_QWORD *)(a1 + 1392) = v20;
        v14 = (char *)v20 + v21;
      }
      else
      {
        v14 = (_BYTE *)(v13 + v12);
      }
    }
    else
    {
      v22 = (_QWORD *)sub_186B270(0xAu);
      *v22 = 2;
      v14 = v22 + 1;
      *(_QWORD *)(a1 + 1392) = v22 + 1;
    }
    *v14 = *(_BYTE *)(a1 + 16);
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
    *(_BYTE *)(a1 + 16) = std::istream::get(*(std::istream **)(a1 + 1376));
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1376) + *(_QWORD *)(**(_QWORD **)(a1 + 1376) - 24LL) + 32LL) & 2) != 0 )
      *(_BYTE *)(a1 + 17) = 1;
  }
  else
  {
    v8 = *(_DWORD *)(a1 + 1356);
    if ( v8 >= *(_DWORD *)(a1 + 1360) )
    {
      std::istream::read(*(std::istream **)(a1 + 1376), (char *)(a1 + 332), 1024);
      v11 = *(_QWORD *)(*(_QWORD *)(a1 + 1376) + 8LL);
      *(_DWORD *)(a1 + 1356) = 0;
      *(_DWORD *)(a1 + 1360) = v11;
      if ( (_DWORD)v11 )
      {
        v16 = *(_BYTE *)(a1 + 332);
        *(_DWORD *)(a1 + 1356) = 1;
        *(_BYTE *)(a1 + 16) = v16;
      }
      else
      {
        *(_BYTE *)(a1 + 17) = 1;
      }
    }
    else
    {
      v9 = *(_BYTE *)(a1 + v8 + 332);
      *(_DWORD *)(a1 + 1356) = v8 + 1;
      *(_BYTE *)(a1 + 16) = v9;
    }
  }
  ++*(_DWORD *)(a1 + 12);
  return sub_DDA6F0(a1);
}

