unsigned __int64 __fastcall sub_5CE930(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  char v4; // cl
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  char *v7; // rbx
  char *v8; // r13
  void *v9; // r15
  __int128 v10; // kr00_16
  __int64 v11; // r14
  __int64 i; // r12
  char *v13; // rax
  void *v14; // rdi
  void *v15; // rdi
  __int64 v17; // r13
  __int64 v18; // r15
  unsigned __int64 v19; // r14
  size_t v20; // r9
  size_t v21; // r10
  _BYTE *v22; // rsi
  _BYTE *v23; // rsi
  unsigned __int64 v24; // r9
  void *v25; // r13
  size_t v26; // rbx
  size_t v27; // [rsp+8h] [rbp-100h]
  size_t v28; // [rsp+18h] [rbp-F0h]
  void *src; // [rsp+20h] [rbp-E8h] BYREF
  __int128 v30; // [rsp+28h] [rbp-E0h]
  void *dest; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v32; // [rsp+48h] [rbp-C0h]
  __int64 v33[4]; // [rsp+60h] [rbp-A8h] BYREF
  int v34; // [rsp+80h] [rbp-88h]
  void *ptr; // [rsp+90h] [rbp-78h] BYREF
  __int128 v36; // [rsp+98h] [rbp-70h]
  void *v37; // [rsp+A8h] [rbp-60h]
  __int128 v38; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v39; // [rsp+C8h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a2 + 136);
  if ( !v2 )
    return v39 - __readfsqword(0x28u);
  v4 = *(_BYTE *)(a2 + 186) & 0xF;
  v5 = (0xBFFuLL >> v4) & 1;
  if ( ((0xBFFuLL >> v4) & 1) == 0 && (*(_BYTE *)(a2 + 186) & 0x3F) != 0x2D )
  {
    v17 = *(_QWORD *)(a2 + 128);
    ptr = nullptr;
    v36 = 0;
    v18 = v17 + 24 * v2;
    if ( v17 != v18 )
    {
LABEL_30:
      v19 = *(_QWORD *)(v17 + 8);
      if ( !v19 )
        goto LABEL_37;
LABEL_31:
      v20 = v19 - 1;
      if ( v19 != 1 )
      {
        v21 = v19 - 1;
        if ( v5 )
        {
          --v5;
          v21 = v20 + v5;
          v19 += v5;
        }
        v22 = ptr;
        if ( *((_QWORD *)&v36 + 1) < v19 )
        {
          v28 = v20;
          v27 = v21;
          ptr = (void *)qvector_reserve(&ptr, ptr, v19, 1);
          v20 = v28;
          v22 = ptr;
          v21 = v27;
        }
        *(_QWORD *)&v36 = v19;
        v22[v21] = 0;
        memcpy((char *)ptr + v5, *(const void **)v17, v20);
        v5 = v36;
      }
LABEL_37:
      while ( 1 )
      {
        v17 += 24;
        if ( v18 == v17 )
          break;
        if ( v5 <= 1 )
          goto LABEL_30;
        v23 = ptr;
        v24 = v5 - 1;
        if ( *((_QWORD *)&v36 + 1) < v5 + 1 )
        {
          ptr = (void *)qvector_reserve(&ptr, ptr, v5 + 1, 1);
          v24 = v5 - 1;
          v23 = ptr;
        }
        *(_QWORD *)&v36 = v5 + 1;
        v23[v24] = 32;
        *((_BYTE *)ptr + v5) = 0;
        v19 = *(_QWORD *)(v17 + 8);
        v5 = v36;
        if ( v19 )
          goto LABEL_31;
      }
    }
    sub_5CA510((__int64)a1);
    if ( ptr )
    {
      *(_QWORD *)&v36 = 0;
      qfree(ptr);
    }
  }
  v36 = 0;
  v38 = 0;
  ptr = nullptr;
  v37 = nullptr;
  ptr = (void *)qvector_reserve(&ptr, 0, 2, 1);
  *(_QWORD *)&v36 = 2;
  *(_BYTE *)ptr = 1;
  *((_BYTE *)ptr + 1) = 0;
  v6 = *(_QWORD *)(a2 + 136);
  v33[0] = 0;
  v7 = *(char **)(a2 + 128);
  v33[3] = 1;
  v34 = -1;
  v8 = &v7[24 * v6];
  if ( v7 != v8 )
  {
    do
    {
      value_repr_t__parse_value_repr(v33, v7, *(unsigned __int8 *)(a2 + 186));
      v7 += 24;
    }
    while ( v8 != v7 );
    if ( !v33[0] )
    {
      v8 = *(char **)(a2 + 128);
      v7 = v8;
      if ( v8 )
        goto LABEL_15;
      goto LABEL_21;
    }
    src = nullptr;
    v30 = 0;
    sub_567810(v33, (__int64 *)&src);
    if ( !(_QWORD)v30 || (v25 = src, dest = nullptr, v32 = 0, v26 = v30 - 1, (_QWORD)v30 == 1) )
    {
      v9 = nullptr;
      v10 = 0u;
    }
    else
    {
      dest = (void *)qvector_reserve(&dest, 0, v30 - 1, 1);
      memset((char *)dest + v32, 0, v26 - v32);
      *(_QWORD *)&v32 = v26;
      memcpy(dest, v25, v26);
      v9 = dest;
      v10 = v32;
    }
    dest = nullptr;
    v32 = 0;
    if ( v37 )
    {
      *(_QWORD *)&v38 = 0;
      qfree(v37);
      v37 = v9;
      v38 = v10;
      if ( dest )
      {
        *(_QWORD *)&v32 = 0;
        qfree(dest);
      }
    }
    else
    {
      v37 = v9;
      v38 = v10;
    }
    sub_5CDE10(a1, (const char *)&ptr);
    if ( src )
    {
      *(_QWORD *)&v30 = 0;
      qfree(src);
    }
    v7 = *(char **)(a2 + 128);
    v8 = v7;
  }
  if ( v8 )
  {
LABEL_15:
    v11 = *(_QWORD *)(a2 + 136);
    if ( v11 )
    {
      for ( i = 0; i != v11; ++i )
      {
        v13 = &v8[24 * i];
        v14 = *(void **)v13;
        if ( *(_QWORD *)v13 )
        {
          *((_QWORD *)v13 + 1) = 0;
          qfree(v14);
          v7 = *(char **)(a2 + 128);
        }
        v8 = v7;
      }
    }
    *(_QWORD *)(a2 + 136) = 0;
    qfree(v8);
    *(_QWORD *)(a2 + 128) = 0;
    *(_QWORD *)(a2 + 144) = 0;
  }
LABEL_21:
  v15 = *(void **)(a2 + 152);
  if ( v15 )
  {
    *(_QWORD *)(a2 + 160) = 0;
    qfree(v15);
    *(_QWORD *)(a2 + 152) = 0;
    *(_QWORD *)(a2 + 168) = 0;
  }
  if ( v37 )
  {
    *(_QWORD *)&v38 = 0;
    qfree(v37);
  }
  if ( ptr )
  {
    *(_QWORD *)&v36 = 0;
    qfree(ptr);
  }
  return v39 - __readfsqword(0x28u);
}

