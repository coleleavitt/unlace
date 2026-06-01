__int64 __fastcall sub_17A0B20(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int8 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7)
{
  unsigned __int64 v7; // r12
  __int16 v9; // dx
  _BYTE *v10; // r15
  __int16 v11; // dx
  __int64 v12; // r9
  unsigned int v13; // r13d
  char v14; // r10
  __int64 v15; // r14
  unsigned __int64 v16; // rdi
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int16 v19; // dx
  _BYTE *v20; // rdi
  _BYTE *v22; // r13
  __int64 v23; // rsi
  unsigned int v24; // r14d
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // r14
  __int64 v28; // rdx
  char *v29; // rcx
  _DWORD *v30; // rax
  _DWORD *v31; // rsi
  char *v32; // rdx
  char v33; // [rsp+8h] [rbp-A0h]
  __int64 v35; // [rsp+18h] [rbp-90h]
  void *ptr; // [rsp+20h] [rbp-88h] BYREF
  __int64 v37; // [rsp+28h] [rbp-80h]
  _BYTE v38[16]; // [rsp+30h] [rbp-78h] BYREF
  void *v39; // [rsp+40h] [rbp-68h] BYREF
  __int64 v40; // [rsp+48h] [rbp-60h]
  _BYTE v41[88]; // [rsp+50h] [rbp-58h] BYREF

  v7 = a2;
  v9 = *(_WORD *)a2;
  v10 = v41;
  v40 = 0x400000000LL;
  v11 = v9 & 0x1FF;
  v39 = v41;
  if ( v11 == 46 )
  {
    v12 = *(_QWORD *)(a2 + 24);
    v13 = 0;
    if ( (*(_BYTE *)(v12 + 28) & 0x7Fu) - 49 > 2 )
      return v13;
    v14 = 0;
    v15 = 0;
    while ( 1 )
    {
      *(_QWORD *)&v10[8 * v15] = v12;
      v16 = *(_QWORD *)(v7 + 16);
      v15 = (unsigned int)(v40 + 1);
      v17 = *(_QWORD *)(v12 + 48);
      LODWORD(v40) = v40 + 1;
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
         - 43 <= 1 )
        v14 = 1;
      v33 = v14;
      v18 = sub_BFBAE0(v16);
      v14 = v33;
      v7 = v18;
      v19 = *(_WORD *)v18 & 0x1FF;
      if ( v19 != 46 )
        break;
      v12 = *(_QWORD *)(v18 + 24);
      if ( (*(_BYTE *)(v12 + 28) & 0x7Fu) - 49 > 2 )
      {
        v10 = v39;
        v13 = 0;
        goto LABEL_15;
      }
      if ( v15 + 1 > (unsigned __int64)HIDWORD(v40) )
      {
        v35 = *(_QWORD *)(v18 + 24);
        sub_2237220(&v39, v41, v15 + 1, 8);
        v15 = (unsigned int)v40;
        v12 = v35;
        v14 = v33;
      }
      v10 = v39;
    }
    v10 = v39;
    v13 = 0;
    if ( v19 != 71 )
      goto LABEL_15;
    if ( *(_QWORD *)(a1 + 16) != *(_QWORD *)(v18 + 16) )
      goto LABEL_15;
    v13 = a3;
    LOBYTE(v13) = (v33 ^ 1) & a3;
    if ( (_BYTE)v13 )
      goto LABEL_15;
  }
  else
  {
    v13 = 0;
    if ( v11 != 71 || *(_QWORD *)(a1 + 16) != *(_QWORD *)(a2 + 16) )
      return v13;
    if ( a3 )
      return a3;
    v15 = 0;
  }
  v22 = &v10[8 * v15];
  v23 = 0x400000000LL;
  ptr = v38;
  v37 = 0x400000000LL;
  if ( v22 != v10 )
  {
    do
    {
      v27 = *((_QWORD *)v22 - 1);
      if ( *(char *)(v27 + 29) < 0 )
        v27 = sub_B72720(*((_QWORD *)v22 - 1));
      v28 = *(unsigned int *)(v27 + 68);
      if ( (v28 & 0xFFFFFFF0) == 0 )
      {
        sub_B7EAB0(v27, v23, v28, a4, a5, a6);
        LODWORD(v28) = *(_DWORD *)(v27 + 68);
      }
      a4 = HIDWORD(v37);
      v24 = ((unsigned int)v28 >> 4) - 1;
      v25 = (unsigned int)v37 + 1LL;
      if ( v25 > HIDWORD(v37) )
      {
        v23 = (__int64)v38;
        sub_2237220(&ptr, v38, v25, 4);
      }
      *((_DWORD *)ptr + (unsigned int)v37) = v24;
      v22 -= 8;
      v26 = (unsigned int)(v37 + 1);
      LODWORD(v37) = v37 + 1;
    }
    while ( v22 != v10 );
    v20 = ptr;
    v29 = (char *)ptr + 4 * v26;
    v30 = *(_DWORD **)(a1 + 32);
    v31 = &v30[*(unsigned int *)(a1 + 40)];
    if ( v30 != v31 && ptr != v29 )
    {
      if ( *v30 > *(_DWORD *)ptr )
        goto LABEL_12;
      if ( *v30 >= *(_DWORD *)ptr )
      {
        v32 = (char *)ptr;
        do
        {
          v32 += 4;
          ++v30;
          if ( v32 == v29 || v30 == v31 )
            break;
          if ( *(_DWORD *)v32 < *v30 )
            goto LABEL_12;
        }
        while ( *(_DWORD *)v32 <= *v30 );
      }
    }
  }
  sub_17A0370(a1, v7, a7);
  v20 = ptr;
LABEL_12:
  if ( v20 != v38 )
    free(v20);
  v10 = v39;
  v13 = 1;
LABEL_15:
  if ( v10 != v41 )
    free(v10);
  return v13;
}
