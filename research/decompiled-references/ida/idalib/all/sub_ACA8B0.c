__int64 __fastcall sub_ACA8B0(__int64 a1, char *a2)
{
  _QWORD *v2; // r13
  char v3; // bp
  bool v4; // zf
  _BYTE *v5; // rdi
  __int64 v6; // rdi
  unsigned int v7; // ebx
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rdi
  void (__fastcall *v16)(__int64, __int64, __int64); // rcx
  __int64 v17; // rdx
  __int64 result; // rax
  char v19[41]; // [rsp+Fh] [rbp-29h] BYREF

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
  sub_E658D0(v2[6] + 8LL, v2[7]);
  v8 = v2[1];
  v9 = *(unsigned int *)(v8 + 16);
  if ( v7 < (unsigned int)v9 )
  {
    v10 = *(_QWORD *)(v8 + 8);
    v19[0] = 1;
    v11 = v10 + 32 * v9 - 32;
    if ( !*(_QWORD *)(v11 + 16) )
LABEL_12:
      std::__throw_bad_function_call();
    while ( 1 )
    {
      (*(void (__fastcall **)(__int64, char *))(v11 + 24))(v11, v19);
      v13 = v2[1];
      v14 = (unsigned int)(*(_DWORD *)(v13 + 16) - 1);
      *(_DWORD *)(v13 + 16) = v14;
      v15 = *(_QWORD *)(v13 + 8) + 32 * v14;
      v16 = *(void (__fastcall **)(__int64, __int64, __int64))(v15 + 16);
      if ( v16 )
      {
        v16(v15, v15, 3);
        v13 = v2[1];
      }
      v17 = *(unsigned int *)(v13 + 16);
      v8 = v13;
      if ( v7 >= (unsigned int)v17 )
        break;
      v12 = *(_QWORD *)(v13 + 8);
      v19[0] = 1;
      v11 = v12 + 32 * v17 - 32;
      if ( !*(_QWORD *)(v11 + 16) )
        goto LABEL_12;
    }
  }
  result = sub_2229B60(v8 + 1048);
  if ( v3 )
  {
    sub_2229960(v2[1] + 1048LL);
    return sub_2229BF0(v2[1] + 1048LL);
  }
  return result;
}
