unsigned __int64 __fastcall sub_14E080(_QWORD *a1, __int64 a2, int a3)
{
  unsigned __int64 v5; // rdx
  int v6; // eax
  __int64 v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 *v10; // rbp
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // rsi
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 *v16; // rdi
  __int64 v17; // rax
  __int64 *v18; // rdx
  __int64 v19; // rcx
  bool v20; // cf
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 *v23; // rdi
  __int64 v24; // rax
  __int64 *v25; // rdx
  __int64 v26; // rcx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // r14
  __int64 v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rbx
  __int64 *v32; // r14
  __int64 v33; // rbx
  __int64 v34; // r15
  __int64 v35; // rcx
  __m128i v36; // xmm0
  __int64 v37; // [rsp+0h] [rbp-58h]
  __int64 v38; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v39; // [rsp+18h] [rbp-40h]

  v5 = a1[6];
  v39 = __readfsqword(0x28u);
  v6 = 0;
  if ( v5 )
  {
    v7 = 0;
    while ( 1 )
    {
      v8 = a1[5] + 32 * v7;
      if ( a3 == *(_DWORD *)(v8 + 24) )
        break;
      v7 = ++v6;
      if ( v6 >= v5 )
        goto LABEL_21;
    }
    if ( v8 )
      goto LABEL_6;
LABEL_21:
    v27 = v5 + 1;
  }
  else
  {
    v27 = 1;
  }
  v28 = a1[7];
  if ( v28 < v27 )
  {
    v29 = qvector_reserve();
    v30 = a1[7];
    v31 = a1[6];
    a1[7] = v28;
    v37 = v29;
    v32 = (__int64 *)a1[5];
    v33 = v31 - 1;
    if ( v33 >= 0 )
    {
      v34 = v29;
      do
      {
        v35 = *v32;
        v36 = _mm_loadu_si128((const __m128i *)(v32 + 1));
        *v32 = 0;
        v32[2] = 0;
        *(_QWORD *)v34 = v35;
        *(__m128i *)(v34 + 8) = v36;
        *(_DWORD *)(v34 + 24) = *((_DWORD *)v32 + 6);
        if ( *v32 )
        {
          v32[1] = 0;
          qfree();
        }
        v32 += 4;
        v34 += 32;
        v20 = v33-- == 0;
      }
      while ( !v20 );
    }
    qfree();
    v5 = a1[6];
    a1[5] = v37;
    a1[7] = v30;
  }
  else
  {
    v37 = a1[5];
  }
  v8 = 32 * v5 + v37;
  *(_QWORD *)v8 = 0;
  *(_OWORD *)(v8 + 8) = 0;
  ++a1[6];
  *(_DWORD *)(v8 + 24) = a3;
LABEL_6:
  v9 = *(_QWORD *)(v8 + 8);
  v10 = *(__int64 **)v8;
  v38 = a2;
  v11 = *(_QWORD *)(v8 + 16);
  v12 = v9 + 1;
  if ( &v38 >= v10 && &v38 < &v10[v11] )
  {
    if ( v11 < v12 )
    {
      v21 = qvector_reserve();
      v22 = *(_QWORD *)(v8 + 16);
      v23 = *(__int64 **)v8;
      *(_QWORD *)(v8 + 16) = v11;
      v10 = (__int64 *)v21;
      v24 = *(_QWORD *)(v8 + 8) - 1LL;
      if ( v24 >= 0 )
      {
        v25 = v10;
        do
        {
          v26 = *v23;
          ++v25;
          ++v23;
          *(v25 - 1) = v26;
          v20 = v24-- == 0;
        }
        while ( !v20 );
      }
      qfree();
      *(_QWORD *)v8 = v10;
      v9 = *(_QWORD *)(v8 + 8);
      *(_QWORD *)(v8 + 16) = v22;
    }
    v10[v9] = a2;
  }
  else
  {
    if ( v11 < v12 )
    {
      v14 = qvector_reserve();
      v15 = *(_QWORD *)(v8 + 16);
      v16 = *(__int64 **)v8;
      *(_QWORD *)(v8 + 16) = v11;
      v10 = (__int64 *)v14;
      v17 = *(_QWORD *)(v8 + 8) - 1LL;
      if ( v17 >= 0 )
      {
        v18 = v10;
        do
        {
          v19 = *v16;
          ++v18;
          ++v16;
          *(v18 - 1) = v19;
          v20 = v17-- == 0;
        }
        while ( !v20 );
      }
      qfree();
      *(_QWORD *)v8 = v10;
      v9 = *(_QWORD *)(v8 + 8);
      *(_QWORD *)(v8 + 16) = v15;
    }
    v10[v9] = v38;
  }
  ++*(_QWORD *)(v8 + 8);
  return v39 - __readfsqword(0x28u);
}

