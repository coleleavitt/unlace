__int64 __fastcall sub_113C0(__int64 a1, _QWORD *a2, __int64 (*a3)(), __int64 (*a4)())
{
  bool v5; // zf
  int v6; // ebx
  __int64 v7; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rcx
  __int128 v14; // xmm0
  __int64 v15; // rbp
  __int64 v16; // rbp
  __int64 v17; // rbx
  size_t v18; // r15
  void *v19; // rax
  __int64 v20; // r13
  __int64 v21; // rax
  __int64 v22; // rcx
  __int128 v23; // xmm0
  __int64 v24; // rbp
  __int64 v25; // rbp
  __int64 v26; // rbx
  size_t v27; // r15
  void *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rbp
  __int64 i; // rbx
  __int64 *v32; // rdx
  __int64 v33; // rdi
  __int64 v34; // [rsp+8h] [rbp-60h]
  __int64 v35; // [rsp+8h] [rbp-60h]
  __int64 v36; // [rsp+8h] [rbp-60h]
  __int64 v37; // [rsp+8h] [rbp-60h]
  __m128i v38; // [rsp+10h] [rbp-58h] BYREF
  int v39; // [rsp+20h] [rbp-48h]
  unsigned __int64 v40; // [rsp+28h] [rbp-40h]

  v5 = a2[44] == 0;
  v40 = __readfsqword(0x28u);
  v6 = (int)a3;
  if ( !v5 )
  {
    if ( !(_DWORD)a3 )
      goto LABEL_3;
    v39 = (int)a3;
    v38.m128i_i64[0] = (__int64)off_1E400;
    v38.m128i_i64[1] = (__int64)(a2 + 43);
    sub_E690((__int64)a2, &v38, a3, a4);
LABEL_6:
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    v9 = a2[44];
    if ( v9 )
    {
      v36 = a2[44];
      v20 = 0;
      v21 = qalloc_or_throw(24 * v9);
      v22 = v36;
      v23 = 0;
      *(_QWORD *)a1 = v21;
      v24 = v21;
      *(_QWORD *)(a1 + 16) = v36;
      while ( 1 )
      {
        v25 = 24 * v20 + v24;
        v26 = 24 * v20 + a2[43];
        *(_QWORD *)v25 = 0;
        *(_OWORD *)(v25 + 8) = v23;
        v27 = *(_QWORD *)(v26 + 8);
        if ( v27 )
        {
          v37 = v22;
          v28 = (void *)qalloc_or_throw(*(_QWORD *)(v26 + 8));
          *(_QWORD *)(v25 + 16) = v27;
          *(_QWORD *)v25 = v28;
          memcpy(v28, *(const void **)v26, v27);
          *(_QWORD *)(v25 + 8) = v27;
          v22 = v37;
          v23 = 0;
        }
        if ( v22 == ++v20 )
          break;
        v24 = *(_QWORD *)a1;
      }
      *(_QWORD *)(a1 + 8) = v22;
      v29 = a2[43];
      v10 = v29;
      if ( !v29 )
        return a1;
      v30 = a2[44];
      if ( v30 )
      {
        for ( i = 0; i != v30; ++i )
        {
          v32 = (__int64 *)(v29 + 24 * i);
          v33 = *v32;
          if ( *v32 )
          {
            v32[1] = 0;
            qfree(v33);
            v29 = a2[43];
          }
          v10 = v29;
        }
      }
    }
    else
    {
      v10 = a2[43];
      if ( !v10 )
        return a1;
    }
    a2[44] = 0;
    qfree(v10);
    a2[43] = 0;
    a2[45] = 0;
    return a1;
  }
  v39 = (int)a3;
  v38.m128i_i64[0] = (__int64)off_1E400;
  v38.m128i_i64[1] = (__int64)(a2 + 43);
  sub_E690((__int64)a2, &v38, a3, a4);
  if ( v6 )
    goto LABEL_6;
LABEL_3:
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v7 = a2[44];
  if ( v7 )
  {
    v34 = a2[44];
    v11 = 0;
    v12 = qalloc_or_throw(24 * v7);
    v13 = v34;
    v14 = 0;
    *(_QWORD *)a1 = v12;
    v15 = v12;
    *(_QWORD *)(a1 + 16) = v34;
    while ( 1 )
    {
      v16 = 24 * v11 + v15;
      v17 = 24 * v11 + a2[43];
      *(_QWORD *)v16 = 0;
      *(_OWORD *)(v16 + 8) = v14;
      v18 = *(_QWORD *)(v17 + 8);
      if ( v18 )
      {
        v35 = v13;
        ++v11;
        v19 = (void *)qalloc_or_throw(*(_QWORD *)(v17 + 8));
        *(_QWORD *)(v16 + 16) = v18;
        *(_QWORD *)v16 = v19;
        memcpy(v19, *(const void **)v17, v18);
        v13 = v35;
        *(_QWORD *)(v16 + 8) = v18;
        v14 = 0;
        if ( v35 == v11 )
        {
LABEL_16:
          *(_QWORD *)(a1 + 8) = v13;
          return a1;
        }
      }
      else if ( v13 == ++v11 )
      {
        goto LABEL_16;
      }
      v15 = *(_QWORD *)a1;
    }
  }
  return a1;
}
