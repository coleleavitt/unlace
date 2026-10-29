__int64 __fastcall sub_86E670(__int64 a1)
{
  __int64 result; // rax
  unsigned int *v3; // rbp
  __int64 v4; // r12
  __int64 v5; // rcx
  unsigned int *v6; // rdi
  _QWORD *v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx

  result = *(unsigned int *)(a1 + 168);
  v3 = *(unsigned int **)a1;
  if ( (_DWORD)result == 2 )
  {
    v7 = sub_86E080(*(unsigned int **)a1, 3, 142, *(int *)(a1 + 92), 2, 0);
    sub_86B8E0(v3, 32, 142, *(int *)(a1 + 96), 127, 0);
    result = (__int64)sub_868BC0((__int64)v3);
    if ( result && v7 )
    {
      v7[2] &= ~1uLL;
      v7[3] = result;
    }
  }
  else
  {
    if ( (_DWORD)result != 4 )
      return result;
    v4 = *(_QWORD *)(a1 + 272);
    v5 = *(int *)(a1 + 92);
    v6 = *(unsigned int **)a1;
    if ( !v4 )
    {
      sub_86E080(v6, 2, 142, v5, 2, 0);
      result = *v3;
      if ( (_DWORD)result )
        return result;
      v8 = *((_QWORD *)v3 + 10);
      v9 = *(_QWORD *)(v8 + 8);
      v10 = v9 + 16;
      if ( (unsigned __int64)(v9 + 16) <= 0xFF0 )
      {
        result = v8 + v9 + 16;
        *(_QWORD *)(v8 + 8) = v10;
        if ( !result )
          return result;
      }
      else
      {
        result = (**((__int64 (__fastcall ***)(__int64, _QWORD))v3 + 7))(4096, *(_QWORD *)(*((_QWORD *)v3 + 7) + 16LL));
        if ( !result )
        {
          *v3 = 2;
          return result;
        }
        *(_QWORD *)result = *((_QWORD *)v3 + 10);
        *((_QWORD *)v3 + 10) = result;
        result += 16;
        *(_QWORD *)(result - 8) = 16;
      }
      *(__m128 *)result = _mm_loadh_ps((const double *)(a1 + 336));
      *(_QWORD *)(a1 + 336) = result;
      return result;
    }
    result = (__int64)sub_86E080(v6, 2, 142, v5, 2, 0);
    if ( result )
    {
      *(_QWORD *)(result + 16) &= ~1uLL;
      *(_QWORD *)(result + 24) = v4;
    }
  }
  return result;
}
