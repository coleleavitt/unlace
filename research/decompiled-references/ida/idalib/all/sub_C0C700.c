__int64 __fastcall sub_C0C700(_QWORD *a1, __int64 a2, __int64 a3, int a4, int a5)
{
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // r13
  __int64 v13; // rdx
  unsigned int v14; // eax
  unsigned __int64 v15; // rdx
  __int64 v17; // rax
  __int64 v18; // rbp
  char *v19; // rdi
  char *v20; // rdx

  v9 = sub_EEE9A0(40, a1, 8);
  *(_WORD *)v9 = *(_WORD *)v9 & 0xFE00 | 0x3F;
  if ( unk_2CD7484 )
    sub_EE9B50(63);
  *(_DWORD *)(v9 + 24) = 0;
  *(_DWORD *)(v9 + 28) = a4;
  v12 = (_QWORD *)a2;
  *(_WORD *)(v9 + 1) &= 0xF801u;
  *(_QWORD *)(v9 + 8) = a3;
  *(_DWORD *)(v9 + 32) = a5;
  v13 = *(unsigned int *)(a2 + 8);
  *(_QWORD *)(v9 + 16) = 0;
  v14 = v13;
  *(_DWORD *)(v9 + 24) = v13;
  v15 = (unsigned __int64)(v13 + 63) >> 6;
  if ( v14 > 0x40 )
    v12 = *(_QWORD **)a2;
  if ( v15 > 1 )
  {
    v17 = a1[294];
    v18 = 8 * v15;
    a1[304] += 8 * v15;
    v19 = (char *)((v17 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    v20 = &v19[8 * v15];
    if ( a1[295] >= (unsigned __int64)v20 && v17 )
      a1[294] = v20;
    else
      v19 = (char *)sub_986170((__int64)(a1 + 294), v18, v18, 3, v10, v11);
    *(_QWORD *)(v9 + 16) = v19;
    memmove(v19, v12, v18);
  }
  else if ( v15 == 1 )
  {
    *(_QWORD *)(v9 + 16) = *v12;
  }
  *(_BYTE *)(v9 + 1) &= 0x3Fu;
  *(_BYTE *)(v9 + 2) &= 0xF8u;
  return v9;
}
