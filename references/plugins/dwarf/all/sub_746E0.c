unsigned __int64 __fastcall sub_746E0(int *a1, int *a2, int *a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rcx
  __int64 v8; // rax
  __int64 v9; // r15
  int *v10; // r14
  size_t v11; // rcx
  size_t v12; // rcx
  void *v14; // r12
  __int64 v15; // rax
  void *v16; // rax
  const void *v17; // rsi
  void *v18; // rax
  const void *v19; // rsi
  void *v20; // rax
  const void *v21; // rsi
  size_t v22; // r15
  void *v23; // rax
  const void *v24; // rsi
  __int64 n; // [rsp+0h] [rbp-90h]
  __int64 na; // [rsp+0h] [rbp-90h]
  size_t v27; // [rsp+8h] [rbp-88h]
  size_t v28; // [rsp+8h] [rbp-88h]
  __int64 v29; // [rsp+8h] [rbp-88h]
  __int64 v30; // [rsp+10h] [rbp-80h]
  void *v31; // [rsp+18h] [rbp-78h]
  void *v32; // [rsp+18h] [rbp-78h]
  void *v33; // [rsp+18h] [rbp-78h]
  __int64 v34; // [rsp+18h] [rbp-78h]
  void *v37; // [rsp+30h] [rbp-60h] BYREF
  __int128 v38; // [rsp+38h] [rbp-58h]
  __int64 v39; // [rsp+48h] [rbp-48h]
  unsigned __int64 v40; // [rsp+58h] [rbp-38h]

  v6 = *(_QWORD *)(a5 + 8);
  v40 = __readfsqword(0x28u);
  v38 = 0;
  v8 = (a2 - a1 + 1) / 2;
  v9 = 4 * v8;
  v10 = &a1[v8];
  if ( v8 <= a4 )
  {
    v14 = nullptr;
    if ( v6 )
    {
      v22 = 4 * v6;
      v34 = v6;
      v23 = (void *)qalloc_or_throw(4 * v6);
      v24 = *(const void **)a5;
      v14 = v23;
      *((_QWORD *)&v38 + 1) = v34;
      memcpy(v23, v24, v22);
      *(_QWORD *)&v38 = v34;
    }
    v15 = *(_QWORD *)(a5 + 24);
    v37 = v14;
    v39 = v15;
    sub_73DB0(a1, v10, a2, a3, (__int64)&v37);
    if ( v14 )
      qfree(v14);
  }
  else
  {
    v31 = nullptr;
    if ( v6 )
    {
      v30 = v6;
      v29 = 4 * v6;
      v20 = (void *)qalloc_or_throw(4 * v6);
      v21 = *(const void **)a5;
      v31 = v20;
      *((_QWORD *)&v38 + 1) = v30;
      memcpy(v20, v21, v29);
      *(_QWORD *)&v38 = v30;
    }
    v39 = *(_QWORD *)(a5 + 24);
    v37 = v31;
    sub_746E0(a1, v10, a3, a4, &v37);
    if ( v31 )
      qfree(v31);
    v11 = *(_QWORD *)(a5 + 8);
    v32 = nullptr;
    v38 = 0;
    if ( v11 )
    {
      v27 = v11;
      n = 4 * v11;
      v16 = (void *)qalloc_or_throw(4 * v11);
      v17 = *(const void **)a5;
      v32 = v16;
      *((_QWORD *)&v38 + 1) = v27;
      memcpy(v16, v17, n);
      *(_QWORD *)&v38 = v27;
    }
    v39 = *(_QWORD *)(a5 + 24);
    v37 = v32;
    sub_746E0(v10, a2, a3, a4, &v37);
    if ( v32 )
      qfree(v32);
    v12 = *(_QWORD *)(a5 + 8);
    v33 = nullptr;
    v38 = 0;
    if ( v12 )
    {
      v28 = v12;
      na = 4 * v12;
      v18 = (void *)qalloc_or_throw(4 * v12);
      v19 = *(const void **)a5;
      v33 = v18;
      *((_QWORD *)&v38 + 1) = v28;
      memcpy(v18, v19, na);
      *(_QWORD *)&v38 = v28;
    }
    v39 = *(_QWORD *)(a5 + 24);
    v37 = v33;
    sub_73FD0(a1, (__int64)v10, (char *)a2, v9 >> 2, a2 - v10, a3, a4, (__int64)&v37);
    if ( v33 )
      qfree(v33);
  }
  return v40 - __readfsqword(0x28u);
}
