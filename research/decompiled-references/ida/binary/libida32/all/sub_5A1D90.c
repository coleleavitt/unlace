unsigned __int64 __fastcall sub_5A1D90(__int64 a1, __int64 *a2, unsigned __int64 a3)
{
  __int64 v3; // r12
  __int64 v5; // rdx
  unsigned int **v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v24; // [rsp+8h] [rbp-30h]
  unsigned __int64 v25; // [rsp+18h] [rbp-20h]

  v25 = __readfsqword(0x28u);
  if ( a3 < *(_QWORD *)(a1 + 48) )
  {
    v3 = 24 * a3;
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 40) + 24 * a3) )
    {
      switch_dbctx(*(int *)(a1 + 8));
      v5 = a2[1];
      v6 = (unsigned int **)(*(_QWORD *)(a1 + 40) + v3);
      v7 = *a2;
      if ( a2[2] < (unsigned __int64)(v5 + 1) )
      {
        v22 = qvector_reserve(a2, v7, v5 + 1, 24);
        v5 = a2[1];
        *a2 = v22;
        v7 = v22;
      }
      v8 = v7 + 24 * v5;
      *(_OWORD *)(v8 + 8) = 0;
      *(_QWORD *)v8 = 0;
      ++a2[1];
      sub_3573A0((char **)v8);
      get_spd(*v6, *((unsigned int *)v6 + 2));
      v9 = a2[1];
      v10 = *a2;
      if ( a2[2] < (unsigned __int64)(v9 + 1) )
      {
        v21 = qvector_reserve(a2, v10, v9 + 1, 24);
        v9 = a2[1];
        *a2 = v21;
        v10 = v21;
      }
      v11 = v10 + 24 * v9;
      *(_QWORD *)v11 = 0;
      *(_OWORD *)(v11 + 8) = 0;
      ++a2[1];
      sub_3573A0((char **)v11);
      v12 = a2[1];
      v13 = *a2;
      if ( a2[2] < (unsigned __int64)(v12 + 1) )
      {
        v20 = qvector_reserve(a2, v13, v12 + 1, 24);
        v12 = a2[1];
        *a2 = v20;
        v13 = v20;
      }
      v14 = v13 + 24 * v12;
      *(_QWORD *)v14 = 0;
      *(_OWORD *)(v14 + 8) = 0;
      ++a2[1];
      sub_3573A0((char **)v14);
      ptr = nullptr;
      v24 = 0;
      sub_45B2A0((__int64)&ptr, **v6, 0);
      v15 = a2[1];
      v16 = *a2;
      if ( a2[2] < (unsigned __int64)(v15 + 1) )
      {
        v19 = qvector_reserve(a2, v16, v15 + 1, 24);
        *a2 = v19;
        v15 = a2[1];
        v16 = v19;
      }
      v17 = v16 + 24 * v15;
      *(_QWORD *)v17 = 0;
      *(_OWORD *)(v17 + 8) = 0;
      ++a2[1];
      sub_3573A0((char **)v17);
      if ( ptr )
      {
        *(_QWORD *)&v24 = 0;
        qfree(ptr);
      }
    }
  }
  return v25 - __readfsqword(0x28u);
}

