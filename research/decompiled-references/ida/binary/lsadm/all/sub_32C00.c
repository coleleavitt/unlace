__int64 __fastcall sub_32C00(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  void *v3; // r13
  bool v4; // cf
  unsigned __int64 v5; // rdx
  _QWORD *v7; // r12
  unsigned __int64 v8; // rbp
  unsigned int v9; // eax
  _BYTE *v10; // rbx
  _QWORD *v11; // r8
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // r13
  void **v14; // rsi
  __int64 v15; // rdi
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  void **v18; // rax
  unsigned __int64 v19; // r14
  unsigned __int64 v21; // rbx
  unsigned int v22; // r13d
  __int64 v23; // rax
  void *v24; // rdi
  __int64 v25; // r15
  __int64 v26; // r13
  _QWORD *v27; // r14
  __int64 v28; // r12
  __int64 v29; // r12
  const void *v30; // r9
  __int64 v31; // r8
  size_t v32; // r10
  size_t v33; // r11
  void *v34; // rsi
  unsigned __int64 v35; // rdx
  void *v36; // rax
  void **i; // rax
  unsigned __int64 v38; // rdx
  void **v39; // rax
  void **v40; // rax
  void **v41; // rax
  unsigned __int64 v43; // [rsp+10h] [rbp-98h]
  _QWORD *v44; // [rsp+10h] [rbp-98h]
  _BYTE *v45; // [rsp+18h] [rbp-90h]
  unsigned __int64 v46; // [rsp+18h] [rbp-90h]
  void *v47; // [rsp+20h] [rbp-88h]
  unsigned __int64 v48; // [rsp+28h] [rbp-80h]
  __int64 v49; // [rsp+30h] [rbp-78h]
  size_t v50; // [rsp+38h] [rbp-70h]
  void *src[2]; // [rsp+40h] [rbp-68h] BYREF
  __int128 v52; // [rsp+50h] [rbp-58h]
  unsigned __int64 v53; // [rsp+68h] [rbp-40h]

  v53 = __readfsqword(0x28u);
  v3 = (void *)*a2;
  v4 = __CFADD__(*a2, a3);
  v5 = *a2 + a3;
  if ( v4 )
    return 0;
  v7 = a2;
  src[0] = *(void **)a2;
  v8 = v5;
  v9 = sub_28F80((unsigned __int64 *)src, v5);
  v10 = src[0];
  if ( v3 >= src[0] )
    return 0;
  v11 = a1;
  v12 = v9;
  v13 = a1[3];
  if ( v9 != v13 )
  {
    src[0] = nullptr;
    src[1] = nullptr;
    v52 = 0;
    if ( v9 >= v13 )
    {
      v14 = (void **)a1[2];
      v15 = (__int64)(a1 + 2);
      v16 = a1[4];
      if ( src < v14 || src >= &v14[4 * v16] )
      {
        if ( v16 >= v12
          || (v40 = (void **)sub_29E60(v15, v14, v12, 0x20u), v11 = a1, v14 = v40, v13 = a1[3], a1[2] = v40, v13 < v12) )
        {
          for ( i = v14; ; i = (void **)v11[2] )
          {
            v38 = v13++;
            v39 = &i[4 * v38];
            *v39 = nullptr;
            v39[1] = nullptr;
            *((_OWORD *)v39 + 1) = 0;
            if ( v12 == v13 )
              break;
          }
        }
      }
      else if ( v16 >= v12
             || (v41 = (void **)sub_29E60(v15, v14, v12, 0x20u), v11 = a1,
                                                                 v14 = v41,
                                                                 v13 = a1[3],
                                                                 a1[2] = v41,
                                                                 v13 < v12) )
      {
        while ( 1 )
        {
          v17 = v13++;
          v18 = &v14[4 * v17];
          *v18 = nullptr;
          v18[1] = nullptr;
          *((_OWORD *)v18 + 1) = 0;
          if ( v12 == v13 )
            break;
          v14 = (void **)v11[2];
        }
      }
      v11[3] = v12;
      goto LABEL_19;
    }
    v43 = v8;
    v19 = v9;
    v45 = v10;
    v21 = v13;
    v22 = v9;
    do
    {
      v23 = a1[2] + 32 * v19;
      v24 = *(void **)(v23 + 8);
      if ( v24 )
      {
        *(_QWORD *)(v23 + 16) = 0;
        j__free(v24);
      }
      ++v19;
    }
    while ( v19 < v21 );
    v11 = a1;
    v10 = v45;
    v8 = v43;
    v9 = v22;
    v11[3] = v12;
  }
  if ( v9 )
  {
LABEL_19:
    v44 = v7;
    v25 = 32 * v12;
    v26 = 0;
    v27 = v11;
LABEL_20:
    if ( v8 >= (unsigned __int64)v10 )
    {
      v28 = v27[2];
      src[0] = v10;
      v29 = v26 + v28;
      *(_DWORD *)v29 = sub_28F80((unsigned __int64 *)src, v8);
      v30 = src[0];
      if ( v10 < src[0] )
      {
        v10 = src[0];
        while ( (unsigned __int64)v10 < v8 )
        {
          if ( !*v10++ )
          {
            v31 = *(_QWORD *)(v29 + 16);
            v32 = v10 - (char *)src[0] - 1;
            v33 = v32;
            if ( v31 )
            {
              --v31;
              v33 = v32 + v31;
            }
            v34 = *(void **)(v29 + 8);
            v35 = v33 + 1;
            if ( *(_QWORD *)(v29 + 24) < v33 + 1 )
            {
              v50 = v33;
              v49 = v31;
              v48 = v10 - (char *)src[0] - 1;
              v47 = src[0];
              v46 = v33 + 1;
              v36 = sub_29E60(v29 + 8, v34, v35, 1u);
              v33 = v50;
              v31 = v49;
              *(_QWORD *)(v29 + 8) = v36;
              v32 = v48;
              v34 = v36;
              v30 = v47;
              v35 = v46;
            }
            *(_QWORD *)(v29 + 16) = v35;
            v26 += 32;
            *((_BYTE *)v34 + v33) = 0;
            memmove((void *)(v31 + *(_QWORD *)(v29 + 8)), v30, v32);
            if ( v26 == v25 )
            {
              v7 = v44;
              goto LABEL_32;
            }
            goto LABEL_20;
          }
        }
      }
    }
    return 0;
  }
LABEL_32:
  *v7 = v10;
  return 1;
}

