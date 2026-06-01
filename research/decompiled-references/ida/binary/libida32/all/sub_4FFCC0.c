unsigned __int64 __fastcall sub_4FFCC0(__int64 *a1, unsigned int a2, unsigned int a3)
{
  const __m128i *v6; // rax
  unsigned int v7; // esi
  const __m128i *v8; // rax
  unsigned __int64 v9; // r10
  unsigned int *v10; // r11
  unsigned int v11; // esi
  unsigned int *v12; // rax
  unsigned int *v13; // rax
  unsigned __int64 v14; // rdx
  unsigned int *v15; // rax
  unsigned __int64 v16; // r10
  unsigned int *v17; // r9
  int v18; // eax
  unsigned int v20; // r12d
  unsigned int *v21; // rax
  unsigned int *v22; // r9
  unsigned int *v23; // r14
  unsigned int v24; // eax
  __int64 v25; // rdx
  unsigned int *v26; // rax
  unsigned int *v27; // r14
  unsigned int v28; // eax
  __int64 v29; // rdi
  __int64 v30; // rax
  char *v31; // r12
  __int64 v32; // rax
  unsigned int v33; // r12d
  unsigned int *v34; // rax
  unsigned int *v35; // r9
  unsigned int *v36; // r14
  unsigned int v37; // eax
  __int64 v38; // rdx
  unsigned int *v39; // r14
  __int64 v40; // rdi
  __int64 v41; // rax
  char *v42; // r12
  __int64 v43; // rax
  __int64 v44; // r14
  __int64 v45; // r14
  __m128i v46; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v47; // [rsp+18h] [rbp-30h]

  v47 = __readfsqword(0x28u);
  v6 = (const __m128i *)sub_4FED00((unsigned int **)a1, a2);
  if ( v6 != (const __m128i *)(*a1 + 17 * a1[1]) )
  {
    v7 = v6->m128i_i32[0];
    if ( a2 >= v6->m128i_i32[0] )
    {
      v33 = v6->m128i_u32[1];
      if ( a2 < v33 && v6 && v7 < a2 )
      {
        v46 = _mm_loadu_si128(v6);
        v34 = sub_4FED00((unsigned int **)a1, v7);
        v36 = v34;
        if ( v35 != v34 )
        {
          v37 = *v34;
          if ( v7 >= v37 )
          {
            v38 = v36[1];
            if ( v7 < (unsigned int)v38
              && ((unsigned int)v38 >= a2
               || v35 == (unsigned int *)((char *)v36 + 17)
               || *(unsigned int *)((char *)v36 + 17) >= a2) )
            {
              sub_4FD960(*((unsigned int *)a1 + 14), v37, v38, a2);
              v36[1] = a2;
              *((_BYTE *)v36 + 16) = 1;
            }
          }
        }
        v39 = sub_4FED00((unsigned int **)a1, a2);
        if ( v39 == (unsigned int *)(*a1 + 17 * a1[1]) || a2 < *v39 && *v39 >= v33 )
        {
          v40 = *((unsigned int *)a1 + 14);
          v46.m128i_i32[0] = a2;
          sub_4FCEA0(v40, (unsigned int *)&v46, 183);
          v41 = a1[1];
          v42 = (char *)v39 - *a1;
          if ( a1[2] < (unsigned __int64)(v41 + 1) )
          {
            v45 = qvector_reserve(a1, *a1, v41 + 1, 17);
            *a1 = v45;
            v41 = a1[1];
            v39 = (unsigned int *)&v42[v45];
          }
          memmove((char *)v39 + 17, v39, 17 * v41 - (_QWORD)v42);
          v43 = v46.m128i_i64[0];
          *((_BYTE *)v39 + 12) = 0;
          *(_QWORD *)v39 = 0;
          v39[2] = 0;
          *((_BYTE *)v39 + 16) = 0;
          a1[3] = (__int64)v39;
          ++a1[1];
          *(_QWORD *)v39 = v43;
          *(_QWORD *)((char *)v39 + 5) = *(__int64 *)((char *)v46.m128i_i64 + 5);
          *(_BYTE *)(a1[3] + 16) = 1;
        }
      }
    }
  }
  v8 = (const __m128i *)sub_4FED00((unsigned int **)a1, a3);
  v9 = a1[1];
  v10 = (unsigned int *)*a1;
  if ( v8 != (const __m128i *)(*a1 + 17 * v9) )
  {
    v11 = v8->m128i_i32[0];
    if ( a3 >= v8->m128i_i32[0] )
    {
      v20 = v8->m128i_u32[1];
      if ( a3 < v20 && v8 && v11 < a3 )
      {
        v46 = _mm_loadu_si128(v8);
        v21 = sub_4FED00((unsigned int **)a1, v11);
        v23 = v21;
        if ( v22 != v21 )
        {
          v24 = *v21;
          if ( v11 >= v24 )
          {
            v25 = v23[1];
            if ( v11 < (unsigned int)v25
              && ((unsigned int)v25 >= a3
               || v22 == (unsigned int *)((char *)v23 + 17)
               || *(unsigned int *)((char *)v23 + 17) >= a3) )
            {
              sub_4FD960(*((unsigned int *)a1 + 14), v24, v25, a3);
              v23[1] = a3;
              *((_BYTE *)v23 + 16) = 1;
            }
          }
        }
        v26 = sub_4FED00((unsigned int **)a1, a3);
        v9 = a1[1];
        v10 = (unsigned int *)*a1;
        v27 = v26;
        if ( v26 == (unsigned int *)(*a1 + 17 * v9) || (v28 = *v26, a3 < *v27) && v28 >= v20 )
        {
          v29 = *((unsigned int *)a1 + 14);
          v46.m128i_i32[0] = a3;
          sub_4FCEA0(v29, (unsigned int *)&v46, 183);
          v30 = a1[1];
          v31 = (char *)v27 - *a1;
          if ( a1[2] < (unsigned __int64)(v30 + 1) )
          {
            v44 = qvector_reserve(a1, *a1, v30 + 1, 17);
            *a1 = v44;
            v30 = a1[1];
            v27 = (unsigned int *)&v31[v44];
          }
          memmove((char *)v27 + 17, v27, 17 * v30 - (_QWORD)v31);
          v32 = v46.m128i_i64[0];
          *((_BYTE *)v27 + 12) = 0;
          *(_QWORD *)v27 = 0;
          v27[2] = 0;
          *((_BYTE *)v27 + 16) = 0;
          a1[3] = (__int64)v27;
          ++a1[1];
          *(_QWORD *)v27 = v32;
          *(_QWORD *)((char *)v27 + 5) = *(__int64 *)((char *)v46.m128i_i64 + 5);
          *(_BYTE *)(a1[3] + 16) = 1;
          v10 = (unsigned int *)*a1;
          v9 = a1[1];
        }
      }
    }
  }
  while ( 1 )
  {
    v13 = (unsigned int *)a1[3];
    if ( v13 == (unsigned int *)((char *)v10 + 17 * v9) || a3 < *v13 || a3 >= v13[1] )
      break;
    if ( v10 == v13 )
      return v47 - __readfsqword(0x28u);
    v12 = (unsigned int *)((char *)v13 - 17);
LABEL_9:
    if ( !v12 || a2 >= v12[1] )
      return v47 - __readfsqword(0x28u);
    sub_4FED90((__int64)a1, *v12);
    v10 = (unsigned int *)*a1;
    v9 = a1[1];
  }
  if ( !(_DWORD)v9 )
    return v47 - __readfsqword(0x28u);
  v14 = (unsigned int)(v9 - 1);
  if ( v14 >= v9 )
  {
    if ( a3 >= 0x10102 )
      return v47 - __readfsqword(0x28u);
  }
  else if ( a3 >= *(unsigned int *)((char *)v10 + 17 * v14 + 4) )
  {
LABEL_21:
    v12 = (unsigned int *)((char *)v10 + 17 * v14);
    goto LABEL_9;
  }
  v15 = sub_4FED00((unsigned int **)a1, a3);
  if ( v17 != v15 )
  {
    v18 = -252645135 * ((_DWORD)v15 - (_DWORD)v10);
    if ( v18 != -1 )
    {
      v14 = (unsigned int)(v18 - 1);
      if ( v18 )
      {
        if ( v14 < v16 )
          goto LABEL_21;
      }
    }
  }
  return v47 - __readfsqword(0x28u);
}

