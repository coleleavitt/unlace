void __fastcall sub_118E200(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  const char **v8; // rax
  char *v9; // r13
  const char *v10; // rdi
  size_t v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  _BYTE *v14; // rax
  __int64 v15; // rdx
  void *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  _BYTE *v20; // rdi
  __int64 v21; // [rsp+8h] [rbp-90h]
  void *v22; // [rsp+10h] [rbp-88h] BYREF
  __int64 v23; // [rsp+18h] [rbp-80h]
  _BYTE v24[16]; // [rsp+20h] [rbp-78h] BYREF
  void *v25[2]; // [rsp+30h] [rbp-68h] BYREF
  _WORD v26[44]; // [rsp+40h] [rbp-58h] BYREF

  if ( (unsigned int)sub_115CDF0(*(__int64 **)(*(_QWORD *)(a1 + 24) + 8LL), a2) == 1 )
  {
    sub_10DC5D0(a3, (__int64)"-msoft-float");
    sub_10DC5D0(a3, (__int64)"-mfloat-abi");
    sub_10DC5D0(a3, (__int64)"soft");
  }
  else
  {
    v4 = *(unsigned int *)(a3 + 8);
    if ( v4 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_2237220(a3, a3 + 16, v4 + 1, 8);
      v4 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v4) = "-mfloat-abi";
    v5 = *(unsigned int *)(a3 + 12);
    v6 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
    *(_DWORD *)(a3 + 8) = v6;
    if ( v6 + 1 > v5 )
    {
      sub_2237220(a3, a3 + 16, v6 + 1, 8);
      v6 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v6) = "hard";
    ++*(_DWORD *)(a3 + 8);
  }
  v7 = sub_10DCD30(a2, 0xB64u);
  if ( v7 )
  {
    v8 = *(const char ***)(v7 + 48);
    v9 = (char *)*v8;
    if ( *v8 )
    {
      v10 = *v8;
      v11 = j__strlen(*v8);
      v24[0] = 0;
      v22 = v24;
      v23 = 0;
      if ( v11 == 6 && *(_DWORD *)v9 == 1769234798 && *((_WORD *)v9 + 2) == 25974 )
      {
        v14 = (_BYTE *)sub_22A33B0(v10, 2916, v24, v12, v13);
        v25[0] = v26;
        sub_11892E0(v25, v14, (__int64)&v14[v15]);
        sub_A0AAD0((__int64)&v22, v25);
        v16 = v25[0];
        if ( v25[0] == v26 )
          goto LABEL_17;
        goto LABEL_16;
      }
    }
    else
    {
      v24[0] = 0;
      v23 = 0;
      v22 = v24;
      v11 = 0;
    }
    v25[0] = v26;
    sub_11892E0(v25, v9, (__int64)&v9[v11]);
    sub_A0AAD0((__int64)&v22, v25);
    v16 = v25[0];
    if ( v25[0] == v26 )
    {
LABEL_17:
      v17 = *(unsigned int *)(a3 + 8);
      if ( v17 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
      {
        sub_2237220(a3, a3 + 16, v17 + 1, 8);
        v17 = *(unsigned int *)(a3 + 8);
      }
      *(_QWORD *)(*(_QWORD *)a3 + 8 * v17) = "-tune-cpu";
      ++*(_DWORD *)(a3 + 8);
      v26[8] = 260;
      v25[0] = &v22;
      v18 = sub_10DA6C0(a2, (__int64)v25);
      v19 = *(unsigned int *)(a3 + 8);
      if ( v19 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
      {
        v21 = v18;
        sub_2237220(a3, a3 + 16, v19 + 1, 8);
        v19 = *(unsigned int *)(a3 + 8);
        v18 = v21;
      }
      *(_QWORD *)(*(_QWORD *)a3 + 8 * v19) = v18;
      v20 = v22;
      ++*(_DWORD *)(a3 + 8);
      if ( v20 != v24 )
        operator delete(v20);
      return;
    }
LABEL_16:
    operator delete(v16);
    goto LABEL_17;
  }
}
