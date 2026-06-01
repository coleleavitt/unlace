void __fastcall threads_chooser_t__::vfunc_6(__int64 a1, __int64 **a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // r14d
  __int64 v9; // rbx
  __int64 *v10; // r8
  unsigned __int64 v11; // rdx
  __int64 v12; // r15
  char *v13; // r9
  _QWORD *v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  char *v18; // rsi
  char *v19; // r9
  unsigned int v20; // eax
  unsigned int v21; // ecx
  __int64 v22; // rsi
  __int64 *v23; // r15
  __int64 v24; // rbx
  __int64 v25; // rdi
  unsigned __int64 v26; // rbp
  size_t v27; // r8
  const void *v28; // rbx
  void *v29; // rax
  unsigned __int64 v30; // [rsp+0h] [rbp-50h]
  __int64 *v31; // [rsp+8h] [rbp-48h]
  char *v32; // [rsp+10h] [rbp-40h]

  if ( !dword_8CC5F0 )
    return;
  if ( (unsigned int)xmmword_8CC438 <= (unsigned int)a5 )
    return;
  v5 = *(_DWORD *)(qword_8CC430 + ((__int64)(int)a5 << 8));
  if ( !v5 )
    return;
  v9 = a5 << 8;
  sub_169A50(*a2, (__int64)"%d", v5);
  sub_169A50(*a2 + 3, (__int64)"%X", v5);
  if ( *(_BYTE *)(qword_8CC430 + v9 + 32) )
  {
    v11 = 10;
    v12 = 9;
    v13 = "Suspended";
  }
  else
  {
    if ( dword_8CC5F0 >= 0 )
    {
      v10 = *a2;
      v11 = 8;
      v12 = 7;
      v13 = "Running";
      v14 = (_QWORD *)(*a2)[6];
      if ( (unsigned __int64)(*a2)[8] < 8 )
        goto LABEL_7;
      goto LABEL_23;
    }
    v11 = 6;
    v12 = 5;
    v13 = "Ready";
  }
  v10 = *a2;
  v14 = (_QWORD *)(*a2)[6];
  if ( (*a2)[8] < v11 )
  {
LABEL_7:
    v32 = v13;
    v31 = v10;
    v30 = v11;
    v15 = qvector_reserve(v10 + 6, v14, v11, 1);
    v10 = v31;
    v14 = (_QWORD *)v15;
    v13 = v32;
    v31[6] = v15;
    v16 = (unsigned int)v12;
    v31[7] = v30;
    if ( (unsigned int)v12 >= 8 )
      goto LABEL_8;
    goto LABEL_24;
  }
LABEL_23:
  v10[7] = v11;
  v16 = (unsigned int)v12;
  if ( (unsigned int)v12 >= 8 )
  {
LABEL_8:
    v17 = (unsigned __int64)(v14 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    *v14 = *(_QWORD *)v13;
    *(_QWORD *)((char *)v14 + v12 - 8) = *(_QWORD *)&v13[v12 - 8];
    v18 = (char *)v14 - v17;
    v19 = (char *)(v13 - v18);
    if ( (((_DWORD)v12 + (_DWORD)v18) & 0xFFFFFFF8) >= 8 )
    {
      v20 = (v12 + (_DWORD)v18) & 0xFFFFFFF8;
      v21 = 0;
      do
      {
        v22 = v21;
        v21 += 8;
        *(_QWORD *)(v17 + v22) = *(_QWORD *)&v19[v22];
      }
      while ( v21 < v20 );
    }
    goto LABEL_11;
  }
LABEL_24:
  *(_DWORD *)v14 = *(_DWORD *)v13;
  *(_DWORD *)((char *)v14 + v16 - 4) = *(_DWORD *)&v13[v16 - 4];
LABEL_11:
  *(_BYTE *)(v10[6] + v12) = 0;
  v23 = *a2;
  v24 = qword_8CC430 + v9;
  v25 = (__int64)(*a2 + 9);
  if ( v25 != v24 + 8 )
  {
    v26 = *(_QWORD *)(v24 + 16);
    if ( !v26 || (v27 = v26 - 1, v26 == 1) )
    {
      v23[10] = 0;
    }
    else
    {
      v28 = *(const void **)(v24 + 8);
      v29 = (void *)v23[9];
      if ( v23[11] < v26 )
      {
        v29 = (void *)qvector_reserve(v25, v23[9], v26, 1);
        v27 = v26 - 1;
        v23[9] = (__int64)v29;
      }
      v23[10] = v26;
      memmove(v29, v28, v27);
      *(_BYTE *)(v23[9] + v26 - 1) = 0;
    }
  }
  if ( *(_DWORD *)(a1 + 180) == v5 )
    *(_DWORD *)(a4 + 4) |= 1u;
}
