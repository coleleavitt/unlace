__int64 __fastcall sub_BCA840(__int64 a1, __int64 a2, double a3)
{
  _DWORD *v3; // rax
  unsigned int v4; // eax
  unsigned int v5; // r14d
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // ebp
  __int64 v9; // rax
  int v10; // edx
  int v11; // eax
  __int64 result; // rax
  __int64 v13; // rsi
  __int64 v14; // rdi
  _DWORD *v16; // r15
  unsigned int v17; // [rsp+Ch] [rbp-5Ch] BYREF
  int v18[2]; // [rsp+10h] [rbp-58h] BYREF
  __int64 v19; // [rsp+18h] [rbp-50h] BYREF
  int v20[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v21; // [rsp+28h] [rbp-40h]

  if ( *(_WORD *)(a2 + 4)
    || (v3 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) == nullptr
    || *(_DWORD *)(a1 + 1744) != *v3
    || v3[1] != 4
    || *(_DWORD *)(a2 + 24) != 2 )
  {
    sub_1872CE0("");
    sub_1873130(114, 3443);
  }
  v16 = *(_DWORD **)(a2 + 32);
  v4 = sub_B645B0(*(_QWORD *)(a1 + 16), (unsigned int *)a2);
  v19 = a2;
  *(_QWORD *)v18 = 0;
  v5 = v4;
  v6 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v20 = 0;
  v21 = v6;
  v7 = *(_QWORD *)(a1 + 4288);
  if ( v7 )
    v8 = *(_DWORD *)(v7 - 4);
  else
    v8 = 0;
  sub_BB70A0((_QWORD *)(a1 + 4288), &v19);
  v9 = *(_QWORD *)(a1 + 4288);
  while ( v9 )
  {
    v10 = *(_DWORD *)(v9 - 4);
    if ( v10 == v8 )
      goto LABEL_14;
LABEL_9:
    if ( !(unsigned __int8)sub_BC7E60(
                             a1,
                             *(unsigned int **)(v9 + 8LL * (unsigned int)(v10 - 1)),
                             (__int64 *)v18,
                             (__int64 *)v20) )
      goto LABEL_15;
    v9 = *(_QWORD *)(a1 + 4288);
    if ( *(_QWORD *)v20 )
      --*(_DWORD *)(v9 - 4);
  }
  v10 = 0;
  if ( v8 )
    goto LABEL_9;
LABEL_14:
  sub_14B9B80(a1 + 1192, v20);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 856LL) == *(_QWORD *)v20 )
  {
    sub_BC37F0(a1, *(__int64 *)v18, 0, nullptr, v5, a3);
    return sub_BB0560(*(__int64 *)v20, v21);
  }
LABEL_15:
  v17 = v5 ^ 1;
  v11 = sub_BB24A0(a1, v16);
  sub_BC3F50(a1, (int *)&v17, v11 ^ 1, a3);
  result = sub_1460000(a1 + 2696, a2);
  v13 = *(_QWORD *)v20;
  if ( *(_QWORD *)v20 )
  {
    v14 = v21;
    if ( (*(_DWORD *)(*(_QWORD *)v20 + 8LL))-- == 1 )
      return sub_15D7BC0(v14, v13);
  }
  return result;
}

