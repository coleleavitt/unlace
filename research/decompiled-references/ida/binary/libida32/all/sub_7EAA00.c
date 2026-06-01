__int64 __fastcall sub_7EAA00(_QWORD *a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int64 v3; // r13
  unsigned __int64 v4; // rbx
  unsigned int v8; // eax
  char *v9; // rbp
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r13
  char *v12; // r13
  __int64 v13; // rdi
  unsigned __int64 i; // rax
  char *v15; // rdx
  bool v16; // zf
  char *v17; // rcx
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rax
  _QWORD *v20; // rdi
  int v21; // edi
  __int16 v22; // cx
  __int64 v23; // rax
  char *j; // rbp
  const void *v25; // r15
  __int64 v26; // r8
  size_t v27; // r9
  signed __int64 v28; // r10
  __int64 v29; // rsi
  signed __int64 v30; // rdx
  _BYTE *k; // rax
  _BYTE *v32; // r13
  __int64 v33; // rax
  __int64 v34; // rbp
  size_t v35; // rbx
  size_t v36; // r8
  __int64 v37; // rsi
  size_t v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  size_t v44; // [rsp+0h] [rbp-78h]
  signed __int64 v45; // [rsp+0h] [rbp-78h]
  size_t v46; // [rsp+8h] [rbp-70h]
  size_t v47; // [rsp+8h] [rbp-70h]
  __int64 v48; // [rsp+18h] [rbp-60h]
  char *v49; // [rsp+20h] [rbp-58h] BYREF
  int v50; // [rsp+2Ch] [rbp-4Ch] BYREF
  __int16 v51; // [rsp+30h] [rbp-48h]
  int v52; // [rsp+32h] [rbp-46h]
  __int16 v53; // [rsp+36h] [rbp-42h]
  unsigned __int64 v54; // [rsp+38h] [rbp-40h]

  v54 = __readfsqword(0x28u);
  v3 = *a2;
  v4 = *a2 + a3;
  if ( __CFADD__(*a2, a3) )
    return 0;
  v49 = (const void *)*a2;
  v8 = unpack_dd((char **)&v49);
  v9 = (char *)v49;
  if ( v3 >= (unsigned __int64)v49 )
    return 0;
  v10 = a1[3];
  v11 = v8;
  if ( v8 != v10 )
  {
    v50 = 0;
    v51 = 0;
    if ( v8 >= v10 )
    {
      v18 = a1[2];
      v19 = a1[4];
      v20 = a1 + 2;
      if ( (unsigned __int64)&v50 < v18 || (unsigned __int64)&v50 >= v18 + 6 * v19 )
      {
        if ( v19 >= v11 || (v42 = qvector_reserve(v20, v18, v11, 6), v10 = a1[3], a1[2] = v42, v18 = v42, v10 < v11) )
        {
          v39 = 6 * v10;
          while ( 1 )
          {
            ++v10;
            *(_DWORD *)(v18 + v39) = v50;
            *(_WORD *)(v18 + v39 + 4) = v51;
            v39 += 6;
            if ( v11 == v10 )
              break;
            v18 = a1[2];
          }
        }
      }
      else
      {
        v52 = 0;
        v53 = 0;
        if ( v19 >= v11 || (v43 = qvector_reserve(v20, v18, v11, 6), v10 = a1[3], a1[2] = v43, v18 = v43, v10 < v11) )
        {
          v21 = v52;
          v22 = v53;
          v23 = 6 * v10;
          while ( 1 )
          {
            ++v10;
            *(_DWORD *)(v18 + v23) = v21;
            *(_WORD *)(v18 + v23 + 4) = v22;
            v23 += 6;
            if ( v11 == v10 )
              break;
            v18 = a1[2];
          }
        }
      }
      a1[3] = v11;
LABEL_8:
      v12 = &v9[6 * v11];
      v13 = -6LL - (_QWORD)v9;
      for ( i = (unsigned __int64)v9; v4 >= i; i += 6LL )
      {
        v15 = (char *)(i + 6);
        if ( v4 < i + 6 )
          break;
        v16 = &v15[v13 + a1[2]] == nullptr;
        v17 = &v15[v13 + a1[2]];
        *(_DWORD *)v17 = *(_DWORD *)i;
        *((_WORD *)v17 + 2) = *(_WORD *)(i + 4);
        if ( v16 )
          break;
        if ( v12 == v15 )
          goto LABEL_23;
      }
      return 0;
    }
    a1[3] = v8;
  }
  if ( v8 )
    goto LABEL_8;
  v12 = v9;
LABEL_23:
  for ( j = v12; (unsigned __int64)j < v4; ++j )
  {
    v25 = j + 1;
    if ( !*j )
    {
      v26 = a1[6];
      v27 = j - v12;
      v28 = j - v12;
      if ( v26 )
      {
        --v26;
        v28 = v27 + v26;
      }
      v29 = a1[5];
      v30 = v28 + 1;
      if ( a1[7] < (unsigned __int64)(v28 + 1) )
      {
        v48 = v26;
        v47 = v28;
        v45 = v28 + 1;
        v41 = qvector_reserve(a1 + 5, v29, v30, 1);
        v26 = v48;
        v27 = j - v12;
        a1[5] = v41;
        v28 = v47;
        v29 = v41;
        v30 = v45;
      }
      a1[6] = v30;
      *(_BYTE *)(v29 + v28) = 0;
      memmove((void *)(v26 + a1[5]), v12, v27);
      for ( k = j + 1; (unsigned __int64)k < v4; ++k )
      {
        v32 = k + 1;
        if ( !*k )
        {
          v33 = k - j;
          v34 = a1[9];
          v35 = v33 - 1;
          v36 = v33 - 1;
          if ( v34 )
          {
            --v34;
            v36 = v35 + v34;
          }
          v37 = a1[8];
          v38 = v36 + 1;
          if ( a1[10] < v36 + 1 )
          {
            v46 = v36;
            v44 = v36 + 1;
            v40 = qvector_reserve(a1 + 8, v37, v38, 1);
            v36 = v46;
            v38 = v44;
            a1[8] = v40;
            v37 = v40;
          }
          a1[9] = v38;
          *(_BYTE *)(v37 + v36) = 0;
          memmove((void *)(v34 + a1[8]), v25, v35);
          *a2 = (unsigned __int64)v32;
          return 1;
        }
      }
      return 0;
    }
  }
  return 0;
}

