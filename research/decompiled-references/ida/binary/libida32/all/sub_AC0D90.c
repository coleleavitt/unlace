__int64 __fastcall sub_AC0D90(__int64 a1, char *a2)
{
  _QWORD *v2; // rbx
  char v3; // r12
  bool v4; // zf
  _BYTE *v5; // rdi
  __int64 v6; // rdi
  unsigned int v7; // ebp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rdi
  void (__fastcall *v21)(__int64, __int64, __int64); // rcx
  __int64 v22; // rdx
  __int64 result; // rax
  char v24[41]; // [rsp+Fh] [rbp-29h] BYREF

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
  sub_E45C30(v2[6] + 8LL, v2[7]);
  v11 = v2[7];
  if ( v11 )
  {
    sub_ABE310(v2[6], v11, v8, v9, v10);
    v12 = sub_F473B0(v2[7]);
    if ( (v2[7] & 0xFFFFFFFFFFFFFFF0LL) != v12 )
      sub_ABF9B0(v2[6], v12);
  }
  v13 = v2[1];
  v14 = *(unsigned int *)(v13 + 16);
  if ( v7 < (unsigned int)v14 )
  {
    v15 = *(_QWORD *)(v13 + 8);
    v24[0] = 1;
    v16 = v15 + 32 * v14 - 32;
    if ( !*(_QWORD *)(v16 + 16) )
LABEL_15:
      std::__throw_bad_function_call();
    while ( 1 )
    {
      (*(void (__fastcall **)(__int64, char *))(v16 + 24))(v16, v24);
      v18 = v2[1];
      v19 = (unsigned int)(*(_DWORD *)(v18 + 16) - 1);
      *(_DWORD *)(v18 + 16) = v19;
      v20 = *(_QWORD *)(v18 + 8) + 32 * v19;
      v21 = *(void (__fastcall **)(__int64, __int64, __int64))(v20 + 16);
      if ( v21 )
      {
        v21(v20, v20, 3);
        v18 = v2[1];
      }
      v22 = *(unsigned int *)(v18 + 16);
      v13 = v18;
      if ( v7 >= (unsigned int)v22 )
        break;
      v17 = *(_QWORD *)(v18 + 8);
      v24[0] = 1;
      v16 = v17 + 32 * v22 - 32;
      if ( !*(_QWORD *)(v16 + 16) )
        goto LABEL_15;
    }
  }
  result = sub_2205E20(v13 + 1048);
  if ( v3 )
  {
    sub_2205C20(v2[1] + 1048LL);
    return sub_2205EB0(v2[1] + 1048LL);
  }
  return result;
}

