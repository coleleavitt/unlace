void *__fastcall sub_EFB450(__int64 a1, _QWORD *a2, void ***a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v6; // r8
  int v9; // eax
  unsigned int v10; // eax
  char v11; // dl
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  void *result; // rax
  __int64 v15; // rax
  __int64 v16; // r13
  char *v17; // rcx
  char *v18; // rdx
  _QWORD *v19; // rsi

  v6 = (unsigned int)(a5 << 7);
  *(_DWORD *)a1 = *(_DWORD *)a1 & 0x80000000 | 4;
  v9 = *(_DWORD *)(a1 + 4);
  *(_BYTE *)(a1 + 3) = v6;
  v10 = (_DWORD)a3[1] & 0x7FFFFFFF | v9 & 0x80000000;
  v11 = *((_BYTE *)a3 + 12);
  *(_DWORD *)(a1 + 4) = v10;
  *(_BYTE *)(a1 + 7) = (v11 << 7) | HIBYTE(v10) & 0x7F;
  v12 = *((unsigned int *)a3 + 2);
  v13 = (unsigned __int64)(v12 + 63) >> 6;
  if ( v13 > 1 )
  {
    v15 = a2[294];
    v16 = 8 * v13;
    a2[304] += 8 * v13;
    v17 = (char *)((v15 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    v18 = &v17[8 * v13];
    if ( a2[295] >= (unsigned __int64)v18 && v15 )
      a2[294] = v18;
    else
      v17 = (char *)sub_962430((__int64)(a2 + 294), v16, v16, 3, v6, a6);
    v19 = a3;
    if ( *((_DWORD *)a3 + 2) > 0x40u )
      v19 = *a3;
    result = memcpy(v17, v19, v16);
    *(_QWORD *)(a1 + 16) = a4;
    *(_QWORD *)(a1 + 8) = result;
  }
  else
  {
    if ( (unsigned int)v12 <= 0x40 )
      result = *a3;
    else
      result = **a3;
    *(_QWORD *)(a1 + 16) = a4;
    *(_QWORD *)(a1 + 8) = result;
  }
  return result;
}

