_QWORD *__fastcall sub_1A40180(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v9; // r13
  unsigned int v10; // esi
  __int64 v11; // rdi
  unsigned int v12; // eax
  __int64 *v13; // rbp
  __int64 v14; // rcx
  __int64 *v15; // r15
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r12
  _BOOL4 v19; // r14d
  __int64 v20; // rax
  __int64 *v21; // r10
  int v22; // eax
  int v23; // eax
  bool v24; // zf
  unsigned int *v25; // rbp
  unsigned __int64 v26; // rdx
  unsigned int *v27; // r12
  unsigned int v28; // r13d
  unsigned int *v29; // rax
  _QWORD *v30; // r14
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  unsigned __int64 v34; // rdx
  __int64 v35; // [rsp+8h] [rbp-60h]
  _BOOL4 v36; // [rsp+10h] [rbp-58h]
  unsigned int v37; // [rsp+14h] [rbp-54h] BYREF
  __int64 v38; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v39[8]; // [rsp+28h] [rbp-40h] BYREF

  v38 = a3;
  v37 = a4;
  if ( !(_BYTE)a5 )
    goto LABEL_2;
  v9 = (__int64 *)(a2 + 10032);
  v10 = *(_DWORD *)(a2 + 10048);
  if ( !v10 )
  {
    v39[0] = 0;
    goto LABEL_38;
  }
  a5 = v10 - 1;
  v11 = *(_QWORD *)(a2 + 10032);
  v12 = a5 & (((unsigned int)a3 >> 9) ^ ((unsigned int)a3 >> 4));
  v13 = (__int64 *)(v11 + 80LL * v12);
  v14 = *v13;
  if ( *v13 == a3 )
    goto LABEL_5;
  a6 = 1;
  v21 = nullptr;
  if ( v14 == -4096 )
  {
LABEL_10:
    v22 = *(_DWORD *)(a2 + 10040);
    a4 = 3 * v10;
    v39[0] = v13;
    v23 = v22 + 1;
    if ( 4 * v23 < (unsigned int)a4 )
    {
      a4 = v10 - *(_DWORD *)(a2 + 10044) - v23;
      if ( (unsigned int)a4 > v10 >> 3 )
      {
LABEL_12:
        v24 = *v13 == -4096;
        *(_DWORD *)(a2 + 10040) = v23;
        if ( !v24 )
          --*(_DWORD *)(a2 + 10044);
        *v13 = a3;
        v15 = v13 + 1;
        v13[1] = (__int64)(v13 + 3);
        v13[2] = 0x200000000LL;
        *(_OWORD *)(v13 + 5) = 0;
        v13[9] = 0;
        v13[6] = 0;
        v13[7] = (__int64)(v13 + 5);
        v13[8] = (__int64)(v13 + 5);
        *(_OWORD *)(v13 + 3) = 0;
        goto LABEL_15;
      }
LABEL_39:
      sub_1A3F490(v9, v10, a3, a4, a5, a6);
      sub_1A3A390(v9, &v38, v39);
      a3 = v38;
      v13 = (__int64 *)v39[0];
      v23 = *(_DWORD *)(a2 + 10040) + 1;
      goto LABEL_12;
    }
LABEL_38:
    v10 *= 2;
    goto LABEL_39;
  }
  while ( 1 )
  {
    if ( !v21 && v14 == -8192 )
      v21 = v13;
    v12 = a5 & (a6 + v12);
    v13 = (__int64 *)(v11 + 80LL * v12);
    v14 = *v13;
    if ( a3 == *v13 )
      break;
    if ( v14 == -4096 )
    {
      if ( v21 )
        v13 = v21;
      goto LABEL_10;
    }
    a6 = (unsigned int)(a6 + 1);
  }
LABEL_5:
  v15 = v13 + 1;
  if ( v13[9] )
  {
    v16 = sub_1A3F840((__int64)(v13 + 4), &v37);
    v18 = v17;
    if ( v17 )
    {
      v19 = 1;
      if ( !v16 && v13 + 5 != (__int64 *)v17 )
        v19 = v37 < *(_DWORD *)(v17 + 32);
      v20 = operator new(0x28u);
      *(_DWORD *)(v20 + 32) = v37;
      std::_Rb_tree_insert_and_rebalance(v19, v20, v18, v13 + 5);
      ++v13[9];
    }
    goto LABEL_2;
  }
LABEL_15:
  v25 = (unsigned int *)*v15;
  v26 = *((unsigned int *)v15 + 2);
  v27 = (unsigned int *)(*v15 + 4 * v26);
  if ( (unsigned int *)*v15 == v27 )
  {
    v30 = v15 + 3;
    if ( v26 > 1 )
    {
LABEL_36:
      *((_DWORD *)v15 + 2) = 0;
      sub_1A3E050(v30, &v37);
      goto LABEL_2;
    }
    v28 = v37;
  }
  else
  {
    v28 = v37;
    if ( *v25 == v37 )
      goto LABEL_2;
    v29 = (unsigned int *)*v15;
    while ( v27 != ++v29 )
    {
      if ( *v29 == v37 )
        goto LABEL_2;
    }
    if ( v26 > 1 )
    {
      v30 = v15 + 3;
      do
      {
        v32 = sub_1A400A0(v15 + 3, (__int64)(v15 + 4), v25);
        if ( v33 )
        {
          v36 = v32 || (__int64 *)v33 == v15 + 4 || *v25 < *(_DWORD *)(v33 + 32);
          v35 = v33;
          v31 = operator new(0x28u);
          *(_DWORD *)(v31 + 32) = *v25;
          std::_Rb_tree_insert_and_rebalance(v36, v31, v35, v15 + 4);
          ++v15[8];
        }
        ++v25;
      }
      while ( v27 != v25 );
      goto LABEL_36;
    }
  }
  v34 = v26 + 1;
  if ( v34 > *((unsigned int *)v15 + 3) )
  {
    sub_2237220(v15, v15 + 2, v34, 4);
    v27 = (unsigned int *)(*v15 + 4LL * *((unsigned int *)v15 + 2));
  }
  *v27 = v28;
  ++*((_DWORD *)v15 + 2);
LABEL_2:
  memset(a1, 0, 0x58u);
  a1[2] = a1 + 4;
  a1[3] = 0x100000000LL;
  return a1;
}
