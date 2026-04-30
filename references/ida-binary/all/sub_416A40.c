__int64 __fastcall sub_416A40(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r14d
  size_t v4; // rbp
  char *v9; // rax
  const void *v10; // rsi
  char *v11; // r12
  unsigned __int64 v12; // rsi
  char *v13; // rax
  signed __int64 v14; // r14
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // rbp
  unsigned __int8 *v18; // r12
  unsigned __int8 *v19; // rbp
  size_t v20; // r13
  unsigned __int8 *v21; // r12
  unsigned __int8 *v22; // r14
  unsigned __int64 v23; // rsi
  unsigned __int8 *v24; // rdi
  unsigned __int8 *v25; // rdi
  unsigned __int8 *v26; // rdx
  int v27; // eax
  unsigned __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // r8
  int v31; // ecx
  unsigned __int8 *v32; // rax
  unsigned __int64 v33; // rax
  void *v34; // rdi
  unsigned __int8 *v35; // r13
  unsigned __int8 *v36; // rbp
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  char *s; // [rsp+0h] [rbp-58h] BYREF
  __int128 v41; // [rsp+8h] [rbp-50h]
  unsigned __int64 v42; // [rsp+18h] [rbp-40h]

  v3 = 0;
  v4 = *(_QWORD *)(a3 + 8);
  v42 = __readfsqword(0x28u);
  s = nullptr;
  v41 = 0;
  if ( !v4 )
    return v3;
  v9 = (char *)qalloc_or_throw(v4);
  v10 = *(const void **)a3;
  *((_QWORD *)&v41 + 1) = v4;
  s = v9;
  memcpy(v9, v10, v4);
  v11 = s;
  v12 = 46;
  *(_QWORD *)&v41 = v4;
  v13 = strchr(s, 46);
  if ( v13 )
  {
    v14 = v13 - s;
    if ( v13 - s != -1 )
    {
      if ( !v14 )
      {
        if ( s )
        {
          v41 = 0u;
          qfree(s, (_BYTE *)&qword_28 + 6);
          s = nullptr;
          v4 = 0;
        }
        if ( v4 <= 1 )
          return 0;
        v11 = s;
LABEL_15:
        v12 = (unsigned __int64)"localhost";
        v3 = 0;
        if ( !strncasecmp(v11, "localhost", 9u) )
          goto LABEL_46;
        if ( a1 != (__int64 *)a2 )
        {
          v16 = *(_QWORD *)(a2 + 8);
          if ( v16 <= 1 )
          {
            a1[1] = 0;
            goto LABEL_19;
          }
          v34 = (void *)*a1;
          v35 = *(unsigned __int8 **)a2;
          if ( a1[2] < v16 )
          {
            v39 = qvector_reserve(a1, *a1, v16, 1);
            *a1 = v39;
            v34 = (void *)v39;
          }
          a1[1] = v16;
          memmove(v34, v35, v16 - 1);
          *(_BYTE *)(*a1 + v16 - 1) = 0;
        }
        v36 = (unsigned __int8 *)a1[1];
        if ( v36 )
        {
          v18 = v36 - 1;
          v12 = *a1;
          v17 = (unsigned __int64)(v36 + 1);
          if ( a1[2] >= v17 )
            goto LABEL_20;
          goto LABEL_53;
        }
LABEL_19:
        v12 = *a1;
        v17 = 2;
        v18 = nullptr;
        if ( (unsigned __int64)a1[2] >= 2 )
        {
LABEL_20:
          a1[1] = v17;
          v18[v12] = 95;
          v18[*a1 + 1] = 0;
          v19 = (unsigned __int8 *)v41;
          if ( (_QWORD)v41 )
          {
            v20 = v41 - 1;
            if ( (_QWORD)v41 != 1 )
            {
              v21 = (unsigned __int8 *)a1[1];
              v22 = (unsigned __int8 *)(v41 - 1);
              if ( v21 )
              {
                --v21;
                v22 = &v21[v20];
                v19 = &v21[v41];
              }
              v23 = *a1;
              if ( a1[2] < (unsigned __int64)v19 )
              {
                v38 = qvector_reserve(a1, v23, v19, 1);
                *a1 = v38;
                v23 = v38;
              }
              a1[1] = (__int64)v19;
              v22[v23] = 0;
              v12 = (unsigned __int64)s;
              memcpy(&v21[*a1], s, v20);
            }
          }
          v24 = (unsigned __int8 *)a1[1];
          if ( !v24 || (v25 = v24 - 1) == nullptr )
          {
LABEL_45:
            v11 = s;
            v3 = 1;
            goto LABEL_46;
          }
          v26 = (unsigned __int8 *)*a1;
          v27 = *(unsigned __int8 *)*a1;
          v28 = (unsigned int)(v27 - 65);
          if ( (unsigned __int8)(v27 - 65) > 0x39u )
          {
            v29 = 0;
          }
          else
          {
            v12 = 0x3FFFFFF43FFFFFFLL;
            v29 = 0;
            if ( _bittest64((const __int64 *)&v12, v28) )
              goto LABEL_31;
          }
LABEL_37:
          *v26 = 95;
LABEL_31:
          v30 = 0x3FFFFFF43FFFFFFLL;
          while ( (unsigned __int8 *)++v29 != v25 )
          {
            v26 = (unsigned __int8 *)(v29 + *a1);
            v31 = *v26;
            v12 = (unsigned int)(v31 - 65);
            if ( (unsigned __int8)(v31 - 65) > 0x39u || !_bittest64(&v30, v12) )
            {
              v12 = (unsigned int)(v31 - 48);
              if ( (unsigned __int8)(v31 - 48) > 9u && (_BYTE)v31 != 45 )
                goto LABEL_37;
            }
          }
          v32 = (unsigned __int8 *)a1[1];
          if ( v32 && (unsigned __int64)(v32 - 1) > 0x40 )
          {
            v33 = *a1;
            a1[1] = 65;
            *(_BYTE *)(v33 + 64) = 0;
          }
          goto LABEL_45;
        }
LABEL_53:
        v37 = qvector_reserve(a1, v12, v17, 1);
        *a1 = v37;
        v12 = v37;
        goto LABEL_20;
      }
      v15 = v14 + 1;
      if ( v4 < v14 + 1 )
      {
        if ( *((_QWORD *)&v41 + 1) < v15 )
        {
          s = (char *)qvector_reserve(&s, s, v14 + 1, 1);
          v4 = v41;
          v11 = s;
        }
        v12 = 0;
        memset(&v11[v4], 0, v15 - v4);
        *(_QWORD *)&v41 = v14 + 1;
        v13 = &s[v14];
      }
      else if ( v4 != v14 + 1 )
      {
        *(_QWORD *)&v41 = v14 + 1;
      }
      *v13 = 0;
      v4 = v41;
      v11 = s;
    }
  }
  if ( v4 > 1 )
    goto LABEL_15;
  v3 = 0;
LABEL_46:
  if ( v11 )
  {
    *(_QWORD *)&v41 = 0;
    qfree(v11, (const char *)v12);
  }
  return v3;
}
