__int64 __fastcall sub_7286E0(__int64 a1, size_t a2, __int64 a3)
{
  _DWORD **v4; // rbx
  unsigned __int64 v5; // r15
  _DWORD *v6; // rbp
  bool v7; // zf
  __int64 v8; // rdx
  __int64 v9; // r15
  void (__fastcall ***v10)(void *); // rbp
  __int64 v11; // rax
  __int64 v12; // r14
  void (***v13)(void); // rdi
  __int64 v14; // rcx
  _DWORD *v15; // r15
  unsigned int v16; // edx
  unsigned int v17; // r13d
  _DWORD **v18; // r14
  __int64 v20; // r13
  __int64 v21; // rax
  _QWORD *v22; // rdi
  __int64 v23; // rax
  __int64 i; // rax
  char v25[8]; // [rsp+10h] [rbp-48h] BYREF
  void *ptr; // [rsp+18h] [rbp-40h] BYREF

  v4 = *(_DWORD ***)a3;
  v5 = *(_QWORD *)a3 + 8LL * *(unsigned int *)(a3 + 8);
  if ( *(_QWORD *)a3 < v5 )
  {
    do
    {
      while ( 1 )
      {
        v6 = *v4;
        if ( *v4 )
        {
          v7 = v6[8]-- == 1;
          if ( v7 )
            break;
        }
        if ( (unsigned __int64)++v4 >= v5 )
          goto LABEL_7;
      }
      ++v4;
      sub_ED44E0(v6);
      sub_186B220(v6);
    }
    while ( (unsigned __int64)v4 < v5 );
  }
LABEL_7:
  v8 = *(_QWORD *)a2;
  *(_DWORD *)(a3 + 8) = 0;
  sub_EE4940(v25, "sls", v8);
  ptr = nullptr;
  sub_728040(a1, a2, (void (__fastcall ****)(void *))&ptr);
  v9 = *(_QWORD *)a2;
  v10 = (void (__fastcall ***)(void *))ptr;
  v11 = sub_1336AB0(*(_QWORD *)(*(_QWORD *)a2 + 8LL), ptr);
  v12 = v11;
  if ( v11 )
    ++*(_DWORD *)(v11 + 8);
  v13 = *(void (****)(void))(v9 + 8);
  if ( v13 )
  {
    v7 = (*((_DWORD *)v13 + 2))-- == 1;
    if ( v7 )
    {
      (**v13)();
      sub_186B220(v13);
    }
  }
  v14 = *(_QWORD *)a2;
  *(_QWORD *)(v9 + 8) = v12;
  *(_DWORD *)(v14 + 120) = (*(_DWORD *)(v14 + 120) + 1) & 0x3FFFFFF | *(_DWORD *)(v14 + 120) & 0xFC000000;
  v15 = *(_DWORD **)a2;
  if ( *(_QWORD *)a2 )
    ++v15[8];
  v16 = *(_DWORD *)(a3 + 8);
  v17 = *(_DWORD *)(a3 + 12);
  if ( v16 >= v17 )
  {
    v20 = 2 * v17;
    v21 = sub_186B270(8 * v20);
    v16 = *(_DWORD *)(a3 + 8);
    v22 = *(_QWORD **)a3;
    v18 = (_DWORD **)v21;
    if ( v16 )
    {
      if ( v16 - 1 <= 2 || (_QWORD *)v21 == v22 + 1 )
      {
        for ( i = 0; i != v16; ++i )
          v18[i] = (_DWORD *)v22[i];
      }
      else
      {
        v23 = 0;
        do
        {
          *(__m128i *)&v18[v23] = _mm_loadu_si128((const __m128i *)&v22[v23]);
          v23 += 2;
        }
        while ( v23 != 2LL * (v16 >> 1) );
        if ( (v16 & 1) != 0 )
          v18[v16 & 0xFFFFFFFE] = (_DWORD *)v22[v16 & 0xFFFFFFFE];
      }
    }
    if ( v22 != (_QWORD *)(a3 + 16) && v22 )
    {
      sub_186B220(v22);
      v16 = *(_DWORD *)(a3 + 8);
    }
    *(_QWORD *)a3 = v18;
    *(_DWORD *)(a3 + 12) = v20;
  }
  else
  {
    v18 = *(_DWORD ***)a3;
  }
  v18[v16] = v15;
  *(_DWORD *)(a3 + 8) = v16 + 1;
  if ( v10 )
  {
    v7 = (*((_DWORD *)v10 + 2))-- == 1;
    if ( v7 )
    {
      (**v10)(v10);
      sub_186B220(v10);
    }
  }
  return sub_EE4A00(v25);
}

