unsigned __int64 __fastcall sub_5A130(__int64 *a1, __int64 *a2, const char *a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rdx
  const char *v7; // r12
  __int64 v8; // rsi
  __int64 *v9; // r15
  __int64 v10; // r13
  const char *v11; // r14
  char *v12; // rax
  signed __int64 v13; // rax
  char *v14; // r12
  size_t v15; // r10
  char *v16; // r9
  __int64 v17; // r11
  __int64 v18; // rsi
  void *v19; // rdi
  _QWORD *v20; // rbx
  _QWORD *v21; // r15
  const char *v22; // rdx
  int v23; // ecx
  int v24; // r8d
  int v25; // r9d
  const char *v26; // rdx
  const char *v28; // rsi
  unsigned __int64 v29; // r12
  size_t v30; // r10
  __int64 v31; // r9
  char *v32; // r11
  __int64 v33; // rsi
  __int64 v34; // rax
  _BYTE *v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  void **i; // [rsp+0h] [rbp-B8h]
  const char *v40; // [rsp+8h] [rbp-B0h]
  int v41[2]; // [rsp+10h] [rbp-A8h]
  void **p_src; // [rsp+18h] [rbp-A0h]
  int v43[2]; // [rsp+20h] [rbp-98h]
  __int64 v44; // [rsp+28h] [rbp-90h]
  __int64 v45; // [rsp+30h] [rbp-88h]
  char *v46; // [rsp+38h] [rbp-80h]
  void *src; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int64 v48; // [rsp+48h] [rbp-70h]
  int v49; // [rsp+50h] [rbp-68h]
  void *v50; // [rsp+58h] [rbp-60h]
  void *ptr; // [rsp+60h] [rbp-58h] BYREF
  int v52[2]; // [rsp+68h] [rbp-50h]
  __int64 v53; // [rsp+70h] [rbp-48h]
  unsigned __int64 v54; // [rsp+78h] [rbp-40h]

  v4 = a1[1];
  *(_QWORD *)v43 = a1;
  v40 = a3;
  v54 = __readfsqword(0x28u);
  v5 = *a1;
  *(_QWORD *)v41 = *a1 + 24 * v4;
  if ( *a1 != *(_QWORD *)v41 )
  {
    p_src = &src;
    while ( 1 )
    {
      v6 = a2[1];
      v7 = *(const char **)v5;
      v8 = *a2;
      if ( a2[2] < (unsigned __int64)(v6 + 1) )
      {
        v34 = sub_96080(a2, v8, v6 + 1, 24);
        v6 = a2[1];
        *a2 = v34;
        v8 = v34;
      }
      v9 = (__int64 *)(v8 + 24 * v6);
      *v9 = 0;
      *(_OWORD *)(v9 + 1) = 0;
      ++a2[1];
      v10 = *(_QWORD *)(v5 + 8);
      if ( !v10 )
      {
LABEL_27:
        sub_58180((__int64)&ptr, v40, "**");
        v28 = haystack;
        if ( *(_QWORD *)v52 )
          v28 = (const char *)ptr;
        sub_58180((__int64)&src, v28, v7);
        v29 = v48;
        if ( v48 )
        {
          v30 = v48 - 1;
          if ( v48 != 1 )
          {
            v31 = v9[1];
            v32 = (char *)(v48 - 1);
            if ( v31 )
            {
              --v31;
              v32 = (char *)(v30 + v31);
              v29 = v48 + v31;
            }
            v33 = *v9;
            if ( v9[2] < v29 )
            {
              v46 = v32;
              v45 = v31;
              v44 = v48 - 1;
              v38 = sub_96080(v9, v33, v29, 1);
              v32 = v46;
              v31 = v45;
              *v9 = v38;
              v33 = v38;
              v30 = v44;
            }
            v9[1] = v29;
            v32[v33] = 0;
            memcpy((void *)(v31 + *v9), src, v30);
          }
        }
        if ( src )
        {
          v48 = 0;
          j__free(src);
        }
        v19 = ptr;
        if ( !ptr )
          goto LABEL_17;
LABEL_16:
        *(_QWORD *)v52 = 0;
        j__free(v19);
        goto LABEL_17;
      }
      v11 = *(const char **)v5;
      if ( **(_BYTE **)v5 == 33 )
      {
        v35 = (_BYTE *)*v9;
        if ( (unsigned __int64)v9[2] <= 1 )
        {
          v36 = sub_96080(v9, v35, 2, 1);
          *v9 = v36;
          v35 = (_BYTE *)v36;
        }
        v9[1] = 2;
        ++v7;
        *v35 = 33;
        *(_BYTE *)(*v9 + 1) = 0;
        v10 = *(_QWORD *)(v5 + 8);
        if ( !v10 )
          goto LABEL_27;
        v11 = *(const char **)v5;
      }
      v12 = strchr(v11, 47);
      if ( !v12 )
        goto LABEL_27;
      v13 = v12 - v11;
      if ( v13 == -1 || v10 - 2 == v13 )
        goto LABEL_27;
      sub_58180((__int64)&ptr, v40, v7);
      v14 = *(char **)v52;
      if ( *(_QWORD *)v52 )
      {
        v15 = *(_QWORD *)v52 - 1LL;
        if ( *(_QWORD *)v52 != 1 )
          break;
      }
LABEL_15:
      v19 = ptr;
      if ( ptr )
        goto LABEL_16;
LABEL_17:
      v5 += 24;
      if ( *(_QWORD *)v41 == v5 )
        goto LABEL_18;
    }
    v16 = (char *)v9[1];
    v17 = *(_QWORD *)v52 - 1LL;
    if ( v16 )
    {
      --v16;
      v18 = *v9;
      v17 = (__int64)&v16[v15];
      v14 = &v16[*(_QWORD *)v52];
      if ( v9[2] >= (unsigned __int64)&v16[*(_QWORD *)v52] )
        goto LABEL_14;
    }
    else
    {
      v18 = *v9;
      if ( (unsigned __int64)v9[2] >= *(_QWORD *)v52 )
      {
LABEL_14:
        v9[1] = (__int64)v14;
        *(_BYTE *)(v18 + v17) = 0;
        memcpy(&v16[*v9], ptr, v15);
        goto LABEL_15;
      }
    }
    v46 = v16;
    v45 = *(_QWORD *)v52 - 1LL;
    v44 = v17;
    v37 = sub_96080(v9, v18, v14, 1);
    v16 = v46;
    v15 = v45;
    *v9 = v37;
    v18 = v37;
    v17 = v44;
    goto LABEL_14;
  }
LABEL_18:
  v20 = *(_QWORD **)(*(_QWORD *)v43 + 48LL);
  v21 = (_QWORD *)(*(_QWORD *)v43 + 32LL);
  for ( i = &ptr; v21 != v20; v20 = (_QWORD *)std::_Rb_tree_increment() )
  {
    v22 = haystack;
    if ( v20[5] )
      v22 = (const char *)v20[4];
    sub_58180((__int64)i, v40, v22);
    v26 = haystack;
    if ( *(_QWORD *)v52 )
      LODWORD(v26) = (_DWORD)ptr;
    sub_5A130(
      v20[7],
      (int)a2,
      (int)v26,
      v23,
      v24,
      v25,
      (int)i,
      (int)v40,
      v41[0],
      (int)p_src,
      v43[0],
      v44,
      v45,
      v46,
      (__int64)src,
      v48,
      v49,
      v50,
      (__int64)ptr,
      v52[0],
      v53);
    if ( ptr )
    {
      *(_QWORD *)v52 = 0;
      j__free(ptr);
    }
  }
  return v54 - __readfsqword(0x28u);
}

