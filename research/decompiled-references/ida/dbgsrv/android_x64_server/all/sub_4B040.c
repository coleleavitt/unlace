/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B040
// Address: 0x000000000004B040

//----- (000000000004B040) ----------------------------------------------------
unsigned __int64 __fastcall sub_4B040(__int64 a1, const void *a2, int a3, char a4, char a5, __int64 a6, __int64 a7)
{
  __int64 v7; // rbx
  __int64 v8; // rax
  _QWORD *v9; // r14
  unsigned __int64 *v10; // rcx
  __int64 v11; // r13
  void **v12; // rdi
  __int64 v13; // rcx
  void *v14; // rax
  __int64 v15; // rdi
  unsigned __int64 *v16; // rsi
  __int64 v17; // r15
  __int64 v18; // rbp
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  char *v21; // r13
  __int64 v22; // r12
  __int64 v23; // rbx
  const void *v24; // rbp
  size_t v25; // rax
  size_t v26; // r14
  unsigned __int64 v27; // rbx
  bool v28; // cf
  char *v29; // rax
  const char *v30; // rax
  __int64 v31; // rax
  unsigned __int64 v32; // rdx
  char *v33; // r12
  _QWORD *v34; // rcx
  __int64 v35; // rbp
  char *v36; // r14
  size_t v37; // rax
  size_t v38; // r15
  unsigned __int64 v39; // r13
  char *v40; // rax
  __int64 v41; // rcx
  unsigned __int64 v42; // rdx
  char *v43; // rax
  const char *v44; // rdx
  __int64 v45; // rcx
  unsigned __int64 v47; // [rsp+0h] [rbp-98h]
  __int64 v48; // [rsp+0h] [rbp-98h]
  char **v51; // [rsp+10h] [rbp-88h]
  char **v55; // [rsp+30h] [rbp-68h]
  unsigned __int64 *v56; // [rsp+38h] [rbp-60h]
  _QWORD *v58; // [rsp+50h] [rbp-48h]
  _QWORD v59[8]; // [rsp+58h] [rbp-40h] BYREF

  v7 = a1;
  v59[1] = __readfsqword(0x28u);
  if ( a6 )
  {
    if ( (a3 & 0x100) != 0 )
    {
      v8 = 1;
    }
    else
    {
      switch ( a4 )
      {
        case 1:
          v8 = 16;
          break;
        case 7:
          v8 = 64;
          break;
        case 2:
          v8 = 32;
          break;
        default:
          if ( !(_BYTE)under_debugger )
            interr(1795);
          BUG();
      }
    }
    v47 = v8;
    v12 = (void **)(a1 + 72);
    v13 = *(_QWORD *)(v7 + 80);
    if ( *(_QWORD *)(v7 + 88) >= (unsigned __int64)(v13 + 1) )
    {
      v14 = *v12;
    }
    else
    {
      v14 = qvector_reserve((__int64)v12, *(char **)(v7 + 72), v13 + 1, 0x18u);
      *(_QWORD *)(v7 + 72) = v14;
      v13 = *(_QWORD *)(v7 + 80);
    }
    v15 = (__int64)v14 + 24 * v13;
    *(_OWORD *)v15 = 0;
    *(_QWORD *)(v15 + 16) = 0;
    ++*(_QWORD *)(v7 + 80);
    v59[0] = 0;
    sub_4B430(v15, v47, (char *)v59);
    v51 = (char **)(v7 + 24);
    v9 = (_QWORD *)(v7 + 32);
    v16 = (unsigned __int64 *)(v7 + 40);
    v17 = 0;
    v18 = a6;
    v56 = (unsigned __int64 *)(v7 + 40);
    v58 = (_QWORD *)(v7 + 32);
    do
    {
      if ( *(_QWORD *)(v18 + 8 * v17) )
      {
        v19 = *v9;
        v20 = *v9 + 1LL;
        if ( *v16 >= v20 )
        {
          v21 = *v51;
        }
        else
        {
          v21 = (char *)qvector_reserve((__int64)v51, *v51, v20, 0x18u);
          *v51 = v21;
          v19 = *v9;
        }
        v22 = 3 * v19;
        *(_OWORD *)&v21[8 * v22] = 0;
        *(_QWORD *)&v21[8 * v22 + 16] = 0;
        ++*v9;
        v23 = v18;
        v24 = *(const void **)(v18 + 8 * v17);
        if ( v24 && (v25 = strlen((const char *)v24)) != 0 )
        {
          v26 = v25;
          v27 = v25 + 1;
          v28 = *(_QWORD *)&v21[8 * v22 + 16] < v25 + 1;
          v29 = *(char **)&v21[8 * v22];
          v55 = (char **)&v21[8 * v22];
          if ( v28 )
          {
            v29 = (char *)qvector_reserve((__int64)&v21[8 * v22], v29, v27, 1u);
            *v55 = v29;
          }
          *(_QWORD *)&v21[8 * v22 + 8] = v27;
          memmove(v29, v24, v26);
          (*v55)[v26] = 0;
          v30 = s1;
          v18 = a6;
          v16 = v56;
          if ( *(_QWORD *)&v21[8 * v22 + 8] )
            v30 = *v55;
        }
        else
        {
          *(_QWORD *)&v21[8 * v22 + 8] = 0;
          v30 = s1;
          v18 = v23;
          v16 = v56;
        }
        *(_QWORD *)(*(_QWORD *)v15 + 8 * v17) = v30;
        v9 = v58;
      }
      ++v17;
    }
    while ( v47 != v17 );
    v11 = *(_QWORD *)v15;
    v10 = v16;
    v7 = a1;
  }
  else
  {
    v51 = (char **)(a1 + 24);
    v9 = (_QWORD *)(a1 + 32);
    v10 = (unsigned __int64 *)(a1 + 40);
    v11 = 0;
  }
  v31 = *v9;
  v32 = *v9 + 1LL;
  if ( *v10 >= v32 )
  {
    v33 = *(char **)(v7 + 24);
  }
  else
  {
    v33 = (char *)qvector_reserve((__int64)v51, *v51, v32, 0x18u);
    *v51 = v33;
    v31 = *v9;
  }
  v34 = v9;
  v35 = 3 * v31;
  v36 = &v33[24 * v31];
  *(_OWORD *)v36 = 0;
  *((_QWORD *)v36 + 2) = 0;
  ++*v34;
  if ( a2 && (v37 = strlen((const char *)a2)) != 0 )
  {
    v38 = v37;
    v48 = v11;
    v39 = v37 + 1;
    v28 = *(_QWORD *)&v33[8 * v35 + 16] < v37 + 1;
    v40 = *(char **)v36;
    if ( v28 )
    {
      v40 = (char *)qvector_reserve((__int64)&v33[8 * v35], *(char **)v36, v39, 1u);
      *(_QWORD *)v36 = v40;
    }
    *(_QWORD *)&v33[8 * v35 + 8] = v39;
    memmove(v40, a2, v38);
    *(_BYTE *)(*(_QWORD *)v36 + v38) = 0;
    v11 = v48;
  }
  else
  {
    *(_QWORD *)&v33[8 * v35 + 8] = 0;
  }
  v41 = *(_QWORD *)(a1 + 8);
  v42 = v41 + 1;
  if ( *(_QWORD *)(a1 + 16) >= (unsigned __int64)(v41 + 1) )
  {
    v43 = *(char **)a1;
  }
  else
  {
    v43 = (char *)qvector_reserve(a1, *(char **)a1, v42, 0x20u);
    *(_QWORD *)a1 = v43;
    v41 = *(_QWORD *)(a1 + 8);
    v42 = v41 + 1;
  }
  *(_QWORD *)(a1 + 8) = v42;
  if ( *(_QWORD *)&v33[8 * v35 + 8] )
    v44 = *(const char **)v36;
  else
    v44 = s1;
  v45 = 32 * v41;
  *(_QWORD *)&v43[v45] = v44;
  *(_DWORD *)&v43[v45 + 8] = a3;
  v43[v45 + 13] = a4;
  v43[v45 + 12] = a5;
  *(_QWORD *)&v43[v45 + 16] = v11;
  *(_QWORD *)&v43[v45 + 24] = a7;
  return __readfsqword(0x28u);
}
// 158B40: using guessed type __int64 under_debugger;
