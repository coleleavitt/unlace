__int64 __fastcall sub_AC5850(__int64 a1, char *a2)
{
  _BYTE *v2; // rbx
  char v3; // r12
  bool v4; // zf
  _BYTE *v5; // rdi
  __int64 v6; // rdi
  unsigned int v7; // ebp
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 *v10; // rdx
  __int64 v11; // rcx
  size_t v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rdi
  void (__fastcall *v24)(__int64, __int64, __int64); // rcx
  __int64 v25; // rdx
  __int64 result; // rax
  __int128 v27; // [rsp-20h] [rbp-68h]
  __int64 v28; // [rsp+0h] [rbp-48h] BYREF
  __int64 v29; // [rsp+8h] [rbp-40h]
  __int64 *v30; // [rsp+10h] [rbp-38h]

  v2 = *(_BYTE **)a1;
  v3 = *a2;
  v4 = **(_BYTE **)a1 == 0;
  v5 = *(_BYTE **)(*(_QWORD *)a1 + 8LL);
  if ( !v4 )
  {
    sub_2206E30(v5 + 1048, *((_QWORD *)v2 + 2), *((_QWORD *)v2 + 3));
    sub_2205AB0(*((_QWORD *)v2 + 1) + 1048LL);
    v5 = *((_BYTE **)v2 + 1);
  }
  *v5 = 1;
  v6 = *((_QWORD *)v2 + 1);
  v7 = *(_DWORD *)(v6 + 16);
  sub_2205CB0(v6 + 1048);
  sub_E41E50(*((_QWORD *)v2 + 6) + 8LL, *((_QWORD *)v2 + 7), *((_QWORD *)v2 + 8));
  if ( *((_QWORD *)v2 + 7) )
  {
    sub_AC4E70(*((_QWORD *)v2 + 6), *((_QWORD *)v2 + 7), *((__int64 **)v2 + 8));
    v8 = *((_QWORD *)v2 + 7);
    v9 = sub_F48AA0(v8, *((_QWORD *)v2 + 8));
    if ( v9 )
    {
      v11 = *((_QWORD *)v2 + 6);
      v30 = v10;
      v29 = v9;
      v28 = v11;
      v12 = sub_AA6CD0(v8);
      *((_QWORD *)&v27 + 1) = v29;
      *(_QWORD *)&v27 = v13;
      sub_AC5130((char *)(v13 + 8), (char *)&byte_22CD811, v12, v13, v14, v15, v27, v30);
    }
  }
  v16 = *((_QWORD *)v2 + 1);
  v17 = *(unsigned int *)(v16 + 16);
  if ( v7 < (unsigned int)v17 )
  {
    v18 = *(_QWORD *)(v16 + 8);
    LOBYTE(v28) = 1;
    v19 = v18 + 32 * v17 - 32;
    if ( !*(_QWORD *)(v19 + 16) )
LABEL_15:
      std::__throw_bad_function_call();
    while ( 1 )
    {
      (*(void (__fastcall **)(__int64, __int64 *))(v19 + 24))(v19, &v28);
      v21 = *((_QWORD *)v2 + 1);
      v22 = (unsigned int)(*(_DWORD *)(v21 + 16) - 1);
      *(_DWORD *)(v21 + 16) = v22;
      v23 = *(_QWORD *)(v21 + 8) + 32 * v22;
      v24 = *(void (__fastcall **)(__int64, __int64, __int64))(v23 + 16);
      if ( v24 )
      {
        v24(v23, v23, 3);
        v21 = *((_QWORD *)v2 + 1);
      }
      v25 = *(unsigned int *)(v21 + 16);
      v16 = v21;
      if ( v7 >= (unsigned int)v25 )
        break;
      v20 = *(_QWORD *)(v21 + 8);
      LOBYTE(v28) = 1;
      v19 = v20 + 32 * v25 - 32;
      if ( !*(_QWORD *)(v19 + 16) )
        goto LABEL_15;
    }
  }
  result = sub_2205E20(v16 + 1048);
  if ( v3 )
  {
    sub_2205C20(*((_QWORD *)v2 + 1) + 1048LL);
    return sub_2205EB0(*((_QWORD *)v2 + 1) + 1048LL);
  }
  return result;
}

