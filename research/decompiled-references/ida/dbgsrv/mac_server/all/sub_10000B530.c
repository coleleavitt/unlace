/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000B530
// Address: 0x000000010000B530

//----- (000000010000B530) ----------------------------------------------------
__int64 __fastcall sub_10000B530(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // r15
  char *v4; // r13
  _BYTE *v5; // r14
  _BYTE *v6; // rax
  __int64 v7; // r12
  unsigned __int64 v8; // r12
  _BYTE *v9; // rax
  unsigned __int64 v10; // r9
  char *v11; // rdx
  signed __int64 v12; // r14
  unsigned __int64 v13; // r14
  char *v14; // rsi
  _QWORD *v15; // rdi
  __int64 v16; // r14
  unsigned __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r10
  __int128 v20; // xmm1
  __int64 result; // rax
  _QWORD *__p; // [rsp+8h] [rbp-38h]
  _QWORD *v23; // [rsp+10h] [rbp-30h]

  v3 = *(_QWORD **)(a1 + 8);
  if ( v3 == *(_QWORD **)a1 )
  {
    v23 = a2;
    v5 = *(_BYTE **)(a1 + 16);
    v6 = *(_BYTE **)(a1 + 24);
    if ( v5 >= v6 )
    {
      __p = *(_QWORD **)a1;
      v8 = 1;
      if ( v6 != (_BYTE *)v3 )
        v8 = (v6 - (_BYTE *)v3) >> 2;
      if ( v8 >> 61 )
        sub_10000AF40();
      v9 = operator new(8 * v8);
      v10 = (v8 + 3) >> 2;
      v4 = &v9[8 * v10];
      v11 = v4;
      v12 = v5 - (_BYTE *)v3;
      if ( v12 )
      {
        v11 = &v4[v12];
        v13 = v12 - 8;
        v14 = &v9[8 * ((v8 + 3) >> 2)];
        v15 = v3;
        if ( v13 < 0x68 )
          goto LABEL_23;
        v14 = &v9[8 * ((v8 + 3) >> 2)];
        v15 = v3;
        if ( (unsigned __int64)(&v9[8 * v10] - (_BYTE *)v3) < 0x20 )
          goto LABEL_23;
        v16 = (v13 >> 3) + 1;
        v17 = v16 & 0xFFFFFFFFFFFFFFFCLL;
        v14 = &v4[8 * (v16 & 0xFFFFFFFFFFFFFFFCLL)];
        v15 = &v3[v16 & 0xFFFFFFFFFFFFFFFCLL];
        v18 = (__int64)&v9[8 * v10 + 16];
        v19 = 0;
        do
        {
          v20 = *(_OWORD *)&v3[v19 + 2];
          *(_OWORD *)(v18 + 8 * v19 - 16) = *(_OWORD *)&v3[v19];
          *(_OWORD *)(v18 + 8 * v19) = v20;
          v19 += 4;
        }
        while ( v17 != v19 );
        if ( v16 != v17 )
        {
LABEL_23:
          do
          {
            *(_QWORD *)v14 = *v15;
            v14 += 8;
            ++v15;
          }
          while ( v14 != v11 );
        }
      }
      *(_QWORD *)a1 = v9;
      *(_QWORD *)(a1 + 8) = v4;
      *(_QWORD *)(a1 + 16) = v11;
      *(_QWORD *)(a1 + 24) = &v9[8 * v8];
      a2 = v23;
      if ( v3 )
      {
        operator delete(__p);
        v4 = *(char **)(a1 + 8);
      }
    }
    else
    {
      v7 = (__int64)(((v6 - v5) >> 3) + ((unsigned __int64)(((v6 - v5) >> 3) + 1) >> 63) + 1) >> 1;
      v4 = (char *)&v3[v7];
      if ( v5 != (_BYTE *)v3 )
      {
        memmove(&v3[v7], v3, v5 - (_BYTE *)v3);
        v5 = *(_BYTE **)(a1 + 16);
      }
      *(_QWORD *)(a1 + 8) = v4;
      *(_QWORD *)(a1 + 16) = &v5[8 * v7];
    }
  }
  else
  {
    v4 = *(char **)(a1 + 8);
  }
  result = *a2;
  *((_QWORD *)v4 - 1) = *a2;
  *(_QWORD *)(a1 + 8) -= 8LL;
  return result;
}
