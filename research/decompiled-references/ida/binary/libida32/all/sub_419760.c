unsigned __int64 __fastcall sub_419760(_QWORD **a1, unsigned int *a2)
{
  _QWORD *v3; // rax
  unsigned int v4; // r15d
  unsigned int *v5; // rbx
  unsigned int *v6; // r13
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  _QWORD *v9; // rsi
  __int64 v10; // rdx
  unsigned int v11; // r14d
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // xmm0_8
  __m128i v14; // xmm0
  char *v15; // rdi
  __int64 v16; // r8
  unsigned int v17; // ecx
  unsigned int v18; // esi
  int v19; // r14d
  unsigned int v20; // edx
  int v21; // r13d
  int v22; // ebx
  char *v23; // r15
  int v24; // r12d
  unsigned int v25; // r12d
  _QWORD *v26; // rax
  int v27; // r12d
  unsigned int v28; // r12d
  char has_common; // dl
  unsigned int v30; // eax
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // xmm0_8
  int v34; // eax
  unsigned int v35; // r15d
  int v36; // eax
  _QWORD **v37; // [rsp+0h] [rbp-A8h]
  unsigned int *v38; // [rsp+8h] [rbp-A0h]
  unsigned int v39; // [rsp+1Ch] [rbp-8Ch] BYREF
  void *ptr; // [rsp+20h] [rbp-88h] BYREF
  __int128 v41; // [rsp+28h] [rbp-80h]
  _QWORD v42[3]; // [rsp+40h] [rbp-68h] BYREF
  int v43; // [rsp+58h] [rbp-50h]
  _QWORD **v44; // [rsp+60h] [rbp-48h]
  unsigned __int64 v45; // [rsp+68h] [rbp-40h]

  v3 = a1[3];
  v38 = a2;
  v45 = __readfsqword(0x28u);
  v4 = *((_DWORD *)a1 + 2);
  if ( v3 )
  {
    v5 = (unsigned int *)a1[2];
    ptr = nullptr;
    v41 = 0;
    v6 = &v5[2 * (_QWORD)v3];
    if ( v6 == v5 )
      goto LABEL_44;
    v7 = 0;
    v8 = 0;
    v9 = nullptr;
    while ( 1 )
    {
      v11 = *v5;
      if ( v4 < *v5 )
      {
        v12 = v7 + 1;
        v13 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v4), _mm_cvtsi32_si128(v11)).m128i_u64[0];
        v42[0] = v13;
        if ( v42 < v9 || v42 >= &v9[v8] )
        {
          if ( v8 < v12 )
          {
            ptr = (void *)qvector_reserve(&ptr, v9, v12, 8);
            v9 = ptr;
            v7 = v41;
          }
          v9[v7] = v42[0];
        }
        else
        {
          if ( v8 < v12 )
          {
            v37 = (_QWORD **)v13;
            ptr = (void *)qvector_reserve(&ptr, v9, v12, 8);
            v9 = ptr;
            v7 = v41;
          }
          v9[v7] = v13;
        }
        v8 = *((_QWORD *)&v41 + 1);
        v9 = ptr;
        v7 = v41 + 1;
        *(_QWORD *)&v41 = v41 + 1;
        v11 = *v5;
      }
      v14 = _mm_cvtsi32_si128(v5[1]);
      if ( v8 < v7 + 1 )
      {
        LODWORD(v37) = _mm_cvtsi128_si32(v14);
        ptr = (void *)qvector_reserve(&ptr, v9, v7 + 1, 8);
        v9 = ptr;
        v14 = _mm_cvtsi32_si128((unsigned int)v37);
        v7 = v41;
      }
      v5 += 2;
      v9[v7] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v11), v14).m128i_u64[0];
      v10 = v41;
      v7 = v41 + 1;
      *(_QWORD *)&v41 = v41 + 1;
      v4 = *(v5 - 1);
      if ( v6 == v5 )
        break;
      v9 = ptr;
      v8 = *((_QWORD *)&v41 + 1);
    }
    if ( !v7 )
    {
LABEL_44:
      if ( !under_debugger )
        interr(2121);
      BUG();
    }
    v15 = (char *)ptr;
    v16 = 8 * v7;
    v17 = *((_DWORD *)a1 + 3);
    v18 = *((_DWORD *)ptr + 2 * v7 - 1);
    if ( v18 < v17 )
    {
      v32 = v10 + 2;
      v33 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v18), _mm_cvtsi32_si128(v17)).m128i_u64[0];
      v42[0] = v33;
      if ( v42 < ptr || v42 >= (_QWORD *)((char *)ptr + 8 * *((_QWORD *)&v41 + 1)) )
      {
        if ( *((_QWORD *)&v41 + 1) < v32 )
        {
          ptr = (void *)qvector_reserve(&ptr, ptr, v32, 8);
          v15 = (char *)ptr;
          v16 = 8 * v41;
        }
        *(_QWORD *)&v15[v16] = v42[0];
      }
      else
      {
        if ( *((_QWORD *)&v41 + 1) < v32 )
        {
          v37 = (_QWORD **)v33;
          ptr = (void *)qvector_reserve(&ptr, ptr, v32, 8);
          v15 = (char *)ptr;
          v33 = (unsigned __int64)v37;
          v16 = 8 * v41;
        }
        *(_QWORD *)&v15[v16] = v33;
      }
      v17 = *((_DWORD *)a1 + 3);
      v15 = (char *)ptr;
      LODWORD(v7) = v41 + 1;
      *(_QWORD *)&v41 = v41 + 1;
    }
    v19 = v7;
    v20 = *v38;
    if ( *v38 < v17 )
    {
      v21 = 1;
      if ( v20 > v38[1] )
        v20 = v38[1];
      v22 = 0;
      if ( *((_DWORD *)a1 + 2) < v20 )
      {
        v22 = v7 - 1;
        v21 = -1;
        v19 = -1;
      }
    }
    else
    {
      v21 = 1;
      v22 = 0;
    }
    v43 = 2;
    v42[1] = 0;
    v42[2] = 0;
    v42[0] = off_2AFE468;
    v44 = a1;
    if ( v22 != v19 )
    {
      v37 = a1 + 2;
      do
      {
        while ( 1 )
        {
          v23 = &v15[8 * v22];
          v24 = *(_DWORD *)v23;
          v25 = sub_614FB0(**a1, 29) + v24;
          v26 = *a1;
          v39 = v25;
          v27 = *(_DWORD *)v23 + *((_DWORD *)a1 + 26);
          v28 = sub_614FB0(*v26, 29) + v27;
          has_common = rangeset_t_has_common(v37, v23, 0);
          v30 = *((_DWORD *)v23 + 1) - *(_DWORD *)v23;
          if ( !has_common )
            break;
          netnode_copy2(v39, v30, v28, 0, v42);
          v22 += v21;
          v15 = (char *)ptr;
          if ( v19 == v22 )
            goto LABEL_27;
        }
        sub_79C380(&v39, **a1, v28, v30, 1, 0);
        v22 += v21;
        v15 = (char *)ptr;
      }
      while ( v19 != v22 );
    }
LABEL_27:
    if ( v15 )
    {
      *(_QWORD *)&v41 = 0;
      qfree(v15);
    }
  }
  else
  {
    v34 = v4 + sub_614FB0(**a1, 29);
    v35 = *((_DWORD *)a1 + 26) + v4;
    LODWORD(v42[0]) = v34;
    v36 = sub_614FB0(**a1, 29);
    sub_79C380(v42, **a1, v35 + v36, (unsigned int)(*((_DWORD *)a1 + 3) - *((_DWORD *)a1 + 2)), 1, 0);
  }
  return v45 - __readfsqword(0x28u);
}

