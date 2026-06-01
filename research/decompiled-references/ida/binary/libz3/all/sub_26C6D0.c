__int64 __fastcall sub_26C6D0(__int64 a1, char a2)
{
  int v2; // ebp
  __int64 v3; // rax
  int v5; // eax
  _BYTE *v6; // rdi
  std::istream *v7; // rdi
  __int64 v8; // rdi
  char v9; // bl
  __int64 v10; // rax
  unsigned int v11; // r13d
  size_t v12; // rsi
  unsigned int *v13; // rax
  _DWORD *v14; // rdi
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rdi
  __int64 v18; // rax
  _BYTE *v19; // rdi
  __int64 result; // rax
  int v21; // ebx
  unsigned int v22; // r13d
  int v23; // eax
  unsigned int v24; // eax
  __int64 v25; // rdi
  __int64 v26; // rax
  _BYTE *v27; // rdi
  _QWORD *v28; // rax
  unsigned int v29; // ebx
  size_t v30; // rsi
  unsigned int *v31; // rax
  _DWORD *v32; // rdi
  __int64 v33; // rax
  unsigned int v34; // ebx
  size_t v35; // rsi
  unsigned int *v36; // rax
  _DWORD *v37; // rdi
  __int64 v38; // rax
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  char **exception; // rbp
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rdx
  __int64 v47[9]; // [rsp+0h] [rbp-48h] BYREF

  v2 = a2;
  if ( a2 != *(_DWORD *)(a1 + 16) )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_ACE4E(v47, "invalid string/symbol", v45);
    goto LABEL_38;
  }
  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 )
    *(_DWORD *)(v3 - 4) = 0;
  v5 = std::istream::get(*(std::istream **)(a1 + 8));
  for ( *(_DWORD *)(a1 + 16) = v5; ; *(_DWORD *)(a1 + 16) = v5 )
  {
    while ( 1 )
    {
      if ( v5 == -1 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_ACE4E(v47, "unexpected end of file", v44);
        goto LABEL_38;
      }
      if ( v5 == 10 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_ACE4E(v47, "unexpected end of line", v43);
        goto LABEL_38;
      }
      if ( v5 != 92 )
        break;
      v21 = 3;
      v22 = 0;
      v23 = std::istream::get(*(std::istream **)(a1 + 8));
      *(_DWORD *)(a1 + 16) = v23;
      do
      {
        v24 = v23 - 48;
        if ( v24 > 9 || (v22 = v24 + 10 * v22, v22 > 0xFF) )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_ACE4E(v47, "invalid escaped character", v46);
          goto LABEL_38;
        }
        v23 = std::istream::get(*(std::istream **)(a1 + 8));
        *(_DWORD *)(a1 + 16) = v23;
        --v21;
      }
      while ( v21 );
      v25 = *(_QWORD *)(a1 + 24);
      if ( v25 )
      {
        v26 = *(unsigned int *)(v25 - 4);
        if ( (_DWORD)v26 != *(_DWORD *)(v25 - 8) )
        {
          v27 = (_BYTE *)(v26 + v25);
          goto LABEL_27;
        }
        v29 = (unsigned int)(3 * v26 + 1) >> 1;
        v30 = v29 + 8;
        if ( (int)v26 + 8 < (unsigned int)v30 && (unsigned int)v26 < v29 )
        {
          v31 = (unsigned int *)sub_186B300((void *)(v25 - 8), v30);
          v32 = v31 + 2;
          *v31 = v29;
          v33 = v31[1];
          *(_QWORD *)(a1 + 24) = v32;
          v27 = (char *)v32 + v33;
          goto LABEL_27;
        }
LABEL_37:
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_ACE4E(v47, "Overflow encountered when expanding vector", v42);
LABEL_38:
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v47);
        sub_233E40((__int64)v47);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v40 = (_QWORD *)sub_186B270(0xAu);
      *v40 = 2;
      v27 = v40 + 1;
      *(_QWORD *)(a1 + 24) = v40 + 1;
LABEL_27:
      *v27 = v22;
      ++*(_DWORD *)(*(_QWORD *)(a1 + 24) - 4LL);
      v5 = *(_DWORD *)(a1 + 16);
    }
    if ( v2 == v5 )
      break;
    v8 = *(_QWORD *)(a1 + 24);
    v9 = v5;
    if ( v8 )
    {
      v10 = *(unsigned int *)(v8 - 4);
      if ( (_DWORD)v10 == *(_DWORD *)(v8 - 8) )
      {
        v11 = (unsigned int)(3 * v10 + 1) >> 1;
        v12 = v11 + 8;
        if ( (int)v10 + 8 >= (unsigned int)v12 || (unsigned int)v10 >= v11 )
          goto LABEL_37;
        v13 = (unsigned int *)sub_186B300((void *)(v8 - 8), v12);
        v14 = v13 + 2;
        *v13 = v11;
        v15 = v13[1];
        *(_QWORD *)(a1 + 24) = v14;
        v6 = (char *)v14 + v15;
      }
      else
      {
        v6 = (_BYTE *)(v10 + v8);
      }
    }
    else
    {
      v28 = (_QWORD *)sub_186B270(0xAu);
      *v28 = 2;
      v6 = v28 + 1;
      *(_QWORD *)(a1 + 24) = v28 + 1;
    }
    *v6 = v9;
    v7 = *(std::istream **)(a1 + 8);
    ++*(_DWORD *)(*(_QWORD *)(a1 + 24) - 4LL);
    v5 = std::istream::get(v7);
  }
  v16 = std::istream::get(*(std::istream **)(a1 + 8));
  v17 = *(_QWORD *)(a1 + 24);
  *(_DWORD *)(a1 + 16) = v16;
  if ( v17 )
  {
    v18 = *(unsigned int *)(v17 - 4);
    if ( (_DWORD)v18 == *(_DWORD *)(v17 - 8) )
    {
      v34 = (unsigned int)(3 * v18 + 1) >> 1;
      v35 = v34 + 8;
      if ( (int)v18 + 8 >= (unsigned int)v35 || (unsigned int)v18 >= v34 )
        goto LABEL_37;
      v36 = (unsigned int *)sub_186B300((void *)(v17 - 8), v35);
      v37 = v36 + 2;
      *v36 = v34;
      v38 = v36[1];
      *(_QWORD *)(a1 + 24) = v37;
      v19 = (char *)v37 + v38;
    }
    else
    {
      v19 = (_BYTE *)(v18 + v17);
    }
  }
  else
  {
    v39 = (_QWORD *)sub_186B270(0xAu);
    *v39 = 2;
    v19 = v39 + 1;
    *(_QWORD *)(a1 + 24) = v39 + 1;
  }
  *v19 = 0;
  result = *(_QWORD *)(a1 + 24);
  ++*(_DWORD *)(result - 4);
  return result;
}

