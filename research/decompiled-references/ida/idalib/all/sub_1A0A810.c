__int64 __fastcall sub_1A0A810(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rbp
  _QWORD *v6; // rdi
  int v7; // r14d
  __int64 v8; // r15
  __int64 v9; // r13
  unsigned int v10; // ebp
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rdx
  char **v15; // rsi
  unsigned __int8 v16; // al
  char *v17; // rax
  char *v18; // rax
  int v19; // eax
  void *v20; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v21; // [rsp+8h] [rbp-40h]

  if ( !*(_QWORD *)(a1 + 40) )
  {
    *(_QWORD *)(a1 + 40) = a2;
    *(_DWORD *)(a1 + 48) = 0;
  }
  LODWORD(v5) = 1;
  v6 = *(_QWORD **)(*(_QWORD *)a1 + 248LL);
  if ( *(_DWORD *)a3 != 7 )
    goto LABEL_4;
  v12 = *(unsigned int *)(a3 + 32);
  v13 = sub_A72040(v6, *(_QWORD *)(*(_QWORD *)(a3 + 8) + 16LL));
  if ( (unsigned int)*(unsigned __int8 *)(v13 + 16) - 2 > 1 )
  {
LABEL_15:
    *(_QWORD *)(a1 + 40) = 0;
    v9 = a2;
    *(_DWORD *)(a1 + 48) = 0;
    return v9;
  }
  v14 = *(unsigned int *)(a2 + 52);
  v15 = *(char ***)(v13 + 40);
  v16 = *(_BYTE *)(v13 + 19);
  v5 = *(unsigned int *)(a2 + 52) - (unsigned __int64)*(unsigned int *)(a1 + 48);
  if ( (v16 & 2) != 0 )
  {
    v21 = *((_DWORD *)v15 + 2);
    if ( v21 <= 0x40 )
    {
      v17 = *v15;
      v20 = *v15;
      goto LABEL_11;
    }
    sub_2205510(&v20);
    v19 = v21;
  }
  else
  {
    v19 = 8 * ((v16 >> 2) & 0x1F);
    v21 = v19;
    if ( v19 > 64 )
    {
      sub_2205470(&v20, v15, 0);
      v19 = v21;
    }
    else
    {
      v20 = v15;
    }
  }
  if ( (unsigned int)v19 <= 0x40 )
  {
    v14 = *(unsigned int *)(a2 + 52);
    v17 = (char *)v20;
LABEL_11:
    v18 = &v17[-v12];
    if ( (unsigned __int64)v18 <= v5 )
      v5 = (unsigned __int64)v18;
    goto LABEL_13;
  }
  if ( *(_QWORD *)v20 - v12 <= v5 )
    v5 = *(_QWORD *)v20 - v12;
  operator delete[](v20);
  v14 = *(unsigned int *)(a2 + 52);
LABEL_13:
  if ( v5 == v14 )
    goto LABEL_15;
  v6 = *(_QWORD **)(*(_QWORD *)a1 + 248LL);
LABEL_4:
  v7 = *(_DWORD *)(a2 + 16);
  v8 = *(_QWORD *)(a2 + 40);
  v9 = sub_EEE9A0(56, v6, 8u);
  sub_C0D8F0(v9, *(_QWORD **)(*(_QWORD *)a1 + 248LL), v7, v8, *(_DWORD *)(a1 + 48), v5);
  v10 = *(_DWORD *)(a1 + 48) + v5;
  *(_DWORD *)(a1 + 48) = v10;
  if ( v10 >= *(_DWORD *)(a2 + 52) )
  {
    *(_QWORD *)(a1 + 40) = 0;
    *(_DWORD *)(a1 + 48) = 0;
  }
  return v9;
}
