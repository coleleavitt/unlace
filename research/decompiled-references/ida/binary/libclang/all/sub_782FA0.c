__int64 __fastcall sub_782FA0(
        __int64 a1,
        __int64 a2,
        int a3,
        const void *a4,
        size_t a5,
        __int64 a6,
        const void *a7,
        size_t n)
{
  size_t v8; // r15
  size_t v10; // r13
  size_t v11; // rcx
  unsigned __int64 v12; // rbx
  __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // rdx
  __int16 v16; // ax
  char v18; // al
  _QWORD *v19; // rax
  __int64 v22; // [rsp+18h] [rbp-40h]

  v8 = a5 + 1;
  v10 = a5 + 1 + n;
  v11 = v10 + 1;
  if ( a2 )
  {
    v12 = (a2 + 40) & 0xFFFFFFFFFFFFFFFBLL;
    v13 = sub_79A610(48, a1, a2 + 40, v11);
    *(_QWORD *)v13 = off_49F5208;
    v14 = sub_79A2E0(a2 + 40);
    v15 = *(_QWORD *)(v14 + 8) & 7LL;
    if ( (*(_QWORD *)(v14 + 8) & 7) != 0 && *(char *)(v14 + 29) < 0 )
    {
      v22 = *(_QWORD *)(v14 + 8) & 7LL;
      v18 = sub_7946A0(v14);
      v15 = v22;
      if ( !v18 )
        v15 = 0;
    }
  }
  else
  {
    v12 = 0;
    v19 = (_QWORD *)sub_79A610(48, a1, 0, v11);
    v15 = 0;
    v13 = (__int64)v19;
    *v19 = off_49F5208;
  }
  *(_QWORD *)(v13 + 8) = v15;
  *(_QWORD *)(v13 + 16) = v12;
  *(_DWORD *)(v13 + 24) = a3;
  *(_WORD *)(v13 + 28) = 24586;
  v16 = sub_799DF0(10);
  *(_BYTE *)(v13 + 32) &= 0xF8u;
  *(_WORD *)(v13 + 30) = v16 & 0x3FFF | *(_WORD *)(v13 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(10);
  *(_QWORD *)(v13 + 40) = v8;
  *(_QWORD *)v13 = &off_47DA0C8;
  memcpy((void *)(v13 + 48), a4, a5);
  *(_BYTE *)(v13 + a5 + 48) = 0;
  memcpy((void *)(v13 + a5 + 49), a7, n);
  *(_BYTE *)(v13 + v10 + 48) = 0;
  return v13;
}

