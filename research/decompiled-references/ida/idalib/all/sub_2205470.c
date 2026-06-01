unsigned __int64 *__fastcall sub_2205470(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  __int64 *v6; // rax
  __int64 v7; // rdx
  unsigned __int64 *result; // rax
  _QWORD *v9; // rcx

  v4 = ((unsigned __int64)*(unsigned int *)(a1 + 8) + 63) >> 6;
  v5 = 8 * v4;
  if ( a2 < 0 && a3 )
  {
    v6 = (__int64 *)operator new[](v5);
    v7 = *(unsigned int *)(a1 + 8);
    *(_QWORD *)a1 = v6;
    *v6 = a2;
    memset(v6 + 1, 255, 8 * ((unsigned int)((unsigned __int64)(v7 + 63) >> 6) + 0x1FFFFFFF));
    return sub_CF8100((unsigned __int64 *)a1);
  }
  else
  {
    result = (unsigned __int64 *)operator new[](v5);
    v9 = result;
    if ( v4 )
    {
      result = (unsigned __int64 *)memset(result, 0, 8 * v4);
      v9 = result;
    }
    *v9 = a2;
    *(_QWORD *)a1 = v9;
  }
  return result;
}
