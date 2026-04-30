unsigned __int64 __fastcall sub_483F60(_QWORD *a1, const char **a2)
{
  __int64 v3; // rbp
  int v4; // r12d
  __int64 v5; // rbp
  __int64 v6; // rcx
  __int64 v7; // r8
  size_t v8; // r9
  const char *v9; // rdx
  const char *v10; // rbp
  unsigned __int64 v11; // rdx
  const char *v12; // rsi
  const char *v13; // rbp
  unsigned __int64 v14; // rdx
  __int64 v15; // rsi
  const char *v16; // rbp
  const char *v17; // r8
  const char *v18; // r10
  __int64 v19; // rsi
  const char *v20; // rbp
  unsigned __int64 v21; // rdx
  const char *v22; // rsi
  const char *v23; // r8
  __int64 v24; // r9
  unsigned __int64 v25; // rdx
  __int64 v26; // rsi
  const char *v27; // r8
  const char *v28; // r10
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned __int64 v37; // [rsp+0h] [rbp-78h]
  unsigned __int64 v38; // [rsp+0h] [rbp-78h]
  unsigned __int64 v39; // [rsp+0h] [rbp-78h]
  unsigned __int64 v40; // [rsp+0h] [rbp-78h]
  size_t v41; // [rsp+0h] [rbp-78h]
  const char *v42; // [rsp+0h] [rbp-78h]
  __int64 v43; // [rsp+8h] [rbp-70h]
  const char *v44; // [rsp+8h] [rbp-70h]
  size_t v45; // [rsp+8h] [rbp-70h]
  const char *v46; // [rsp+10h] [rbp-68h]
  const char *v47; // [rsp+10h] [rbp-68h]
  const char *v48; // [rsp+10h] [rbp-68h]
  const char *v49; // [rsp+18h] [rbp-60h]
  void *src; // [rsp+20h] [rbp-58h] BYREF
  __int128 v51; // [rsp+28h] [rbp-50h]
  unsigned __int64 v52; // [rsp+38h] [rbp-40h]

  v52 = __readfsqword(0x28u);
  if ( a2 && a1[1] )
  {
    v3 = 0;
    v4 = 0;
    while ( 1 )
    {
      v5 = *a1 + 48 * v3;
      v51 = 0;
      src = nullptr;
      sub_483B20(v5, (__int64 *)&src, " ");
      v9 = *(const char **)(v5 + 8);
      if ( !v9 )
      {
        if ( !byte_8CBC80 )
          goto LABEL_11;
        goto LABEL_6;
      }
      if ( !**(_BYTE **)v5 )
        goto LABEL_11;
      v8 = (size_t)(v9 - 1);
      if ( v9 != (_BYTE *)&dword_0 + 1 )
        break;
LABEL_6:
      v10 = a2[1];
      v11 = 2;
      if ( v10 )
        v11 = (unsigned __int64)(v10-- + 1);
      v12 = *a2;
      if ( (unsigned __int64)a2[2] < v11 )
      {
        v40 = v11;
        v33 = qvector_reserve(a2, v12, v11, 1);
        *a2 = (const char *)v33;
        v11 = v40;
        v12 = (const char *)v33;
      }
      a2[1] = (const char *)v11;
      v10[(_QWORD)v12] = 32;
      v10[(_QWORD)*a2 + 1] = 0;
LABEL_11:
      v13 = a2[1];
      v14 = 2;
      if ( v13 )
        v14 = (unsigned __int64)(v13-- + 1);
      v15 = (__int64)*a2;
      if ( (unsigned __int64)a2[2] < v14 )
      {
        v39 = v14;
        v32 = qvector_reserve(a2, v15, v14, 1);
        *a2 = (const char *)v32;
        v14 = v39;
        v15 = v32;
      }
      a2[1] = (const char *)v14;
      v13[v15] = 40;
      v13[(_QWORD)*a2 + 1] = 0;
      v16 = (const char *)v51;
      if ( (_QWORD)v51 )
      {
        v8 = v51 - 1;
        if ( (_QWORD)v51 != 1 )
        {
          v17 = a2[1];
          v18 = (const char *)(v51 - 1);
          if ( v17 )
          {
            --v17;
            v18 = &v17[v8];
            v16 = &v17[v51];
          }
          v19 = (__int64)*a2;
          if ( a2[2] < v16 )
          {
            v47 = v18;
            v44 = v17;
            v41 = v51 - 1;
            v35 = qvector_reserve(a2, v19, v16, 1);
            v18 = v47;
            v17 = v44;
            *a2 = (const char *)v35;
            v19 = v35;
            v8 = v41;
          }
          a2[1] = v16;
          v18[v19] = 0;
          memcpy((void *)&(*a2)[(_QWORD)v17], src, v8);
        }
      }
      v20 = a2[1];
      v21 = 2;
      if ( v20 )
        v21 = (unsigned __int64)(v20-- + 1);
      v22 = *a2;
      if ( (unsigned __int64)a2[2] < v21 )
      {
        v38 = v21;
        v31 = qvector_reserve(a2, v22, v21, 1);
        *a2 = (const char *)v31;
        v21 = v38;
        v22 = (const char *)v31;
      }
      a2[1] = (const char *)v21;
      v20[(_QWORD)v22] = 41;
      v20[(_QWORD)*a2 + 1] = 0;
      if ( src )
      {
        *(_QWORD *)&v51 = 0;
        qfree(src, v22, v21, v6, v7, v8);
      }
      v3 = ++v4;
      if ( (unsigned __int64)v4 >= a1[1] )
        return v52 - __readfsqword(0x28u);
      v23 = a2[1];
      if ( v23 )
      {
        v24 = (__int64)(v23 + 1);
        v25 = (unsigned __int64)(v23 + 2);
        v26 = (__int64)*a2;
        --v23;
        if ( (unsigned __int64)a2[2] >= v25 )
          goto LABEL_31;
      }
      else
      {
        v26 = (__int64)*a2;
        v25 = 3;
        v24 = 2;
        if ( (unsigned __int64)a2[2] >= 3 )
          goto LABEL_31;
      }
      v46 = v23;
      v43 = v24;
      v37 = v25;
      v30 = qvector_reserve(a2, v26, v25, 1);
      v23 = v46;
      v24 = v43;
      *a2 = (const char *)v30;
      v25 = v37;
      v26 = v30;
LABEL_31:
      a2[1] = (const char *)v25;
      *(_BYTE *)(v26 + v24) = 0;
      *(_WORD *)&v23[(_QWORD)*a2] = 15163;
    }
    v27 = a2[1];
    v28 = v9 - 1;
    if ( v27 )
    {
      --v27;
      v29 = (__int64)*a2;
      v28 = &v27[v8];
      v9 = &v27[(_QWORD)v9];
      if ( a2[2] >= v9 )
        goto LABEL_36;
    }
    else
    {
      v29 = (__int64)*a2;
      if ( a2[2] >= v9 )
      {
LABEL_36:
        a2[1] = v9;
        v28[v29] = 0;
        memcpy((void *)&(*a2)[(_QWORD)v27], *(const void **)v5, v8);
        goto LABEL_6;
      }
    }
    v49 = v28;
    v48 = v27;
    v45 = v8;
    v42 = v9;
    v36 = qvector_reserve(a2, v29, v9, 1);
    v28 = v49;
    v27 = v48;
    *a2 = (const char *)v36;
    v29 = v36;
    v8 = v45;
    v9 = v42;
    goto LABEL_36;
  }
  return v52 - __readfsqword(0x28u);
}
