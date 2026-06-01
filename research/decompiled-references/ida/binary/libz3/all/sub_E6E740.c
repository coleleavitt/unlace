unsigned int *__fastcall sub_E6E740(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // r14
  __int64 v7; // r15
  int v8; // eax
  _DWORD *v9; // rdx
  int v10; // eax
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rax
  int v14; // r8d
  int v15; // r9d
  unsigned int *result; // rax
  unsigned int v17; // r14d
  __int64 v18; // r15
  __int64 v19; // rax
  __int64 v20; // r15
  __int64 v21; // rdx
  unsigned int v22; // eax
  __int64 v23; // rax
  unsigned int v24; // r14d
  __int64 v25; // rdx
  unsigned int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // r15
  int v30[2]; // [rsp+0h] [rbp-68h]
  _QWORD *v31; // [rsp+0h] [rbp-68h]
  int v32; // [rsp+8h] [rbp-60h]
  int v33; // [rsp+10h] [rbp-58h]
  unsigned int **v34; // [rsp+10h] [rbp-58h]
  int v35; // [rsp+18h] [rbp-50h]
  unsigned int **v36; // [rsp+18h] [rbp-50h]
  int v37; // [rsp+20h] [rbp-48h]
  int v38; // [rsp+20h] [rbp-48h]
  char v39[8]; // [rsp+28h] [rbp-40h] BYREF
  int v40; // [rsp+30h] [rbp-38h]
  int v41; // [rsp+38h] [rbp-30h]
  int v42; // [rsp+40h] [rbp-28h]
  void *v43; // [rsp+48h] [rbp-20h]

  v4 = a1 + 3;
  v7 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)v30 = *(_QWORD *)(a3 + 16);
  v8 = sub_15F0200(a1 + 3);
  v9 = *(_DWORD **)(*(_QWORD *)v30 + 24LL);
  if ( v9 && v8 == *v9 && !v9[1] )
  {
    if ( *(_QWORD *)(a3 + 16) == v7 )
    {
      v24 = 0;
      result = (unsigned int *)*(unsigned int *)(a2 + 24);
      if ( (_DWORD)result )
      {
        do
        {
          v28 = sub_15E1B70(*a1);
          v29 = v28;
          if ( v28 )
            ++*(_DWORD *)(v28 + 8);
          v25 = *(_QWORD *)(a4 + 8);
          if ( !v25 || (v26 = *(_DWORD *)(v25 - 4), v26 == *(_DWORD *)(v25 - 8)) )
          {
            sub_23A6F0((unsigned int **)(a4 + 8));
            v25 = *(_QWORD *)(a4 + 8);
            v26 = *(_DWORD *)(v25 - 4);
          }
          v27 = v26;
          result = (unsigned int *)(v26 + 1);
          ++v24;
          *(_QWORD *)(v25 + 8 * v27) = v29;
          *(_DWORD *)(v25 - 4) = (_DWORD)result;
        }
        while ( v24 < *(_DWORD *)(a2 + 24) );
      }
    }
    else
    {
      v23 = *(_QWORD *)(*a1 + 864);
      *(_QWORD *)v39 = v23;
      if ( v23 )
        ++*(_DWORD *)(v23 + 8);
      return sub_E67160((unsigned int **)(a4 + 8), v39);
    }
  }
  else
  {
    v10 = sub_15F0A30(v4, v7);
    v13 = sub_15DC610(*a1, v10, 1, (int)v39, v11, v12, (int)v39, v32, v33, v35, v37, a3, v40, v41, v42, v43);
    *(_QWORD *)v39 = v13;
    if ( v13 )
      ++*(_DWORD *)(v13 + 8);
    LODWORD(v36) = a4 + 8;
    sub_E67160((unsigned int **)(a4 + 8), v31);
    v34 = (unsigned int **)sub_15FB1F0(v4, v7);
    result = *v34;
    if ( *v34 )
    {
      v17 = 0;
      do
      {
        if ( v17 >= *(result - 1) )
          break;
        v18 = *a1;
        sub_15DC610(
          *a1,
          *(_QWORD *)&result[2 * v17],
          1,
          (int)v31,
          v14,
          v15,
          (int)v31,
          v17,
          (int)v34,
          (int)v36,
          v38,
          a3,
          v40,
          v41,
          v42,
          v43);
        v19 = sub_15E1B70(v18);
        v20 = v19;
        if ( v19 )
          ++*(_DWORD *)(v19 + 8);
        v21 = *(_QWORD *)(a4 + 8);
        if ( v21 )
        {
          v22 = *(_DWORD *)(v21 - 4);
          if ( v22 != *(_DWORD *)(v21 - 8) )
            continue;
        }
        sub_23A6F0(v36);
        v21 = *(_QWORD *)(a4 + 8);
        v22 = *(_DWORD *)(v21 - 4);
        ++v17;
        *(_QWORD *)(v21 + 8LL * v22) = v20;
        *(_DWORD *)(v21 - 4) = v22 + 1;
        result = *v34;
      }
      while ( *v34 );
    }
  }
  return result;
}

