unsigned __int64 __fastcall sub_195420(__int64 *a1, __int64 a2, char a3)
{
  int v4; // edx
  __int64 v5; // rax
  __int64 v7; // r13
  __int64 v8; // rbp
  const char *v9; // r12
  char *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rsi
  char *v13; // r8
  __int64 v14; // rax
  size_t v15; // rax
  __int64 v16; // r8
  size_t v17; // r9
  size_t v18; // r10
  __int64 v19; // rsi
  size_t v20; // rdx
  __int64 v22; // r9
  const void *v23; // r10
  size_t v24; // r8
  size_t v25; // r12
  __int64 v26; // rsi
  size_t v27; // rdx
  const void *v28; // r12
  size_t v29; // rax
  __int64 v30; // r9
  size_t v31; // r8
  size_t v32; // r10
  __int64 v33; // rsi
  size_t v34; // rdx
  __int64 v35; // rax
  unsigned __int64 v36; // rbp
  unsigned __int64 v37; // r13
  unsigned __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rax
  unsigned __int64 v43; // r12
  _QWORD *v44; // rax
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rax
  char *v49; // [rsp+0h] [rbp-78h]
  __int64 v50; // [rsp+0h] [rbp-78h]
  size_t v51; // [rsp+0h] [rbp-78h]
  size_t v52; // [rsp+0h] [rbp-78h]
  size_t v53; // [rsp+0h] [rbp-78h]
  __int64 v54; // [rsp+8h] [rbp-70h]
  size_t v55; // [rsp+8h] [rbp-70h]
  __int64 v56; // [rsp+8h] [rbp-70h]
  size_t v57; // [rsp+10h] [rbp-68h]
  const void *v58; // [rsp+10h] [rbp-68h]
  size_t v59; // [rsp+10h] [rbp-68h]
  size_t v60; // [rsp+18h] [rbp-60h]
  __int64 v61; // [rsp+18h] [rbp-60h]
  size_t v62; // [rsp+18h] [rbp-60h]
  __int64 v63; // [rsp+20h] [rbp-58h] BYREF
  __int128 v64; // [rsp+28h] [rbp-50h]
  unsigned __int64 v65; // [rsp+38h] [rbp-40h]

  v4 = *(_DWORD *)(a2 + 48);
  v65 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a2 + 64);
  if ( v5 )
  {
    if ( v4 > 0 )
    {
      v7 = 0;
      while ( 1 )
      {
        v9 = *(const char **)(v5 + 8 * v7);
        v10 = strrchr(v9, 35);
        v11 = a1[1];
        v12 = *a1;
        v13 = v10;
        if ( a1[2] < (unsigned __int64)(v11 + 1) )
        {
          v49 = v10;
          v14 = qvector_reserve();
          v11 = a1[1];
          v13 = v49;
          *a1 = v14;
          v12 = v14;
        }
        v8 = v12 + 24 * v11;
        *(_QWORD *)v8 = 0;
        *(_OWORD *)(v8 + 8) = 0;
        ++a1[1];
        if ( *v9 == 35 && v9 < v13 )
          break;
        if ( a3 == 1 || !v9 )
          goto LABEL_8;
        v15 = strlen(v9);
        v16 = *(_QWORD *)(v8 + 8);
        v17 = v15;
        v18 = v15;
        if ( v16 )
        {
          --v16;
          v18 = v15 + v16;
        }
        v19 = *(_QWORD *)v8;
        v20 = v18 + 1;
        if ( *(_QWORD *)(v8 + 16) < v18 + 1 )
        {
          v60 = v15;
          v57 = v18;
          v54 = v16;
          v51 = v18 + 1;
          v35 = qvector_reserve();
          v17 = v60;
          v18 = v57;
          v16 = v54;
          v20 = v51;
          *(_QWORD *)v8 = v35;
          v19 = v35;
        }
        *(_QWORD *)(v8 + 8) = v20;
        ++v7;
        *(_BYTE *)(v19 + v18) = 0;
        memmove((void *)(v16 + *(_QWORD *)v8), v9, v17);
        if ( *(_DWORD *)(a2 + 48) <= (int)v7 )
          return v65 - __readfsqword(0x28u);
LABEL_9:
        v5 = *(_QWORD *)(a2 + 64);
      }
      v22 = *(_QWORD *)(v8 + 8);
      if ( a3 )
      {
        v23 = v9 + 1;
        v24 = v13 - (v9 + 1);
        v25 = v24;
        if ( v22 )
          v24 += --v22;
        v26 = *(_QWORD *)v8;
        v27 = v24 + 1;
        if ( *(_QWORD *)(v8 + 16) < v24 + 1 )
        {
          v61 = v22;
          v58 = v23;
          v55 = v24;
          v52 = v24 + 1;
          v41 = qvector_reserve();
          v22 = v61;
          v23 = v58;
          v24 = v55;
          v27 = v52;
          *(_QWORD *)v8 = v41;
          v26 = v41;
        }
        *(_QWORD *)(v8 + 8) = v27;
        *(_BYTE *)(v26 + v24) = 0;
        memmove((void *)(v22 + *(_QWORD *)v8), v23, v25);
      }
      else
      {
        v28 = v13 + 1;
        v50 = *(_QWORD *)(v8 + 8);
        v29 = strlen(v13 + 1);
        v30 = v50;
        v31 = v29;
        v32 = v29;
        if ( v50 )
        {
          v30 = v50 - 1;
          v32 = v29 + v50 - 1;
        }
        v33 = *(_QWORD *)v8;
        v34 = v32 + 1;
        if ( *(_QWORD *)(v8 + 16) < v32 + 1 )
        {
          v62 = v29;
          v59 = v32;
          v56 = v30;
          v53 = v32 + 1;
          v42 = qvector_reserve();
          v31 = v62;
          v32 = v59;
          v30 = v56;
          v34 = v53;
          *(_QWORD *)v8 = v42;
          v33 = v42;
        }
        *(_QWORD *)(v8 + 8) = v34;
        *(_BYTE *)(v33 + v32) = 0;
        memmove((void *)(v30 + *(_QWORD *)v8), v28, v31);
      }
LABEL_8:
      if ( *(_DWORD *)(a2 + 48) <= (int)++v7 )
        return v65 - __readfsqword(0x28u);
      goto LABEL_9;
    }
  }
  else
  {
    v36 = a1[1];
    v37 = v4;
    if ( v4 != v36 )
    {
      v63 = 0;
      v64 = 0;
      if ( v4 < v36 )
      {
        v43 = v4;
        do
        {
          v44 = (_QWORD *)(*a1 + 24 * v43);
          if ( *v44 )
          {
            v44[1] = 0;
            qfree();
          }
          ++v43;
        }
        while ( v43 < v36 );
      }
      else
      {
        v38 = a1[2];
        if ( (unsigned __int64)&v63 < *a1 || (unsigned __int64)&v63 >= *a1 + 24 * v38 )
        {
          if ( v38 < v4 )
          {
            v47 = qvector_reserve();
            v36 = a1[1];
            *a1 = v47;
          }
          if ( v36 < v37 )
          {
            v45 = 24 * v36;
            do
            {
              ++v36;
              v46 = v45 + *a1;
              v45 += 24;
              *(_QWORD *)v46 = 0;
              *(_OWORD *)(v46 + 8) = 0;
            }
            while ( v37 != v36 );
          }
        }
        else
        {
          if ( v38 < v4 )
          {
            v48 = qvector_reserve();
            v36 = a1[1];
            *a1 = v48;
          }
          if ( v36 < v37 )
          {
            v39 = 24 * v36;
            do
            {
              ++v36;
              v40 = v39 + *a1;
              v39 += 24;
              *(_QWORD *)v40 = 0;
              *(_OWORD *)(v40 + 8) = 0;
            }
            while ( v37 != v36 );
          }
        }
      }
      a1[1] = v37;
    }
  }
  return v65 - __readfsqword(0x28u);
}

