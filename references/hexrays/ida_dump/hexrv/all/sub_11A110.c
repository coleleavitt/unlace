unsigned __int64 __fastcall sub_11A110(__int64 a1, __int64 *a2, _QWORD *a3)
{
  int v5; // eax
  int v6; // edx
  unsigned __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rbp
  unsigned __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // r14
  void *v14; // rax
  const void *v15; // rsi
  unsigned __int64 *v16; // rax
  __int64 v17; // [rsp+0h] [rbp-78h] BYREF
  __int128 v18; // [rsp+8h] [rbp-70h]
  __int64 v19; // [rsp+20h] [rbp-58h] BYREF
  __int128 v20; // [rsp+28h] [rbp-50h]
  unsigned __int64 v21; // [rsp+38h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  sub_5FF00(a2, (__int64 *)(a1 + 136));
  v5 = *(_DWORD *)(a1 + 12);
  v6 = *(_DWORD *)(a1 + 16) - v5;
  if ( v6 )
  {
    v8 = v6;
    v9 = a3[187];
    v10 = a3[180] + v5;
    v17 = 0;
    v11 = *(_QWORD *)(*(_QWORD *)(v9 + 24) + 16LL) & v10;
    v18 = 0;
    if ( v8 + v11 - 1 >= v11 )
    {
      v17 = qvector_reserve(&v17, 0, 1, 16);
      v16 = (unsigned __int64 *)(16 * v18 + v17);
      *v16 = v11;
      v16[1] = v8;
      *(_QWORD *)&v18 = v18 + 1;
    }
    v19 = sub_32A6C0(a1, a3);
    *(_QWORD *)&v20 = v12;
    sub_312AD0(&v17, &v19);
    v13 = a3[24];
    v19 = 0;
    v20 = 0;
    if ( v13 )
    {
      v14 = (void *)qalloc_or_throw(16 * v13);
      v15 = (const void *)a3[23];
      v19 = (__int64)v14;
      *((_QWORD *)&v20 + 1) = v13;
      memcpy(v14, v15, 16 * v13);
      *(_QWORD *)&v20 = v13;
    }
    sub_312B60(&v19, a3 + 26);
    sub_312B60(&v17, &v19);
    sub_311BB0(a2 + 2, &v17);
    if ( v19 )
    {
      *(_QWORD *)&v20 = 0;
      qfree(v19);
    }
    if ( v17 )
    {
      *(_QWORD *)&v18 = 0;
      qfree(v17);
    }
  }
  return v21 - __readfsqword(0x28u);
}
