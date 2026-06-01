__int64 __fastcall sub_86E4B0(__int64 a1, int a2)
{
  __int64 result; // rax
  unsigned int *v3; // r12
  _QWORD *v4; // rbp
  __int64 v5; // r13
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx

  result = *(unsigned int *)(a1 + 168);
  if ( (_DWORD)result == 1 )
    return result;
  v3 = *(unsigned int **)a1;
  if ( a2 || *(_DWORD *)(a1 + 172) )
  {
    v4 = nullptr;
    if ( (_DWORD)result != 2 )
      goto LABEL_4;
    v4 = sub_86E080(*(unsigned int **)a1, 0, 142, *(int *)(a1 + 92), 127, -1);
  }
  else
  {
    v4 = sub_86E080(*(unsigned int **)a1, 3, 142, *(int *)(a1 + 92), 2, 0);
  }
  if ( *(_DWORD *)(a1 + 168) == 2 )
  {
    result = sub_86B8E0(v3, 32, 142, *(int *)(a1 + 96), 127, 0);
    goto LABEL_7;
  }
LABEL_4:
  v5 = *(_QWORD *)(a1 + 272);
  if ( v5 )
  {
    result = (__int64)sub_868C70((__int64)v3, 36);
    if ( result )
    {
      *(_QWORD *)(result + 16) &= ~1uLL;
      *(_QWORD *)(result + 24) = v5;
    }
    goto LABEL_7;
  }
  sub_868C70((__int64)v3, 36);
  result = *v3;
  if ( !(_DWORD)result )
  {
    v6 = *((_QWORD *)v3 + 10);
    v7 = *(_QWORD *)(v6 + 8);
    v8 = v7 + 16;
    if ( (unsigned __int64)(v7 + 16) <= 0xFF0 )
    {
      result = v6 + v7 + 16;
      *(_QWORD *)(v6 + 8) = v8;
      if ( result )
        goto LABEL_20;
    }
    else
    {
      result = (**((__int64 (__fastcall ***)(__int64, _QWORD))v3 + 7))(4096, *(_QWORD *)(*((_QWORD *)v3 + 7) + 16LL));
      if ( result )
      {
        *(_QWORD *)result = *((_QWORD *)v3 + 10);
        *((_QWORD *)v3 + 10) = result;
        result += 16;
        *(_QWORD *)(result - 8) = 16;
LABEL_20:
        *(__m128 *)result = _mm_loadh_ps((const double *)(a1 + 336));
        *(_QWORD *)(a1 + 336) = result;
        goto LABEL_7;
      }
      *v3 = 2;
    }
  }
LABEL_7:
  if ( v4 )
  {
    result = (__int64)sub_868BC0((__int64)v3);
    if ( result )
    {
      v4[2] &= ~1uLL;
      v4[3] = result;
    }
  }
  return result;
}
