char *__fastcall sub_311540(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // r13
  _QWORD *v4; // r12
  _QWORD *v5; // rbp
  double v7; // xmm0_8
  __int64 v8; // rcx
  const char *v9; // rsi
  unsigned __int64 v10; // rbp
  char *result; // rax
  _DWORD *v12; // r12
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // r15
  int v16; // ecx
  size_t v17; // rdx
  size_t v18; // r13
  __int64 v19; // rax
  struct _Unwind_Exception *v20; // rbp
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rdi

  v3 = (_QWORD *)(a1 + 80);
  v4 = (_QWORD *)(a1 + 176);
  v5 = (_QWORD *)(a1 + 80);
  *(_QWORD *)a1 = &stru_86F6A0;
  *(_QWORD *)(a1 + 8) = 0x3FF000004LL;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = a2;
  *(_DWORD *)(a1 + 48) = 2;
  *(_DWORD *)(a1 + 72) = -1;
  *(_OWORD *)(a1 + 16) = -1;
  v7 = 0.0;
  *(_OWORD *)(a1 + 56) = 0;
  do
  {
    *v5 = 0;
    v5 += 3;
    *((_OWORD *)v5 - 1) = 0;
  }
  while ( v5 != v4 );
  *(_DWORD *)(a1 + 176) = 0;
  v8 = *(unsigned int *)(a1 + 12);
  v9 = (const char *)(((*(_DWORD *)(a1 + 12) >> 19) & 0x3Fu) - 1);
  if ( ((*(_DWORD *)(a1 + 12) >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(a1 + 11) != 0xFF )
    {
      if ( !under_debugger )
      {
        v20 = (struct _Unwind_Exception *)interr(3449, v9, a3, v8, 0.0);
        v21 = *(_QWORD *)(a1 + 216);
        if ( v21 )
        {
          *(_QWORD *)(a1 + 224) = 0;
          v7 = qfree(v21, v9);
        }
        v22 = *(_QWORD *)(a1 + 192);
        if ( v22 )
        {
          *(_QWORD *)(a1 + 200) = 0;
          v7 = qfree(v22, v9, v7);
        }
        *(_QWORD *)a1 = &stru_86F6A0;
        while ( 1 )
        {
          v23 = *(v4 - 3);
          v4 -= 3;
          if ( v23 )
          {
            v4[1] = 0;
            v7 = qfree(v23, v9, v7);
          }
          if ( v4 == v3 )
            _Unwind_Resume(v20);
        }
      }
      BUG();
    }
    *(_BYTE *)(a1 + 11) = ((*(_DWORD *)(a1 + 12) >> 19) & 0x3F) - 1;
    *(_DWORD *)(a1 + 12) = v8 & 0xFE07FFFF;
  }
  v10 = *(int *)(a1 + 48);
  result = (char *)qo_chooser_t___vtable;
  *(_QWORD *)(a1 + 184) = a3;
  *(_QWORD *)a1 = qo_chooser_t___vtable;
  *(_QWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 216) = 0;
  *(_OWORD *)(a1 + 200) = 0;
  *(_OWORD *)(a1 + 224) = 0;
  if ( v10 )
  {
    v13 = qvector_reserve(a1 + 192, 0, v10, 4);
    v14 = *(_QWORD *)(a1 + 200);
    *(_QWORD *)(a1 + 192) = v13;
    memset((void *)(v13 + 4 * v14), 0, 4 * (v10 - v14));
    v15 = *(int *)(a1 + 48);
    result = *(char **)(a1 + 224);
    *(_QWORD *)(a1 + 200) = v10;
    v10 = *(_QWORD *)(a1 + 216);
    v16 = v15;
    if ( (unsigned __int64)result < v15 )
    {
      if ( *(_QWORD *)(a1 + 232) < v15 )
      {
        v19 = qvector_reserve(a1 + 216, *(_QWORD *)(a1 + 216), v15, 8);
        *(_QWORD *)(a1 + 216) = v19;
        v10 = v19;
        result = *(char **)(a1 + 224);
      }
      result = (char *)memset((void *)(v10 + 8LL * (_QWORD)result), 0, 8 * (v15 - (_QWORD)result));
      *(_QWORD *)(a1 + 224) = v15;
      v10 = *(_QWORD *)(a1 + 216);
      v12 = *(_DWORD **)(a1 + 192);
      v16 = *(_DWORD *)(a1 + 48);
    }
    else
    {
      v12 = *(_DWORD **)(a1 + 192);
      if ( (char *)v15 != result )
        *(_QWORD *)(a1 + 224) = v15;
    }
    if ( v16 > 0 )
    {
      v17 = (unsigned int)v16;
      v18 = 8LL * (unsigned int)v16;
      if ( v10 < (unsigned __int64)&v12[v17] && (unsigned __int64)v12 < v10 + v18 )
      {
        result = "View";
        *v12 = 30;
        *(_QWORD *)v10 = "View";
        if ( v16 != 1 )
        {
          v12[1] = 10;
          result = (char *)"Shortcut";
          *(_QWORD *)(v10 + 8) = "Shortcut";
        }
      }
      else
      {
        memcpy(v12, &unk_5E6DD0, v17 * 4);
        result = (char *)memcpy((void *)v10, &off_865860, v18);
      }
    }
  }
  else
  {
    v12 = nullptr;
  }
  *(_QWORD *)(a1 + 56) = v12;
  *(_QWORD *)(a1 + 64) = v10;
  *(_DWORD *)(a1 + 72) = 96;
  return result;
}
