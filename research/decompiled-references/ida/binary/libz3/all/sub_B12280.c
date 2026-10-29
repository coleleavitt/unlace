void __fastcall sub_B12280(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // r15
  void *v6; // r14
  __int64 v7; // rsi
  unsigned int v8; // r14d
  __int64 v9; // rax
  __int64 v10; // rcx
  int *v11; // rbp
  __int64 v12; // rax
  void *v13; // rdi
  _QWORD *v14; // rsi
  int v15; // eax

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 && *(_DWORD *)(v1 - 4) && !*(_BYTE *)(a1 + 12) )
  {
    sub_B08230(a1 + 16);
    sub_B08230(a1 + 16);
    v3 = *(_QWORD *)(a1 + 56);
    if ( v3 )
    {
      v4 = *(unsigned int *)(v3 - 4);
      if ( (_DWORD)v4 )
      {
        v5 = v3 + 40 * v4;
        do
        {
          v6 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v3 + 8);
          v7 = v3 + 24;
          v3 += 40;
          sub_182CBA0(v6, v7);
        }
        while ( v5 != v3 );
        v3 = *(_QWORD *)(a1 + 56);
      }
      *(_DWORD *)(v3 - 4) = 0;
    }
    v8 = 0;
    sub_27B950((__int64)qword_1C7F2C0, a1 + 64, (int *)(a1 + 24));
    v9 = *(_QWORD *)(a1 + 16);
    while ( v9 )
    {
      if ( v8 >= *(_DWORD *)(v9 - 4) )
        break;
      v10 = *(_QWORD *)(a1 + 56);
      v11 = (int *)(v9 + 40LL * v8);
      if ( v10 )
      {
        v12 = *(unsigned int *)(v10 - 4);
        if ( (_DWORD)v12 != *(_DWORD *)(v10 - 8) )
          continue;
      }
      sub_B15E00(a1 + 56);
      v10 = *(_QWORD *)(a1 + 56);
      v12 = *(unsigned int *)(v10 - 4);
      v13 = qword_1C7F2C0;
      ++v8;
      v14 = (_QWORD *)(v10 + 40 * v12);
      v15 = *v11;
      v14[1] = 0;
      *((_DWORD *)++v14 - 2) = v15;
      v14[1] = 0;
      v14[2] = 1;
      v14[3] = 0;
      sub_27B950((__int64)v13, (__int64)v14, v11 + 2);
      ++*(_DWORD *)(*(_QWORD *)(a1 + 56) - 4LL);
      v9 = *(_QWORD *)(a1 + 16);
    }
    sub_B08230(a1 + 56);
  }
}

