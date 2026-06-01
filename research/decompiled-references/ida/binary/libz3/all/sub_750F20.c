__int64 __fastcall sub_750F20(__int64 a1, __int64 *a2, __int64 a3)
{
  _DWORD **v5; // rbx
  unsigned __int64 v6; // r15
  _DWORD *v7; // rbp
  bool v8; // zf
  __int64 v9; // rsi
  void (__fastcall ***v10)(void *); // rbx
  void *v11; // rsi
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rbp
  void (__fastcall ***v15)(void *); // r15
  __int64 v16; // r14
  unsigned int v17; // edx
  unsigned int v18; // r13d
  _DWORD **v19; // rbp
  __int64 result; // rax
  __int64 v21; // r13
  __int64 v22; // rax
  _QWORD *v23; // rdi
  __int64 v24; // rax
  __int64 i; // rax
  void *v26; // [rsp+8h] [rbp-40h] BYREF

  sub_EE4F60("bv-size-reduction");
  sub_EE5110("bv-size-reduction");
  v5 = *(_DWORD ***)a3;
  v6 = *(_QWORD *)a3 + 8LL * *(unsigned int *)(a3 + 8);
  if ( *(_QWORD *)a3 < v6 )
  {
    do
    {
      while ( 1 )
      {
        v7 = *v5;
        if ( *v5 )
        {
          v8 = v7[8]-- == 1;
          if ( v8 )
            break;
        }
        if ( (unsigned __int64)++v5 >= v6 )
          goto LABEL_7;
      }
      ++v5;
      sub_ED44E0(v7);
      sub_186B220(v7);
    }
    while ( (unsigned __int64)v5 < v6 );
  }
LABEL_7:
  *(_DWORD *)(a3 + 8) = 0;
  v9 = *a2;
  v26 = nullptr;
  sub_74DF10(a1, v9, (__int64 *)&v26);
  v10 = (void (__fastcall ***)(void *))v26;
  v11 = v26;
  *(_DWORD *)(*a2 + 120) = (*(_DWORD *)(*a2 + 120) + 1) & 0x3FFFFFF | *(_DWORD *)(*a2 + 120) & 0xFC000000;
  v12 = *a2;
  v13 = sub_1336AB0(*(_QWORD *)(*a2 + 8), v11);
  v14 = v13;
  if ( v13 )
    ++*(_DWORD *)(v13 + 8);
  v15 = *(void (__fastcall ****)(void *))(v12 + 8);
  if ( v15 )
  {
    v8 = (*((_DWORD *)v15 + 2))-- == 1;
    if ( v8 )
    {
      (**v15)(v15);
      sub_186B220(v15);
    }
  }
  *(_QWORD *)(v12 + 8) = v14;
  v16 = *a2;
  if ( *a2 )
    ++*(_DWORD *)(v16 + 32);
  v17 = *(_DWORD *)(a3 + 8);
  v18 = *(_DWORD *)(a3 + 12);
  if ( v17 >= v18 )
  {
    v21 = 2 * v18;
    v22 = sub_186B270(8 * v21);
    v17 = *(_DWORD *)(a3 + 8);
    v23 = *(_QWORD **)a3;
    v19 = (_DWORD **)v22;
    if ( v17 )
    {
      if ( v17 - 1 <= 2 || (_QWORD *)v22 == v23 + 1 )
      {
        for ( i = 0; i != v17; ++i )
          v19[i] = (_DWORD *)v23[i];
      }
      else
      {
        v24 = 0;
        do
        {
          *(__m128i *)&v19[v24] = _mm_loadu_si128((const __m128i *)&v23[v24]);
          v24 += 2;
        }
        while ( v24 != 2LL * (v17 >> 1) );
        if ( (v17 & 1) != 0 )
          v19[v17 & 0xFFFFFFFE] = (_DWORD *)v23[v17 & 0xFFFFFFFE];
      }
    }
    if ( v23 != (_QWORD *)(a3 + 16) && v23 )
    {
      sub_186B220(v23);
      v17 = *(_DWORD *)(a3 + 8);
    }
    *(_QWORD *)a3 = v19;
    *(_DWORD *)(a3 + 12) = v21;
  }
  else
  {
    v19 = *(_DWORD ***)a3;
  }
  result = v17;
  v19[v17] = (_DWORD *)v16;
  *(_DWORD *)(a3 + 8) = v17 + 1;
  if ( v10 )
  {
    v8 = (*((_DWORD *)v10 + 2))-- == 1;
    if ( v8 )
    {
      (**v10)(v10);
      return sub_186B220(v10);
    }
  }
  return result;
}

