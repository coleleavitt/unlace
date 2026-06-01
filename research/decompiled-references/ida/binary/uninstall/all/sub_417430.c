__int64 __fastcall sub_417430(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  __int64 v7; // rsi
  unsigned int v8; // edx
  __int64 v10; // rax
  __int64 v11; // rsi
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rdx
  int v15; // ecx
  unsigned int v16; // r14d
  int *v17; // r13
  int v18; // eax
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rax
  int v22; // [rsp+4h] [rbp-34h] BYREF
  int v23; // [rsp+8h] [rbp-30h] BYREF
  int v24; // [rsp+Ch] [rbp-2Ch] BYREF

  if ( a3 <= 3 )
  {
    sub_458930(a2, 1, a4, "list first last ?element element ...?");
    return 1;
  }
  v7 = a4[1];
  if ( *(_UNKNOWN ***)(v7 + 24) == &off_655E20 )
  {
    v10 = *(_QWORD *)(v7 + 32);
    v11 = a4[2];
    v24 = *(_DWORD *)(v10 + 8);
    v8 = sub_49FAC0(a2, v11, (unsigned int)(v24 - 1), &v23);
    if ( v8 )
      return v8;
  }
  else
  {
    v8 = sub_46FB10(a2, v7, &v24);
    if ( v8 )
      return v8;
    v8 = sub_49FAC0(a2, a4[2], (unsigned int)(v24 - 1), &v23);
    if ( v8 )
      return v8;
  }
  v8 = sub_49FAC0(a2, a4[3], (unsigned int)(v24 - 1), &v22);
  if ( !v8 )
  {
    v14 = (unsigned int)v23;
    if ( v23 < 0 )
    {
      v14 = 0;
      v23 = 0;
    }
    if ( (int)v14 < v24 || v24 <= 0 )
    {
      v15 = v22;
      if ( v22 >= v24 )
      {
        v15 = v24 - 1;
        v22 = v24 - 1;
      }
      v16 = 0;
      if ( (int)v14 <= v15 )
        v16 = v15 - v14 + 1;
      v17 = (int *)a4[1];
      if ( *v17 > 1 )
      {
        v21 = sub_470170(0, a4[1]);
        v14 = (unsigned int)v23;
        v17 = (int *)v21;
      }
      v18 = sub_46F620(a2, v17, v14, v16, (unsigned int)(a3 - 4), a4 + 4);
      v8 = 1;
      if ( !v18 )
      {
        sub_48AFD0(a2, v17);
        return 0;
      }
    }
    else
    {
      v19 = a4[2];
      v20 = *(_QWORD *)(v19 + 8);
      if ( !v20 )
        LODWORD(v20) = sub_47B3B0(v19);
      sub_48B710(a2, (unsigned int)"list doesn't contain element ", v20, 0, v12, v13);
      return 1;
    }
  }
  return v8;
}

