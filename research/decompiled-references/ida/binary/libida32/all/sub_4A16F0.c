void *__fastcall sub_4A16F0(__int64 a1, __int64 *a2, __int64 a3, int a4)
{
  const char *v7; // rbp
  size_t v8; // rdx
  __int64 v9; // rax
  int v10; // ebp
  __int64 v11; // rsi
  size_t v12; // rax
  size_t v13; // rax
  size_t v14; // rax
  const char *v15; // rbp
  size_t v16; // rdx
  __int64 v18; // rax
  _BYTE v19[3]; // [rsp+3h] [rbp-35h] BYREF
  _BYTE v20[2]; // [rsp+6h] [rbp-32h] BYREF
  unsigned __int64 v21[6]; // [rsp+8h] [rbp-30h] BYREF

  v21[0] = __readfsqword(0x28u);
  if ( !a4 )
  {
    v7 = haystack;
    if ( *(_QWORD *)(a3 + 56) )
    {
      v7 = *(const char **)(a3 + 48);
      if ( v7 )
        goto LABEL_4;
    }
    else if ( haystack )
    {
LABEL_4:
      v8 = strlen(v7) + 1;
LABEL_5:
      sub_49FDA0(a2, v7, v8);
      goto LABEL_6;
    }
    v8 = 1;
    v7 = &byte_22CD811;
    goto LABEL_5;
  }
LABEL_6:
  (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a3 + 40) + 96LL))(*(_QWORD *)(a3 + 40), a2);
  v9 = a2[1];
  v10 = *(_DWORD *)(a3 + 32);
  v11 = *a2;
  if ( a2[2] < (unsigned __int64)(v9 + 1) )
  {
    v18 = qvector_reserve(a2, v11, v9 + 1, 1);
    *a2 = v18;
    v11 = v18;
    v9 = a2[1];
  }
  *(_BYTE *)(v11 + v9) = v10;
  ++a2[1];
  v12 = pack_dd(v19, v21, *(unsigned int *)(a3 + 24)) - (_QWORD)v19;
  if ( v12 )
    sub_49FDA0(a2, v19, v12);
  v13 = pack_dw(v19, v20, *(unsigned __int16 *)(a3 + 28)) - (_QWORD)v19;
  if ( v13 )
    sub_49FDA0(a2, v19, v13);
  v14 = pack_dw(v19, v20, *(unsigned __int16 *)(a3 + 30)) - (_QWORD)v19;
  if ( v14 )
    sub_49FDA0(a2, v19, v14);
  if ( *(_DWORD *)(a3 + 32) != 1 )
    sub_49FDA0(a2, (const void *)a3, 0x18u);
  if ( !a4 )
  {
    v15 = haystack;
    if ( *(_QWORD *)(a3 + 80) )
    {
      v15 = *(const char **)(a3 + 72);
      if ( v15 )
        goto LABEL_19;
    }
    else if ( haystack )
    {
LABEL_19:
      v16 = strlen(v15) + 1;
      return sub_49FDA0(a2, v15, v16);
    }
    v16 = 1;
    v15 = &byte_22CD811;
    return sub_49FDA0(a2, v15, v16);
  }
  return (void *)(v21[0] - __readfsqword(0x28u));
}

