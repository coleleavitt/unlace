__int64 __fastcall sub_3242C0(__int64 *a1, __int64 a2, const char *a3, unsigned int a4)
{
  unsigned int v4; // r12d
  __int64 v5; // r13
  __int64 v6; // rsi
  unsigned __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // r13
  unsigned __int64 v10; // r14
  __int64 v11; // rsi
  size_t v12; // rax
  __int64 v13; // r13
  size_t v14; // r14
  size_t v15; // r15
  __int64 v16; // rsi
  unsigned __int64 v17; // rdx
  __int64 v19; // rax
  size_t v20; // r14
  __int64 v21; // r13
  size_t v22; // r15
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int64 v27; // [rsp+0h] [rbp-60h]
  char *sa; // [rsp+8h] [rbp-58h]
  void *src; // [rsp+10h] [rbp-50h] BYREF
  __int128 v31; // [rsp+18h] [rbp-48h]
  unsigned __int64 v32; // [rsp+28h] [rbp-38h]

  v32 = __readfsqword(0x28u);
  src = nullptr;
  v31 = 0;
  v4 = print_tinfo(&src, 0, 2, 40, a4, a2, a3, 0);
  if ( !(_BYTE)v4 )
  {
    v5 = a1[1];
    if ( v5 )
    {
      v7 = v5 + 1;
      v8 = a1[1];
      v6 = *a1;
      --v5;
      if ( a1[2] >= v7 )
        goto LABEL_4;
    }
    else
    {
      v6 = *a1;
      v7 = 2;
      v8 = 1;
      if ( (unsigned __int64)a1[2] >= 2 )
        goto LABEL_4;
    }
    v19 = qvector_reserve(a1, v6, v7, 1);
    *a1 = v19;
    v6 = v19;
LABEL_4:
    a1[1] = v7;
    *(_BYTE *)(v6 + v8) = 0;
    *(_BYTE *)(*a1 + v5) = 63;
    if ( !a3 )
      goto LABEL_10;
    v9 = a1[1];
    v10 = 2;
    if ( v9 )
    {
      v10 = v9 + 1;
      v11 = *a1;
      --v9;
      if ( a1[2] >= v10 )
        goto LABEL_7;
    }
    else
    {
      v11 = *a1;
      if ( (unsigned __int64)a1[2] >= 2 )
        goto LABEL_7;
    }
    v25 = qvector_reserve(a1, v11, v10, 1);
    *a1 = v25;
    v11 = v25;
LABEL_7:
    a1[1] = v10;
    *(_BYTE *)(v11 + v9) = 32;
    *(_BYTE *)(*a1 + v9 + 1) = 0;
    v12 = strlen(a3);
    v13 = a1[1];
    v14 = v12;
    v15 = v12;
    if ( v13 )
    {
      --v13;
      v16 = *a1;
      v15 = v12 + v13;
      v17 = v12 + v13 + 1;
      if ( a1[2] >= v17 )
        goto LABEL_9;
    }
    else
    {
      v16 = *a1;
      v17 = v12 + 1;
      if ( a1[2] >= v12 + 1 )
      {
LABEL_9:
        a1[1] = v17;
        *(_BYTE *)(v16 + v15) = 0;
        memmove((void *)(v13 + *a1), a3, v14);
        goto LABEL_10;
      }
    }
    v27 = v17;
    v24 = qvector_reserve(a1, v16, v17, 1);
    *a1 = v24;
    v17 = v27;
    v16 = v24;
    goto LABEL_9;
  }
  sa = (char *)v31;
  if ( (_QWORD)v31 )
  {
    v20 = v31 - 1;
    if ( (_QWORD)v31 != 1 )
    {
      v21 = a1[1];
      v22 = v31 - 1;
      if ( v21 )
      {
        --v21;
        v22 = v20 + v21;
        sa = (char *)(v31 + v21);
      }
      v23 = *a1;
      if ( a1[2] < (unsigned __int64)sa )
      {
        v26 = qvector_reserve(a1, v23, sa, 1);
        *a1 = v26;
        v23 = v26;
      }
      a1[1] = (__int64)sa;
      *(_BYTE *)(v23 + v22) = 0;
      memcpy((void *)(v21 + *a1), src, v20);
    }
  }
LABEL_10:
  if ( src )
  {
    *(_QWORD *)&v31 = 0;
    qfree(src);
  }
  return v4;
}
