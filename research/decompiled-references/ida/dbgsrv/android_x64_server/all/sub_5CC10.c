/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5CC10
// Address: 0x000000000005CC10

//----- (000000000005CC10) ----------------------------------------------------
__int64 __fastcall sub_5CC10(__int64 a1, unsigned int *a2, __int64 a3)
{
  __int64 *v5; // rax
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // r15
  unsigned __int64 v11; // rdx
  char *v12; // rax
  char *v13; // rbp
  __int64 v14; // r15
  _QWORD *v15; // rbx
  _QWORD *v16; // rdi
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rdi
  int v21; // edx
  __int64 *v22; // rdx
  _QWORD *v23; // rbx
  _QWORD *v24; // rdi
  __int64 v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rdi
  int v29; // edx
  __int64 *v30; // rdx
  __int64 result; // rax
  unsigned __int16 v32; // r12
  char *v33; // rcx
  __int64 v34; // r14
  char *v35; // rbx
  void **v36; // rbp
  unsigned __int16 v37; // ax
  char *v38; // rax
  __int64 *v39; // rcx
  char *v40; // r15
  __int64 v41; // rax
  __int64 *v42; // rsi
  _QWORD *v43; // [rsp+8h] [rbp-40h]
  __int64 *v44; // [rsp+8h] [rbp-40h]

  v5 = *(__int64 **)(a1 + 16);
  v6 = *v5;
  v7 = v5[1] - 1;
  v8 = 5 * v7;
  v9 = v6 + 40 * v7 + 8;
  v10 = *(_QWORD *)(v6 + 40 * v7 + 16);
  v11 = v10 + 1;
  v43 = (_QWORD *)v9;
  if ( *(_QWORD *)(v6 + 40 * v7 + 24) >= (unsigned __int64)(v10 + 1) )
  {
    v13 = *(char **)v9;
  }
  else
  {
    v12 = (char *)qvector_reserve(v9, *(char **)v9, v11, 0x10u);
    v9 = (__int64)v43;
    v13 = v12;
    *v43 = v12;
    v10 = v43[1];
    v11 = v10 + 1;
  }
  *(_QWORD *)(v9 + 8) = v11;
  v14 = 16 * v10;
  *(_QWORD *)&v13[v14] = a3;
  if ( (*(_BYTE *)(v6 + 8 * v8 + 32) & 1) != 0 )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL) = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 88LL);
    v15 = *(_QWORD **)(a1 + 16);
    v16 = v15 + 10;
    v17 = v15[11];
    if ( v15[12] >= (unsigned __int64)(v17 + 1) )
    {
      v18 = (_QWORD *)*v16;
    }
    else
    {
      v18 = qvector_reserve((__int64)v16, (char *)v15[10], v17 + 1, 0x18u);
      v15[10] = v18;
      v17 = v15[11];
    }
    v19 = 3 * v17;
    *(_OWORD *)&v18[v19] = 0;
    v18[v19 + 2] = 0;
    ++v15[11];
    v20 = *(_QWORD *)(a1 + 8);
    v21 = *(_DWORD *)(a1 + 24);
    if ( v21 == 2 )
    {
      v22 = (__int64 *)(v20 + 352);
    }
    else
    {
      if ( v21 != 1 )
        goto LABEL_40;
      v22 = (__int64 *)(v20 + 320);
    }
    sub_57CE0(v20, (__int64)&v18[3 * v17], v22, *a2);
  }
  *(_QWORD *)&v13[v14 + 8] = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 112LL);
  v23 = *(_QWORD **)(a1 + 16);
  v24 = v23 + 13;
  v25 = v23[14];
  if ( v23[15] >= (unsigned __int64)(v25 + 1) )
  {
    v26 = (_QWORD *)*v24;
  }
  else
  {
    v26 = qvector_reserve((__int64)v24, (char *)v23[13], v25 + 1, 0x18u);
    v23[13] = v26;
    v25 = v23[14];
  }
  v27 = 3 * v25;
  *(_OWORD *)&v26[v27] = 0;
  v26[v27 + 2] = 0;
  ++v23[14];
  v28 = *(_QWORD *)(a1 + 8);
  v29 = *(_DWORD *)(a1 + 24);
  if ( v29 == 2 )
  {
    v30 = (__int64 *)(v28 + 352);
    goto LABEL_20;
  }
  if ( v29 != 1 )
  {
LABEL_40:
    if ( !(_BYTE)under_debugger )
      interr(20086);
    BUG();
  }
  v30 = (__int64 *)(v28 + 320);
LABEL_20:
  result = sub_57CE0(v28, (__int64)&v26[3 * v25], v30, *a2);
  v32 = *(_WORD *)(v6 + 8 * v8 + 34);
  if ( v32 )
  {
    result = (__int64)v43;
    if ( v43[1] == 1 )
    {
      v33 = v13;
      v34 = *(_QWORD *)(a1 + 16);
      v35 = *(char **)(v34 + 136);
      if ( v35 )
      {
        v36 = (void **)(v34 + 136);
        while ( 1 )
        {
          v37 = *((_WORD *)v35 + 16);
          if ( v32 >= v37 )
          {
            if ( v37 >= v32 )
              goto LABEL_33;
            v36 = (void **)(v35 + 8);
            v38 = *((char **)v35 + 1);
            if ( !v38 )
              goto LABEL_33;
          }
          else
          {
            v38 = *(char **)v35;
            v36 = (void **)v35;
            if ( !*(_QWORD *)v35 )
              goto LABEL_32;
          }
          v35 = v38;
        }
      }
      v35 = (char *)(v34 + 136);
LABEL_32:
      v36 = (void **)v35;
LABEL_33:
      v39 = (__int64 *)&v33[v14 + 8];
      v40 = (char *)*v36;
      if ( !*v36 )
      {
        v44 = v39;
        v40 = (char *)operator new(0x38u);
        *((_WORD *)v40 + 16) = v32;
        *(_OWORD *)(v40 + 40) = 0;
        *(_OWORD *)v40 = 0;
        *((_QWORD *)v40 + 2) = v35;
        *v36 = v40;
        v41 = **(_QWORD **)(v34 + 128);
        if ( v41 )
        {
          *(_QWORD *)(v34 + 128) = v41;
          v42 = (__int64 *)*v36;
        }
        else
        {
          v42 = (__int64 *)v40;
        }
        sub_4A450(*(__int64 **)(v34 + 136), v42);
        ++*(_QWORD *)(v34 + 144);
        v34 = *(_QWORD *)(a1 + 16);
        v39 = v44;
      }
      *((_QWORD *)v40 + 5) = *(_QWORD *)(v34 + 72);
      result = *v39;
      *((_QWORD *)v40 + 6) = *v39;
    }
  }
  return result;
}
// 158B40: using guessed type __int64 under_debugger;
