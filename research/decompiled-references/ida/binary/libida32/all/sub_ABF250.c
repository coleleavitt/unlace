__int64 __fastcall sub_ABF250(__int64 a1, char *a2)
{
  _QWORD *v2; // r13
  char v3; // bp
  bool v4; // zf
  _BYTE *v5; // rdi
  __int64 v6; // rdi
  unsigned int v7; // ebx
  __int64 v8; // r8
  unsigned __int64 v9; // r8
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rdi
  void (__fastcall *v18)(__int64, __int64, __int64); // rax
  __int64 v19; // rax
  __int64 result; // rax
  char v21[41]; // [rsp+Fh] [rbp-29h] BYREF

  v2 = *(_QWORD **)a1;
  v3 = *a2;
  v4 = **(_BYTE **)a1 == 0;
  v5 = *(_BYTE **)(*(_QWORD *)a1 + 8LL);
  if ( !v4 )
  {
    sub_2206E30(v5 + 1048, v2[2], v2[3]);
    sub_2205AB0(v2[1] + 1048LL);
    v5 = (_BYTE *)v2[1];
  }
  *v5 = 1;
  v6 = v2[1];
  v7 = *(_DWORD *)(v6 + 16);
  sub_2205CB0(v6 + 1048);
  sub_E42120(v2[6] + 8LL, v2[7]);
  v8 = v2[7];
  if ( (v8 & 8) != 0 )
    v9 = *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL);
  else
    v9 = v8 & 0xFFFFFFFFFFFFFFF0LL;
  sub_ABE550((char *)(v2[6] + 8LL), (char *)&byte_22CD811, 0, v2[6], v9);
  v10 = v2[1];
  v11 = *(unsigned int *)(v10 + 16);
  if ( v7 < (unsigned int)v11 )
  {
    v12 = *(_QWORD *)(v10 + 8);
    v21[0] = 1;
    v13 = v12 + 32 * v11 - 32;
    if ( !*(_QWORD *)(v13 + 16) )
LABEL_16:
      std::__throw_bad_function_call();
    while ( 1 )
    {
      (*(void (__fastcall **)(__int64, char *))(v13 + 24))(v13, v21);
      v15 = v2[1];
      v16 = (unsigned int)(*(_DWORD *)(v15 + 16) - 1);
      *(_DWORD *)(v15 + 16) = v16;
      v17 = *(_QWORD *)(v15 + 8) + 32 * v16;
      v18 = *(void (__fastcall **)(__int64, __int64, __int64))(v17 + 16);
      if ( v18 )
        v18(v17, v17, 3);
      v10 = v2[1];
      v19 = *(unsigned int *)(v10 + 16);
      if ( v7 >= (unsigned int)v19 )
        break;
      v14 = *(_QWORD *)(v10 + 8);
      v21[0] = 1;
      v13 = v14 + 32 * v19 - 32;
      if ( !*(_QWORD *)(v13 + 16) )
        goto LABEL_16;
    }
  }
  result = sub_2205E20(v10 + 1048);
  if ( v3 )
  {
    sub_2205C20(v2[1] + 1048LL);
    return sub_2205EB0(v2[1] + 1048LL);
  }
  return result;
}

