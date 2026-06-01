__int64 __fastcall sub_80D1C0(__int64 a1, void **a2, __int64 a3)
{
  void *v3; // rbx
  bool v4; // cf
  char *v5; // rdx
  void **v7; // r12
  unsigned __int64 v8; // rbp
  int v9; // eax
  void *v10; // r14
  unsigned int v11; // eax
  _BYTE *v12; // r15
  __int64 v13; // r8
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // r13
  __int64 v23; // rax
  void *v24; // rdi
  _BYTE *v25; // r12
  __int64 v26; // r15
  __int64 v27; // r14
  _BYTE *v28; // rbx
  size_t v29; // r8
  size_t v30; // r11
  __int64 *v31; // rdi
  __int64 v32; // r13
  __int64 v33; // rsi
  size_t v34; // rdx
  __int64 v35; // rax
  unsigned __int64 v36; // rdx
  __int64 v37; // rax
  unsigned __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned __int64 v42; // [rsp+0h] [rbp-88h]
  __int64 v43; // [rsp+0h] [rbp-88h]
  unsigned int v44; // [rsp+8h] [rbp-80h]
  size_t v45; // [rsp+10h] [rbp-78h]
  size_t v46; // [rsp+18h] [rbp-70h]
  void **v47; // [rsp+28h] [rbp-60h]
  void *src; // [rsp+30h] [rbp-58h] BYREF
  __int128 v49; // [rsp+38h] [rbp-50h]
  unsigned __int64 v50; // [rsp+48h] [rbp-40h]

  v50 = __readfsqword(0x28u);
  v3 = *a2;
  v4 = __CFADD__(*a2, a3);
  v5 = (char *)*a2 + a3;
  if ( v4 )
    return 0;
  v7 = a2;
  src = *a2;
  v8 = (unsigned __int64)v5;
  v9 = unpack_dd(&src);
  v10 = src;
  *(_DWORD *)(a1 + 12) = v9;
  if ( v3 >= v10 )
    return 0;
  v11 = unpack_dd(&src);
  v12 = src;
  if ( v10 >= src )
    return 0;
  v13 = a1;
  v14 = v11;
  v15 = *(_QWORD *)(a1 + 24);
  if ( v11 != v15 )
  {
    src = nullptr;
    v49 = 0;
    if ( v11 >= v15 )
    {
      v16 = *(_QWORD *)(a1 + 16);
      v17 = *(_QWORD *)(a1 + 32);
      v18 = a1 + 16;
      if ( (unsigned __int64)&src < v16 || (unsigned __int64)&src >= v16 + 24 * v17 )
      {
        if ( v17 >= v14
          || (v39 = qvector_reserve(v18, v16, v14, 24),
              v13 = a1,
              v16 = v39,
              v15 = *(_QWORD *)(a1 + 24),
              *(_QWORD *)(a1 + 16) = v39,
              v15 < v14) )
        {
          v36 = v16;
          v37 = 24 * v15;
          while ( 1 )
          {
            v38 = v37 + v36;
            ++v15;
            v37 += 24;
            *(_QWORD *)v38 = 0;
            *(_OWORD *)(v38 + 8) = 0;
            if ( v14 == v15 )
              break;
            v36 = *(_QWORD *)(v13 + 16);
          }
        }
      }
      else if ( v17 >= v14
             || (v40 = qvector_reserve(v18, v16, v14, 24),
                 v13 = a1,
                 v16 = v40,
                 v15 = *(_QWORD *)(a1 + 24),
                 *(_QWORD *)(a1 + 16) = v40,
                 v15 < v14) )
      {
        v19 = 24 * v15;
        while ( 1 )
        {
          v20 = v16 + v19;
          ++v15;
          v19 += 24;
          *(_QWORD *)v20 = 0;
          *(_OWORD *)(v20 + 8) = 0;
          if ( v14 == v15 )
            break;
          v16 = *(_QWORD *)(v13 + 16);
        }
      }
      *(_QWORD *)(v13 + 24) = v14;
      goto LABEL_20;
    }
    v44 = v11;
    v21 = v11;
    v42 = v8;
    do
    {
      v23 = *(_QWORD *)(a1 + 16) + 24 * v21;
      v24 = *(void **)v23;
      if ( *(_QWORD *)v23 )
      {
        *(_QWORD *)(v23 + 8) = 0;
        qfree(v24);
      }
      ++v21;
    }
    while ( v21 < v15 );
    v13 = a1;
    v11 = v44;
    v8 = v42;
    *(_QWORD *)(v13 + 24) = v14;
  }
  if ( v11 )
  {
LABEL_20:
    v43 = v13;
    v47 = v7;
    v25 = v12;
    v26 = 0;
    v27 = 24 * v14;
LABEL_21:
    v28 = v25;
    while ( (unsigned __int64)v28 < v8 )
    {
      if ( !*v28++ )
      {
        v29 = v28 - v25 - 1;
        v30 = v29;
        v31 = (__int64 *)(v26 + *(_QWORD *)(v43 + 16));
        v32 = v31[1];
        if ( v32 )
        {
          --v32;
          v30 = v29 + v32;
        }
        v33 = *v31;
        v34 = v30 + 1;
        if ( v31[2] < v30 + 1 )
        {
          v46 = v30;
          v45 = v30 + 1;
          v35 = qvector_reserve(v31, v33, v34, 1);
          v29 = v28 - v25 - 1;
          v30 = v46;
          v34 = v45;
          v33 = v35;
          *v31 = v35;
        }
        v31[1] = v34;
        v26 += 24;
        *(_BYTE *)(v33 + v30) = 0;
        memmove((void *)(*v31 + v32), v25, v29);
        if ( v26 != v27 )
        {
          v25 = v28;
          goto LABEL_21;
        }
        v7 = v47;
        goto LABEL_32;
      }
    }
    return 0;
  }
  v28 = v12;
LABEL_32:
  *v7 = v28;
  return 1;
}
