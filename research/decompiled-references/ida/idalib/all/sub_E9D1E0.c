__int64 __fastcall sub_E9D1E0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _BYTE *a4,
        signed __int64 a5,
        __int64 *a6,
        __int64 a7,
        _BYTE *a8,
        __int64 a9)
{
  unsigned int v13; // r14d
  unsigned int v14; // eax
  unsigned int v15; // r14d
  unsigned int v16; // ebp
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 i; // rdx
  int v22; // r9d
  unsigned int *v23; // rax
  unsigned int *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // r14
  unsigned int v28; // r15d
  __int64 v30; // [rsp+18h] [rbp-F0h]
  _QWORD *v31; // [rsp+18h] [rbp-F0h]
  __int64 v32; // [rsp+20h] [rbp-E8h]
  unsigned int v33; // [rsp+28h] [rbp-E0h]
  __int64 v34; // [rsp+28h] [rbp-E0h]
  unsigned __int8 *v35; // [rsp+30h] [rbp-D8h] BYREF
  char v36; // [rsp+38h] [rbp-D0h]
  unsigned __int8 *v37[17]; // [rsp+80h] [rbp-88h] BYREF

  v13 = *(_DWORD *)(a2 + 8);
  if ( v13 != *((_DWORD *)a6 + 2) )
  {
    v14 = 0;
    if ( v13 )
    {
      v24 = *(unsigned int **)(a2 + 16);
      v25 = v13;
      v13 = *v24;
      v14 = v24[v25 - 1];
    }
    v33 = v14;
    v30 = a3;
    sub_FC70B0(v37, *a1, *(unsigned int *)(a3 + 24), 2340);
    sub_E98080(v37, v30);
    sub_E97E40(v37, a5 == 0);
    sub_AEC220(v37, a4, a5);
    v35 = (unsigned __int8 *)__PAIR64__(v33, v13);
    v15 = 0;
    v36 = 1;
    sub_AEC610((__int64 *)v37, (__int64 *)&v35);
    sub_E97E40(v37, 0);
    sub_FC70F0(&v35, v37);
    sub_AEA040((__int64)v37);
    sub_AE9DF0(&v35, *(unsigned int *)(a2 + 8), 3u);
    sub_AEA040((__int64)&v35);
    v16 = *((_DWORD *)a6 + 2);
    if ( v16 )
    {
      v23 = (unsigned int *)a6[2];
      v15 = v23[v16 - 1];
      v16 = *v23;
    }
    sub_FC70B0(v37, *a1, *(unsigned int *)(a7 + 24), 2522);
    sub_E97E40(v37, a9 == 0);
    sub_AEC220(v37, a8, a9);
    v35 = (unsigned __int8 *)__PAIR64__(v15, v16);
    v36 = 1;
    sub_AEC610((__int64 *)v37, (__int64 *)&v35);
    sub_E97E40(v37, 0);
    sub_FC70F0(&v35, v37);
    sub_AEA040((__int64)v37);
    sub_AE9DF0(&v35, *((unsigned int *)a6 + 2), 3u);
    sub_AEA040((__int64)&v35);
    return 1;
  }
  if ( !v13 )
    return 0;
  v18 = *a6;
  v19 = *(_QWORD *)(**(_QWORD **)a2 + 40LL);
  v20 = *(_QWORD *)(*(_QWORD *)*a6 + 40LL);
  if ( v19 == v20 )
  {
    for ( i = 1; ; ++i )
    {
      v22 = i;
      if ( v13 - 1 + 1LL == i )
        break;
      v20 = *(_QWORD *)(*(_QWORD *)(v18 + 8 * i) + 40LL);
      v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 8 * i) + 40LL);
      if ( v19 != v20 )
      {
        v26 = 4 * i;
        v27 = (unsigned int)(v22 + 1);
        goto LABEL_15;
      }
    }
    return 0;
  }
  v27 = 1;
  v26 = 0;
LABEL_15:
  v31 = a1;
  v32 = v19;
  v28 = *(_DWORD *)(a6[2] + v26);
  v34 = a3;
  sub_FC70B0(v37, *a1, *(unsigned int *)(*(_QWORD *)(a2 + 16) + v26), 2340);
  sub_E98080(v37, v34);
  sub_E97E40(v37, a5 == 0);
  sub_AEC220(v37, a4, a5);
  v36 = 1;
  v35 = nullptr;
  sub_AEC610((__int64 *)v37, (__int64 *)&v35);
  sub_E97E40(v37, 1);
  sub_FC70F0(&v35, v37);
  sub_AEA040((__int64)v37);
  sub_AE9DF0(&v35, v27, 3u);
  sub_E982C0(&v35, v32);
  sub_AEA040((__int64)&v35);
  sub_FC70B0(v37, *v31, v28, 2522);
  sub_E97E40(v37, a9 == 0);
  sub_AEC220(v37, a8, a9);
  v36 = 1;
  v35 = nullptr;
  sub_AEC610((__int64 *)v37, (__int64 *)&v35);
  sub_E97E40(v37, 1);
  sub_FC70F0(&v35, v37);
  sub_AEA040((__int64)v37);
  sub_AE9DF0(&v35, v27, 3u);
  sub_E982C0(&v35, v20);
  sub_AEA040((__int64)&v35);
  return 1;
}
