_QWORD *__fastcall sub_9D0560(__int64 a1, int *a2, __int64 a3, __int64 a4)
{
  _QWORD *v7; // rax
  int v8; // edx
  _QWORD *v9; // r12
  int v10; // eax
  __int64 v11; // rsi
  int *v12; // rbp
  __int64 i; // r14
  __int64 v14; // rbx
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rsi

  v7 = (_QWORD *)operator new(0x138u);
  v8 = a2[12];
  v9 = v7;
  v7[4] = *((_QWORD *)a2 + 4);
  v7[5] = v7 + 7;
  v7[6] = 0x400000000LL;
  if ( v8 )
    sub_9CAFF0((__int64)(v7 + 5), (__int64 *)a2 + 5);
  v10 = *a2;
  v11 = *((_QWORD *)a2 + 3);
  v9[2] = 0;
  v9[3] = 0;
  *(_DWORD *)v9 = v10;
  v9[1] = a3;
  if ( v11 )
    v9[3] = sub_9D0560(a1, v11, v9, a4);
  v12 = *((int **)a2 + 2);
  if ( v12 )
  {
    for ( i = (__int64)v9; ; i = v14 )
    {
      v14 = operator new(0x138u);
      v15 = *((_QWORD *)v12 + 4);
      *(_QWORD *)(v14 + 48) = 0x400000000LL;
      *(_QWORD *)(v14 + 32) = v15;
      *(_QWORD *)(v14 + 40) = v14 + 56;
      if ( v12[12] )
        sub_9CAFF0(v14 + 40, (__int64 *)v12 + 5);
      v16 = *v12;
      *(_QWORD *)(v14 + 16) = 0;
      *(_QWORD *)(v14 + 24) = 0;
      *(_DWORD *)v14 = v16;
      *(_QWORD *)(i + 16) = v14;
      *(_QWORD *)(v14 + 8) = i;
      v17 = *((_QWORD *)v12 + 3);
      if ( v17 )
      {
        *(_QWORD *)(v14 + 24) = sub_9D0560(a1, v17, v14, a4);
        v12 = *((int **)v12 + 2);
        if ( !v12 )
          return v9;
      }
      else
      {
        v12 = *((int **)v12 + 2);
        if ( !v12 )
          return v9;
      }
    }
  }
  return v9;
}

