__int64 __fastcall sub_BE8890(_QWORD *a1, __int64 a2, __int64 a3, int a4)
{
  _QWORD *v4; // r14
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  unsigned int v12; // eax
  unsigned __int64 v13; // rdx
  __int64 v15; // rax
  __int64 v16; // rbp
  char *v17; // rdi
  char *v18; // rdx

  v4 = (_QWORD *)a2;
  v8 = sub_ECAC60(32, a1, 8);
  *(_WORD *)v8 = *(_WORD *)v8 & 0xFE00 | 0x34;
  if ( unk_2CAD564 )
    sub_EC5E10(52);
  *(_DWORD *)(v8 + 24) = 0;
  *(_WORD *)(v8 + 1) &= 0xF801u;
  *(_QWORD *)(v8 + 8) = a3;
  *(_DWORD *)(v8 + 28) = a4;
  v11 = *(unsigned int *)(a2 + 8);
  *(_QWORD *)(v8 + 16) = 0;
  v12 = v11;
  *(_DWORD *)(v8 + 24) = v11;
  v13 = (unsigned __int64)(v11 + 63) >> 6;
  if ( v12 > 0x40 )
    v4 = *(_QWORD **)a2;
  if ( v13 > 1 )
  {
    v15 = a1[294];
    v16 = 8 * v13;
    a1[304] += 8 * v13;
    v17 = (char *)((v15 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    v18 = &v17[8 * v13];
    if ( a1[295] >= (unsigned __int64)v18 && v15 )
      a1[294] = v18;
    else
      v17 = (char *)sub_962430((__int64)(a1 + 294), v16, v16, 3, v9, v10);
    *(_QWORD *)(v8 + 16) = v17;
    memmove(v17, v4, v16);
  }
  else if ( v13 == 1 )
  {
    *(_QWORD *)(v8 + 16) = *v4;
  }
  *(_BYTE *)(v8 + 1) &= 0x3Fu;
  *(_BYTE *)(v8 + 2) &= 0xF8u;
  return v8;
}

