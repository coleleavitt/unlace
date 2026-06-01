void *__fastcall sub_808730(__int64 a1, _QWORD *a2, __int64 a3)
{
  void *v4; // rbx
  void *result; // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rbx
  const void *v9; // r12
  char *v10; // rdi

  v4 = (void *)*(unsigned int *)(a3 + 8);
  *(_DWORD *)(a1 + 8) = (_DWORD)v4;
  result = v4;
  v6 = ((unsigned __int64)v4 + 63) >> 6;
  if ( (unsigned int)result <= 0x40 )
  {
    if ( v6 == 1 )
    {
      result = *(void **)a3;
      *(_QWORD *)a1 = *(_QWORD *)a3;
    }
    else
    {
      *(_QWORD *)a1 = 0;
    }
  }
  else
  {
    v7 = a2[274];
    v8 = 8 * v6;
    v9 = *(const void **)a3;
    a2[284] += v8;
    v10 = (char *)((v7 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( a2[275] >= (unsigned __int64)&v10[v8] && v7 )
      a2[274] = &v10[v8];
    else
      v10 = (char *)sub_804090((__int64)(a2 + 274), v8, 3);
    *(_QWORD *)a1 = v10;
    return memmove(v10, v9, v8);
  }
  return result;
}

