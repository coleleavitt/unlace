const char *__fastcall sub_148F40(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  _QWORD *v4; // r13
  _QWORD *v5; // rbp
  _QWORD *v7; // rax
  int v8; // edi
  int v9; // eax
  unsigned __int64 v10; // rcx
  _DWORD *v11; // rsi
  __int64 v12; // rax
  int v13; // eax
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rcx
  int v16; // edx
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // r14
  __int64 v21; // rax
  const char *result; // rax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r15
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rsi
  bool v28; // zf
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rax
  struct _Unwind_Exception *v32; // r14
  __int64 v33; // rdi

  v4 = (_QWORD *)(a1 + 80);
  v5 = (_QWORD *)(a1 + 176);
  *(_QWORD *)a1 = &stru_236898;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 72) = -1;
  *(_OWORD *)(a1 + 16) = -1;
  *(_QWORD *)(a1 + 8) = 0x20A0406000004LL;
  v7 = (_QWORD *)(a1 + 80);
  *(_OWORD *)(a1 + 56) = 0;
  do
  {
    *v7 = 0;
    v7 += 3;
    *((_OWORD *)v7 - 1) = 0;
  }
  while ( v7 != v5 );
  *(_DWORD *)(a1 + 176) = 0;
  v8 = *(_DWORD *)(a1 + 12);
  if ( ((*(_DWORD *)(a1 + 12) >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(a1 + 11) != 0xFF )
    {
      if ( !under_debugger )
      {
        v32 = (struct _Unwind_Exception *)interr();
        if ( *(_QWORD *)(a1 + 256) )
        {
          *(_QWORD *)(a1 + 264) = 0;
          qfree();
        }
        if ( *(_QWORD *)(a1 + 232) )
        {
          *(_QWORD *)(a1 + 240) = 0;
          qfree();
        }
        if ( *(_QWORD *)(a1 + 208) )
        {
          *(_QWORD *)(a1 + 216) = 0;
          qfree();
        }
        *(_QWORD *)a1 = &stru_236898;
        while ( 1 )
        {
          v33 = *(v5 - 3);
          v5 -= 3;
          if ( v33 )
          {
            v5[1] = 0;
            qfree();
          }
          if ( v4 == v5 )
            _Unwind_Resume(v32);
        }
      }
      BUG();
    }
    *(_BYTE *)(a1 + 11) = ((*(_DWORD *)(a1 + 12) >> 19) & 0x3F) - 1;
    *(_DWORD *)(a1 + 12) = v8 & 0xFE07FFFF;
  }
  *(_BYTE *)(a1 + 200) = a4;
  *(_QWORD *)a1 = off_234878;
  *(_QWORD *)(a1 + 184) = a2;
  *(_QWORD *)(a1 + 192) = a3;
  *(_QWORD *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 232) = 0;
  *(_QWORD *)(a1 + 256) = 0;
  *(_OWORD *)(a1 + 216) = 0;
  *(_OWORD *)(a1 + 240) = 0;
  *(_OWORD *)(a1 + 264) = 0;
  v9 = *(_DWORD *)(get_eah() + 24);
  v10 = *(_QWORD *)(a1 + 216);
  *(_DWORD *)(a1 + 48) = 5;
  *(_DWORD *)(a1 + 280) = v9;
  if ( v10 > 4 )
  {
    if ( v10 != 5 )
      *(_QWORD *)(a1 + 216) = 5;
    v11 = &unk_1D73D0;
    if ( v9 != 4 )
      v11 = &unk_1D73B0;
LABEL_11:
    v12 = 0;
    do
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 208) + 4 * v12) = v11[v12];
      ++v12;
    }
    while ( *(_DWORD *)(a1 + 48) > (int)v12 );
    goto LABEL_13;
  }
  v27 = *(_QWORD *)(a1 + 208);
  if ( *(_QWORD *)(a1 + 224) <= 4u )
  {
    v30 = qvector_reserve();
    *(_QWORD *)(a1 + 208) = v30;
    v10 = *(_QWORD *)(a1 + 216);
    v27 = v30;
  }
  memset((void *)(v27 + 4 * v10), 0, 4 * (5 - v10));
  v28 = *(_DWORD *)(a1 + 280) == 4;
  v29 = *(_DWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 216) = 5;
  v11 = &unk_1D73D0;
  if ( !v28 )
    v11 = &unk_1D73B0;
  if ( v29 > 0 )
    goto LABEL_11;
LABEL_13:
  v13 = *(_DWORD *)(*(_QWORD *)(a1 + 184) + 76LL);
  if ( (unsigned int)(v13 - 1) <= 2 )
    *(_DWORD *)(*(_QWORD *)(a1 + 208) + 12LL) = 2 * v13;
  v14 = *(int *)(a1 + 48);
  v15 = *(_QWORD *)(a1 + 264);
  v16 = *(_DWORD *)(a1 + 48);
  if ( v15 < v14 )
  {
    v26 = *(_QWORD *)(a1 + 256);
    if ( *(_QWORD *)(a1 + 272) < v14 )
    {
      v31 = qvector_reserve();
      *(_QWORD *)(a1 + 256) = v31;
      v15 = *(_QWORD *)(a1 + 264);
      v26 = v31;
    }
    memset((void *)(v26 + 8 * v15), 0, 8 * (v14 - v15));
    *(_QWORD *)(a1 + 264) = v14;
    v16 = *(_DWORD *)(a1 + 48);
  }
  else if ( v14 != v15 )
  {
    *(_QWORD *)(a1 + 264) = v14;
  }
  v17 = 0;
  if ( v16 > 0 )
  {
    do
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 256) + 8 * v17) = *(&off_234940 + v17);
      ++v17;
    }
    while ( *(_DWORD *)(a1 + 48) > (int)v17 );
  }
  v18 = *(_QWORD *)(a1 + 232);
  if ( *(_QWORD *)(a1 + 248) <= 5u )
  {
    v25 = qvector_reserve();
    *(_QWORD *)(a1 + 232) = v25;
    v18 = v25;
  }
  *(_QWORD *)(a1 + 240) = 6;
  *(_DWORD *)v18 = 1970037078;
  *(_BYTE *)(v18 + 4) = 101;
  *(_BYTE *)(*(_QWORD *)(a1 + 232) + 5LL) = 0;
  v19 = *(_QWORD *)(a1 + 232);
  v20 = *(int *)(*(_QWORD *)(a1 + 208) + 12LL);
  v21 = v19;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 208) + 12LL) )
  {
    v23 = *(_QWORD *)(a1 + 240);
    v24 = v20 + 1;
    if ( v23 < v20 + 1 )
    {
      if ( *(_QWORD *)(a1 + 248) < v24 )
      {
        v21 = qvector_reserve();
        *(_QWORD *)(a1 + 232) = v21;
        v23 = *(_QWORD *)(a1 + 240);
      }
      memset((void *)(v21 + v23), 0, v24 - v23);
      *(_QWORD *)(a1 + 240) = v24;
      v19 = *(_QWORD *)(a1 + 232);
    }
    else if ( v24 != v23 )
    {
      *(_QWORD *)(a1 + 240) = v24;
    }
    *(_BYTE *)(v19 + v20) = 0;
  }
  else if ( v19 )
  {
    *(_QWORD *)(a1 + 240) = 0;
    qfree();
    *(_QWORD *)(a1 + 232) = 0;
    *(_QWORD *)(a1 + 248) = 0;
  }
  result = s1;
  if ( *(_QWORD *)(a1 + 240) )
    result = *(const char **)(a1 + 232);
  *(_QWORD *)(*(_QWORD *)(a1 + 256) + 24LL) = result;
  *(_DWORD *)(a1 + 72) = 54;
  *(__m128 *)(a1 + 56) = _mm_loadh_ps((const double *)(a1 + 256));
  return result;
}

