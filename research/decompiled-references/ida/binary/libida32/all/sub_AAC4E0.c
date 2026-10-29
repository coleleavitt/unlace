__int64 __fastcall sub_AAC4E0(__int64 a1, char *a2)
{
  _QWORD *v2; // rbx
  char v3; // r12
  bool v4; // zf
  _BYTE *v5; // rdi
  __int64 v6; // rdi
  unsigned int v7; // ebp
  __int64 *v8; // r13
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r15
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rdi
  void (__fastcall *v22)(__int64, __int64, __int64); // rcx
  __int64 v23; // rdx
  __int64 result; // rax
  __int128 v25; // [rsp-20h] [rbp-78h]
  _QWORD v26[11]; // [rsp+0h] [rbp-58h] BYREF

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
  sub_E3A920(v2[6] + 8LL, v2[7], v2[8]);
  if ( v2[7] )
  {
    v8 = (__int64 *)sub_B16870();
    v11 = sub_B168B0(v2[7]);
    while ( (__int64 *)v11 != v8 )
    {
      v12 = *v8;
      v13 = v2[8];
      ++v8;
      v26[0] = v2[6];
      v26[1] = v12;
      v26[2] = v13;
      *((_QWORD *)&v25 + 1) = v12;
      *(_QWORD *)&v25 = v26[0];
      sub_AABEC0((char *)(v26[0] + 8LL), (char *)&byte_22CD811, 0, v12, v9, v10, v25, v13);
    }
  }
  v14 = v2[1];
  v15 = *(unsigned int *)(v14 + 16);
  if ( v7 < (unsigned int)v15 )
  {
    v16 = *(_QWORD *)(v14 + 8);
    LOBYTE(v26[0]) = 1;
    v17 = v16 + 32 * v15 - 32;
    if ( !*(_QWORD *)(v17 + 16) )
LABEL_15:
      std::__throw_bad_function_call();
    while ( 1 )
    {
      (*(void (__fastcall **)(__int64, _QWORD *))(v17 + 24))(v17, v26);
      v19 = v2[1];
      v20 = (unsigned int)(*(_DWORD *)(v19 + 16) - 1);
      *(_DWORD *)(v19 + 16) = v20;
      v21 = *(_QWORD *)(v19 + 8) + 32 * v20;
      v22 = *(void (__fastcall **)(__int64, __int64, __int64))(v21 + 16);
      if ( v22 )
      {
        v22(v21, v21, 3);
        v19 = v2[1];
      }
      v23 = *(unsigned int *)(v19 + 16);
      v14 = v19;
      if ( v7 >= (unsigned int)v23 )
        break;
      v18 = *(_QWORD *)(v19 + 8);
      LOBYTE(v26[0]) = 1;
      v17 = v18 + 32 * v23 - 32;
      if ( !*(_QWORD *)(v17 + 16) )
        goto LABEL_15;
    }
  }
  result = sub_2205E20(v14 + 1048);
  if ( v3 )
  {
    sub_2205C20(v2[1] + 1048LL);
    return sub_2205EB0(v2[1] + 1048LL);
  }
  return result;
}

