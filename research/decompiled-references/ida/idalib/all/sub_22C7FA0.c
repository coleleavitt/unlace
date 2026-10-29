__int64 __fastcall sub_22C7FA0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  bool v6; // zf
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned int v9; // ebp
  __int64 v10; // rdx
  char *v12; // rsi
  char *v13; // rsi
  int v14; // eax
  int *v15; // rsi
  __int64 v16; // [rsp-8h] [rbp-40h]
  int v17[3]; // [rsp+Ch] [rbp-2Ch] BYREF
  __int64 v18[4]; // [rsp+18h] [rbp-20h] BYREF

  v6 = *(_BYTE *)(a1 + 168) == 0;
  v17[0] = a2;
  v18[0] = 0;
  if ( !v6 )
  {
    v7 = *(_QWORD *)(a1 + 176);
    if ( v7 != *(_QWORD *)(a1 + 184) )
      *(_QWORD *)(a1 + 184) = v7;
    v8 = *(_QWORD *)(a1 + 120);
    if ( v8 != *(_QWORD *)(a1 + 128) )
      *(_QWORD *)(a1 + 128) = v8;
    *(_BYTE *)(a1 + 168) = 0;
  }
  v9 = sub_2213890(a1 + 200, a1, a3, a4, a5, a6, v18);
  v10 = v16;
  if ( (_BYTE)v9 )
    return v9;
  v12 = *(char **)(a1 + 128);
  if ( v12 == *(char **)(a1 + 136) )
  {
    sub_1250420(a1 + 120, v12, v18);
  }
  else
  {
    v13 = v12 + 8;
    *((_QWORD *)v13 - 1) = v18[0];
    *(_QWORD *)(a1 + 128) = v13;
  }
  v14 = v17[0];
  v15 = *(int **)(a1 + 184);
  *(_WORD *)(a1 + 12) = v17[0];
  if ( v15 == *(int **)(a1 + 192) )
  {
    sub_9A8F30(a1 + 176, v15, v17);
  }
  else
  {
    *v15 = v14;
    *(_QWORD *)(a1 + 184) = v15 + 1;
  }
  if ( !*(_QWORD *)(a1 + 224) )
    std::__throw_bad_function_call();
  (*(void (__fastcall **)(__int64, __int64 *, __int64))(a1 + 232))(a1 + 208, v18, v10);
  return v9;
}
