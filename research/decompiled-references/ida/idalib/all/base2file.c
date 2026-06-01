__int64 __fastcall base2file(FILE *a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  int v7; // eax
  int v8; // r14d
  int v9; // eax
  Elf64_Sym *v10; // r13
  _BYTE *v11; // r12
  __int64 v12; // r15
  Elf64_Sym *v13; // r10
  int v14; // ebx
  __int64 v15; // r14
  int v16; // [rsp+Ch] [rbp-3Ch]

  if ( (unsigned int)qfseek(a1, a2, 0) )
    return 0;
  v7 = nbits(a3);
  v8 = v7 + 14;
  v9 = v7 + 7;
  if ( v9 >= 0 )
    v8 = v9;
  v10 = (Elf64_Sym *)(a4 - a3);
  v16 = v8 >> 3;
  v11 = (_BYTE *)qalloc((unsigned int)(v8 >> 3 << 16));
  v12 = qword_2CCB598;
  if ( (__int64)v10 > 0 )
  {
    while ( 1 )
    {
      v13 = &stru_10000;
      if ( (__int64)v10 <= (__int64)&stru_10000 )
        v13 = v10;
      v14 = (_DWORD)v13 * v16;
      v15 = (__int64)v13;
      show_auto(a3, 0);
      sub_3BFD20(*(__int64 **)(v12 + 1672), v11, v14, a3, 1, 0);
      if ( v14 != qfwrite(a1, v11) )
        break;
      v10 = (Elf64_Sym *)((char *)v10 - v15);
      a3 += v15;
      if ( (__int64)v10 <= 0 )
        goto LABEL_12;
    }
    qfree(v11);
    return 0;
  }
LABEL_12:
  qfree(v11);
  return 1;
}
