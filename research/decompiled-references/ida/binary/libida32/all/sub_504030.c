unsigned __int64 __fastcall sub_504030(__int64 a1, __int64 a2, int a3, int a4, unsigned int *a5)
{
  __int64 v7; // rdi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned __int64 v12; // r12
  __int64 v13; // r12
  __int64 v14; // r12
  __int64 v15; // rax
  unsigned __int64 v16; // r15
  __int64 v17; // r15
  __int64 *v18; // r15
  unsigned int *v19; // rax
  __int64 v20; // rdx
  unsigned int *v21; // rdi
  const __m128i *v22; // rbx
  unsigned int v23; // esi
  unsigned int v24; // eax
  unsigned __int32 v25; // r9d
  unsigned int v26; // ecx
  unsigned int v27; // r9d
  unsigned int *v28; // r14
  __int64 v29; // rdi
  __int64 v30; // rax
  char *v31; // r8
  __int64 v32; // rax
  __int64 v34; // rax
  char *v35; // [rsp+8h] [rbp-60h]
  __m128i v36; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v37; // [rsp+28h] [rbp-40h]

  v7 = *(int *)(a1 + 4LL * a3 + 16);
  v37 = __readfsqword(0x28u);
  v9 = *(_QWORD *)(switch_dbctx(v7) + 1576);
  if ( !*(_BYTE *)(v9 + 144) )
    goto LABEL_24;
  v11 = *(_QWORD *)(v9 + 8);
  v12 = a4 - *(_DWORD *)(v11 + 68);
  if ( v12 >= *(_QWORD *)(v9 + 40) )
    goto LABEL_26;
  v13 = v12 << 6;
  *(_DWORD *)(*(_QWORD *)(v9 + 32) + v13 + 56) = a4;
  v7 = *(int *)(a1 + 4LL * (int)a2 + 16);
  v14 = *(_QWORD *)(v9 + 32) + v13;
  v15 = *(_QWORD *)(switch_dbctx(v7) + 1576);
  if ( !*(_BYTE *)(v15 + 144) )
  {
LABEL_24:
    if ( !under_debugger )
      interr(1336);
    BUG();
  }
  v11 = *(_QWORD *)(v15 + 8);
  v16 = a4 - *(_DWORD *)(v11 + 68);
  if ( v16 >= *(_QWORD *)(v15 + 40) )
LABEL_26:
    sub_4FC970(v7, a2, v11, v10);
  v17 = v16 << 6;
  *(_DWORD *)(*(_QWORD *)(v15 + 32) + v17 + 56) = a4;
  v18 = (__int64 *)(*(_QWORD *)(v15 + 32) + v17);
  sub_4FFCC0(v18, *a5, a5[1]);
  v19 = sub_4FED00((unsigned int **)v14, *a5);
  v20 = *(_QWORD *)(v14 + 8);
  v21 = *(unsigned int **)v14;
  v22 = (const __m128i *)v19;
  if ( v19 != (unsigned int *)(*(_QWORD *)v14 + 17 * v20) )
  {
    do
    {
      v23 = v22->m128i_i32[0];
      v25 = a5[1];
      if ( v22->m128i_i32[0] >= v25 )
        return v37 - __readfsqword(0x28u);
      v26 = *a5;
      v24 = v22->m128i_u32[1];
      v36 = _mm_loadu_si128(v22);
      if ( v26 < v23 || v26 >= v24 )
      {
        if ( v25 < v24 )
        {
LABEL_15:
          v28 = sub_4FED00((unsigned int **)v18, v23);
          if ( v28 == (unsigned int *)(*v18 + 17 * v18[1]) || v23 < *v28 && *v28 >= v27 )
          {
            v29 = *((unsigned int *)v18 + 14);
            v36.m128i_i64[0] = __PAIR64__(v27, v23);
            sub_4FCEA0(v29, (unsigned int *)&v36, 183);
            v30 = v18[1];
            v31 = (char *)v28 - *v18;
            if ( v18[2] < (unsigned __int64)(v30 + 1) )
            {
              v35 = (char *)v28 - *v18;
              v34 = qvector_reserve(v18, *v18, v30 + 1, 17);
              v31 = v35;
              *v18 = v34;
              v28 = (unsigned int *)&v35[v34];
              v30 = v18[1];
            }
            memmove((char *)v28 + 17, v28, 17 * v30 - (_QWORD)v31);
            v32 = v36.m128i_i64[0];
            *((_BYTE *)v28 + 12) = 0;
            *(_QWORD *)v28 = 0;
            v28[2] = 0;
            *((_BYTE *)v28 + 16) = 0;
            v18[3] = (__int64)v28;
            ++v18[1];
            *(_QWORD *)v28 = v32;
            *(_QWORD *)((char *)v28 + 5) = *(__int64 *)((char *)v36.m128i_i64 + 5);
            *(_BYTE *)(v18[3] + 16) = 1;
          }
          v20 = *(_QWORD *)(v14 + 8);
          v21 = *(unsigned int **)v14;
          goto LABEL_11;
        }
      }
      else
      {
        v23 = v26;
        if ( v25 >= v24 )
          goto LABEL_15;
        v24 = v25;
      }
      if ( v23 < v24 )
        goto LABEL_15;
LABEL_11:
      v22 = (const __m128i *)((char *)v22 + 17);
    }
    while ( v22 != (const __m128i *)((char *)v21 + 17 * v20) );
  }
  return v37 - __readfsqword(0x28u);
}

