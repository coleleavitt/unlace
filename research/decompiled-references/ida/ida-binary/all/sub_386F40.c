__int64 __fastcall sub_386F40(__int64 a1, const char *a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // r12
  _QWORD *v5; // rbp
  double v7; // xmm0_8
  _QWORD *v8; // rax
  __int64 v9; // rdi
  int v10; // eax
  unsigned __int64 v11; // rcx
  _DWORD *v12; // rsi
  __int64 v13; // rax
  int v14; // eax
  __int64 result; // rax
  __int64 v16; // rsi
  bool v17; // zf
  int v18; // eax
  __int64 v19; // rax
  struct _Unwind_Exception *v20; // r14
  __int64 v21; // rdi
  __int64 v22; // rdi

  v4 = (_QWORD *)(a1 + 80);
  v5 = (_QWORD *)(a1 + 176);
  *(_QWORD *)a1 = &stru_86F6A0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 72) = -1;
  *(_OWORD *)(a1 + 16) = -1;
  v7 = 0.0;
  *(_QWORD *)(a1 + 8) = 0x20A0406000004LL;
  v8 = (_QWORD *)(a1 + 80);
  *(_OWORD *)(a1 + 56) = 0;
  do
  {
    *v8 = 0;
    v8 += 3;
    *((_OWORD *)v8 - 1) = 0;
  }
  while ( v5 != v8 );
  *(_DWORD *)(a1 + 176) = 0;
  v9 = *(unsigned int *)(a1 + 12);
  if ( ((*(_DWORD *)(a1 + 12) >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(a1 + 11) != 0xFF )
    {
      if ( !under_debugger )
      {
        v20 = (struct _Unwind_Exception *)interr(3449, a2, a3, a4, 0.0);
        v21 = *(_QWORD *)(a1 + 208);
        if ( v21 )
        {
          *(_QWORD *)(a1 + 216) = 0;
          v7 = qfree(v21, a2);
        }
        *(_QWORD *)a1 = &stru_86F6A0;
        while ( 1 )
        {
          v22 = *(v5 - 3);
          v5 -= 3;
          if ( v22 )
          {
            v5[1] = 0;
            v7 = qfree(v22, a2, v7);
          }
          if ( v5 == v4 )
            _Unwind_Resume(v20);
        }
      }
      BUG();
    }
    v9 = (unsigned int)v9 & 0xFE07FFFF;
    *(_BYTE *)(a1 + 11) = ((*(_DWORD *)(a1 + 12) >> 19) & 0x3F) - 1;
    *(_DWORD *)(a1 + 12) = v9;
  }
  *(_BYTE *)(a1 + 200) = a4;
  *(_QWORD *)a1 = sra_chooser_t___vtable;
  *(_QWORD *)(a1 + 184) = a2;
  *(_QWORD *)(a1 + 192) = a3;
  *(_QWORD *)(a1 + 208) = 0;
  *(_OWORD *)(a1 + 216) = 0;
  v10 = *(_DWORD *)(get_eah(v9, a2, a3) + 24);
  v11 = *(_QWORD *)(a1 + 216);
  *(_DWORD *)(a1 + 48) = 5;
  *(_DWORD *)(a1 + 232) = v10;
  if ( v11 > 4 )
  {
    if ( v11 != 5 )
      *(_QWORD *)(a1 + 216) = 5;
    v12 = &unk_5E93D0;
    if ( v10 != 4 )
      v12 = &unk_5E93B0;
LABEL_11:
    v13 = 0;
    do
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 208) + 4 * v13) = v12[v13];
      ++v13;
    }
    while ( *(_DWORD *)(a1 + 48) > (int)v13 );
    goto LABEL_13;
  }
  v16 = *(_QWORD *)(a1 + 208);
  if ( *(_QWORD *)(a1 + 224) <= 4u )
  {
    v19 = qvector_reserve(a1 + 208, v16, 5, 4);
    *(_QWORD *)(a1 + 208) = v19;
    v11 = *(_QWORD *)(a1 + 216);
    v16 = v19;
  }
  memset((void *)(v16 + 4 * v11), 0, 4 * (5 - v11));
  v17 = *(_DWORD *)(a1 + 232) == 4;
  v18 = *(_DWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 216) = 5;
  v12 = &unk_5E93D0;
  if ( !v17 )
    v12 = &unk_5E93B0;
  if ( v18 > 0 )
    goto LABEL_11;
LABEL_13:
  v14 = *(_DWORD *)(*(_QWORD *)(a1 + 184) + 76LL);
  if ( (unsigned int)(v14 - 1) <= 2 )
    *(_DWORD *)(*(_QWORD *)(a1 + 208) + 12LL) = 2 * v14;
  *(_DWORD *)(a1 + 72) = 54;
  *(_QWORD *)(a1 + 64) = &off_867E80;
  result = *(_QWORD *)(a1 + 208);
  *(_QWORD *)(a1 + 56) = result;
  return result;
}
