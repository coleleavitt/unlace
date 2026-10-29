unsigned __int64 __fastcall sub_1706320(__int64 *a1, __int64 a2, __int64 a3, unsigned __int64 a4, unsigned int a5)
{
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // r15
  __m128i *v13; // rsi
  __int64 *p_ptr; // rdi
  __int64 v15; // rdx
  unsigned int v16; // r15d
  bool v17; // al
  __int64 v18; // r12
  int *v19; // r13
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rdx
  unsigned __int64 result; // rax
  __int64 *v24; // rdx
  __int64 v25; // r14
  int v26; // eax
  char *v27; // rdx
  __int64 *v28; // r14
  unsigned __int64 v29; // rdx
  void *v30; // rsi
  char *v31; // rax
  _BYTE *v32; // rax
  __int64 v33; // r15
  __int64 v34; // rdx
  unsigned int v35; // r12d
  bool v36; // al
  __int64 v37; // r13
  unsigned int *v38; // r10
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 *v41; // rdx
  __int64 v42; // r11
  char v43; // al
  __int64 *v44; // [rsp+0h] [rbp-178h]
  unsigned __int64 v45; // [rsp+0h] [rbp-178h]
  __int64 *v46; // [rsp+0h] [rbp-178h]
  unsigned __int64 v47; // [rsp+8h] [rbp-170h]
  unsigned int *v48; // [rsp+8h] [rbp-170h]
  __int64 v49; // [rsp+10h] [rbp-168h]
  __int64 v52; // [rsp+30h] [rbp-148h]
  __int64 v53; // [rsp+48h] [rbp-130h] BYREF
  __m128i v54[2]; // [rsp+50h] [rbp-128h] BYREF
  void *ptr; // [rsp+70h] [rbp-108h] BYREF
  __int64 v56; // [rsp+78h] [rbp-100h]
  _BYTE v57[200]; // [rsp+80h] [rbp-F8h] BYREF
  __int64 v58; // [rsp+148h] [rbp-30h]
  __int64 v59; // [rsp+150h] [rbp-28h]
  __int64 v60; // [rsp+158h] [rbp-20h]
  __int64 v61; // [rsp+160h] [rbp-18h]
  __int64 v62; // [rsp+168h] [rbp-10h]
  __int64 v63; // [rsp+170h] [rbp-8h]

  if ( !a1[1] || !a2 )
    return 0;
  v63 = v10;
  v62 = v9;
  v61 = v8;
  v60 = v7;
  v59 = v6;
  v58 = v5;
  ptr = v57;
  v56 = 0x800000000LL;
  sub_F22A90(v54, a2);
  v13 = nullptr;
  p_ptr = &v53;
  v53 = v54[0].m128i_i64[0];
  v47 = sub_F22BD0(&v53, 0);
  if ( v47 )
  {
    if ( a4 )
    {
      v15 = 0;
      v16 = 0;
      do
      {
        v18 = *(_QWORD *)(v47 + 56);
        v19 = (int *)(a3 + 72 * v15);
        v20 = *(_DWORD *)(v18 + 20) & 0x1FFFFFFF;
        if ( (unsigned int)v20 <= v16 )
        {
          v24 = (__int64 *)(v18 + 24);
          v25 = v18 + 24 + 8 * v20;
          if ( v18 + 24 == v25 )
            goto LABEL_24;
          while ( 1 )
          {
            p_ptr = (__int64 *)*v24;
            v44 = v24;
            if ( sub_B8BED0(*v24) )
              break;
            v24 = v44 + 1;
            if ( (__int64 *)v25 == v44 + 1 )
              goto LABEL_24;
          }
          v22 = *(_QWORD *)(v18 + 8LL * (*(_DWORD *)(v18 + 20) & 0x1FFFFFFF) + 16);
          v21 = *v19;
          if ( *v19 != 1 )
          {
LABEL_11:
            if ( v21 )
            {
              if ( v21 != 2 )
                return sub_1706730(p_ptr, v13, v22);
              v17 = (*(_BYTE *)(v22 + 28) & 0x7F) == 68;
            }
            else
            {
              v17 = (*(_BYTE *)(v22 + 28) & 0x7F) == 67;
            }
            goto LABEL_7;
          }
        }
        else
        {
          v21 = *v19;
          v22 = *(_QWORD *)(v18 + 8 * v15 + 24);
          if ( *v19 != 1 )
            goto LABEL_11;
        }
        v17 = (*(_BYTE *)(v22 + 28) & 0x7F) == 47;
LABEL_7:
        if ( !v17 )
          goto LABEL_24;
        v15 = ++v16;
      }
      while ( v16 < a4 );
    }
    if ( HIDWORD(v56) <= (unsigned int)v56 )
    {
      v54[0].m128i_i32[0] = 4;
      v54[0].m128i_i64[1] = v47;
      sub_1706280((__int64)&ptr, v54);
      v29 = (unsigned int)v56;
      v30 = ptr;
    }
    else
    {
      v30 = ptr;
      v29 = (unsigned int)(v56 + 1);
      v31 = (char *)ptr + 24 * (unsigned int)v56;
      *(_DWORD *)v31 = 4;
      *((_QWORD *)v31 + 1) = v47;
      LODWORD(v56) = v29;
    }
  }
  else
  {
    p_ptr = &v53;
    v32 = sub_F22E60(&v53);
    if ( v32 )
    {
      v52 = (__int64)&v32[8 * (*((_WORD *)v32 + 1) >> 1) + 8];
      if ( (_BYTE *)v52 != v32 + 8 )
      {
        v28 = (__int64 *)(v32 + 8);
        do
        {
          v33 = *v28;
          if ( (*(_BYTE *)(*v28 + 28) & 0x7Fu) - 68 <= 6 )
          {
            if ( a4 )
            {
              v34 = 0;
              v35 = 0;
              do
              {
                v37 = *(_QWORD *)(v33 + 56);
                v38 = (unsigned int *)(a3 + 72 * v34);
                v39 = *(_DWORD *)(v37 + 20) & 0x1FFFFFFF;
                if ( v35 >= (unsigned int)v39 )
                {
                  v41 = (__int64 *)(v37 + 24);
                  v42 = v37 + 24 + 8 * v39;
                  if ( v37 + 24 == v42 )
                    goto LABEL_23;
                  while ( 1 )
                  {
                    p_ptr = (__int64 *)*v41;
                    v48 = v38;
                    v49 = v42;
                    v46 = v41;
                    v43 = sub_B8BED0(*v41);
                    v38 = v48;
                    if ( v43 )
                      break;
                    v42 = v49;
                    v41 = v46 + 1;
                    if ( (__int64 *)v49 == v46 + 1 )
                      goto LABEL_23;
                  }
                  v40 = *(_QWORD *)(v37 + 8LL * (*(_DWORD *)(v37 + 20) & 0x1FFFFFFF) + 16);
                }
                else
                {
                  v40 = *(_QWORD *)(v37 + 8 * v34 + 24);
                }
                v22 = *v38;
                if ( (_DWORD)v22 == 1 )
                {
                  v36 = (*(_BYTE *)(v40 + 28) & 0x7F) == 47;
                }
                else if ( (_DWORD)v22 )
                {
                  if ( (_DWORD)v22 != 2 )
                    return sub_1706730(p_ptr, v13, v22);
                  v36 = (*(_BYTE *)(v40 + 28) & 0x7F) == 68;
                }
                else
                {
                  v36 = (*(_BYTE *)(v40 + 28) & 0x7F) == 67;
                }
                if ( !v36 )
                  goto LABEL_23;
                v34 = ++v35;
              }
              while ( a4 > v35 );
            }
            v26 = v56;
            if ( HIDWORD(v56) <= (unsigned int)v56 )
            {
              v13 = v54;
              p_ptr = (__int64 *)&ptr;
              v54[0].m128i_i64[1] = v33;
              v54[0].m128i_i32[0] = 4;
              sub_1706280((__int64)&ptr, v54);
            }
            else
            {
              v13 = (__m128i *)ptr;
              v27 = (char *)ptr + 24 * (unsigned int)v56;
              *(_DWORD *)v27 = 4;
              *((_QWORD *)v27 + 1) = v33;
              LODWORD(v56) = v26 + 1;
            }
          }
LABEL_23:
          ++v28;
        }
        while ( (__int64 *)v52 != v28 );
      }
    }
LABEL_24:
    v29 = (unsigned int)v56;
    v30 = ptr;
  }
  result = sub_17007F0(*a1, (__int64)v30, (_QWORD *)v29, (unsigned int)a4, a5, 0);
  if ( ptr != v57 )
  {
    v45 = result;
    free(ptr);
    return v45;
  }
  return result;
}
