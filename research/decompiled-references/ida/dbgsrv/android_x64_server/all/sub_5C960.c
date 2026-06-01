/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5C960
// Address: 0x000000000005C960

//----- (000000000005C960) ----------------------------------------------------
__int64 __fastcall sub_5C960(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  char *v11; // r14
  __int64 v12; // r15
  _QWORD *v13; // rbx
  _QWORD *v14; // rdi
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rdi
  int v19; // edx
  __int64 *v20; // rdx
  __int64 result; // rax
  unsigned __int16 v22; // r12
  __int64 v23; // r13
  char *v24; // rbx
  void **v25; // rbp
  unsigned __int16 v26; // ax
  char *v27; // rax
  __int64 *v28; // r15
  char *v29; // r14
  __int64 v30; // rax
  __int64 *v31; // rsi
  __int64 v33; // [rsp+8h] [rbp-40h]
  __int64 v34; // [rsp+10h] [rbp-38h]

  v5 = *(_QWORD *)(a1 + 16);
  v6 = *(_QWORD *)(v5 + 24);
  v7 = 5 * (*(_QWORD *)(v5 + 32) - 1LL);
  v8 = v6 + 40 * (*(_QWORD *)(v5 + 32) - 1LL) + 16;
  v9 = *(_QWORD *)(v6 + 40 * (*(_QWORD *)(v5 + 32) - 1LL) + 24);
  v10 = v9 + 1;
  v34 = v7;
  if ( *(_QWORD *)(v6 + 8 * v7 + 32) >= (unsigned __int64)(v9 + 1) )
  {
    v11 = *(char **)v8;
  }
  else
  {
    v11 = (char *)qvector_reserve(v8, *(char **)v8, v10, 0x18u);
    *(_QWORD *)v8 = v11;
    v9 = *(_QWORD *)(v8 + 8);
    v10 = v9 + 1;
  }
  *(_QWORD *)(v8 + 8) = v10;
  v12 = 3 * v9;
  *(_QWORD *)&v11[8 * v12] = a3;
  *(_QWORD *)&v11[8 * v12 + 8] = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 112LL);
  v13 = *(_QWORD **)(a1 + 16);
  v14 = v13 + 13;
  v15 = v13[14];
  if ( v13[15] >= (unsigned __int64)(v15 + 1) )
  {
    v16 = (_QWORD *)*v14;
  }
  else
  {
    v16 = qvector_reserve((__int64)v14, (char *)v13[13], v15 + 1, 0x18u);
    v13[13] = v16;
    v15 = v13[14];
  }
  v17 = 3 * v15;
  *(_OWORD *)&v16[v17] = 0;
  v16[v17 + 2] = 0;
  ++v13[14];
  v18 = *(_QWORD *)(a1 + 8);
  v19 = *(_DWORD *)(a1 + 24);
  if ( v19 == 2 )
  {
    v20 = (__int64 *)(v18 + 352);
  }
  else
  {
    if ( v19 != 1 )
    {
      if ( !(_BYTE)under_debugger )
        interr(20086);
      BUG();
    }
    v20 = (__int64 *)(v18 + 320);
  }
  result = sub_57CE0(v18, (__int64)&v16[3 * v15], v20, *(_DWORD *)(a2 + 8));
  v22 = *(_WORD *)(a2 + 6) & 0x7FFF;
  if ( v22 )
  {
    v33 = v6;
    v23 = *(_QWORD *)(a1 + 16);
    v24 = *(char **)(v23 + 136);
    if ( v24 )
    {
      v25 = (void **)(v23 + 136);
      while ( 1 )
      {
        v26 = *((_WORD *)v24 + 16);
        if ( v22 >= v26 )
        {
          if ( v26 >= v22 )
            goto LABEL_23;
          v25 = (void **)(v24 + 8);
          v27 = *((char **)v24 + 1);
          if ( !v27 )
            goto LABEL_23;
        }
        else
        {
          v27 = *(char **)v24;
          v25 = (void **)v24;
          if ( !*(_QWORD *)v24 )
            goto LABEL_22;
        }
        v24 = v27;
      }
    }
    v24 = (char *)(v23 + 136);
LABEL_22:
    v25 = (void **)v24;
LABEL_23:
    v28 = (__int64 *)&v11[8 * v12 + 8];
    v29 = (char *)*v25;
    if ( !*v25 )
    {
      v29 = (char *)operator new(0x38u);
      *((_WORD *)v29 + 16) = v22;
      *(_OWORD *)(v29 + 40) = 0;
      *(_OWORD *)v29 = 0;
      *((_QWORD *)v29 + 2) = v24;
      *v25 = v29;
      v30 = **(_QWORD **)(v23 + 128);
      if ( v30 )
      {
        *(_QWORD *)(v23 + 128) = v30;
        v31 = (__int64 *)*v25;
      }
      else
      {
        v31 = (__int64 *)v29;
      }
      sub_4A450(*(__int64 **)(v23 + 136), v31);
      ++*(_QWORD *)(v23 + 144);
    }
    *((_QWORD *)v29 + 5) = *(_QWORD *)(v33 + 8 * v34 + 8);
    result = *v28;
    *((_QWORD *)v29 + 6) = *v28;
  }
  return result;
}
// 158B40: using guessed type __int64 under_debugger;
