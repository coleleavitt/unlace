/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002CC50
// Address: 0x000000014002CC50

//----- (000000014002CC50) ----------------------------------------------------
void *__fastcall sub_14002CC50(void **a1, _QWORD *a2)
{
  __int64 v3; // r8
  int v5; // esi
  int v6; // r12d
  _BYTE *v7; // rax
  int v8; // ebp
  __int64 v9; // r15
  int *v10; // rdi
  _BYTE *v11; // rax
  _BYTE *v12; // rax
  _BYTE *v13; // rax
  _BYTE *v14; // rax
  unsigned __int64 v15; // rsi
  __int16 v16; // bp
  unsigned __int64 v17; // rdi
  char *v18; // rdx
  unsigned __int64 v19; // rcx
  char *j; // rcx
  char *i; // rcx
  void *result; // rax
  _BYTE v23[4]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v24[5]; // [rsp+24h] [rbp-54h] BYREF
  _BYTE v25[7]; // [rsp+29h] [rbp-4Fh] BYREF
  _BYTE v26[20]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v27[4]; // [rsp+44h] [rbp-34h] BYREF

  a1[3] = a1[1];
  v3 = a2[1];
  if ( v3 )
  {
    v5 = 0;
    v6 = 0;
    v7 = sub_14005B4D0(v24, (unsigned __int64)v25, v3);
    sub_1400017A0(a1, v24, v7 - v24);
    v8 = 0;
    if ( a2[1] )
    {
      v9 = 0;
      do
      {
        v10 = (int *)(v9 + *a2);
        v11 = sub_14005B4D0(v26, (unsigned __int64)v27, *v10 - v5);
        v12 = sub_14005B4D0(v11, (unsigned __int64)v27, v10[1] - v6);
        v13 = sub_14005B4D0(v12, (unsigned __int64)v27, v10[2]);
        v14 = sub_14005B4D0(v13, (unsigned __int64)v27, v10[3]);
        sub_14002CB40(a1, v26, v14 - v26);
        v5 = *v10;
        ++v8;
        v6 = v10[1];
        v9 += 16;
      }
      while ( (unsigned __int64)v8 < a2[1] );
    }
  }
  v15 = (unsigned __int64)a1[1];
  v16 = *((_WORD *)a1 + 4) - *((_WORD *)a1 + 12);
  v17 = v15 + 2;
  if ( v15 + 2 >= v15 )
  {
    v18 = (char *)*a1;
    v19 = (unsigned __int64)a1[2];
    if ( v23 < *a1 || v23 >= &v18[v19] )
    {
      if ( v17 > v19 )
        *a1 = sub_14005ABE0((__int64)a1, v18, v15 + 2, 1u);
      for ( i = (char *)a1[1]; (unsigned __int64)i < v17; ++i )
        *((_BYTE *)*a1 + (_QWORD)i) = 0;
    }
    else
    {
      if ( v17 > v19 )
        *a1 = sub_14005ABE0((__int64)a1, v18, v15 + 2, 1u);
      for ( j = (char *)a1[1]; (unsigned __int64)j < v17; ++j )
        *((_BYTE *)*a1 + (_QWORD)j) = 0;
    }
  }
  a1[1] = (void *)v17;
  result = *a1;
  *(_WORD *)((char *)*a1 + v15) = v16;
  return result;
}
