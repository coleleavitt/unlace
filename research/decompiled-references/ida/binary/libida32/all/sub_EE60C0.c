void __fastcall sub_EE60C0(__int64 *a1, __int64 a2, double a3)
{
  __int64 v5; // rax
  __int64 v6; // rdi
  _BYTE *v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  _BYTE *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdi
  _BYTE *v16; // rax
  char *v17; // rsi
  __int64 v18; // rdi
  _BYTE *v19; // rax
  __int64 v20; // rsi
  __int64 v21; // [rsp+8h] [rbp-50h] BYREF
  _BYTE v22[32]; // [rsp+10h] [rbp-48h] BYREF
  __int16 v23; // [rsp+30h] [rbp-28h]

  v21 = *(_QWORD *)(a2 + 8);
  v5 = sub_F34140(*(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFF0LL));
  if ( v5 && ((*(_QWORD *)(v5 + 24) & 0xFFFFFFFFFFFFFFF0LL) != 0 || (*(_BYTE *)(v5 + 17) & 4) != 0) )
  {
    v6 = *a1;
    v7 = *(_BYTE **)(*a1 + 32);
    if ( (unsigned __int64)v7 >= *(_QWORD *)(*a1 + 24) )
    {
      sub_2257CD0(v6, 40);
    }
    else
    {
      *(_QWORD *)(v6 + 32) = v7 + 1;
      *v7 = 40;
    }
    v8 = *a1;
    v23 = 257;
    sub_F50AF0(&v21, v8, a1 + 3, v22, 0);
    v12 = *a1;
    v13 = *(_BYTE **)(*a1 + 32);
    if ( (unsigned __int64)v13 >= *(_QWORD *)(*a1 + 24) )
    {
      sub_2257CD0(v12, 41);
    }
    else
    {
      v14 = (__int64)(v13 + 1);
      *(_QWORD *)(v12 + 32) = v13 + 1;
      *v13 = 41;
    }
  }
  else
  {
    v20 = *a1;
    v23 = 257;
    sub_F50AF0(&v21, v20, a1 + 3, v22, 0);
  }
  if ( *(_DWORD *)(a2 + 32) )
  {
    v15 = *a1;
    v16 = *(_BYTE **)(*a1 + 32);
    if ( (unsigned __int64)v16 >= *(_QWORD *)(*a1 + 24) )
    {
      sub_2257CD0(v15, 40);
    }
    else
    {
      v14 = (__int64)(v16 + 1);
      *(_QWORD *)(v15 + 32) = v16 + 1;
      *v16 = 40;
    }
  }
  v17 = *(char **)(a2 + 16);
  if ( v17 )
    sub_EE16F0(a1, v17, v14, v9, v10, v11, a3);
  else
    sub_EE0C80(a1);
  if ( *(_DWORD *)(a2 + 32) )
  {
    v18 = *a1;
    v19 = *(_BYTE **)(*a1 + 32);
    if ( (unsigned __int64)v19 >= *(_QWORD *)(*a1 + 24) )
    {
      sub_2257CD0(v18, 41);
    }
    else
    {
      *(_QWORD *)(v18 + 32) = v19 + 1;
      *v19 = 41;
    }
  }
}

