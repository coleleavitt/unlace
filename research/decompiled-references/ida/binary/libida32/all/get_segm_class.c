__int64 __fastcall get_segm_class(__int64 a1, __int64 a2)
{
  unsigned int v2; // edx
  __int64 v3; // rsi
  __int64 result; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // rbp
  const void *v8; // r12
  void *v9; // rdi
  __int64 v10; // rax

  if ( !a1 || !a2 )
    return -1;
  v2 = *(_DWORD *)(a2 + 12);
  if ( !v2 )
    return 0;
  v3 = *(_QWORD *)(**(_QWORD **)(qword_2CA1698 + 1480) + 1568LL);
  result = 0;
  if ( (unsigned __int64)v2 < *(_QWORD *)(v3 + 144) )
  {
    v5 = *(_QWORD *)(v3 + 136) + 56LL * (int)v2;
    if ( *(_BYTE *)(v5 + 52) || (v6 = *(_QWORD *)(v5 + 8), v6 <= 1) )
      sub_4F58F0();
    if ( a1 != v5 )
    {
      v8 = *(const void **)v5;
      v9 = *(void **)a1;
      if ( *(_QWORD *)(a1 + 16) < v6 )
      {
        v10 = qvector_reserve(a1, v9, *(_QWORD *)(v5 + 8), 1);
        *(_QWORD *)a1 = v10;
        v9 = (void *)v10;
      }
      *(_QWORD *)(a1 + 8) = v6;
      memmove(v9, v8, v6 - 1);
      *(_BYTE *)(*(_QWORD *)a1 + v6 - 1) = 0;
    }
    return (*(_QWORD *)(a1 + 8) == 0) + *(_QWORD *)(a1 + 8) - 1LL;
  }
  return result;
}

