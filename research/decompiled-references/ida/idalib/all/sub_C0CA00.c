unsigned __int64 __fastcall sub_C0CA00(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v9; // r13
  __int64 v10; // rax
  unsigned int v11; // ecx
  unsigned __int64 result; // rax
  __int64 v13; // rbp
  __int64 v14; // rax
  char *v15; // rdi
  unsigned int v16; // [rsp+Ch] [rbp-2Ch]

  *(_WORD *)a1 = *(_WORD *)a1 & 0xFE00 | 0x34;
  if ( unk_2CD7484 )
  {
    v16 = a5;
    sub_EE9B50(52);
    a5 = v16;
  }
  *(_QWORD *)(a1 + 8) = a4;
  v9 = (_QWORD *)a3;
  *(_DWORD *)(a1 + 24) = 0;
  *(_WORD *)(a1 + 1) &= 0xF801u;
  *(_DWORD *)(a1 + 28) = a5;
  v10 = *(unsigned int *)(a3 + 8);
  *(_QWORD *)(a1 + 16) = 0;
  v11 = v10;
  *(_DWORD *)(a1 + 24) = v10;
  result = (unsigned __int64)(v10 + 63) >> 6;
  if ( v11 > 0x40 )
    v9 = *(_QWORD **)a3;
  if ( result > 1 )
  {
    v13 = 8 * result;
    v14 = a2[294];
    a2[304] += v13;
    v15 = (char *)((v14 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( a2[295] >= (unsigned __int64)&v15[v13] && v14 )
      a2[294] = &v15[v13];
    else
      v15 = (char *)sub_986170((__int64)(a2 + 294), v13, v13, 3, a5, a6);
    *(_QWORD *)(a1 + 16) = v15;
    result = (unsigned __int64)memmove(v15, v9, v13);
  }
  else if ( result == 1 )
  {
    result = *v9;
    *(_QWORD *)(a1 + 16) = *v9;
  }
  *(_BYTE *)(a1 + 1) &= 0x3Fu;
  *(_BYTE *)(a1 + 2) &= 0xF8u;
  return result;
}
