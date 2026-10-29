__int64 __fastcall sub_FA4C0(__int64 a1, char a2)
{
  __int64 v4; // rsi
  int v5; // ebx
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r14
  int v15; // r13d
  __int64 v16; // r15
  _DWORD *v17; // rax
  int v18; // ebx
  __int64 v19; // rdi
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  int v23; // eax
  unsigned __int64 v24; // r14
  __int64 v25; // rax
  __int64 v26; // r15
  _DWORD *v27; // rdi
  int v28; // eax
  int v29; // r8d
  int v30; // r9d
  int v31; // ecx
  __int64 v32; // rax
  __int64 v33; // rsi
  int v34; // edx
  _DWORD *v35; // rdi
  int *v36; // r13
  __int64 v37; // r14
  int v38; // r15d
  int *v39; // r14
  void *v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdi
  int *v44; // rax
  unsigned int v45; // [rsp+8h] [rbp-B0h]
  char v46; // [rsp+Ch] [rbp-ACh]
  __int64 v47; // [rsp+10h] [rbp-A8h] BYREF
  int v48; // [rsp+18h] [rbp-A0h] BYREF
  _QWORD *v49; // [rsp+20h] [rbp-98h]
  int *v50; // [rsp+28h] [rbp-90h]
  int *v51; // [rsp+30h] [rbp-88h]
  __int64 v52; // [rsp+38h] [rbp-80h]
  __int64 v53; // [rsp+40h] [rbp-78h] BYREF
  __int128 v54; // [rsp+48h] [rbp-70h]
  __int64 v55; // [rsp+58h] [rbp-60h]
  __int128 v56; // [rsp+60h] [rbp-58h]
  unsigned __int64 v57; // [rsp+78h] [rbp-40h]

  v57 = __readfsqword(0x28u);
  v4 = a2 & 7;
  if ( (_DWORD)v4 )
    sub_14A660(a1, v4);
  sub_1EBDA0(a1);
  v5 = a2 & 1;
  sub_190300(a1, v4, v6, v7, v8, v9);
  v13 = *(unsigned int *)(a1 + 64);
  if ( (int)v13 <= 0 )
  {
    if ( (a2 & 8) != 0 )
      sub_149220(*(__int64 **)(a1 + 784), v4, v10, v11, v13, v12);
    sub_190300(a1, v4, v10, v11, v13, v12);
    v45 = 0;
    goto LABEL_36;
  }
  v45 = 0;
  v14 = 0;
  v15 = 0;
  do
  {
    while ( 1 )
    {
      v16 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v14);
      v17 = *(_DWORD **)(v16 + 56);
      if ( v17 )
      {
        if ( (unsigned int)(*v17 - 56) <= 1 && !(unsigned __int8)sub_F7B20(*(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v14)) )
        {
          ++v45;
          if ( *(_BYTE *)(*(_QWORD *)(v16 + 56) + 64LL) != 8 && (unsigned int)sub_F4760(v16, v5 | 4u) != 1 )
            break;
        }
      }
      *(_DWORD *)(v16 + 24) |= 0x800u;
      if ( *(_DWORD *)(a1 + 64) <= (int)++v14 )
        goto LABEL_12;
    }
    ++v15;
    ++v14;
  }
  while ( *(_DWORD *)(a1 + 64) > (int)v14 );
LABEL_12:
  if ( (a2 & 8) != 0 )
    sub_149220(*(__int64 **)(a1 + 784), a2 & 8, v10, v11, v13, v12);
  v18 = v5 | 6;
  sub_190300(a1, a2 & 8, v10, v11, v13, v12);
  if ( v15 <= 0 )
  {
LABEL_36:
    sub_66FA0(a1, 1u, (__int64)"analyze_calls");
    v31 = *(_DWORD *)(a1 + 64);
    v32 = 0;
    if ( v31 > 0 )
    {
      do
      {
        v33 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v32);
        v34 = *(_DWORD *)(v33 + 24);
        if ( (v34 & 0x800) == 0 )
        {
          if ( (v34 & 2) == 0 || (v35 = *(_DWORD **)(v33 + 56)) != nullptr && (unsigned int)(*v35 - 56) <= 1 )
          {
            if ( !under_debugger )
              sub_383060(50114);
            goto LABEL_75;
          }
          BYTE1(v34) |= 8u;
          *(_DWORD *)(v33 + 24) = v34;
        }
        ++v32;
      }
      while ( *(_DWORD *)(a1 + 64) > (int)v32 );
    }
    *(_DWORD *)a1 |= 0x1000u;
    sub_33E140(*(_QWORD *)(a1 + 1496), 18, a1, v31, v29, v30);
    return v45;
  }
  if ( (a2 & 0x10) == 0 )
    return (unsigned int)-1;
  v19 = *(_QWORD *)(a1 + 784);
  v48 = 0;
  v49 = nullptr;
  v50 = &v48;
  v51 = &v48;
  v52 = 0;
  v53 = 0;
  v55 = 0;
  v54 = 0;
  v56 = 0;
  sub_6DDE0(v19, &v53);
  v23 = *(_DWORD *)(a1 + 64) - 1;
  v24 = v23;
  if ( v23 < 0 )
  {
LABEL_30:
    while ( v52 )
    {
      v36 = v50;
      if ( v50 == &v48 )
      {
        v44 = &v48;
LABEL_71:
        sub_3311F0(a1, v44[8], 7, v20, v21, v22);
        if ( (v18 & 4) != 0 )
        {
          v18 &= ~4u;
          continue;
        }
        if ( !under_debugger )
          sub_383060(50113);
LABEL_75:
        BUG();
      }
      v46 = 0;
      while ( 1 )
      {
        v37 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8LL * v36[8]);
        v38 = sub_F4760(v37, v18);
        if ( !v38 )
        {
          v41 = *(_QWORD *)(*(_QWORD *)(v37 + 56) + 24LL);
          goto LABEL_56;
        }
        v39 = (int *)std::_Rb_tree_increment();
        if ( v38 == 1 )
        {
          v40 = (void *)std::_Rb_tree_rebalance_for_erase();
          operator delete(v40, 0x28u);
          --v52;
          v46 = 1;
        }
        if ( v39 == &v48 )
          break;
        v36 = v39;
      }
      if ( !v46 )
      {
        v44 = v50;
        goto LABEL_71;
      }
    }
    if ( v55 )
    {
      *(_QWORD *)&v56 = 0;
      qfree();
    }
    if ( v53 )
    {
      *(_QWORD *)&v54 = 0;
      qfree();
    }
    sub_F5F90(v49);
    goto LABEL_36;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v24 >= (unsigned __int64)v54
        || (v25 = *(int *)(v53 + 4 * v24), (int)v25 < 0)
        || *(_DWORD *)(a1 + 64) <= (int)v25 )
      {
        if ( !under_debugger )
          sub_383060(50112);
        goto LABEL_75;
      }
      v26 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v25);
      v27 = *(_DWORD **)(v26 + 56);
      if ( v27 )
      {
        if ( (unsigned int)(*v27 - 56) <= 1 && !(unsigned __int8)sub_120560((__int64)v27, nullptr) )
          break;
      }
      *(_DWORD *)(v26 + 24) |= 0x800u;
LABEL_19:
      if ( (--v24 & 0x80000000) != 0LL )
        goto LABEL_30;
    }
    if ( *(_BYTE *)(*(_QWORD *)(v26 + 56) + 64LL) == 8 )
      goto LABEL_19;
    v28 = sub_F4760(v26, v18);
    if ( !v28 )
      break;
    if ( v28 == 1 )
      goto LABEL_19;
    sub_C3BC0(&v47, (int *)(v26 + 72));
    if ( (--v24 & 0x80000000) != 0LL )
      goto LABEL_30;
  }
  v41 = *(_QWORD *)(*(_QWORD *)(v26 + 56) + 24LL);
LABEL_56:
  v42 = v55;
  *(_QWORD *)(a1 + 488) = v41;
  if ( v42 )
  {
    *(_QWORD *)&v56 = 0;
    qfree();
  }
  if ( v53 )
  {
    *(_QWORD *)&v54 = 0;
    qfree();
  }
  sub_F5F90(v49);
  return (unsigned int)-1;
}
