__int64 __fastcall replace_tabs(__int64 *a1, const char *a2, unsigned int a3)
{
  unsigned int v3; // r15d
  __int64 v4; // rax
  __int64 v5; // r14
  const char *v7; // r13
  char *v9; // rax
  char *v10; // r12
  size_t v11; // r15
  signed __int64 v12; // r10
  __int64 v13; // rsi
  signed __int64 v14; // rdx
  const char *v15; // rsi
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // r15
  __int64 v20; // rsi
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  size_t v23; // rax
  size_t v24; // rbp
  size_t v25; // r12
  __int64 v26; // rsi
  size_t v27; // rdx
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // [rsp+0h] [rbp-68h]
  signed __int64 v35; // [rsp+8h] [rbp-60h]
  signed __int64 v36; // [rsp+10h] [rbp-58h]
  char v37; // [rsp+27h] [rbp-41h] BYREF
  unsigned __int64 v38; // [rsp+28h] [rbp-40h]

  v3 = 0;
  v38 = __readfsqword(0x28u);
  v4 = 0;
  if ( a2 )
  {
    v5 = a1[1];
    v7 = a2;
    if ( a3 )
    {
      if ( v5 )
        v4 = v5 - 1;
      v34 = v4;
      while ( 1 )
      {
        v9 = strchr(v7, 9);
        v10 = v9;
        if ( !v9 )
          break;
        v11 = v9 - v7;
        v12 = v9 - v7;
        if ( v5 )
        {
          --v5;
          v12 = v11 + v5;
        }
        v13 = *a1;
        v14 = v12 + 1;
        if ( a1[2] < (unsigned __int64)(v12 + 1) )
        {
          v36 = v12;
          v35 = v12 + 1;
          v31 = qvector_reserve(a1, v13, v14, 1);
          v12 = v36;
          v14 = v35;
          *a1 = v31;
          v13 = v31;
        }
        a1[1] = v14;
        *(_BYTE *)(v13 + v12) = 0;
        v15 = v7;
        v7 = v10 + 1;
        memmove((void *)(v5 + *a1), v15, v11);
        v16 = a1[1];
        if ( v16 )
        {
          v37 = 32;
          v17 = *a1;
          v18 = v16 - 1 + (int)(a3 - (v16 - 1 - v34) % a3);
          if ( v16 - 1 < v18 )
          {
            *(_BYTE *)(v17 + v16 - 1) = 32;
            v16 = a1[1];
            v17 = *a1;
          }
          v19 = v18 + 1;
          v20 = v17;
          if ( v18 + 1 < v16 )
            goto LABEL_20;
        }
        else
        {
          v37 = 32;
          v17 = *a1;
          v18 = (int)(a3 - -v34 % (unsigned __int64)a3);
          v19 = v18 + 1;
        }
        v20 = v17;
        if ( v16 >= v19 )
          goto LABEL_21;
        v21 = a1[2];
        if ( (unsigned __int64)&v37 < v17 || (unsigned __int64)&v37 >= v17 + v21 )
        {
          if ( v21 < v19 )
          {
            v32 = qvector_reserve(a1, v17, v19, 1);
            v16 = a1[1];
            *a1 = v32;
            v20 = v32;
          }
          v30 = v16;
          if ( v16 < v19 )
          {
            do
            {
              *(_BYTE *)(v20 + v30++) = 32;
              v20 = *a1;
            }
            while ( v19 != v30 );
          }
        }
        else
        {
          if ( v21 < v19 )
          {
            v33 = qvector_reserve(a1, v17, v19, 1);
            v16 = a1[1];
            *a1 = v33;
            v20 = v33;
          }
          v22 = v16;
          if ( v16 < v19 )
          {
            do
            {
              *(_BYTE *)(v20 + v22++) = 32;
              v20 = *a1;
            }
            while ( v19 != v22 );
          }
        }
LABEL_20:
        a1[1] = v19;
LABEL_21:
        *(_BYTE *)(v20 + v18) = 0;
        v3 = 1;
        v5 = a1[1];
      }
    }
    v23 = strlen(v7);
    v24 = v23;
    v25 = v23;
    if ( v5 )
    {
      --v5;
      v25 = v23 + v5;
    }
    v26 = *a1;
    v27 = v25 + 1;
    if ( a1[2] < v25 + 1 )
    {
      v29 = qvector_reserve(a1, v26, v27, 1);
      v27 = v25 + 1;
      *a1 = v29;
      v26 = v29;
    }
    a1[1] = v27;
    *(_BYTE *)(v26 + v25) = 0;
    memmove((void *)(v5 + *a1), v7, v24);
  }
  return v3;
}

