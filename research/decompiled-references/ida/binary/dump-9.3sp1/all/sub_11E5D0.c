unsigned __int64 __fastcall sub_11E5D0(__int64 a1, __int64 *a2, _QWORD *a3)
{
  int v5; // eax
  int v6; // edx
  unsigned __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rbp
  unsigned __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r14
  void *v16; // rax
  const void *v17; // rsi
  unsigned __int64 *v18; // rax
  __int64 v19; // [rsp+0h] [rbp-78h] BYREF
  __int128 v20; // [rsp+8h] [rbp-70h]
  __int64 v21; // [rsp+20h] [rbp-58h] BYREF
  __int128 v22; // [rsp+28h] [rbp-50h]
  unsigned __int64 v23; // [rsp+38h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  sub_64280(a2, (__int64 *)(a1 + 136));
  v5 = *(_DWORD *)(a1 + 12);
  v6 = *(_DWORD *)(a1 + 16) - v5;
  if ( v6 )
  {
    v8 = v6;
    v9 = a3[187];
    v10 = a3[180] + v5;
    v19 = 0;
    v11 = *(_QWORD *)(*(_QWORD *)(v9 + 24) + 16LL) & v10;
    v20 = 0;
    if ( v8 + v11 - 1 >= v11 )
    {
      v19 = qvector_reserve((__int64)&v19, 0, 1, 16);
      v18 = (unsigned __int64 *)(16 * v20 + v19);
      *v18 = v11;
      v18[1] = v8;
      *(_QWORD *)&v20 = v20 + 1;
    }
    v21 = sub_32FA90(a1, a3);
    *(_QWORD *)&v22 = v12;
    sub_317BD0(&v19, &v21);
    v15 = a3[24];
    v21 = 0;
    v22 = 0;
    if ( v15 )
    {
      v16 = (void *)qalloc_or_throw(16 * v15, (__int64)&v21, v13, v14);
      v17 = (const void *)a3[23];
      v21 = (__int64)v16;
      *((_QWORD *)&v22 + 1) = v15;
      memcpy(v16, v17, 16 * v15);
      *(_QWORD *)&v22 = v15;
    }
    sub_317C60(&v21, a3 + 26);
    sub_317C60(&v19, &v21);
    sub_316CB0(a2 + 2, &v19);
    if ( v21 )
    {
      *(_QWORD *)&v22 = 0;
      qfree(v21);
    }
    if ( v19 )
    {
      *(_QWORD *)&v20 = 0;
      qfree(v19);
    }
  }
  return v23 - __readfsqword(0x28u);
}
