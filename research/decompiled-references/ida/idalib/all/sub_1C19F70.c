bool __fastcall sub_1C19F70(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdx
  size_t v8; // rbp
  unsigned __int64 v10; // rax
  unsigned int *v11; // rsi
  unsigned __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15[4]; // [rsp+8h] [rbp-20h] BYREF

  v7 = a1[10];
  v8 = *(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(v7 + 16) & 4) != 0 )
  {
    if ( v8 )
    {
      a1[13] = v8;
      a1[16] = *(_QWORD *)(v8 + 40);
      return 1;
    }
    else
    {
      a1[13] = 0;
      v15[0] = *(_QWORD *)((*(_QWORD *)(v7 + 24) & 0xFFFFFFFFFFFFFFF8LL) + 40);
      v11 = *(unsigned int **)(sub_FDE960(v15, 0) + 16);
      v12 = *v11;
      v13 = *(_QWORD *)(*(_QWORD *)(a1[1] + 248LL) + 17504LL);
      if ( v12 <= 2 )
      {
        v14 = v12 + 16;
      }
      else
      {
        v8 = v12 - 3;
        v14 = 19;
      }
      a1[16] = sub_6F3470(v13, (char *)v11 + v14, v8) & 0xFFFFFFFFFFFFFFF8LL | 1;
      return 0;
    }
  }
  else
  {
    v10 = sub_1C16330((_QWORD *)a1[1], *(_QWORD *)(v8 + 80), v7, a4, a5, a6);
    a1[13] = v10;
    return v10 != 0;
  }
}
