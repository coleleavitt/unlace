__int64 __fastcall sub_6EA3C0(__int64 *a1, _QWORD *a2, _QWORD *a3, __int64 *a4, unsigned int **a5)
{
  unsigned int *v9; // rbx
  unsigned int *v10; // r14
  __int64 v11; // rsi
  unsigned int *v12; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned int *v16; // rbx
  unsigned int v17; // r14d
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // edx
  __int64 v22; // rcx
  unsigned int *v23; // rax
  unsigned int v24; // edx
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rbp
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 (__fastcall *v31)(_QWORD *, __int64, __int64 *); // r8
  __int64 v32; // rax
  __int64 v34; // [rsp+10h] [rbp-68h]
  __int64 v35; // [rsp+10h] [rbp-68h]
  _QWORD *v36; // [rsp+10h] [rbp-68h]
  __int64 v37; // [rsp+18h] [rbp-60h]
  __int64 v38; // [rsp+20h] [rbp-58h] BYREF
  unsigned int *v39; // [rsp+28h] [rbp-50h] BYREF
  __int64 v40; // [rsp+30h] [rbp-48h] BYREF
  __int64 v41; // [rsp+38h] [rbp-40h]

  v9 = a5[1];
  if ( v9 )
  {
    v10 = &v9[2 * *(v9 - 1)];
    if ( v9 >= v10 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v11 = *(_QWORD *)v9;
        if ( *(_QWORD *)v9 )
        {
          v12 = *a5;
          if ( (*(_DWORD *)(v11 + 8))-- == 1 )
            break;
        }
        v9 += 2;
        if ( v9 >= v10 )
          goto LABEL_8;
      }
      sub_15D7BC0(v12, v11);
      v9 += 2;
    }
    while ( v9 < v10 );
LABEL_8:
    v9 = a5[1];
    if ( v9 )
LABEL_9:
      *(v9 - 1) = 0;
  }
  v14 = *a1;
  v15 = a3[6];
  v16 = nullptr;
  v40 = 0;
  v38 = v14;
  v41 = v14;
  if ( !v15 )
    goto LABEL_34;
  v17 = 0;
  do
  {
    if ( v17 >= *(_DWORD *)(v15 - 4) )
      break;
    v18 = *(_DWORD *)(a3[8] + 4LL * v17);
    if ( v18 != 2 )
    {
      v19 = a3[7] + 16LL * v17;
      switch ( v18 )
      {
        case 1:
          (*(void (__fastcall **)(_QWORD *, __int64, __int64 *))(*a2 + 16LL))(a2, v19, &v40);
          break;
        case 3:
          v31 = *(__int64 (__fastcall **)(_QWORD *, __int64, __int64 *))(*a2 + 40LL);
          if ( v31 == sub_6DF760 )
          {
            v36 = (_QWORD *)a2[1];
            (*(void (__fastcall **)(_QWORD *, __int64, __int64 *))(*a2 + 24LL))(a2, v19, &v40);
            v32 = sub_15E1A70(*v36);
            if ( v32 )
              ++*(_DWORD *)(v32 + 8);
            v37 = v32;
            sub_6DE2A0(v40, v41);
            v40 = v37;
          }
          else
          {
            v31(a2, v19, &v40);
          }
          break;
        case 0:
          (*(void (__fastcall **)(_QWORD *, __int64, __int64 *))(*a2 + 32LL))(a2, v19, &v40);
          break;
      }
      v20 = sub_15E1B70(*a1);
      if ( v20 )
        ++*(_DWORD *)(v20 + 8);
      if ( !v16 || (v21 = *(v16 - 1), v21 == *(v16 - 2)) )
      {
        v34 = v20;
        v39 = v16;
        sub_23A6F0(&v39);
        v16 = v39;
        v20 = v34;
        v21 = *(v39 - 1);
      }
      *(_QWORD *)&v16[2 * v21] = v20;
      v22 = v40;
      *(v16 - 1) = v21 + 1;
      if ( v22 )
        ++*(_DWORD *)(v22 + 8);
      v23 = a5[1];
      if ( !v23 || (v24 = *(v23 - 1), v24 == *(v23 - 2)) )
      {
        v35 = v22;
        sub_3A6B20(a5 + 1);
        v23 = a5[1];
        v22 = v35;
        v24 = *(v23 - 1);
      }
      *(_QWORD *)&v23[2 * v24] = v22;
      *(v23 - 1) = v24 + 1;
      v15 = a3[6];
    }
    ++v17;
  }
  while ( v15 );
  if ( v16 )
    v25 = *(v16 - 1);
  else
LABEL_34:
    v25 = 0;
  v26 = sub_6E3580(a1, v25, v16);
  v27 = v26;
  if ( v26 )
    ++*(_DWORD *)(v26 + 8);
  sub_6DE2A0(*a4, a4[1]);
  v28 = v41;
  v29 = v40;
  *a4 = v27;
  sub_6DE2A0(v29, v28);
  v39 = v16;
  return sub_2334C0(&v38);
}

