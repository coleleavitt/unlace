unsigned __int64 __fastcall sub_510DA0(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdi
  void ***v8; // rcx
  void ***v9; // r13
  void **v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r14
  int v16; // r12d
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rdi
  unsigned __int64 *i; // rax
  __int64 v21; // rdi
  __int64 v22; // r15
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // [rsp+10h] [rbp-80h]
  void ***v30; // [rsp+18h] [rbp-78h]
  unsigned int v31; // [rsp+18h] [rbp-78h]
  void *v32; // [rsp+20h] [rbp-70h] BYREF
  __int128 v33; // [rsp+28h] [rbp-68h]
  void *ptr; // [rsp+40h] [rbp-50h] BYREF
  __int128 v35; // [rsp+48h] [rbp-48h]
  unsigned __int64 v36; // [rsp+58h] [rbp-38h]

  v36 = __readfsqword(0x28u);
  v5 = a3[1];
  v6 = *a3;
  if ( a3[2] < (unsigned __int64)(v5 + 1) )
  {
    v28 = qvector_reserve(a3, v6, v5 + 1, 24);
    v5 = a3[1];
    *a3 = v28;
    v6 = v28;
  }
  v7 = v6 + 24 * v5;
  *(_QWORD *)v7 = 0;
  *(_OWORD *)(v7 + 8) = 0;
  ++a3[1];
  sub_35A790((char **)v7);
  v8 = (void ***)a2[28];
  v9 = &v8[a2[29]];
  if ( v8 != v9 )
  {
    v30 = (void ***)a2[28];
    do
    {
      v10 = *v30;
      ptr = nullptr;
      v35 = 0;
      v32 = *v10;
      sub_7BF130(&v32, a2, &ptr);
      if ( (unsigned __int64)v35 > 1 )
      {
        v11 = a3[1];
        v12 = *a3;
        if ( a3[2] < (unsigned __int64)(v11 + 1) )
        {
          v14 = qvector_reserve(a3, v12, v11 + 1, 24);
          *a3 = v14;
          v11 = a3[1];
          v12 = v14;
        }
        v13 = v12 + 24 * v11;
        *(_QWORD *)v13 = 0;
        *(_OWORD *)(v13 + 8) = 0;
        ++a3[1];
        sub_35A790((char **)v13);
      }
      if ( ptr )
      {
        *(_QWORD *)&v35 = 0;
        qfree(ptr);
      }
      ++v30;
    }
    while ( v9 != v30 );
  }
  v15 = a2[209];
  v29 = v15 + 1624;
  v16 = sub_503DD0(v15 + 1624);
  if ( v16 > 0 )
  {
    v17 = a3[1];
    v18 = *a3;
    if ( a3[2] < (unsigned __int64)(v17 + 1) )
    {
      v27 = qvector_reserve(a3, v18, v17 + 1, 24);
      v17 = a3[1];
      *a3 = v27;
      v18 = v27;
    }
    v19 = v18 + 24 * v17;
    *(_QWORD *)v19 = 0;
    *(_OWORD *)(v19 + 8) = 0;
    ++a3[1];
    sub_35A790((char **)v19);
    v31 = 0;
    for ( i = sub_505DE0(v29, 0); ; i = sub_505DE0(v29, v31) )
    {
      v22 = (__int64)i;
      if ( i )
      {
        v32 = nullptr;
        v33 = 0;
        sub_510AC0(*(_QWORD **)(*(_QWORD *)v15 + 1760LL), (__int64 *)&v32, *i, i[2], 0);
        ptr = nullptr;
        v35 = 0;
        sub_510630(v15, (__int64 *)&ptr, v22);
        v23 = a3[1];
        v24 = *a3;
        if ( a3[2] < (unsigned __int64)(v23 + 1) )
        {
          v25 = qvector_reserve(a3, v24, v23 + 1, 24);
          *a3 = v25;
          v23 = a3[1];
          v24 = v25;
        }
        v21 = v24 + 24 * v23;
        *(_QWORD *)v21 = 0;
        *(_OWORD *)(v21 + 8) = 0;
        ++a3[1];
        sub_35A790((char **)v21);
        if ( ptr )
        {
          *(_QWORD *)&v35 = 0;
          qfree(ptr);
        }
        if ( v32 )
        {
          *(_QWORD *)&v33 = 0;
          qfree(v32);
        }
      }
      if ( v16 == ++v31 )
        break;
    }
  }
  return v36 - __readfsqword(0x28u);
}
