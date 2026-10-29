__int64 __fastcall sub_E6D460(__int64 *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  void *v10; // rcx

  result = *a1;
  if ( *a1 && *((_DWORD *)a1 + 5) )
  {
    v7 = a2[294];
    v8 = *((unsigned int *)a1 + 4);
    a2[304] += v8;
    v9 = (v7 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( a2[295] >= v8 + v9 && v7 )
    {
      a2[294] = v8 + v9;
      v10 = (void *)((v7 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
    else
    {
      v10 = (void *)sub_962430((__int64)(a2 + 294), v8, v8, 3, a5, a6);
    }
    memcpy(v10, (const void *)a1[1], *((unsigned int *)a1 + 4));
    return *a1;
  }
  return result;
}

