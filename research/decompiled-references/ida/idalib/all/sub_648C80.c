unsigned __int64 __fastcall sub_648C80(__int64 a1, __int64 a2, int a3)
{
  const char *v3; // r15
  _QWORD *v4; // r13
  __int64 v6; // rbp
  void **v7; // r14
  const char *v8; // rbx
  const char *v9; // rbp
  const char *v10; // rax
  __int64 v11; // rbx
  size_t v12; // rbp
  void *v13; // r12
  void *v14; // rdi
  size_t v16; // rax
  size_t v17; // rax
  size_t v18; // rbx
  void *v19; // rdi
  size_t v20; // rbp
  __int64 v21; // rax
  const char *v22; // rsi
  size_t v23; // [rsp+0h] [rbp-88h]
  size_t n; // [rsp+8h] [rbp-80h]
  void *src; // [rsp+10h] [rbp-78h] BYREF
  __int128 v26; // [rsp+18h] [rbp-70h]
  void *dest; // [rsp+30h] [rbp-58h] BYREF
  __int128 v28; // [rsp+38h] [rbp-50h]
  unsigned __int64 v29; // [rsp+48h] [rbp-40h]

  v3 = *(const char **)(a2 + 8);
  v4 = *(_QWORD **)(a1 + 1704);
  v29 = __readfsqword(0x28u);
  v6 = *(unsigned int *)(a2 + 4);
  v26 = 0;
  src = nullptr;
  v7 = (void **)(v4 + 6);
  v8 = v3;
  dest = nullptr;
  v9 = &v3[v6];
  v28 = 0;
  while ( v8 < v9 )
  {
    if ( !*v8++ )
    {
      if ( v3 && (v16 = strlen(v3)) != 0 )
      {
        n = v16;
        v23 = v16 + 1;
        v22 = v3;
        src = (void *)qvector_reserve(&src, 0, v16 + 1, 1);
        v3 = v8;
        *(_QWORD *)&v26 = v23;
        memmove(src, v22, n);
        *((_BYTE *)src + n) = 0;
      }
      else
      {
        v3 = v8;
      }
      break;
    }
  }
  v10 = v3;
  do
  {
    if ( v10 >= v9 )
      goto LABEL_7;
    ++v10;
  }
  while ( *(v10 - 1) );
  if ( v3 )
  {
    v17 = strlen(v3);
    v18 = v17;
    if ( v17 )
    {
      v19 = dest;
      v20 = v17 + 1;
      if ( *((_QWORD *)&v28 + 1) < v17 + 1 )
      {
        dest = (void *)qvector_reserve(&dest, dest, v20, 1);
        v19 = dest;
      }
      *(_QWORD *)&v28 = v20;
      memmove(v19, v3, v18);
      *((_BYTE *)dest + v18) = 0;
      if ( a3 )
        goto LABEL_26;
LABEL_8:
      if ( v7 == &src )
        goto LABEL_13;
      v11 = v26;
      if ( (_QWORD)v26 )
      {
        v12 = v26 - 1;
        if ( (_QWORD)v26 != 1 )
        {
          v13 = src;
          v14 = (void *)v4[6];
          if ( v4[8] < (unsigned __int64)v26 )
          {
LABEL_30:
            v21 = qvector_reserve(v4 + 6, v14, v11, 1);
            v4[6] = v21;
            v14 = (void *)v21;
          }
LABEL_12:
          v4[7] = v11;
          memmove(v14, v13, v12);
          *(_BYTE *)(v4[6] + v11 - 1) = 0;
          goto LABEL_13;
        }
      }
      goto LABEL_32;
    }
  }
LABEL_7:
  *(_QWORD *)&v28 = 0;
  if ( !a3 )
    goto LABEL_8;
LABEL_26:
  if ( v7 == &dest )
    goto LABEL_13;
  v11 = v28;
  if ( (_QWORD)v28 )
  {
    v12 = v28 - 1;
    if ( (_QWORD)v28 != 1 )
    {
      v13 = dest;
      v14 = (void *)v4[6];
      if ( v4[8] < (unsigned __int64)v28 )
        goto LABEL_30;
      goto LABEL_12;
    }
  }
LABEL_32:
  v4[7] = 0;
LABEL_13:
  if ( dest )
  {
    *(_QWORD *)&v28 = 0;
    qfree(dest);
  }
  if ( src )
  {
    *(_QWORD *)&v26 = 0;
    qfree(src);
  }
  return v29 - __readfsqword(0x28u);
}
