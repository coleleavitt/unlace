__int64 __fastcall clang_Type_getTemplateArgumentAsType(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned int *v12; // rax
  int v13; // ecx
  unsigned int *v14; // rsi
  int v15; // edx
  __int64 v16; // rsi
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned int *v20; // rax

  if ( (a8 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
    goto LABEL_13;
  v10 = sub_B10F70(*(_QWORD *)(a8 & 0xFFFFFFFFFFFFFFF0LL));
  if ( v10 )
  {
    v11 = *(unsigned int *)(v10 + 20);
    v12 = (unsigned int *)(v10 + 48);
    goto LABEL_4;
  }
  v18 = sub_B0E910(*(_QWORD *)(a8 & 0xFFFFFFFFFFFFFFF0LL));
  if ( !v18 || (*(_BYTE *)(v18 + 28) & 0x7Fu) - 58 > 1 )
  {
LABEL_13:
    sub_690DD0(a1, 0, a9);
    return a1;
  }
  v20 = *(unsigned int **)(v18 + 168);
  v11 = *v20;
  v12 = v20 + 2;
LABEL_4:
  v13 = 0;
  v14 = &v12[6 * v11];
  if ( v14 == v12 )
  {
LABEL_9:
    v16 = 0;
    goto LABEL_10;
  }
  while ( 1 )
  {
    v15 = *v12 & 0x7FFFFFFF;
    if ( v15 == 9 )
      break;
    if ( a2 == v13 )
    {
      v16 = 0;
      if ( v15 == 1 )
        v16 = *((_QWORD *)v12 + 1);
      goto LABEL_10;
    }
    ++v13;
LABEL_8:
    v12 += 6;
    if ( v14 == v12 )
      goto LABEL_9;
  }
  if ( a2 >= v13 + v12[1] )
  {
    v13 += v12[1];
    goto LABEL_8;
  }
  v16 = 0;
  v19 = *((_QWORD *)v12 + 1) + 24LL * (a2 - v13);
  if ( (*(_DWORD *)v19 & 0x7FFFFFFF) == 1 )
    v16 = *(_QWORD *)(v19 + 8);
LABEL_10:
  sub_690DD0(a1, v16, a9);
  return a1;
}

