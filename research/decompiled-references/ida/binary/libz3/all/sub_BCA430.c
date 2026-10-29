__int64 __fastcall sub_BCA430(__int64 *a1, unsigned int a2, unsigned int *a3, double a4)
{
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // ebp
  __int64 v10; // rax
  int v11; // edx
  __int64 v12; // rax
  unsigned int *v13; // rsi
  unsigned int v14; // ebp
  unsigned int v15; // r8d
  __int64 v16; // rdi
  bool v17; // zf
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // [rsp+0h] [rbp-48h] BYREF
  unsigned int *v22; // [rsp+8h] [rbp-40h] BYREF
  int v23[2]; // [rsp+10h] [rbp-38h] BYREF
  __int64 v24; // [rsp+18h] [rbp-30h]

  v7 = a1[3];
  v21 = 0;
  v24 = v7;
  v8 = a1[536];
  *(_QWORD *)v23 = 0;
  v22 = a3;
  if ( v8 )
    v9 = *(_DWORD *)(v8 - 4);
  else
    v9 = 0;
  sub_BB70A0(a1 + 536, &v22);
  v10 = a1[536];
  while ( v10 )
  {
    v11 = *(_DWORD *)(v10 - 4);
    if ( v11 == v9 )
      goto LABEL_10;
LABEL_5:
    if ( !(unsigned __int8)sub_BC7E60(
                             (__int64)a1,
                             *(unsigned int **)(v10 + 8LL * (unsigned int)(v11 - 1)),
                             &v21,
                             (__int64 *)v23) )
    {
      if ( a3 )
        ++a3[2];
      v19 = *(_QWORD *)v23;
      if ( *(_QWORD *)v23 )
      {
        v20 = v24;
        v17 = (*(_DWORD *)(*(_QWORD *)v23 + 8LL))-- == 1;
        if ( v17 )
          sub_15D7BC0(v20, v19);
      }
      v12 = a1[3];
      *(_QWORD *)v23 = a3;
      v13 = a3;
      if ( *(unsigned int **)(v12 + 856) != a3 )
        goto LABEL_24;
LABEL_11:
      if ( (_BYTE)a2 )
      {
        v14 = a2;
        if ( *(unsigned int **)(v12 + 864) != v13 )
          goto LABEL_15;
        goto LABEL_13;
      }
      v15 = sub_B645B0(a1[2], a3);
LABEL_14:
      sub_BC37F0((__int64)a1, v21, 0, nullptr, v15, a4);
      v13 = *(unsigned int **)v23;
      v14 = 1;
      goto LABEL_15;
    }
    v10 = a1[536];
    if ( *(_QWORD *)v23 )
      --*(_DWORD *)(v10 - 4);
  }
  v11 = 0;
  if ( v9 )
    goto LABEL_5;
LABEL_10:
  sub_14B9B80(a1 + 149, v23);
  v12 = a1[3];
  v13 = *(unsigned int **)v23;
  if ( *(_QWORD *)(v12 + 856) == *(_QWORD *)v23 )
    goto LABEL_11;
LABEL_24:
  v14 = 0;
  if ( *(unsigned int **)(v12 + 864) == v13 )
  {
    v14 = 1;
    if ( (_BYTE)a2 )
    {
LABEL_13:
      v15 = sub_B645B0(a1[2], a3) ^ 1;
      goto LABEL_14;
    }
  }
LABEL_15:
  if ( !v13 )
    return v14;
  v16 = v24;
  v17 = v13[2]-- == 1;
  if ( !v17 )
    return v14;
  sub_15D7BC0(v16, v13);
  return v14;
}

