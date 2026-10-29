unsigned __int64 __fastcall sub_DDAAA0(__int64 a1, __int64 a2, char a3)
{
  char **exception; // rbx
  _QWORD *v4; // rbx
  char v5; // al
  bool v7; // zf
  unsigned int v8; // eax
  __int64 v9; // rdx
  unsigned __int64 result; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  _BYTE *v13; // rdi
  unsigned int v14; // ebp
  size_t v15; // rsi
  unsigned int *v16; // rax
  _DWORD *v17; // rdi
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20[7]; // [rsp+10h] [rbp-38h] BYREF

  v5 = a3;
  v7 = *(_BYTE *)(a1 + 1384) == 0;
  *(_QWORD *)(a1 + 1376) = a2;
  *(_BYTE *)(a1 + 8) = a3;
  *(_BYTE *)(a1 + 17) = 0;
  *(_QWORD *)(a1 + 1356) = 0;
  if ( !v7 )
  {
    v11 = *(_QWORD *)(a1 + 1392);
    if ( v11 )
    {
      v12 = *(unsigned int *)(v11 - 4);
      if ( (_DWORD)v12 == *(_DWORD *)(v11 - 8) )
      {
        v14 = (unsigned int)(3 * v12 + 1) >> 1;
        v15 = v14 + 8;
        if ( (int)v12 + 8 >= (unsigned int)v15 || (unsigned int)v12 >= v14 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v20, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v20);
          sub_233E40((__int64)v20);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v16 = (unsigned int *)sub_186B300((void *)(v11 - 8), v15);
        v17 = v16 + 2;
        *v16 = v14;
        v18 = v16[1];
        *(_QWORD *)(a1 + 1392) = v17;
        v13 = (char *)v17 + v18;
      }
      else
      {
        v13 = (_BYTE *)(v12 + v11);
      }
    }
    else
    {
      v19 = (_QWORD *)sub_186B270(0xAu);
      *v19 = 2;
      v13 = v19 + 1;
      *(_QWORD *)(a1 + 1392) = v19 + 1;
    }
    *v13 = *(_BYTE *)(a1 + 16);
    ++*(_DWORD *)(*(_QWORD *)(a1 + 1392) - 4LL);
    if ( *(_BYTE *)(a1 + 17) )
    {
      v4 = __cxa_allocate_exception(0x30u);
      sub_305660(v4, "unexpected end of file");
      __cxa_throw(v4, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
    }
    v5 = *(_BYTE *)(a1 + 8);
  }
  if ( v5 )
  {
    *(_BYTE *)(a1 + 16) = std::istream::get(*(std::istream **)(a1 + 1376));
    result = *(_QWORD *)(a1 + 1376);
    if ( (*(_BYTE *)(result + *(_QWORD *)(*(_QWORD *)result - 24LL) + 32) & 2) == 0 )
      goto LABEL_5;
    *(_BYTE *)(a1 + 17) = 1;
    goto LABEL_8;
  }
  v8 = *(_DWORD *)(a1 + 1356);
  if ( v8 < *(_DWORD *)(a1 + 1360) )
  {
    v9 = v8;
    result = v8 + 1;
    LOBYTE(v9) = *(_BYTE *)(a1 + v9 + 332);
    *(_DWORD *)(a1 + 1356) = result;
    *(_BYTE *)(a1 + 16) = v9;
LABEL_5:
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
LABEL_8:
    ++*(_DWORD *)(a1 + 12);
    return result;
  }
  result = *(unsigned __int8 *)(a1 + 332);
  ++*(_DWORD *)(a1 + 12);
  *(_DWORD *)(a1 + 1356) = 1;
  *(_BYTE *)(a1 + 16) = result;
  return result;
}

