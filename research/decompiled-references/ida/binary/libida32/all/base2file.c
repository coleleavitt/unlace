__int64 __fastcall base2file(FILE *a1, __int64 a2, unsigned int a3, int a4)
{
  int v7; // eax
  int v8; // r14d
  int v9; // eax
  int v10; // r13d
  _BYTE *v11; // r12
  __int64 v12; // r15
  int v13; // r10d
  int v14; // ebx
  int v15; // r14d
  int v16; // [rsp+Ch] [rbp-3Ch]

  if ( (unsigned int)qfseek(a1, a2, 0) )
    return 0;
  v7 = nbits(a3);
  v8 = v7 + 14;
  v9 = v7 + 7;
  if ( v9 >= 0 )
    v8 = v9;
  v10 = a4 - a3;
  v16 = v8 >> 3;
  v11 = (_BYTE *)qalloc((unsigned int)(v8 >> 3 << 16));
  v12 = qword_2CA1698;
  if ( v10 > 0 )
  {
    while ( 1 )
    {
      v13 = 0x10000;
      if ( (unsigned int)v10 <= 0x10000 )
        v13 = v10;
      v14 = v13 * v16;
      v15 = v13;
      show_auto(a3, 0);
      sub_3BAE00(*(_QWORD **)(v12 + 1480), v11, v14, a3, 1, 0);
      if ( v14 != qfwrite(a1, v11) )
        break;
      v10 -= v15;
      a3 += v15;
      if ( v10 <= 0 )
        goto LABEL_12;
    }
    qfree(v11);
    return 0;
  }
LABEL_12:
  qfree(v11);
  return 1;
}

