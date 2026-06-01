_QWORD *__fastcall sub_7D48B0(__int64 a1, __int64 *a2, int a3, __int64 *a4, unsigned int a5, __int64 a6)
{
  __int64 (*v10)(void); // rax
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rdi
  _QWORD *v16; // rdx
  int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v22; // rax

  v10 = *(__int64 (**)(void))(*(_QWORD *)a1 + 432LL);
  if ( (char *)v10 == (char *)sub_79EFF0 )
  {
    v11 = *a4;
    v12 = a1 + 2144;
    if ( *a4 )
    {
LABEL_3:
      v13 = *(unsigned int *)(v11 - 4);
      goto LABEL_4;
    }
  }
  else
  {
    v12 = v10();
    v11 = *a4;
    if ( *a4 )
      goto LABEL_3;
  }
  v13 = 0;
LABEL_4:
  v14 = (_QWORD *)sub_180C100(v12, 4 * (v13 + 2LL * a5 + 10));
  v15 = *a4;
  v16 = v14;
  if ( *a4 )
    v17 = *(_DWORD *)(v15 - 4);
  else
    v17 = 0;
  v14[1] = 0;
  *v14 = off_1C549F8;
  v18 = *a2;
  v19 = (__int64)&v16[a5 + 5];
  *((_DWORD *)v16 + 4) = a3;
  v16[1] = v18;
  v20 = 0;
  *((_DWORD *)v16 + 5) = a5;
  *((_DWORD *)v16 + 6) = v17;
  v16[4] = v19;
  if ( a5 )
  {
    do
    {
      v16[v20 + 5] = **(_QWORD **)(a6 + v20 * 8);
      ++v20;
    }
    while ( a5 != v20 );
  }
  if ( v15 && *(_DWORD *)(v15 - 4) )
  {
    v22 = 0;
    do
    {
      *(_DWORD *)(v19 + 4 * v22) = *(_DWORD *)(v15 + 4 * v22);
      ++v22;
    }
    while ( (unsigned int)v22 < *(_DWORD *)(v15 - 4) );
  }
  return v16;
}

