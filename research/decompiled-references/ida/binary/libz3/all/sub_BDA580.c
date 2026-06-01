void __fastcall sub_BDA580(__int64 a1, unsigned int a2, unsigned int a3, __m128 a4, __m128 a5, __m128 a6)
{
  __int64 v6; // r12
  __int64 v7; // r13
  __int64 *v8; // r12
  __int64 *v9; // r14
  __int64 v10; // rdx
  __int64 *v11; // r12
  __int64 *v12; // r14
  __int64 v13; // rdx
  int ***v14; // r12
  int ***v15; // r14
  int **v16; // rdx
  int ***v17; // r12
  int ***v18; // r14
  int **v19; // rdx
  _QWORD **v20; // r12
  _QWORD **v21; // r13
  _QWORD *v22; // rdx

  v6 = a3;
  sub_B32F30((unsigned int *)a1, a2, a3);
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 448) + 8 * v6);
  v8 = *(__int64 **)v7;
  if ( *(_QWORD *)v7 )
  {
    v9 = &v8[*((unsigned int *)v8 - 1)];
    while ( v9 != v8 )
    {
      v10 = *v8++;
      sub_BD8CD0(a1, a2, v10, a4, a5, a6);
    }
  }
  v11 = *(__int64 **)(v7 + 32);
  if ( v11 )
  {
    v12 = &v11[*((unsigned int *)v11 - 1)];
    while ( v12 != v11 )
    {
      v13 = *v11++;
      sub_BD6CC0((_QWORD *)a1, a2, v13, a4, a5, a6);
    }
  }
  v14 = *(int ****)(v7 + 8);
  if ( v14 )
  {
    v15 = &v14[*((unsigned int *)v14 - 1)];
    while ( v15 != v14 )
    {
      v16 = *v14++;
      sub_BD9500(a1, a2, v16, a4, a5, a6);
    }
  }
  v17 = *(int ****)(v7 + 16);
  if ( v17 )
  {
    v18 = &v17[*((unsigned int *)v17 - 1)];
    while ( v18 != v17 )
    {
      v19 = *v17++;
      sub_BD9240(a1, a2, v19, a4, a5, a6);
    }
  }
  v20 = *(_QWORD ***)(v7 + 24);
  if ( v20 )
  {
    v21 = &v20[*((unsigned int *)v20 - 1)];
    while ( v21 != v20 )
    {
      v22 = *v20++;
      sub_BD8FA0(a1, a2, v22, a4, a5, a6);
    }
  }
}

