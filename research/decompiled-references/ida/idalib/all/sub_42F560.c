__int64 __fastcall sub_42F560(__int64 **a1, __int64 a2, unsigned __int64 *a3, unsigned __int64 **a4)
{
  unsigned __int64 *v4; // rbx
  unsigned __int64 *v5; // r8
  unsigned __int64 v6; // rax
  unsigned __int64 *v7; // rbx
  unsigned __int64 *v9; // r13
  int v10; // r8d
  int v11; // r9d
  __int64 *v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  int v15; // edi
  __int64 *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rbp
  __int64 *v21; // rax
  unsigned __int64 v22; // rdx
  int v23; // edi
  __int64 v24; // rax
  unsigned __int64 v25; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v27; // [rsp+18h] [rbp-50h]
  unsigned __int64 v28; // [rsp+28h] [rbp-40h]

  v4 = a4[1];
  v5 = *a4;
  v28 = __readfsqword(0x28u);
  v6 = *a3;
  v27 = 0;
  ptr = nullptr;
  v7 = &v5[2 * (_QWORD)v4];
  v25 = v6;
  if ( v5 != v7 )
  {
    v9 = v5;
    do
    {
      if ( (unsigned int)sub_42DD50(*(__int64 **)(a2 + 1672), *v9) != 7 )
      {
        v12 = a1[1];
        v13 = *v9;
        v14 = v12[1];
        v15 = (_DWORD)v12 + 24;
        if ( *v9 >= v14 && v13 < v12[2] )
        {
          *((_BYTE *)v12 + 24) = 43;
          v15 = (_DWORD)v12 + 25;
          LODWORD(v13) = v13 - v14;
        }
        qsnprintf(v15, 63, (unsigned int)"%a", v13, v10, v11);
        sub_35A910((__int64 *)&ptr);
      }
      v9 += 2;
    }
    while ( v7 != v9 );
    if ( (unsigned __int64)v27 > 1 )
    {
      v17 = *a1;
      v18 = (*a1)[1];
      v19 = **a1;
      if ( (*a1)[2] < (unsigned __int64)(v18 + 1) )
      {
        v24 = qvector_reserve(*a1, v19, v18 + 1, 24);
        *v17 = v24;
        v18 = v17[1];
        v19 = v24;
      }
      v20 = v19 + 24 * v18;
      *(_QWORD *)v20 = 0;
      *(_OWORD *)(v20 + 8) = 0;
      ++v17[1];
      v21 = a1[1];
      v22 = v21[1];
      v23 = (_DWORD)v21 + 24;
      if ( v25 >= v22 && v25 < v21[2] )
      {
        *((_BYTE *)v21 + 24) = 43;
        v23 = (_DWORD)v21 + 25;
        LODWORD(v25) = v25 - v22;
      }
      qsnprintf(v23, 63, (unsigned int)"%a", v25, v10, v11);
      sub_35A790((char **)v20);
    }
    if ( ptr )
    {
      *(_QWORD *)&v27 = 0;
      qfree(ptr);
    }
  }
  return 0;
}
