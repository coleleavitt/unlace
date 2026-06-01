unsigned __int64 __fastcall chooser_flat_bucket_data_t__::vfunc_7(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v8; // rdx
  const char *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v14; // rax
  _QWORD *v15; // rbx
  _QWORD *i; // r14
  __int64 v17; // rbp
  __int64 v18; // [rsp+0h] [rbp-48h] BYREF
  __int128 v19; // [rsp+8h] [rbp-40h]
  unsigned __int64 v20; // [rsp+18h] [rbp-30h]

  v8 = *(_QWORD *)(a2 + 8);
  v9 = nullptr;
  v20 = __readfsqword(0x28u);
  v10 = 0;
  v18 = 0;
  v19 = 0;
  if ( v8 )
  {
    v14 = qvector_reserve(&v18, 0, v8, 8);
    v15 = *(_QWORD **)a2;
    v9 = (const char *)v14;
    v8 = v19;
    v18 = v14;
    for ( i = &v15[*(_QWORD *)(a2 + 8)]; i != v15; *(_QWORD *)&v19 = v19 + 1 )
    {
      v17 = *(_QWORD *)(a1[1] + 8LL * *v15);
      if ( *((_QWORD *)&v19 + 1) < (unsigned __int64)(v8 + 1) )
      {
        v18 = qvector_reserve(&v18, v9, v8 + 1, 8);
        v8 = v19;
        v9 = (const char *)v18;
      }
      *(_QWORD *)&v9[8 * v8] = v17;
      ++v15;
      v9 = (const char *)v18;
      v8 = v19 + 1;
    }
    v10 = *((_QWORD *)&v19 + 1);
  }
  v11 = a1[1];
  v12 = a1[3];
  a1[1] = v9;
  a1[2] = v8;
  a1[3] = v10;
  v18 = v11;
  *((_QWORD *)&v19 + 1) = v12;
  if ( v11 )
    qfree(v11, v9, v8, v12, a5, a6, v18, 0, *((_QWORD *)&v19 + 1));
  return v20 - __readfsqword(0x28u);
}
