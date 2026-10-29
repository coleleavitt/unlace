__int64 __fastcall sub_12E0BE0(__int64 a1, int *a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  _BYTE *v8; // rsi
  __int64 v9; // r12
  __int64 v10; // rdx
  _BYTE *v11; // rsi
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rsi
  int *v15; // rbp
  __int64 i; // r15
  __int64 v17; // rbx
  int v18; // eax
  __int64 v19; // rsi

  v7 = operator new(0x60u);
  v8 = *((_BYTE **)a2 + 4);
  v9 = v7;
  v10 = (__int64)&v8[*((_QWORD *)a2 + 5)];
  *(_QWORD *)(v7 + 32) = v7 + 48;
  sub_12DB130((_QWORD *)(v7 + 32), v8, v10);
  v11 = *((_BYTE **)a2 + 8);
  v12 = *((_QWORD *)a2 + 9);
  *(_QWORD *)(v9 + 64) = v9 + 80;
  sub_12DB130((_QWORD *)(v9 + 64), v11, (__int64)&v11[v12]);
  v13 = *a2;
  v14 = *((_QWORD *)a2 + 3);
  *(_QWORD *)(v9 + 8) = a3;
  *(_QWORD *)(v9 + 16) = 0;
  *(_DWORD *)v9 = v13;
  *(_QWORD *)(v9 + 24) = 0;
  if ( v14 )
    *(_QWORD *)(v9 + 24) = sub_12E0BE0(a1, v14, v9, a4);
  v15 = *((int **)a2 + 2);
  if ( v15 )
  {
    for ( i = v9; ; i = v17 )
    {
      v17 = operator new(0x60u);
      *(_QWORD *)(v17 + 32) = v17 + 48;
      sub_12DB130((_QWORD *)(v17 + 32), *((_BYTE **)v15 + 4), *((_QWORD *)v15 + 4) + *((_QWORD *)v15 + 5));
      *(_QWORD *)(v17 + 64) = v17 + 80;
      sub_12DB130((_QWORD *)(v17 + 64), *((_BYTE **)v15 + 8), *((_QWORD *)v15 + 8) + *((_QWORD *)v15 + 9));
      v18 = *v15;
      *(_QWORD *)(v17 + 16) = 0;
      *(_QWORD *)(v17 + 24) = 0;
      *(_DWORD *)v17 = v18;
      *(_QWORD *)(i + 16) = v17;
      *(_QWORD *)(v17 + 8) = i;
      v19 = *((_QWORD *)v15 + 3);
      if ( v19 )
      {
        *(_QWORD *)(v17 + 24) = sub_12E0BE0(a1, v19, v17, a4);
        v15 = *((int **)v15 + 2);
        if ( !v15 )
          return v9;
      }
      else
      {
        v15 = *((int **)v15 + 2);
        if ( !v15 )
          return v9;
      }
    }
  }
  return v9;
}
