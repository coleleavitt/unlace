__int64 __fastcall sub_6AEE10(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v8; // rsi
  __int64 v9; // rdi
  bool v10; // zf
  __int64 v11; // r12
  _QWORD *v12; // rbx
  _QWORD *v13; // r15
  __int64 v14; // rsi
  __int64 v15; // rdi
  char *v16; // rdi
  int v17; // ecx
  __int64 v18; // rsi
  char *v19; // rax
  char *v20; // rdx
  unsigned int v21; // r15d
  size_t v22; // rbx
  _OWORD *v23; // rax
  _OWORD *v24; // rcx
  _OWORD *v25; // rdx
  int v26; // edx
  __int64 v28; // rdi
  __int64 v29; // rsi
  unsigned int v30; // esi
  __int64 v31; // [rsp+0h] [rbp-58h] BYREF
  int v32[2]; // [rsp+8h] [rbp-50h]
  __int64 v33[9]; // [rsp+10h] [rbp-48h] BYREF

  v31 = *(_QWORD *)a1;
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  v8 = *a4;
  if ( *a4 )
  {
    v9 = a4[1];
    v10 = (*(_DWORD *)(v8 + 8))-- == 1;
    if ( v10 )
      sub_15D7BC0(v9, v8);
  }
  *a4 = a3;
  *(_QWORD *)(a1 + 72) = a2;
  *(_QWORD *)v32 = 0;
  sub_6ACC60((_QWORD *)a1, (__int64)&v31, a4);
  v11 = *(_QWORD *)v32;
  sub_6AE700(a1, a4);
  v12 = *(_QWORD **)(a1 + 32);
  if ( v12 )
  {
    v13 = &v12[*((unsigned int *)v12 - 1)];
    if ( v12 >= v13 )
      goto LABEL_14;
    do
    {
      while ( 1 )
      {
        v14 = *v12;
        if ( *v12 )
        {
          v15 = *(_QWORD *)(a1 + 24);
          v10 = (*(_DWORD *)(v14 + 8))-- == 1;
          if ( v10 )
            break;
        }
        if ( ++v12 >= v13 )
          goto LABEL_13;
      }
      sub_15D7BC0(v15, v14);
      ++v12;
    }
    while ( v12 < v13 );
LABEL_13:
    v12 = *(_QWORD **)(a1 + 32);
    if ( v12 )
LABEL_14:
      *((_DWORD *)v12 - 1) = 0;
  }
  if ( *(_DWORD *)(a1 + 52) || *(_DWORD *)(a1 + 56) )
  {
    v16 = *(char **)(a1 + 40);
    v17 = 0;
    v18 = *(unsigned int *)(a1 + 48);
    v19 = v16;
    v20 = &v16[16 * v18];
    if ( v16 == v20 )
      goto LABEL_30;
    do
    {
      while ( *(_QWORD *)v19 )
      {
        *(_QWORD *)v19 = 0;
        v19 += 16;
        if ( v20 == v19 )
          goto LABEL_22;
      }
      v19 += 16;
      ++v17;
    }
    while ( v20 != v19 );
LABEL_22:
    if ( (unsigned int)v18 <= 0x10 || 3 * (int)v18 >= (unsigned int)(4 * v17) )
      goto LABEL_30;
    if ( v16 )
    {
      sub_186B220(v16);
      v21 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 40) = 0;
      v21 >>= 1;
      *(_DWORD *)(a1 + 48) = v21;
      v22 = 16LL * v21;
      v23 = (_OWORD *)sub_186B270(v22);
      if ( !v21 )
      {
LABEL_29:
        *(_QWORD *)(a1 + 40) = v23;
LABEL_30:
        *(_QWORD *)(a1 + 52) = 0;
        goto LABEL_31;
      }
    }
    else
    {
      v30 = (unsigned int)v18 >> 1;
      *(_QWORD *)(a1 + 40) = 0;
      *(_DWORD *)(a1 + 48) = v30;
      v22 = 16LL * v30;
      v23 = (_OWORD *)sub_186B270(v22);
    }
    v24 = &v23[v22 / 0x10];
    v25 = v23;
    if ( (v22 & 0x10) == 0 || (v25 = v23 + 1, *v23 = 0, v24 != v23 + 1) )
    {
      do
      {
        *v25 = 0;
        v25 += 2;
        *(v25 - 1) = 0;
      }
      while ( v24 != v25 );
    }
    goto LABEL_29;
  }
LABEL_31:
  if ( v11 )
  {
    v26 = *(_DWORD *)(v11 - 4);
    if ( v26 )
    {
      sub_1697FC0(*(_QWORD *)a1, 0, v26, v11, *a4, (int)v33, v31, *(__int64 *)v32, 0, *(_QWORD *)a1, (void *)v33[2]);
      v28 = *a4;
      v29 = v33[1];
      *a4 = v33[0];
      v33[0] = v28;
      sub_6A99C0(v28, v29);
    }
  }
  return sub_2334C0(&v31);
}

