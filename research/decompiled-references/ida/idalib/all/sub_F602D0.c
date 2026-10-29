__int64 __fastcall sub_F602D0(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        int a4,
        unsigned __int16 *a5,
        __int64 a6,
        char a7)
{
  __int64 v10; // rax
  __int64 v11; // r13
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // r8
  __int64 v16; // r12
  int v17; // eax
  __int64 v18; // rax
  int v19; // r12^4
  __int64 v20; // rdx
  __int64 v21; // r14
  __int64 v22; // rax
  __int64 i; // rbp
  int v24; // r13d
  __int64 v25; // r12
  __int64 v26; // rbp
  __int64 result; // rax
  __int64 v28; // r14
  int v29; // r13d
  __int64 v30; // rax
  __int64 *v31; // r14
  __int64 *v32; // r13
  __int64 v33; // r12
  __int64 v34; // r13
  __int64 j; // rbp
  int v36; // r12d
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // r12
  unsigned __int64 v40; // [rsp+8h] [rbp-50h]
  int v41; // [rsp+8h] [rbp-50h]

  sub_9B7040(a1, a2);
  sub_9B7040(a1, SHIDWORD(a2));
  if ( a4 )
  {
    v10 = *(unsigned int *)(a1 + 8);
    v11 = (__int64)&a3[(unsigned int)(a4 - 1) + 1];
    do
    {
      while ( 1 )
      {
        v15 = *a3;
        if ( v10 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
        {
          v40 = *a3;
          sub_2237220(a1, a1 + 16, v10 + 1, 4);
          v10 = *(unsigned int *)(a1 + 8);
          v15 = v40;
        }
        *(_DWORD *)(*(_QWORD *)a1 + 4 * v10) = v15;
        v12 = HIDWORD(v15);
        v13 = *(unsigned int *)(a1 + 12);
        v14 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
        *(_DWORD *)(a1 + 8) = v14;
        if ( v14 + 1 > v13 )
          break;
        ++a3;
        *(_DWORD *)(*(_QWORD *)a1 + 4 * v14) = v12;
        v10 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
        *(_DWORD *)(a1 + 8) = v10;
        if ( (unsigned __int64 *)v11 == a3 )
          goto LABEL_8;
      }
      v41 = v12;
      sub_2237220(a1, a1 + 16, v14 + 1, 4);
      ++a3;
      *(_DWORD *)(*(_QWORD *)a1 + 4LL * *(unsigned int *)(a1 + 8)) = v41;
      v10 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
      *(_DWORD *)(a1 + 8) = v10;
    }
    while ( a3 != (unsigned __int64 *)v11 );
  }
LABEL_8:
  sub_9B7040(a1, 8 * *((_DWORD *)a5 + 6) + 2 * *((_DWORD *)a5 + 4) + (a5[1] & 1));
  v16 = *((_QWORD *)a5 + 1);
  sub_9B7040(a1, v16);
  sub_9B7040(a1, SHIDWORD(v16));
  v17 = *((_DWORD *)a5 + 6);
  if ( v17 == 2 )
  {
    v31 = *((__int64 **)a5 + 4);
    v32 = &v31[*((_QWORD *)a5 + 5)];
    while ( v32 != v31 )
    {
      v33 = *v31++;
      sub_9B7040(a1, v33);
      sub_9B7040(a1, SHIDWORD(v33));
    }
  }
  else if ( (unsigned int)(v17 - 6) <= 2 )
  {
    sub_F1A490(*((_QWORD *)a5 + 6), a1, a6, a7, 0);
  }
  else if ( (unsigned int)(v17 - 9) <= 1 )
  {
    v18 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a5 + 7) + 32LL))(*((_QWORD *)a5 + 7));
    v19 = HIDWORD(v18);
    sub_9B7040(a1, v18);
    sub_9B7040(a1, v19);
  }
  v20 = *((_QWORD *)a5 + 9);
  if ( v20 && a4 )
  {
    v21 = (unsigned int)(a4 - 1);
    v22 = *(unsigned int *)(a1 + 8);
    for ( i = 0; ; ++i )
    {
      v24 = *(unsigned __int8 *)(v20 + i);
      if ( v22 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
      {
        sub_2237220(a1, a1 + 16, v22 + 1, 4);
        *(_DWORD *)(*(_QWORD *)a1 + 4LL * *(unsigned int *)(a1 + 8)) = v24;
      }
      else
      {
        *(_DWORD *)(*(_QWORD *)a1 + 4 * v22) = v24;
      }
      v22 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
      *(_DWORD *)(a1 + 8) = v22;
      if ( v21 == i )
        break;
      v20 = *((_QWORD *)a5 + 9);
    }
  }
  sub_9B7040(a1, *a5);
  v25 = *((_QWORD *)a5 + 12);
  v26 = *((_QWORD *)a5 + 14);
  sub_9B7040(a1, (4 * (v26 != 0)) | (2 * ((a5[1] >> 3) & 0x1FF)) | ((a5[1] & 2) != 0) | (8 * v25));
  result = sub_9B7040(a1, (a5[1] & 4) != 0);
  if ( (_DWORD)v25 )
  {
    if ( !v26 )
    {
      v28 = (unsigned int)(v25 - 1);
      while ( 1 )
      {
        v29 = *(unsigned __int8 *)(*((_QWORD *)a5 + 11) + v26);
        v30 = *(unsigned int *)(a1 + 8);
        if ( *(unsigned int *)(a1 + 12) >= (unsigned __int64)(v30 + 1) )
        {
          *(_DWORD *)(*(_QWORD *)a1 + 4 * v30) = v29;
          result = v26 + 1;
          ++*(_DWORD *)(a1 + 8);
          if ( v26 == v28 )
            return result;
        }
        else
        {
          sub_2237220(a1, a1 + 16, v30 + 1, 4);
          *(_DWORD *)(*(_QWORD *)a1 + 4LL * *(unsigned int *)(a1 + 8)) = v29;
          result = v26 + 1;
          ++*(_DWORD *)(a1 + 8);
          if ( v26 == v28 )
            return result;
        }
        v26 = result;
      }
    }
    v34 = (unsigned int)(v25 - 1);
    for ( j = 0; ; ++j )
    {
      v36 = *(unsigned __int8 *)(*((_QWORD *)a5 + 11) + j);
      v37 = *(unsigned int *)(a1 + 8);
      if ( v37 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
      {
        sub_2237220(a1, a1 + 16, v37 + 1, 4);
        v37 = *(unsigned int *)(a1 + 8);
      }
      *(_DWORD *)(*(_QWORD *)a1 + 4 * v37) = v36;
      v38 = *((_QWORD *)a5 + 13);
      ++*(_DWORD *)(a1 + 8);
      v39 = *(_QWORD *)(v38 + 8 * j);
      sub_9B7040(a1, v39);
      sub_9B7040(a1, SHIDWORD(v39));
      result = j + 1;
      if ( v34 == j )
        break;
    }
  }
  return result;
}
