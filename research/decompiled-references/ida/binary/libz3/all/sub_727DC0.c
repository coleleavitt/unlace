__int64 __fastcall sub_727DC0(__int64 a1, __int64 *a2, __int64 a3, double a4)
{
  _DWORD **v5; // rbx
  unsigned __int64 v6; // r15
  _DWORD *v7; // rbp
  bool v8; // zf
  __int64 v9; // rdx
  __int64 v10; // r15
  void (__fastcall ***v11)(void *); // rbp
  __int64 v12; // rax
  __int64 v13; // r14
  void (***v14)(void); // rdi
  __int64 v15; // rcx
  __int64 v16; // r15
  unsigned int v17; // edx
  unsigned int v18; // r13d
  _DWORD **v19; // r14
  __int64 v21; // r13
  __int64 v22; // rax
  _QWORD *v23; // rdi
  __int64 v24; // rax
  __int64 i; // rax
  char v26[8]; // [rsp+10h] [rbp-48h] BYREF
  void *ptr; // [rsp+18h] [rbp-40h] BYREF

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
  v9 = *a2;
  *(_DWORD *)(a3 + 8) = 0;
  sub_EE4940(v26, "sls", v9);
  ptr = nullptr;
  sub_727980(a1, a2, &ptr, a4);
  v10 = *a2;
  v11 = (void (__fastcall ***)(void *))ptr;
  v12 = sub_1336AB0(*(_QWORD *)(*a2 + 8), ptr);
  v13 = v12;
  if ( v12 )
    ++*(_DWORD *)(v12 + 8);
  v14 = *(void (****)(void))(v10 + 8);
  if ( v14 )
  {
    v8 = (*((_DWORD *)v14 + 2))-- == 1;
    if ( v8 )
    {
      (**v14)();
      sub_186B220(v14);
    }
  }
  v15 = *a2;
  *(_QWORD *)(v10 + 8) = v13;
  *(_DWORD *)(v15 + 120) = (*(_DWORD *)(v15 + 120) + 1) & 0x3FFFFFF | *(_DWORD *)(v15 + 120) & 0xFC000000;
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
  v19[v17] = (_DWORD *)v16;
  *(_DWORD *)(a3 + 8) = v17 + 1;
  if ( v11 )
  {
    v8 = (*((_DWORD *)v11 + 2))-- == 1;
    if ( v8 )
    {
      (**v11)(v11);
      sub_186B220(v11);
    }
  }
  return sub_EE4A00(v26);
}

