unsigned __int64 __fastcall sub_BE8DF0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rbp
  __int64 v7; // rcx
  unsigned __int64 result; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  char *v12; // rdi

  v6 = (_QWORD *)a3;
  v7 = *(unsigned int *)(a3 + 8);
  *(_DWORD *)(a1 + 8) = v7;
  result = (unsigned __int64)(v7 + 63) >> 6;
  if ( (unsigned int)v7 > 0x40 )
    v6 = *(_QWORD **)a3;
  if ( result > 1 )
  {
    v9 = 8 * result;
    v10 = a2[294];
    a2[304] += v9;
    v12 = (char *)((v10 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( a2[295] >= (unsigned __int64)&v12[v9] && v10 )
      a2[294] = &v12[v9];
    else
      v12 = (char *)sub_962430((__int64)(a2 + 294), v9, v9, 3, a5, a6);
    *(_QWORD *)a1 = v12;
    return (unsigned __int64)memmove(v12, v6, v9);
  }
  else if ( result == 1 )
  {
    result = *v6;
    *(_QWORD *)a1 = *v6;
  }
  else
  {
    *(_QWORD *)a1 = 0;
  }
  return result;
}

