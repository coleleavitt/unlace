__int64 __fastcall sub_1F03D90(char *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char *v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // rsi
  char *v9; // rax
  __int64 v10; // rax
  __int64 *v11; // rax
  char *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 v16; // rsi
  __int64 v17; // rcx
  unsigned __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // r13
  _QWORD v21[2]; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v22; // [rsp+10h] [rbp-38h]

  v6 = a1 + 8;
  v21[0] = 0;
  v22 = 0;
  v21[1] = 0;
  sub_1F003B0((__int64)v21, (__int64 *)a1 + 1, a3, a4, a5, a6);
  v7 = *(_QWORD *)a1;
  if ( (*(_QWORD *)a1 & 2) != 0 )
  {
    v16 = v7 & 0xFFFFFFFFFFFFFFFCLL;
    v9 = *(char **)v16;
    v17 = *(unsigned int *)(v16 + 8);
    v8 = 0;
    v6 = &v9[8 * v17];
    if ( !(_DWORD)v17 )
      goto LABEL_6;
  }
  else
  {
    v8 = v7 & 0xFFFFFFFFFFFFFFFCLL;
    v9 = a1;
    if ( !v8 )
    {
      v6 = a1;
      goto LABEL_6;
    }
  }
  v10 = *(_QWORD *)v9;
  v8 = 0;
  if ( v10 && (v10 & 4) != 0 )
    v8 = (v10 & 0xFFFFFFFFFFFFFFF8LL) != 0;
LABEL_6:
  v11 = (__int64 *)sub_1EAA820(a1, v8);
  v12 = (char *)sub_1ED19D0(v11, v6, (__int64)v21);
  v13 = *(_QWORD *)a1;
  if ( (*(_QWORD *)a1 & 2) != 0 )
  {
    v18 = v13 & 0xFFFFFFFFFFFFFFFCLL;
    v19 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFFCLL);
    v20 = v19 + 8LL * *(unsigned int *)(v18 + 8) - (_QWORD)v6;
    if ( v6 != (char *)(v19 + 8LL * *(unsigned int *)(v18 + 8)) )
    {
      v12 = (char *)memmove(v12, v6, v19 + 8LL * *(unsigned int *)(v18 + 8) - (_QWORD)v6);
      v19 = *(_QWORD *)v18;
    }
    *(_DWORD *)(v18 + 8) = (__int64)&v12[v20 - v19] >> 3;
    v14 = *((_QWORD *)a1 + 1);
    if ( (v14 & 4) != 0 )
      goto LABEL_10;
    goto LABEL_12;
  }
  if ( v12 != v6 && a1 == v12 )
  {
    v14 = *((_QWORD *)a1 + 1);
    *(_QWORD *)a1 = 0;
    if ( (v14 & 4) != 0 )
      goto LABEL_10;
LABEL_12:
    *((_QWORD *)a1 + 1) = 0;
    return operator delete(v21[0], 8LL * v22, 8);
  }
  v14 = *((_QWORD *)a1 + 1);
  if ( (v14 & 4) == 0 )
    goto LABEL_12;
LABEL_10:
  *(_DWORD *)((v14 & 0xFFFFFFFFFFFFFFF8LL) + 8) = 0;
  return operator delete(v21[0], 8LL * v22, 8);
}
