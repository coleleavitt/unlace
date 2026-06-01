__int64 __fastcall sub_694D30(
        __int64 **a1,
        __int64 a2,
        double a3,
        double a4,
        double a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        int a11,
        int a12,
        void *a13,
        __int64 a14,
        int a15,
        __int64 a16)
{
  unsigned int v17; // eax
  __int64 *v18; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  int v25; // eax
  int v26; // r14d
  __int64 v27; // r15
  unsigned int *v28; // r13
  __int64 v29; // rsi
  unsigned int *v30; // rax
  unsigned int v31; // r13d
  unsigned int v32; // ebp
  unsigned int *v33; // rcx
  unsigned int *v34; // rax
  unsigned int *v35; // rbp
  char *v36; // r13
  int v37; // eax
  int v38; // eax
  __int64 v39; // rbp
  unsigned __int64 v40; // r13
  __int64 v41; // rax
  unsigned int *v42; // r15
  unsigned int *v43; // rax
  __int64 v44; // r14
  __int64 v45; // rax
  unsigned int v46; // r15d
  _DWORD *v47; // rsi
  unsigned int *v48; // rbp
  char *v49; // r13
  unsigned int v50; // [rsp+4h] [rbp-84h]
  void *v51; // [rsp+10h] [rbp-78h] BYREF
  __int128 v52; // [rsp+18h] [rbp-70h]
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __int128 v54; // [rsp+38h] [rbp-50h]
  unsigned __int64 v55; // [rsp+48h] [rbp-40h]

  v17 = *(_DWORD *)a2;
  v18 = *a1;
  v55 = __readfsqword(0x28u);
  v50 = v17;
  if ( !(unsigned __int8)sub_3BB2F0((__int64)v18, v17) )
  {
    if ( *((_BYTE *)a1 + 40) )
      return sub_5B96C0(*a1, a2, a3, a4, a5, v20, v21, v22, v23, a10, a11, a12, a13, a14, a15, a16);
    else
      return sub_693D00(a1, v50);
  }
  sub_59EB00(*a1, a2);
  v25 = *(_DWORD *)(a2 + 40);
  v51 = nullptr;
  v52 = 0;
  v26 = v25 - 1;
  v27 = 8LL * (unsigned int)(v25 - 1);
  if ( v25 - 1 < 0 )
    goto LABEL_21;
  while ( 1 )
  {
    v28 = (unsigned int *)(v27 + *(_QWORD *)(a2 + 48));
    v29 = *v28;
    if ( (unsigned int)v29 >= *(_DWORD *)a2 && (unsigned int)v29 < *(_DWORD *)(a2 + 4) )
      goto LABEL_18;
    v30 = sub_4EE820((__int64)(*a1 + 203), v29);
    if ( !v30 )
      break;
    if ( v30[4] != v50 )
    {
      if ( !*((_BYTE *)a1 + 40) )
        goto LABEL_50;
      v31 = *v30;
      v32 = v30[1];
      goto LABEL_12;
    }
LABEL_18:
    --v26;
    v27 -= 8;
    if ( v26 == -1 )
      goto LABEL_19;
  }
  if ( *((_BYTE *)a1 + 40) )
  {
    v31 = *v28;
    v32 = v31 + 1;
LABEL_12:
    v33 = (unsigned int *)((char *)v51 + 8 * v52);
    if ( v51 == v33 )
      goto LABEL_44;
    v34 = (unsigned int *)v51;
    while ( v31 != *v34 || v32 != v34[1] )
    {
      v34 += 2;
      if ( v33 == v34 )
        goto LABEL_44;
    }
    if ( v34 == v33 )
    {
LABEL_44:
      if ( *((_QWORD *)&v52 + 1) < (unsigned __int64)(v52 + 1) )
      {
        v51 = (void *)qvector_reserve(&v51, v51, v52 + 1, 8);
        v33 = (unsigned int *)((char *)v51 + 8 * v52);
      }
      *v33 = v31;
      v33[1] = v32;
      *(_QWORD *)&v52 = v52 + 1;
    }
    goto LABEL_18;
  }
LABEL_50:
  sub_693D00(a1, v50);
LABEL_19:
  v35 = (unsigned int *)v51;
  v36 = (char *)v51 + 8 * v52;
  if ( v36 != v51 )
  {
    do
    {
      sub_5A0860(*a1, a2, *v35, v35[1]);
      sub_3A1A90(*a1, *v35, v35[1], 0x28u);
      v35 += 2;
    }
    while ( v36 != (char *)v35 );
  }
LABEL_21:
  sub_5ACDD0(*a1, a2, 1);
  ptr = nullptr;
  v37 = *(_DWORD *)(a2 + 104);
  v54 = 0;
  v38 = v37 - 1;
  if ( v38 < 0 )
    goto LABEL_39;
  v39 = 8LL * v38;
  v40 = 8 * (v38 - (unsigned __int64)(unsigned int)v38);
  while ( 2 )
  {
    v42 = (unsigned int *)(v39 + *(_QWORD *)(a2 + 112));
    v43 = sub_4EE820((__int64)(*a1 + 203), *v42);
    v44 = (__int64)v43;
    if ( v43 && *((char *)v43 + 9) < 0 )
    {
      sub_693E40(a1, (int *)a2, v42, v43);
      sub_5AD260(*a1, v44);
      if ( sub_5B05C0((__int64)*a1, v44, v50) )
        goto LABEL_26;
      if ( *((_BYTE *)a1 + 40) )
      {
        if ( !(unsigned __int8)sub_5B40F0(*a1, a2, *v42, v42[1], 0.0, a4, a5) )
        {
          if ( !under_debugger )
            interr(2435);
          BUG();
        }
LABEL_26:
        v41 = v39 - 8;
        if ( v40 == v39 )
          break;
        goto LABEL_27;
      }
LABEL_42:
      sub_693D00(a1, v50);
      goto LABEL_26;
    }
    if ( !*((_BYTE *)a1 + 40) )
      goto LABEL_42;
    v45 = v54;
    v46 = *v42;
    v47 = ptr;
    if ( *((_QWORD *)&v54 + 1) < (unsigned __int64)(v54 + 1) )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v54 + 1, 4);
      v47 = ptr;
      v45 = v54;
    }
    v47[v45] = v46;
    v41 = v39 - 8;
    *(_QWORD *)&v54 = v54 + 1;
    if ( v40 != v39 )
    {
LABEL_27:
      v39 = v41;
      continue;
    }
    break;
  }
  v48 = (unsigned int *)ptr;
  v49 = (char *)ptr + 4 * v54;
  if ( v49 != ptr )
  {
    do
      sub_5B37D0(*a1, a2, *v48++, 0.0, a4, a5);
    while ( v49 != (char *)v48 );
    v48 = (unsigned int *)ptr;
  }
  if ( v48 )
  {
    *(_QWORD *)&v54 = 0;
    qfree(v48);
  }
LABEL_39:
  if ( v51 )
  {
    *(_QWORD *)&v52 = 0;
    qfree(v51);
  }
  return v55 - __readfsqword(0x28u);
}

