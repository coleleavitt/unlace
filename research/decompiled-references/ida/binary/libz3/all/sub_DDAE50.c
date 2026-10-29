__int64 __fastcall sub_DDAE50(__int64 a1)
{
  char **v1; // rbp
  _QWORD *exception; // rbx
  unsigned int v4; // eax
  char v5; // dl
  _BYTE *v6; // rax
  int v7; // edx
  __int64 v9; // rax
  char v10; // dl
  unsigned int v11; // ebp
  __int64 v12; // rdi
  __int64 v13; // rax
  _BYTE *v14; // rdi
  char v15; // al
  _QWORD *v16; // rax
  unsigned int v17; // ebp
  size_t v18; // rsi
  unsigned int *v19; // rax
  _DWORD *v20; // rdi
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23[7]; // [rsp+10h] [rbp-38h] BYREF

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
          goto LABEL_26;
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
    exception = __cxa_allocate_exception(0x30u);
    sub_305660(exception, "unexpected end of file");
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  if ( *(_BYTE *)(a1 + 8) )
  {
    v15 = std::istream::get(*(std::istream **)(a1 + 1376));
    *(_BYTE *)(a1 + 16) = v15;
    v5 = v15;
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1376) + *(_QWORD *)(**(_QWORD **)(a1 + 1376) - 24LL) + 32LL) & 2) != 0 )
      *(_BYTE *)(a1 + 17) = 1;
  }
  else
  {
    v4 = *(_DWORD *)(a1 + 1356);
    if ( v4 >= *(_DWORD *)(a1 + 1360) )
    {
      std::istream::read(*(std::istream **)(a1 + 1376), (char *)(a1 + 332), 1024);
      v9 = *(_QWORD *)(*(_QWORD *)(a1 + 1376) + 8LL);
      *(_DWORD *)(a1 + 1356) = 0;
      *(_DWORD *)(a1 + 1360) = v9;
      if ( !(_DWORD)v9 )
      {
        v10 = *(_BYTE *)(a1 + 16);
        ++*(_DWORD *)(a1 + 12);
        *(_BYTE *)(a1 + 17) = 1;
        if ( (unsigned __int8)(v10 - 48) > 9u )
          goto LABEL_7;
        goto LABEL_12;
      }
      v5 = *(_BYTE *)(a1 + 332);
      *(_DWORD *)(a1 + 1356) = 1;
      *(_BYTE *)(a1 + 16) = v5;
    }
    else
    {
      v5 = *(_BYTE *)(a1 + v4 + 332);
      *(_DWORD *)(a1 + 1356) = v4 + 1;
      *(_BYTE *)(a1 + 16) = v5;
    }
  }
  ++*(_DWORD *)(a1 + 12);
  if ( (unsigned __int8)(v5 - 48) > 9u )
  {
LABEL_7:
    v6 = *(_BYTE **)(a1 + 1368);
    if ( !v6 )
    {
      v16 = (_QWORD *)sub_186B270(0xAu);
      *v16 = 2;
      v6 = v16 + 1;
      *(_QWORD *)(a1 + 1368) = v6;
      goto LABEL_9;
    }
    v7 = *((_DWORD *)v6 - 2);
    *((_DWORD *)v6 - 1) = 0;
    if ( v7 )
    {
LABEL_9:
      *v6 = 45;
      ++*(_DWORD *)(*(_QWORD *)(a1 + 1368) - 4LL);
      return sub_DDA6F0(a1);
    }
LABEL_26:
    v1 = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v23, "Overflow encountered when expanding vector");
    *v1 = (char *)off_1C63128;
    sub_2333C0(v1 + 1, v23);
    sub_233E40((__int64)v23);
    __cxa_throw(v1, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
LABEL_12:
  v11 = sub_DD7E10(a1);
  sub_1831620(qword_1C7F2C0, a1 + 40);
  return v11;
}

