__int64 __fastcall sub_BF5550(__int64 a1, unsigned __int64 a2, _DWORD a3, int a4, int a5, int a6)
{
  _DWORD *v6; // rax
  __int64 result; // rax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdi
  int v11; // eax
  unsigned int v12; // [rsp+0h] [rbp-1Ch]
  __m128 v13; // [rsp+4h] [rbp-18h] BYREF

  v13 = _mm_loadh_ps((const double *)(a1 + 16));
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  if ( *(_WORD *)(a2 + 4) )
    goto LABEL_8;
  v6 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( !v6 )
    goto LABEL_8;
  if ( *v6 )
  {
    if ( *v6 == 5 )
    {
      sub_14B9B80(*(_QWORD *)(a1 + 8), &v13);
      a2 = v13.m128_u64[0];
    }
    goto LABEL_8;
  }
  v11 = v6[1];
  if ( v11 != 8 )
  {
    if ( v11 == 2 )
    {
      result = sub_966380(*(_QWORD *)a1, *(_DWORD **)(a2 + 32), *(_DWORD **)(a2 + 40));
      goto LABEL_9;
    }
LABEL_8:
    sub_966570(*(_QWORD *)a1, (unsigned int *)a2);
    result = sub_B645B0(*(_QWORD *)(*(_QWORD *)a1 + 16LL), (unsigned int *)v13.m128_u64[0]);
    goto LABEL_9;
  }
  if ( *(_DWORD *)(a2 + 24) != 1 )
    goto LABEL_8;
  result = (unsigned int)sub_BF5550(a1, *(_QWORD *)(a2 + 32), 0, a4, a5, a6) ^ 1;
LABEL_9:
  v8 = v13.m128_u64[0];
  if ( v13.m128_u64[0] )
  {
    v9 = v13.m128_u64[1];
    if ( (*(_DWORD *)(v13.m128_u64[0] + 8))-- == 1 )
    {
      v12 = result;
      sub_15D7BC0(v9, v8);
      return v12;
    }
  }
  return result;
}

