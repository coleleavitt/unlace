__int64 __fastcall sub_1AC2210(__int64 a1, __int64 *a2, unsigned __int64 *a3, __int64 a4, double a5)
{
  __int64 *v5; // r13
  __int64 v9; // rdi
  char i; // al
  __int64 v11; // rdi
  signed __int64 v12; // rbp
  void *v13; // r15
  __int64 v14; // rax
  unsigned __int64 *v16; // rbp
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  __int16 v19; // ax
  __int64 v20; // rdx
  unsigned __int64 v21; // rdi
  unsigned int v22; // eax
  _WORD *v23; // r8
  _WORD *v24; // [rsp+8h] [rbp-110h]
  void *ptr; // [rsp+10h] [rbp-108h] BYREF
  __int64 v26; // [rsp+18h] [rbp-100h]
  _BYTE v27[48]; // [rsp+20h] [rbp-F8h] BYREF
  _BYTE v28[200]; // [rsp+50h] [rbp-C8h] BYREF

  v5 = a2;
  v9 = sub_168B6F0((__int64)a2);
  for ( i = *(_BYTE *)(v9 + 8) & 0x7F; i == 4; i = *(_BYTE *)(v9 + 8) & 0x7F )
  {
    while ( 1 )
    {
      v11 = *(_QWORD *)(sub_B8C1B0(v9) + 16);
      if ( (v11 & 4) != 0 )
        break;
      v9 = v11 & 0xFFFFFFFFFFFFFFF8LL;
      i = *(_BYTE *)(v9 + 8) & 0x7F;
      if ( i != 4 )
        goto LABEL_4;
    }
    v9 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF8LL);
  }
LABEL_4:
  v12 = 8 * a4;
  v13 = (void *)(a1 + 16);
  if ( i == 24 || !i )
  {
    *(_QWORD *)a1 = v13;
    *(_QWORD *)(a1 + 8) = 0x600000000LL;
    LODWORD(v14) = 0;
    if ( (unsigned __int64)(v12 >> 3) > 6 )
    {
      sub_2237220(a1, a1 + 16, v12 >> 3, 8);
      v14 = *(unsigned int *)(a1 + 8);
      v13 = (void *)(*(_QWORD *)a1 + 8 * v14);
      if ( !v12 )
        goto LABEL_9;
    }
    else if ( !v12 )
    {
LABEL_9:
      *(_DWORD *)(a1 + 8) = v14 + (v12 >> 3);
      return a1;
    }
    memcpy(v13, a3, v12);
    LODWORD(v14) = *(_DWORD *)(a1 + 8);
    goto LABEL_9;
  }
  v16 = &a3[(unsigned __int64)v12 / 8];
  ptr = v27;
  v26 = 0x600000000LL;
  if ( a3 == v16 )
  {
    *(_QWORD *)a1 = v13;
    *(_QWORD *)(a1 + 8) = 0x600000000LL;
  }
  else
  {
    do
    {
      while ( 1 )
      {
        v23 = (_WORD *)*a3;
        v19 = *(_WORD *)*a3 & 0x1FF;
        if ( v19 == 109 )
          break;
        if ( v19 == 69 )
          break;
        if ( v19 == 46 )
          break;
        v20 = *((_QWORD *)v23 + 2);
        if ( (*(_BYTE *)(v20 + 28) & 0x7Fu) - 40 <= 6 && (*(_BYTE *)(v20 + 96) & 5) == 1 )
          break;
        v21 = *a3++;
        v22 = sub_EEB7E0(v21, (__int64)a2, a5);
        a2 = v5;
        sub_168B9F0((__int64)v28, v5, v22, 0xB5Fu, 0);
        sub_15F7200(v28);
        if ( v16 == a3 )
          goto LABEL_24;
      }
      v17 = (unsigned int)v26;
      v18 = (unsigned int)v26 + 1LL;
      if ( v18 > HIDWORD(v26) )
      {
        v24 = (_WORD *)*a3;
        a2 = (__int64 *)v27;
        sub_2237220(&ptr, v27, v18, 8);
        v17 = (unsigned int)v26;
        v23 = v24;
      }
      ++a3;
      *((_QWORD *)ptr + v17) = v23;
      LODWORD(v26) = v26 + 1;
    }
    while ( v16 != a3 );
LABEL_24:
    *(_QWORD *)a1 = v13;
    *(_QWORD *)(a1 + 8) = 0x600000000LL;
    if ( (_DWORD)v26 )
      sub_1576230((char ***)a1, (char ***)&ptr);
    if ( ptr != v27 )
      free(ptr);
  }
  return a1;
}
