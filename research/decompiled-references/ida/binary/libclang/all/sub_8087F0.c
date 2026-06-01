void *__fastcall sub_8087F0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, int a5)
{
  void *v9; // rbp
  void *result; // rax
  unsigned __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rbp
  const void *v14; // r13
  char *v15; // rdi

  *(_WORD *)a1 = *(_WORD *)a1 & 0xFE00 | 0x35;
  if ( byte_4AD234C )
    sub_AC4570(53);
  *(_DWORD *)(a1 + 24) = 0;
  *(_WORD *)(a1 + 1) &= 0xF801u;
  *(_QWORD *)(a1 + 8) = a4;
  *(_QWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 28) = a5;
  v9 = (void *)*(unsigned int *)(a3 + 8);
  *(_DWORD *)(a1 + 24) = (_DWORD)v9;
  result = v9;
  v11 = ((unsigned __int64)v9 + 63) >> 6;
  if ( (unsigned int)result <= 0x40 )
  {
    if ( v11 == 1 )
    {
      result = *(void **)a3;
      *(_QWORD *)(a1 + 16) = *(_QWORD *)a3;
    }
  }
  else
  {
    v12 = a2[274];
    v13 = 8 * v11;
    v14 = *(const void **)a3;
    a2[284] += v13;
    v15 = (char *)((v12 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( a2[275] >= (unsigned __int64)&v15[v13] && v12 )
      a2[274] = &v15[v13];
    else
      v15 = (char *)sub_804090((__int64)(a2 + 274), v13, 3);
    *(_QWORD *)(a1 + 16) = v15;
    result = memmove(v15, v14, v13);
  }
  *(_BYTE *)(a1 + 1) &= 0x3Fu;
  *(_BYTE *)(a1 + 2) &= 0xF8u;
  return result;
}

