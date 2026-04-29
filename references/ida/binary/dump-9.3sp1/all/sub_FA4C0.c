__int64 __fastcall sub_FA4C0(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rsi
  int v7; // ebx
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // r14
  int v17; // r13d
  __int64 v18; // r15
  _DWORD *v19; // rax
  int v20; // ebx
  __int64 v21; // rdi
  int v22; // ecx
  int v23; // r8d
  int v24; // r9d
  int v25; // eax
  unsigned __int64 v26; // r14
  __int64 v27; // rax
  __int64 v28; // r15
  _DWORD *v29; // rdi
  int v30; // eax
  int v31; // r8d
  int v32; // r9d
  int v33; // ecx
  __int64 v34; // rax
  __int64 v35; // rsi
  int v36; // edx
  _DWORD *v37; // rdi
  int *v38; // r13
  __int64 v39; // r14
  int v40; // r15d
  int *v41; // r14
  void *v42; // rax
  __int64 v43; // rax
  __int64 v44; // rdi
  int *v46; // rax
  unsigned int v47; // [rsp+8h] [rbp-B0h]
  char v48; // [rsp+Ch] [rbp-ACh]
  __int64 v49; // [rsp+10h] [rbp-A8h] BYREF
  int v50; // [rsp+18h] [rbp-A0h] BYREF
  _QWORD *v51; // [rsp+20h] [rbp-98h]
  int *v52; // [rsp+28h] [rbp-90h]
  int *v53; // [rsp+30h] [rbp-88h]
  __int64 v54; // [rsp+38h] [rbp-80h]
  __int64 v55; // [rsp+40h] [rbp-78h] BYREF
  __int128 v56; // [rsp+48h] [rbp-70h]
  __int64 v57; // [rsp+58h] [rbp-60h]
  __int128 v58; // [rsp+60h] [rbp-58h]
  unsigned __int64 v59; // [rsp+78h] [rbp-40h]

  v59 = __readfsqword(0x28u);
  v6 = a2 & 7;
  if ( (_DWORD)v6 )
    sub_14A660(a1, v6, a3, a4);
  sub_1EBDA0(a1);
  v7 = a2 & 1;
  sub_190300(a1, v6, v8, v9, v10, v11);
  v15 = *(unsigned int *)(a1 + 64);
  if ( (int)v15 <= 0 )
  {
    if ( (a2 & 8) != 0 )
      sub_149220(*(__int64 **)(a1 + 784), v6, v12, v13, v15, v14);
    sub_190300(a1, v6, v12, v13, v15, v14);
    v47 = 0;
    goto LABEL_36;
  }
  v47 = 0;
  v16 = 0;
  v17 = 0;
  do
  {
    while ( 1 )
    {
      v18 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v16);
      v19 = *(_DWORD **)(v18 + 56);
      if ( v19 )
      {
        if ( (unsigned int)(*v19 - 56) <= 1 && !(unsigned __int8)sub_F7B20(*(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v16)) )
        {
          ++v47;
          if ( *(_BYTE *)(*(_QWORD *)(v18 + 56) + 64LL) != 8 && (unsigned int)sub_F4760(v18, v7 | 4u) != 1 )
            break;
        }
      }
      *(_DWORD *)(v18 + 24) |= 0x800u;
      if ( *(_DWORD *)(a1 + 64) <= (int)++v16 )
        goto LABEL_12;
    }
    ++v17;
    ++v16;
  }
  while ( *(_DWORD *)(a1 + 64) > (int)v16 );
LABEL_12:
  if ( (a2 & 8) != 0 )
    sub_149220(*(__int64 **)(a1 + 784), a2 & 8, v12, v13, v15, v14);
  v20 = v7 | 6;
  sub_190300(a1, a2 & 8, v12, v13, v15, v14);
  if ( v17 <= 0 )
  {
LABEL_36:
    sub_66FA0(a1, 1u, (__int64)"analyze_calls");
    v33 = *(_DWORD *)(a1 + 64);
    v34 = 0;
    if ( v33 > 0 )
    {
      do
      {
        v35 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v34);
        v36 = *(_DWORD *)(v35 + 24);
        if ( (v36 & 0x800) == 0 )
        {
          if ( (v36 & 2) == 0 || (v37 = *(_DWORD **)(v35 + 56)) != nullptr && (unsigned int)(*v37 - 56) <= 1 )
          {
            if ( !under_debugger )
              sub_383060(50114);
            goto LABEL_75;
          }
          BYTE1(v36) |= 8u;
          *(_DWORD *)(v35 + 24) = v36;
        }
        ++v34;
      }
      while ( *(_DWORD *)(a1 + 64) > (int)v34 );
    }
    *(_DWORD *)a1 |= 0x1000u;
    sub_33E140(*(_QWORD *)(a1 + 1496), 18, a1, v33, v31, v32);
    return v47;
  }
  if ( (a2 & 0x10) == 0 )
    return (unsigned int)-1;
  v21 = *(_QWORD *)(a1 + 784);
  v50 = 0;
  v51 = nullptr;
  v52 = &v50;
  v53 = &v50;
  v54 = 0;
  v55 = 0;
  v57 = 0;
  v56 = 0;
  v58 = 0;
  sub_6DDE0(v21, &v55);
  v25 = *(_DWORD *)(a1 + 64) - 1;
  v26 = v25;
  if ( v25 < 0 )
  {
LABEL_30:
    while ( v54 )
    {
      v38 = v52;
      if ( v52 == &v50 )
      {
        v46 = &v50;
LABEL_71:
        sub_3311F0(a1, v46[8], 7, v22, v23, v24);
        if ( (v20 & 4) != 0 )
        {
          v20 &= ~4u;
          continue;
        }
        if ( !under_debugger )
          sub_383060(50113);
LABEL_75:
        BUG();
      }
      v48 = 0;
      while ( 1 )
      {
        v39 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8LL * v38[8]);
        v40 = sub_F4760(v39, v20);
        if ( !v40 )
        {
          v43 = *(_QWORD *)(*(_QWORD *)(v39 + 56) + 24LL);
          goto LABEL_56;
        }
        v41 = (int *)std::_Rb_tree_increment();
        if ( v40 == 1 )
        {
          v42 = (void *)std::_Rb_tree_rebalance_for_erase();
          operator delete(v42, 0x28u);
          --v54;
          v48 = 1;
        }
        if ( v41 == &v50 )
          break;
        v38 = v41;
      }
      if ( !v48 )
      {
        v46 = v52;
        goto LABEL_71;
      }
    }
    if ( v57 )
    {
      *(_QWORD *)&v58 = 0;
      qfree(v57);
    }
    if ( v55 )
    {
      *(_QWORD *)&v56 = 0;
      qfree(v55);
    }
    sub_F5F90(v51);
    goto LABEL_36;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v26 >= (unsigned __int64)v56
        || (v27 = *(int *)(v55 + 4 * v26), (int)v27 < 0)
        || *(_DWORD *)(a1 + 64) <= (int)v27 )
      {
        if ( !under_debugger )
          sub_383060(50112);
        goto LABEL_75;
      }
      v28 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v27);
      v29 = *(_DWORD **)(v28 + 56);
      if ( v29 )
      {
        if ( (unsigned int)(*v29 - 56) <= 1 && !(unsigned __int8)sub_120560((__int64)v29, nullptr) )
          break;
      }
      *(_DWORD *)(v28 + 24) |= 0x800u;
LABEL_19:
      if ( (--v26 & 0x80000000) != 0LL )
        goto LABEL_30;
    }
    if ( *(_BYTE *)(*(_QWORD *)(v28 + 56) + 64LL) == 8 )
      goto LABEL_19;
    v30 = sub_F4760(v28, v20);
    if ( !v30 )
      break;
    if ( v30 == 1 )
      goto LABEL_19;
    sub_C3BC0(&v49, (int *)(v28 + 72));
    if ( (--v26 & 0x80000000) != 0LL )
      goto LABEL_30;
  }
  v43 = *(_QWORD *)(*(_QWORD *)(v28 + 56) + 24LL);
LABEL_56:
  v44 = v57;
  *(_QWORD *)(a1 + 488) = v43;
  if ( v44 )
  {
    *(_QWORD *)&v58 = 0;
    qfree(v44);
  }
  if ( v55 )
  {
    *(_QWORD *)&v56 = 0;
    qfree(v55);
  }
  sub_F5F90(v51);
  return (unsigned int)-1;
}
