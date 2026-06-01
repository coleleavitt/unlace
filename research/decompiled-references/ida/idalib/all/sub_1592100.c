void __fastcall sub_1592100(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, double a5)
{
  __int64 v6; // r12
  char ***v7; // r15
  __int64 v8; // r13
  __int64 v9; // rbx
  __int64 v10; // rcx
  char ***v11; // r14
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // r13
  char ***v17; // rdi
  __int64 v18; // r15
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // [rsp+0h] [rbp-98h]
  __int64 v24; // [rsp+20h] [rbp-78h] BYREF
  int v25; // [rsp+28h] [rbp-70h]
  char v26; // [rsp+2Ch] [rbp-6Ch]
  void *ptr[2]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v28[88]; // [rsp+40h] [rbp-58h] BYREF

  v6 = a1 + (a2 << 6);
  v21 = (a3 - 1) / 2;
  v7 = (char ***)(v6 + 16);
  if ( a2 >= v21 )
  {
    v13 = a3;
    v9 = a2;
    v11 = (char ***)(v6 + 16);
    if ( (a3 & 1) != 0 )
      goto LABEL_8;
    goto LABEL_18;
  }
  v8 = a2;
  while ( 1 )
  {
    v9 = 2 * (v8 + 1);
    v6 = a1 + ((v8 + 1) << 7);
    if ( sub_157E6E0(v6, v6 - 64, a5) )
      v6 = a1 + (--v9 << 6);
    v10 = v8;
    v11 = (char ***)(v6 + 16);
    v8 = v9;
    v12 = a1 + (v10 << 6);
    *(_QWORD *)v12 = *(_QWORD *)v6;
    *(_BYTE *)(v12 + 8) = *(_BYTE *)(v6 + 8);
    *(_BYTE *)(v12 + 9) = *(_BYTE *)(v6 + 9);
    *(_BYTE *)(v12 + 10) = *(_BYTE *)(v6 + 10);
    *(_BYTE *)(v12 + 11) = *(_BYTE *)(v6 + 11);
    *(_BYTE *)(v12 + 12) = *(_BYTE *)(v6 + 12);
    sub_1591FE0(v7, (char ***)(v6 + 16));
    if ( v9 >= v21 )
      break;
    v7 = (char ***)(v6 + 16);
  }
  v13 = a3;
  if ( (a3 & 1) == 0 )
  {
LABEL_18:
    if ( (v13 - 2) / 2 == v9 )
    {
      v19 = v9 + 1;
      v20 = a1 + (v19 << 7) - 64;
      v9 = 2 * v19 - 1;
      *(_QWORD *)v6 = *(_QWORD *)v20;
      *(_BYTE *)(v6 + 8) = *(_BYTE *)(v20 + 8);
      *(_BYTE *)(v6 + 9) = *(_BYTE *)(v20 + 9);
      *(_BYTE *)(v6 + 10) = *(_BYTE *)(v20 + 10);
      *(_BYTE *)(v6 + 11) = *(_BYTE *)(v20 + 11);
      *(_BYTE *)(v6 + 12) = *(_BYTE *)(v20 + 12);
      sub_1591FE0(v11, (char ***)(v20 + 16));
      v6 = a1 + (v9 << 6);
      v11 = (char ***)(v6 + 16);
    }
  }
LABEL_8:
  v14 = *a4;
  v26 = *((_BYTE *)a4 + 12);
  ptr[0] = v28;
  v24 = v14;
  LODWORD(v14) = *((_DWORD *)a4 + 2);
  ptr[1] = (void *)0x200000000LL;
  v15 = *((_DWORD *)a4 + 6);
  v25 = v14;
  if ( v15 )
    sub_1591FE0((char ***)ptr, (char ***)a4 + 2);
  v16 = (v9 - 1) / 2;
  if ( v9 > a2 )
  {
    while ( 1 )
    {
      v6 = a1 + (v9 << 6);
      v18 = a1 + (v16 << 6);
      if ( !sub_157E6E0(v18, (__int64)&v24, a5) )
        break;
      v17 = v11;
      v9 = v16;
      *(_QWORD *)v6 = *(_QWORD *)v18;
      *(_BYTE *)(v6 + 8) = *(_BYTE *)(v18 + 8);
      *(_BYTE *)(v6 + 9) = *(_BYTE *)(v18 + 9);
      *(_BYTE *)(v6 + 10) = *(_BYTE *)(v18 + 10);
      *(_BYTE *)(v6 + 11) = *(_BYTE *)(v18 + 11);
      *(_BYTE *)(v6 + 12) = *(_BYTE *)(v18 + 12);
      v11 = (char ***)(v18 + 16);
      sub_1591FE0(v17, (char ***)(v18 + 16));
      if ( a2 >= v16 )
      {
        v6 = a1 + (v16 << 6);
        break;
      }
      v16 = (v16 - 1) / 2;
    }
  }
  *(_QWORD *)v6 = v24;
  *(_DWORD *)(v6 + 8) = v25;
  *(_BYTE *)(v6 + 12) = v26;
  sub_1591FE0(v11, (char ***)ptr);
  if ( ptr[0] != v28 )
    free(ptr[0]);
}
