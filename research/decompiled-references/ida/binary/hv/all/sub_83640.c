__int64 __fastcall sub_83640(__int64 a1, unsigned __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 i; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rsi
  void *v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // edx

  for ( i = 3; i != 64; ++i )
  {
    if ( a2 < (unsigned int)(1 << i) )
    {
      v7 = i - 1;
      v8 = (unsigned int)(1 << v7);
      v9 = 64 - v7;
      v10 = v8 - 1;
      goto LABEL_5;
    }
  }
  v9 = 1;
  v10 = -1;
  v8 = 0;
LABEL_5:
  *a4 = v8;
  a4[2] = v10;
  a4[1] = v9;
  a4[3] = a3;
  v11 = (void *)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(a1 + 128))(*(_QWORD *)(a1 + 144), a3, 8);
  if ( v11 )
  {
    v12 = memset(v11, 0, 8 * a3);
    a4[5] = v12;
    v12[a3 - 1] = 1;
    v13 = (unsigned int)(a3 - 2);
    v14 = 8 * v13;
    if ( (int)v13 >= 0 )
    {
      do
      {
        v15 = v13 + 1;
        LODWORD(v13) = v13 - 1;
        *(_QWORD *)(a4[5] + v14) = 0x106689D45497FDB5LL * *(_QWORD *)(a4[5] + 8LL * v15);
        v14 -= 8;
      }
      while ( (_DWORD)v13 != -1 );
    }
    a4[4] = 0x106689D45497FDB5LL * *(_QWORD *)a4[5];
    return 0;
  }
  else
  {
    *(_QWORD *)(a1 + 64) = "out of memory";
    a4[5] = 0;
    return 12;
  }
}

