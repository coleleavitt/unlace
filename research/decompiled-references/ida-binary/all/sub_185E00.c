__int64 __fastcall sub_185E00(__int64 a1, __int64 a2, int *a3, int a4)
{
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  int v9; // eax
  __int64 *v10; // rbx
  int v11; // r12d
  __int64 v12; // rsi
  __int64 v13; // rax
  int v14; // r12d
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // r12
  __int64 v18; // rsi
  __int64 result; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  struct _Unwind_Exception *v27; // r12
  __int64 v28; // rdi
  __int64 v29; // rdi
  __int64 v30; // rdi
  __int64 *v31; // rbx
  __int64 *v32; // rbp
  __int64 v33; // rdi

  *(_DWORD *)(a1 + 8) = -16777212;
  *(_DWORD *)(a1 + 12) = a4 & 0xFFFFFFFB;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 72) = -1;
  *(_OWORD *)(a1 + 16) = -1;
  *(_QWORD *)a1 = &stru_86F6A0;
  v6 = (_QWORD *)(a1 + 80);
  *(_OWORD *)(a1 + 56) = 0;
  do
  {
    *v6 = 0;
    v6 += 3;
    *((_OWORD *)v6 - 1) = 0;
  }
  while ( v6 != (_QWORD *)(a1 + 176) );
  *(_DWORD *)(a1 + 176) = 0;
  v7 = *(unsigned int *)(a1 + 12);
  if ( ((*(_DWORD *)(a1 + 12) >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(a1 + 11) != 0xFF )
    {
      if ( !under_debugger )
      {
        v27 = (struct _Unwind_Exception *)interr(3449, a2, v7, ((*(_DWORD *)(a1 + 12) >> 19) & 0x3Fu) - 1, 0.0);
        v28 = *(_QWORD *)(a1 + 240);
        if ( v28 )
        {
          a2 = 0;
          *(_QWORD *)(a1 + 248) = 0;
          qfree(v28, 0, v24, v25, v26);
        }
        v29 = *(_QWORD *)(a1 + 216);
        if ( v29 )
        {
          *(_QWORD *)(a1 + 224) = 0;
          qfree(v29, a2, v24, 0, v26);
        }
        v30 = *(_QWORD *)(a1 + 192);
        if ( v30 )
        {
          *(_QWORD *)(a1 + 200) = 0;
          qfree(v30, a2, 0, v25, v26);
        }
        v31 = (__int64 *)(a1 + 152);
        v32 = (__int64 *)(a1 + 56);
        *(v32 - 7) = (__int64)&stru_86F6A0;
        while ( 1 )
        {
          v33 = *v31;
          if ( *v31 )
          {
            v31[1] = 0;
            qfree(v33, a2, v24, v25, v26);
          }
          v31 -= 3;
          if ( v32 == v31 )
            _Unwind_Resume(v27);
        }
      }
      BUG();
    }
    *(_BYTE *)(a1 + 11) = ((*(_DWORD *)(a1 + 12) >> 19) & 0x3F) - 1;
    *(_DWORD *)(a1 + 12) = v7 & 0xFE07FFFF;
  }
  v8 = 0;
  *(_QWORD *)(a1 + 192) = 0;
  *(_QWORD *)a1 = shortcutlist_chooser_t___vtable;
  *(_QWORD *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 240) = 0;
  *(_OWORD *)(a1 + 200) = 0;
  *(_OWORD *)(a1 + 224) = 0;
  *(_OWORD *)(a1 + 248) = 0;
  v9 = *a3;
  *(_QWORD *)(a1 + 184) = a2;
  if ( !v9 )
  {
    v20 = 0;
    result = 0;
    goto LABEL_20;
  }
  do
  {
    v10 = (__int64 *)&unk_85C500;
    while ( 1 )
    {
      v11 = *(_DWORD *)v10;
      if ( *(_DWORD *)v10 == v9 )
        break;
      v10 += 3;
      if ( &`vtable for'idaplace_t == v10 )
        goto LABEL_18;
LABEL_9:
      v9 = *a3;
    }
    v12 = *(_QWORD *)(a1 + 192);
    if ( *(_QWORD *)(a1 + 208) < (unsigned __int64)(v8 + 1) )
    {
      v23 = qvector_reserve(a1 + 192, v12, v8 + 1, 4);
      *(_QWORD *)(a1 + 192) = v23;
      v8 = *(_QWORD *)(a1 + 200);
      v12 = v23;
    }
    *(_DWORD *)(v12 + 4 * v8) = v11;
    v13 = *(_QWORD *)(a1 + 224);
    ++*(_QWORD *)(a1 + 200);
    v14 = *((_DWORD *)v10 + 4);
    v15 = *(_QWORD *)(a1 + 216);
    if ( *(_QWORD *)(a1 + 232) < (unsigned __int64)(v13 + 1) )
    {
      v22 = qvector_reserve(a1 + 216, v15, v13 + 1, 4);
      *(_QWORD *)(a1 + 216) = v22;
      v15 = v22;
      v13 = *(_QWORD *)(a1 + 224);
    }
    *(_DWORD *)(v15 + 4 * v13) = v14;
    v16 = *(_QWORD *)(a1 + 248);
    ++*(_QWORD *)(a1 + 224);
    v17 = v10[1];
    v18 = *(_QWORD *)(a1 + 240);
    if ( *(_QWORD *)(a1 + 256) < (unsigned __int64)(v16 + 1) )
    {
      v21 = qvector_reserve(a1 + 240, v18, v16 + 1, 8);
      *(_QWORD *)(a1 + 240) = v21;
      v18 = v21;
      v16 = *(_QWORD *)(a1 + 248);
    }
    v10 += 3;
    *(_QWORD *)(v18 + 8 * v16) = v17;
    v8 = *(_QWORD *)(a1 + 200);
    ++*(_QWORD *)(a1 + 248);
    if ( &`vtable for'idaplace_t != v10 )
      goto LABEL_9;
LABEL_18:
    v9 = a3[1];
    ++a3;
  }
  while ( v9 );
  result = *(_QWORD *)(a1 + 240);
  v20 = *(_QWORD *)(a1 + 216);
LABEL_20:
  *(_DWORD *)(a1 + 48) = v8;
  *(_QWORD *)(a1 + 56) = v20;
  *(_QWORD *)(a1 + 64) = result;
  *(_DWORD *)(a1 + 72) = 172;
  return result;
}
