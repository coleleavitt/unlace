unsigned __int64 __fastcall sub_DD7C60(__int64 a1)
{
  char **exception; // rbx
  _QWORD *v2; // rbx
  unsigned int v4; // eax
  __int64 v5; // rdx
  unsigned __int64 result; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  _BYTE *v9; // rdi
  unsigned int v10; // ebp
  size_t v11; // rsi
  unsigned int *v12; // rax
  _DWORD *v13; // rdi
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16[7]; // [rsp+10h] [rbp-38h] BYREF

  if ( *(_BYTE *)(a1 + 1384) )
  {
    v7 = *(_QWORD *)(a1 + 1392);
    if ( v7 )
    {
      v8 = *(unsigned int *)(v7 - 4);
      if ( (_DWORD)v8 == *(_DWORD *)(v7 - 8) )
      {
        v10 = (unsigned int)(3 * v8 + 1) >> 1;
        v11 = v10 + 8;
        if ( (int)v8 + 8 >= (unsigned int)v11 || (unsigned int)v8 >= v10 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v16, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v16);
          sub_233E40((__int64)v16);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v12 = (unsigned int *)sub_186B300((void *)(v7 - 8), v11);
        v13 = v12 + 2;
        *v12 = v10;
        v14 = v12[1];
        *(_QWORD *)(a1 + 1392) = v13;
        v9 = (char *)v13 + v14;
      }
      else
      {
        v9 = (_BYTE *)(v8 + v7);
      }
    }
    else
    {
      v15 = (_QWORD *)sub_186B270(0xAu);
      *v15 = 2;
      v9 = v15 + 1;
      *(_QWORD *)(a1 + 1392) = v15 + 1;
    }
    *v9 = *(_BYTE *)(a1 + 16);
    ++*(_DWORD *)(*(_QWORD *)(a1 + 1392) - 4LL);
  }
  if ( *(_BYTE *)(a1 + 17) )
  {
    v2 = __cxa_allocate_exception(0x30u);
    sub_305660(v2, "unexpected end of file");
    __cxa_throw(v2, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 16) = std::istream::get(*(std::istream **)(a1 + 1376));
    result = *(_QWORD *)(a1 + 1376);
    if ( (*(_BYTE *)(result + *(_QWORD *)(*(_QWORD *)result - 24LL) + 32) & 2) == 0 )
      goto LABEL_6;
    *(_BYTE *)(a1 + 17) = 1;
    goto LABEL_9;
  }
  v4 = *(_DWORD *)(a1 + 1356);
  if ( v4 < *(_DWORD *)(a1 + 1360) )
  {
    v5 = v4;
    result = v4 + 1;
    LOBYTE(v5) = *(_BYTE *)(a1 + v5 + 332);
    *(_DWORD *)(a1 + 1356) = result;
    *(_BYTE *)(a1 + 16) = v5;
LABEL_6:
    ++*(_DWORD *)(a1 + 12);
    return result;
  }
  std::istream::read(*(std::istream **)(a1 + 1376), (char *)(a1 + 332), 1024);
  result = *(_QWORD *)(*(_QWORD *)(a1 + 1376) + 8LL);
  *(_DWORD *)(a1 + 1356) = 0;
  *(_DWORD *)(a1 + 1360) = result;
  if ( !(_DWORD)result )
  {
    *(_BYTE *)(a1 + 17) = 1;
LABEL_9:
    ++*(_DWORD *)(a1 + 12);
    return result;
  }
  result = *(unsigned __int8 *)(a1 + 332);
  ++*(_DWORD *)(a1 + 12);
  *(_DWORD *)(a1 + 1356) = 1;
  *(_BYTE *)(a1 + 16) = result;
  return result;
}

