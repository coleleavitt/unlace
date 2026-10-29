__int64 __fastcall sub_AE4DE0(__int64 a1, char *a2)
{
  _QWORD *v2; // r13
  char v3; // bp
  bool v4; // zf
  _BYTE *v5; // rdi
  __int64 v6; // rdi
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rdi
  void (__fastcall *v17)(__int64, __int64, __int64); // rcx
  __int64 v18; // rdx
  __int64 result; // rax
  char v20[41]; // [rsp+Fh] [rbp-29h] BYREF

  v2 = *(_QWORD **)a1;
  v3 = *a2;
  v4 = **(_BYTE **)a1 == 0;
  v5 = *(_BYTE **)(*(_QWORD *)a1 + 8LL);
  if ( !v4 )
  {
    sub_222AB70(v5 + 1048, v2[2], v2[3]);
    sub_22297F0(v2[1] + 1048LL);
    v5 = (_BYTE *)v2[1];
  }
  *v5 = 1;
  v6 = v2[1];
  v7 = *(_DWORD *)(v6 + 16);
  sub_22299F0(v6 + 1048);
  sub_E6B500(v2[6] + 8LL, v2 + 7);
  v8 = v2[8];
  if ( v8 )
    sub_ADE7F0(v2[6] + 8LL, 0, 0, v8, v2[6]);
  v9 = v2[1];
  v10 = *(unsigned int *)(v9 + 16);
  if ( v7 < (unsigned int)v10 )
  {
    v11 = *(_QWORD *)(v9 + 8);
    v20[0] = 1;
    v12 = v11 + 32 * v10 - 32;
    if ( !*(_QWORD *)(v12 + 16) )
LABEL_14:
      std::__throw_bad_function_call();
    while ( 1 )
    {
      (*(void (__fastcall **)(__int64, char *))(v12 + 24))(v12, v20);
      v14 = v2[1];
      v15 = (unsigned int)(*(_DWORD *)(v14 + 16) - 1);
      *(_DWORD *)(v14 + 16) = v15;
      v16 = *(_QWORD *)(v14 + 8) + 32 * v15;
      v17 = *(void (__fastcall **)(__int64, __int64, __int64))(v16 + 16);
      if ( v17 )
      {
        v17(v16, v16, 3);
        v14 = v2[1];
      }
      v18 = *(unsigned int *)(v14 + 16);
      v9 = v14;
      if ( v7 >= (unsigned int)v18 )
        break;
      v13 = *(_QWORD *)(v14 + 8);
      v20[0] = 1;
      v12 = v13 + 32 * v18 - 32;
      if ( !*(_QWORD *)(v12 + 16) )
        goto LABEL_14;
    }
  }
  result = sub_2229B60(v9 + 1048);
  if ( v3 )
  {
    sub_2229960(v2[1] + 1048LL);
    return sub_2229BF0(v2[1] + 1048LL);
  }
  return result;
}
