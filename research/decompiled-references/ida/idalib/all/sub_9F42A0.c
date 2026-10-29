_QWORD *__fastcall sub_9F42A0(__int64 a1, int *a2, __int64 a3, __int64 a4)
{
  _QWORD *v7; // rax
  int v8; // edx
  _QWORD *v9; // r12
  int v10; // eax
  __int64 v11; // rsi
  int *v12; // rbp
  _QWORD *i; // r14
  _QWORD *v14; // rbx
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
    sub_9EED30((__int64)(v7 + 5), (__int64 *)a2 + 5);
  v10 = *a2;
  v11 = *((_QWORD *)a2 + 3);
  v9[2] = 0;
  v9[3] = 0;
  *(_DWORD *)v9 = v10;
  v9[1] = a3;
  if ( v11 )
    v9[3] = sub_9F42A0(a1, v11, v9, a4);
  v12 = *((int **)a2 + 2);
  if ( v12 )
  {
    for ( i = v9; ; i = v14 )
    {
      v14 = (_QWORD *)operator new(0x138u);
      v15 = *((_QWORD *)v12 + 4);
      v14[6] = 0x400000000LL;
      v14[4] = v15;
      v14[5] = v14 + 7;
      if ( v12[12] )
        sub_9EED30((__int64)(v14 + 5), (__int64 *)v12 + 5);
      v16 = *v12;
      v14[2] = 0;
      v14[3] = 0;
      *(_DWORD *)v14 = v16;
      i[2] = v14;
      v14[1] = i;
      v17 = *((_QWORD *)v12 + 3);
      if ( v17 )
      {
        v14[3] = sub_9F42A0(a1, v17, v14, a4);
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
