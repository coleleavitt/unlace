unsigned __int64 __fastcall sub_DDA520(__int64 a1)
{
  char **exception; // rbx
  _QWORD *v2; // rbx
  unsigned __int64 result; // rax
  char v5; // dl
  unsigned int v6; // eax
  __int64 v7; // rdi
  __int64 v8; // rax
  _BYTE *v9; // rdi
  char v10; // al
  unsigned int v11; // ebp
  size_t v12; // rsi
  unsigned int *v13; // rax
  _DWORD *v14; // rdi
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17[7]; // [rsp+10h] [rbp-38h] BYREF

  result = sub_DD7C60(a1);
  v5 = *(_BYTE *)(a1 + 16);
  if ( *(_BYTE *)(a1 + 17) )
    return result;
  do
  {
    if ( v5 == 10 )
    {
LABEL_7:
      ++*(_DWORD *)(a1 + 20);
      *(_DWORD *)(a1 + 12) = 0;
      return sub_DD7C60(a1);
    }
    while ( !*(_BYTE *)(a1 + 1384) )
    {
      if ( *(_BYTE *)(a1 + 8) )
        goto LABEL_13;
LABEL_5:
      v6 = *(_DWORD *)(a1 + 1356);
      if ( v6 >= *(_DWORD *)(a1 + 1360) )
      {
        std::istream::read(*(std::istream **)(a1 + 1376), (char *)(a1 + 332), 1024);
        result = *(_QWORD *)(*(_QWORD *)(a1 + 1376) + 8LL);
        *(_DWORD *)(a1 + 1356) = 0;
        *(_DWORD *)(a1 + 1360) = result;
        if ( !(_DWORD)result )
          goto LABEL_14;
        v5 = *(_BYTE *)(a1 + 332);
        *(_DWORD *)(a1 + 1356) = 1;
        *(_BYTE *)(a1 + 16) = v5;
        goto LABEL_18;
      }
      v5 = *(_BYTE *)(a1 + v6 + 332);
      ++*(_DWORD *)(a1 + 12);
      *(_DWORD *)(a1 + 1356) = v6 + 1;
      *(_BYTE *)(a1 + 16) = v5;
      if ( v5 == 10 )
        goto LABEL_7;
    }
    v7 = *(_QWORD *)(a1 + 1392);
    if ( v7 )
    {
      v8 = *(unsigned int *)(v7 - 4);
      if ( (_DWORD)v8 == *(_DWORD *)(v7 - 8) )
      {
        v11 = (unsigned int)(3 * v8 + 1) >> 1;
        v12 = v11 + 8;
        if ( (int)v8 + 8 >= (unsigned int)v12 || (unsigned int)v8 >= v11 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v17, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v17);
          sub_233E40((__int64)v17);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v13 = (unsigned int *)sub_186B300((void *)(v7 - 8), v12);
        v5 = *(_BYTE *)(a1 + 16);
        v14 = v13 + 2;
        *v13 = v11;
        v15 = v13[1];
        *(_QWORD *)(a1 + 1392) = v14;
        v9 = (char *)v14 + v15;
      }
      else
      {
        v9 = (_BYTE *)(v8 + v7);
      }
    }
    else
    {
      v16 = (_QWORD *)sub_186B270(0xAu);
      v5 = *(_BYTE *)(a1 + 16);
      *v16 = 2;
      v9 = v16 + 1;
      *(_QWORD *)(a1 + 1392) = v16 + 1;
    }
    *v9 = v5;
    ++*(_DWORD *)(*(_QWORD *)(a1 + 1392) - 4LL);
    if ( *(_BYTE *)(a1 + 17) )
    {
      v2 = __cxa_allocate_exception(0x30u);
      sub_305660(v2, "unexpected end of file");
      __cxa_throw(v2, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
    }
    if ( !*(_BYTE *)(a1 + 8) )
      goto LABEL_5;
LABEL_13:
    v10 = std::istream::get(*(std::istream **)(a1 + 1376));
    *(_BYTE *)(a1 + 16) = v10;
    v5 = v10;
    result = *(_QWORD *)(a1 + 1376);
    if ( (*(_BYTE *)(result + *(_QWORD *)(*(_QWORD *)result - 24LL) + 32) & 2) != 0 )
    {
LABEL_14:
      ++*(_DWORD *)(a1 + 12);
      *(_BYTE *)(a1 + 17) = 1;
      return result;
    }
LABEL_18:
    result = *(unsigned __int8 *)(a1 + 17);
    ++*(_DWORD *)(a1 + 12);
  }
  while ( !(_BYTE)result );
  return result;
}

