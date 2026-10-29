unsigned __int64 __fastcall sub_88D4D0(_QWORD *a1, int **a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int *v6; // rax
  int *v7; // r12
  int *i; // rbx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rdx
  char *v13; // rsi
  char *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rcx
  int v19; // edx
  __int16 v20; // ax
  _QWORD *v21; // rax
  __int64 v22; // rdi
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  char *v27; // rdx
  __int64 v28; // rbp
  __int64 v29; // rbx
  char *v30; // rax
  void *v31; // rdi
  void *v32; // [rsp+0h] [rbp-148h] BYREF
  __int128 v33; // [rsp+8h] [rbp-140h]
  void *ptr; // [rsp+20h] [rbp-128h] BYREF
  __int128 v35; // [rsp+28h] [rbp-120h]
  void *v36; // [rsp+40h] [rbp-108h] BYREF
  __int128 v37; // [rsp+48h] [rbp-100h]
  int v38; // [rsp+60h] [rbp-E8h] BYREF
  __int16 v39; // [rsp+64h] [rbp-E4h]
  __int64 v40; // [rsp+68h] [rbp-E0h]
  __int64 v41; // [rsp+70h] [rbp-D8h]
  int v42; // [rsp+80h] [rbp-C8h]
  __int16 v43; // [rsp+84h] [rbp-C4h]
  unsigned __int64 v44; // [rsp+118h] [rbp-30h]

  v6 = a2[1];
  v7 = *a2;
  v44 = __readfsqword(0x28u);
  v32 = nullptr;
  v33 = 0;
  for ( i = (int *)((char *)v7 + 6 * (_QWORD)v6); i != v7; v7 = (int *)((char *)v7 + 6) )
  {
    v10 = a1[55];
    v11 = v10 + 6LL * a1[56];
    if ( v10 != v11 )
    {
      while ( *v7 != *(_DWORD *)v10 || *((_WORD *)v7 + 2) != *(_WORD *)(v10 + 4) )
      {
        v10 += 6;
        if ( v11 == v10 )
          goto LABEL_17;
      }
      if ( v10 != v11 )
      {
        memmove((void *)v10, (const void *)(v10 + 6), v11 - v10 - 6);
        v12 = v33;
        v13 = (char *)v32;
        --a1[56];
        v42 = *v7;
        v43 = *((_WORD *)v7 + 2);
        if ( *((_QWORD *)&v33 + 1) < (unsigned __int64)(v12 + 1) )
        {
          v32 = (void *)qvector_reserve(&v32, v13, v12 + 1, 6);
          v12 = v33;
          v13 = (char *)v32;
        }
        v14 = &v13[6 * v12];
        *(_DWORD *)v14 = v42;
        *((_WORD *)v14 + 2) = v43;
        v15 = a1[59];
        v16 = a1[58];
        *(_QWORD *)&v33 = v33 + 1;
        v17 = v16 + 6 * v15;
        if ( v16 == v17 )
          goto LABEL_23;
        v18 = v16;
        while ( *v7 != *(_DWORD *)v18 || *((_WORD *)v7 + 2) != *(_WORD *)(v18 + 4) )
        {
          v18 += 6;
          if ( v17 == v18 )
            goto LABEL_23;
        }
        if ( v18 == v17 )
        {
LABEL_23:
          v24 = v15 + 1;
          v42 = *v7;
          v43 = *((_WORD *)v7 + 2);
          if ( a1[60] < v24 )
          {
            v25 = qvector_reserve(a1 + 58, v16, v24, 6);
            v26 = a1[59];
            a1[58] = v25;
            v17 = v25 + 6 * v26;
          }
          *(_DWORD *)v17 = v42;
          *(_WORD *)(v17 + 4) = v43;
          ++a1[59];
        }
        v19 = *v7;
        v20 = *((_WORD *)v7 + 2);
        v40 = 0;
        v42 = v19;
        v38 = v19;
        v43 = v20;
        v39 = v20;
        v41 = 0;
        v21 = (_QWORD *)sub_889800((__int64)a1, (__int64)&v38);
        sub_88CC80((__int64)a1, v21, 1, 0, 0);
      }
    }
LABEL_17:
    ;
  }
  v22 = a1[54];
  ptr = nullptr;
  v36 = nullptr;
  v35 = 0;
  v37 = 0;
  if ( v22 && (_QWORD)v33 )
  {
    sub_7EF570(v22, (__int64)&v32, (__int64 *)&v36, (__int64)&ptr, a5, a6);
    v27 = (char *)v36;
    if ( v36 )
    {
      v28 = v37;
      if ( (_QWORD)v37 )
      {
        v29 = 0;
        do
        {
          v30 = &v27[32 * v29];
          v31 = *((void **)v30 + 1);
          if ( v31 )
          {
            *((_QWORD *)v30 + 2) = 0;
            qfree(v31);
            v27 = (char *)v36;
          }
          ++v29;
        }
        while ( v28 != v29 );
      }
      *(_QWORD *)&v37 = 0;
      qfree(v27);
    }
    if ( ptr )
    {
      *(_QWORD *)&v35 = 0;
      qfree(ptr);
    }
  }
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree(v32);
  }
  return v44 - __readfsqword(0x28u);
}

