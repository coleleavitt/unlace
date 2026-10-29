__int64 __fastcall sub_E937F0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v7; // r13
  __int64 v8; // rbx
  _QWORD *v9; // rbp
  size_t v10; // r14
  __int64 v11; // r12
  void *v12; // r15
  unsigned int v13; // eax
  __int64 v14; // r9
  __int64 *v15; // r8
  __int64 *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rbp
  char *v20; // rdx
  _QWORD *v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  __int64 v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rax
  __int64 v29; // [rsp+0h] [rbp-58h]
  __int64 v30; // [rsp+0h] [rbp-58h]
  int v31; // [rsp+0h] [rbp-58h]
  int v32; // [rsp+0h] [rbp-58h]
  __int64 *v33; // [rsp+8h] [rbp-50h]
  __int64 *v34; // [rsp+8h] [rbp-50h]
  __int64 *v35[8]; // [rsp+18h] [rbp-40h] BYREF

  result = 0;
  if ( !a2 )
    return result;
  a3 = (int)a3;
  v7 = a1 + 8LL * (int)a3;
  v8 = (__int64)a2;
  v9 = *(_QWORD **)(v7 + 8);
  if ( v9 )
    goto LABEL_11;
  v10 = 0;
  v11 = *(_QWORD *)(*(_QWORD *)a1 + 17504LL);
  v12 = *(&off_2B4BB20 + (int)a3);
  if ( v12 )
    v10 = strlen((const char *)*(&off_2B4BB20 + (int)a3));
  v13 = sub_2244B30(v12, v10);
  v14 = (unsigned int)sub_2244CB0(v11, v12, v10, v13);
  v15 = (__int64 *)(*(_QWORD *)v11 + 8 * v14);
  if ( !*v15 )
    goto LABEL_17;
  if ( *v15 == -8 )
  {
    --*(_DWORD *)(v11 + 16);
LABEL_17:
    v18 = *(_QWORD *)(v11 + 24);
    *(_QWORD *)(v11 + 104) += v10 + 17;
    v19 = (_QWORD *)((v18 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    v20 = (char *)v19 + v10 + 17;
    if ( *(_QWORD *)(v11 + 32) >= (unsigned __int64)v20 && v18 )
    {
      *(_QWORD *)(v11 + 24) = v20;
    }
    else
    {
      v32 = v14;
      v34 = v15;
      v28 = sub_986170(v11 + 24, v10 + 17, v10 + 17, 3, (__int64)v15, v14);
      v15 = v34;
      LODWORD(v14) = v32;
      v19 = (_QWORD *)v28;
    }
    v21 = v19 + 2;
    if ( v10 )
    {
      v33 = v15;
      v31 = v14;
      v27 = memcpy(v19 + 2, v12, v10);
      v15 = v33;
      LODWORD(v14) = v31;
      v21 = v27;
    }
    *((_BYTE *)v21 + v10) = 0;
    *v19 = v10;
    v19[1] = 0;
    *v15 = (__int64)v19;
    ++*(_DWORD *)(v11 + 12);
    a2 = (__int64 *)(*(_QWORD *)v11 + 8LL * (unsigned int)sub_22450D0(v11, (unsigned int)v14));
    sub_989490(v35, a2, 0);
    v16 = v35[0];
    goto LABEL_8;
  }
  a2 = (__int64 *)(*(_QWORD *)v11 + 8 * v14);
  sub_989490(v35, v15, 0);
  v16 = v35[0];
LABEL_8:
  a5 = *v16;
  v9 = *(_QWORD **)(*v16 + 8);
  if ( !v9 )
  {
    v22 = *(_QWORD *)(v11 + 120);
    if ( !v22
      || (v29 = *v16,
          a2 = (__int64 *)v12,
          v23 = (*(__int64 (__fastcall **)(__int64, void *, size_t))(*(_QWORD *)v22 + 16LL))(v22, v12, v10),
          a5 = v29,
          v9 = (_QWORD *)v23,
          (*(_QWORD *)(v29 + 8) = v23) == 0) )
    {
      v24 = *(_QWORD *)(v11 + 24);
      *(_QWORD *)(v11 + 104) += 24LL;
      v9 = (_QWORD *)((v24 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      a3 = (__int64)(v9 + 3);
      if ( *(_QWORD *)(v11 + 32) >= (unsigned __int64)(v9 + 3) && v24 )
      {
        *(_QWORD *)(v11 + 24) = a3;
      }
      else
      {
        a2 = &qword_18;
        v30 = a5;
        v26 = sub_986170(v11 + 24, 24, 24, 3, a5, a6);
        a5 = v30;
        v9 = (_QWORD *)v26;
      }
      v25 = *v9 & 0xFFFFF80000000000LL;
      v9[1] = 0;
      *v9 = v25 | 0x1FFFC05;
      *(_QWORD *)(a5 + 8) = v9;
      v9[2] = a5;
    }
  }
  *(_QWORD *)(v7 + 8) = v9;
  v17 = *(_QWORD *)(v8 + 40);
  if ( (v17 & 7) == 0 )
    goto LABEL_12;
  while ( 1 )
  {
    v8 = sub_BAB630(v8, (__int64)a2, a3, a4, a5, a6);
    if ( !v8 )
      break;
LABEL_11:
    v17 = *(_QWORD *)(v8 + 40);
    if ( (v17 & 7) == 0 )
    {
LABEL_12:
      if ( v9 == (_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF8LL) )
        return 1;
    }
  }
  return 0;
}
