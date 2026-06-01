unsigned __int64 __fastcall sub_DDA2D0(__int64 a1)
{
  _QWORD *v1; // rbx
  char **exception; // rbx
  unsigned __int64 result; // rax
  char v5; // bp
  unsigned int v6; // eax
  __int64 v7; // rdx
  char v8; // dl
  __int64 v9; // rdi
  __int64 v10; // rax
  _BYTE *v11; // rdi
  char v12; // al
  char v13; // al
  unsigned int v14; // r12d
  size_t v15; // rsi
  unsigned int *v16; // rax
  _DWORD *v17; // rdi
  __int64 v18; // rax
  _QWORD *v19; // rdi
  __int64 v20[7]; // [rsp+10h] [rbp-38h] BYREF

  result = sub_DD7C60(a1);
  v5 = *(_BYTE *)(a1 + 16);
  if ( !*(_BYTE *)(a1 + 17) )
  {
    if ( v5 == 10 )
      goto LABEL_20;
    if ( *(_BYTE *)(a1 + 1384) )
      goto LABEL_11;
LABEL_4:
    if ( !*(_BYTE *)(a1 + 8) )
    {
LABEL_5:
      v6 = *(_DWORD *)(a1 + 1356);
      if ( v6 >= *(_DWORD *)(a1 + 1360) )
      {
        std::istream::read(*(std::istream **)(a1 + 1376), (char *)(a1 + 332), 1024);
        result = *(_QWORD *)(*(_QWORD *)(a1 + 1376) + 8LL);
        *(_DWORD *)(a1 + 1356) = 0;
        *(_DWORD *)(a1 + 1360) = result;
        if ( (_DWORD)result )
        {
          v8 = *(_BYTE *)(a1 + 332);
          *(_DWORD *)(a1 + 1356) = 1;
          *(_BYTE *)(a1 + 16) = v8;
        }
        else
        {
          *(_BYTE *)(a1 + 17) = 1;
          v8 = *(_BYTE *)(a1 + 16);
        }
      }
      else
      {
        v7 = v6;
        result = v6 + 1;
        v8 = *(_BYTE *)(a1 + v7 + 332);
        *(_DWORD *)(a1 + 1356) = result;
        *(_BYTE *)(a1 + 16) = v8;
      }
      goto LABEL_7;
    }
    while ( 1 )
    {
      v13 = std::istream::get(*(std::istream **)(a1 + 1376));
      *(_BYTE *)(a1 + 16) = v13;
      v8 = v13;
      result = *(_QWORD *)(a1 + 1376);
      if ( (*(_BYTE *)(result + *(_QWORD *)(*(_QWORD *)result - 24LL) + 32) & 2) != 0 )
      {
        ++*(_DWORD *)(a1 + 12);
        *(_BYTE *)(a1 + 17) = 1;
        if ( v5 != 124 )
          goto LABEL_8;
      }
      else
      {
LABEL_7:
        ++*(_DWORD *)(a1 + 12);
        if ( v5 != 124 )
          goto LABEL_8;
      }
      if ( v8 == 35 )
        return sub_DD7C60(a1);
LABEL_8:
      if ( *(_BYTE *)(a1 + 17) )
        return result;
      while ( v8 == 10 )
      {
LABEL_20:
        ++*(_DWORD *)(a1 + 20);
        *(_DWORD *)(a1 + 12) = 0;
        result = sub_DD7C60(a1);
        v8 = *(_BYTE *)(a1 + 16);
        if ( *(_BYTE *)(a1 + 17) )
          return result;
      }
      v5 = v8;
      if ( !*(_BYTE *)(a1 + 1384) )
        goto LABEL_4;
LABEL_11:
      v9 = *(_QWORD *)(a1 + 1392);
      if ( v9 )
      {
        v10 = *(unsigned int *)(v9 - 4);
        if ( (_DWORD)v10 == *(_DWORD *)(v9 - 8) )
        {
          v14 = (unsigned int)(3 * v10 + 1) >> 1;
          v15 = v14 + 8;
          if ( (int)v10 + 8 >= (unsigned int)v15 || (unsigned int)v10 >= v14 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v20, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v20);
            sub_233E40((__int64)v20);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v16 = (unsigned int *)sub_186B300((void *)(v9 - 8), v15);
          v17 = v16 + 2;
          *v16 = v14;
          v18 = v16[1];
          *(_QWORD *)(a1 + 1392) = v17;
          v11 = (char *)v17 + v18;
          v12 = *(_BYTE *)(a1 + 16);
        }
        else
        {
          v11 = (_BYTE *)(v10 + v9);
          v12 = v5;
        }
      }
      else
      {
        v19 = (_QWORD *)sub_186B270(0xAu);
        *v19 = 2;
        v12 = *(_BYTE *)(a1 + 16);
        v11 = v19 + 1;
        *(_QWORD *)(a1 + 1392) = v11;
      }
      *v11 = v12;
      ++*(_DWORD *)(*(_QWORD *)(a1 + 1392) - 4LL);
      if ( *(_BYTE *)(a1 + 17) )
      {
        v1 = __cxa_allocate_exception(0x30u);
        sub_305660(v1, "unexpected end of file");
        __cxa_throw(v1, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
      }
      if ( !*(_BYTE *)(a1 + 8) )
        goto LABEL_5;
    }
  }
  return result;
}

