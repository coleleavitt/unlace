unsigned __int64 __fastcall sub_2FB180(_QWORD *a1, const void *a2, _QWORD *a3)
{
  unsigned __int64 v3; // r12
  _QWORD *v4; // rbx
  _QWORD *v5; // r13
  _QWORD *v6; // r15
  _QWORD *v7; // rbp
  size_t v8; // r14
  size_t v9; // r14
  __int64 v10; // rax
  __int64 v11; // rax
  size_t v12; // r14
  void *v13; // rax
  void *v14; // rax
  void *v15; // rax
  __int64 *v16; // rbp
  unsigned __int64 v17; // r15
  size_t v18; // r8
  unsigned __int64 v19; // r15
  size_t v20; // r8
  int v21; // eax
  _QWORD *v22; // rax
  unsigned __int64 v23; // r15
  size_t v24; // r8
  const void *v25; // r9
  void *v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v29; // rdi
  const void *v31; // r9
  void *v32; // rax
  const void *v33; // r9
  void *v34; // rax
  __int64 v35; // rax
  const void *v36; // [rsp+10h] [rbp-68h]
  const void *v37; // [rsp+10h] [rbp-68h]
  const void *v38; // [rsp+10h] [rbp-68h]
  _QWORD *v39; // [rsp+18h] [rbp-60h] BYREF
  _QWORD *v40; // [rsp+20h] [rbp-58h]
  _QWORD *v41; // [rsp+28h] [rbp-50h] BYREF
  _QWORD *v42; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v43; // [rsp+38h] [rbp-40h]

  v3 = (unsigned __int64)&a3[12 * (_QWORD)a2];
  v4 = a1;
  v39 = a3;
  v43 = __readfsqword(0x28u);
  v41 = a3;
  v40 = &v39;
  if ( (unsigned __int64)a1 >= v3 )
  {
    if ( (_QWORD *)v3 == a3 )
      return v43 - __readfsqword(0x28u);
    v5 = a1;
    v6 = &a3[12 * (_QWORD)a2];
LABEL_3:
    v7 = a3;
    do
    {
      v11 = *v4;
      v7[1] = 0;
      *((_OWORD *)v7 + 1) = 0;
      *v7 = v11;
      v12 = v4[2];
      if ( v12 )
      {
        v13 = (void *)qalloc_or_throw(v4[2]);
        v7[1] = v13;
        v7[3] = v12;
        a2 = (const void *)v4[1];
        memcpy(v13, a2, v12);
        v7[2] = v12;
      }
      v7[4] = 0;
      *(_OWORD *)(v7 + 5) = 0;
      v8 = v4[5];
      if ( v8 )
      {
        v15 = (void *)qalloc_or_throw(v4[5]);
        v7[4] = v15;
        v7[6] = v8;
        a2 = (const void *)v4[4];
        memcpy(v15, a2, v8);
        v7[5] = v8;
      }
      v7[7] = 0;
      *((_OWORD *)v7 + 4) = 0;
      v9 = v4[8];
      if ( v9 )
      {
        v14 = (void *)qalloc_or_throw(v4[8]);
        v7[7] = v14;
        v7[9] = v9;
        a2 = (const void *)v4[7];
        memcpy(v14, a2, v9);
        v7[8] = v9;
      }
      v10 = v4[10];
      v7 += 12;
      v4 += 12;
      *(v7 - 2) = v10;
      *((_DWORD *)v7 - 2) = *((_DWORD *)v4 - 2);
      *((_DWORD *)v7 - 1) = *((_DWORD *)v4 - 1);
      v39 = v7;
    }
    while ( v7 != v6 );
    v42 = v6;
    v40 = &v42;
    if ( (_QWORD *)v3 == v6 )
      goto LABEL_29;
    goto LABEL_12;
  }
  v5 = &a3[12 * (_QWORD)a2];
  v6 = a1;
  if ( a3 != a1 )
    goto LABEL_3;
  v42 = a3;
  v40 = &v42;
LABEL_12:
  v16 = v6 + 1;
  do
  {
    *(v16 - 1) = *v4;
    if ( v16 != v4 + 1 )
    {
      v23 = v4[2];
      if ( !v23 || (v24 = v23 - 1, v23 == 1) )
      {
        v16[1] = 0;
      }
      else
      {
        v25 = (const void *)v4[1];
        v26 = (void *)*v16;
        if ( v16[2] < v23 )
        {
          v38 = (const void *)v4[1];
          v35 = qvector_reserve(v16, *v16, v4[2], 1);
          *v16 = v35;
          v25 = v38;
          v26 = (void *)v35;
          v24 = v23 - 1;
        }
        v16[1] = v23;
        a2 = v25;
        memmove(v26, v25, v24);
        *(_BYTE *)(*v16 + v23 - 1) = 0;
      }
    }
    if ( v16 + 3 != v4 + 4 )
    {
      v17 = v4[5];
      if ( v17 && (v18 = v17 - 1, v17 != 1) )
      {
        v31 = (const void *)v4[4];
        v32 = (void *)v16[3];
        if ( v16[5] < v17 )
        {
          v37 = (const void *)v4[4];
          v32 = (void *)qvector_reserve(v16 + 3, v16[3], v4[5], 1);
          v31 = v37;
          v18 = v17 - 1;
          v16[3] = (__int64)v32;
        }
        v16[4] = v17;
        a2 = v31;
        memmove(v32, v31, v18);
        *(_BYTE *)(v16[3] + v17 - 1) = 0;
      }
      else
      {
        v16[4] = 0;
      }
    }
    if ( v16 + 6 != v4 + 7 )
    {
      v19 = v4[8];
      if ( v19 && (v20 = v19 - 1, v19 != 1) )
      {
        v33 = (const void *)v4[7];
        v34 = (void *)v16[6];
        if ( v16[8] < v19 )
        {
          v36 = (const void *)v4[7];
          v34 = (void *)qvector_reserve(v16 + 6, v16[6], v4[8], 1);
          v33 = v36;
          v20 = v19 - 1;
          v16[6] = (__int64)v34;
        }
        v16[7] = v19;
        a2 = v33;
        memmove(v34, v33, v20);
        *(_BYTE *)(v16[6] + v19 - 1) = 0;
      }
      else
      {
        v16[7] = 0;
      }
    }
    v21 = *((_DWORD *)v4 + 20);
    v4 += 12;
    *((_DWORD *)v16 + 18) = v21;
    *((_DWORD *)v16 + 19) = *((_DWORD *)v4 - 3);
    *((_DWORD *)v16 + 20) = *((_DWORD *)v4 - 2);
    *((_DWORD *)v16 + 21) = *((_DWORD *)v4 - 1);
    v22 = v16 + 11;
    v16 += 12;
    v39 = v22;
  }
  while ( (_QWORD *)v3 != v22 );
LABEL_29:
  v40 = &v41;
  while ( v4 != v5 )
  {
    v27 = *(v4 - 5);
    v4 -= 12;
    if ( v27 )
    {
      v4[8] = 0;
      qfree(v27, (const char *)a2);
    }
    v28 = v4[4];
    if ( v28 )
    {
      v4[5] = 0;
      qfree(v28, (const char *)a2);
    }
    v29 = v4[1];
    if ( v29 )
    {
      v4[2] = 0;
      qfree(v29, (const char *)a2);
    }
  }
  return v43 - __readfsqword(0x28u);
}
