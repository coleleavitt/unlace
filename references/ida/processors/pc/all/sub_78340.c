__int64 __fastcall sub_78340(__int64 a1, __int64 *a2, _QWORD *a3, int a4)
{
  __int64 v4; // r9
  __int64 v6; // r14
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 *v19; // r14
  int v20; // r15d
  __int64 v21; // r12
  int v22; // edx
  __int64 v23; // rax
  __int64 (__fastcall *v24)(__int64, int); // rax
  __int64 v25; // r10
  __int64 v26; // r12
  __int64 v27; // r11
  __int64 v28; // r15
  __int64 (__fastcall *v29)(__int64, int, int); // rax
  int v30; // ebp
  __int64 v31; // rax
  __int64 v32; // rsi
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rsi
  int v37; // eax
  __int64 v38; // rax
  __int64 v39; // rax
  int v40; // eax
  __int64 v41; // rax
  __int64 v42; // rsi
  __int64 v43; // rsi
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // [rsp+0h] [rbp-58h]
  __int64 v47; // [rsp+0h] [rbp-58h]
  __int64 v48; // [rsp+0h] [rbp-58h]
  __int64 v49; // [rsp+0h] [rbp-58h]
  __int64 v50; // [rsp+0h] [rbp-58h]
  __int64 v51; // [rsp+0h] [rbp-58h]
  __int64 v52; // [rsp+8h] [rbp-50h]
  __int64 v53; // [rsp+8h] [rbp-50h]
  __int64 v54; // [rsp+8h] [rbp-50h]
  __int64 v55; // [rsp+8h] [rbp-50h]
  __int64 v56; // [rsp+8h] [rbp-50h]
  int v57; // [rsp+8h] [rbp-50h]
  __int64 v58; // [rsp+10h] [rbp-48h]
  __int64 v59; // [rsp+10h] [rbp-48h]
  int v60; // [rsp+18h] [rbp-40h]
  int v61; // [rsp+1Ch] [rbp-3Ch]

  v4 = a1;
  v6 = a1 + 8;
  v9 = *(_QWORD *)(a1 + 16);
  if ( v9 )
  {
    v10 = a1 + 8;
    v11 = v9;
    do
    {
      while ( 1 )
      {
        v12 = *(_QWORD *)(v11 + 16);
        v13 = *(_QWORD *)(v11 + 24);
        if ( a4 > *(_DWORD *)(v11 + 32) )
          break;
        v10 = v11;
        v11 = *(_QWORD *)(v11 + 16);
        if ( !v12 )
          goto LABEL_6;
      }
      v11 = *(_QWORD *)(v11 + 24);
    }
    while ( v13 );
LABEL_6:
    if ( v6 != v10 )
    {
      if ( a4 >= *(_DWORD *)(v10 + 32) )
        return 1;
      v10 = v6;
    }
    do
    {
      while ( 1 )
      {
        v15 = *(_QWORD *)(v9 + 16);
        v16 = *(_QWORD *)(v9 + 24);
        if ( *(int *)(v9 + 32) < 0 )
          break;
        v10 = v9;
        v9 = *(_QWORD *)(v9 + 16);
        if ( !v15 )
          goto LABEL_12;
      }
      v9 = *(_QWORD *)(v9 + 24);
    }
    while ( v16 );
LABEL_12:
    v17 = a2[1];
    if ( v10 != v6 && *(int *)(v10 + 32) <= 0 )
      goto LABEL_14;
  }
  else
  {
    v17 = a2[1];
  }
  v43 = *a2;
  if ( a2[2] < (unsigned __int64)(v17 + 1) )
  {
    v57 = a4;
    v51 = v4;
    v45 = qvector_reserve();
    a4 = v57;
    v4 = v51;
    *a2 = v45;
    v43 = v45;
    v17 = a2[1];
  }
  *(_DWORD *)(v43 + 4 * v17) = 0;
  v17 = a2[1] + 1;
  a2[1] = v17;
LABEL_14:
  if ( !v17 )
    return 0;
  v61 = a4;
  v18 = v6;
  v19 = a2;
  while ( 1 )
  {
    v20 = *(_DWORD *)(*v19 + 4 * v17 - 4);
    v19[1] = v17 - 1;
    v21 = *(_QWORD *)(v4 + 16);
    if ( v21 )
    {
      while ( 1 )
      {
        v22 = *(_DWORD *)(v21 + 32);
        v23 = *(_QWORD *)(v21 + 24);
        if ( v20 < v22 )
          v23 = *(_QWORD *)(v21 + 16);
        if ( !v23 )
          break;
        v21 = v23;
      }
      if ( v20 >= v22 )
        goto LABEL_23;
    }
    else
    {
      v21 = v18;
    }
    if ( v21 != *(_QWORD *)(v4 + 24) )
    {
      v55 = v4;
      v49 = v18;
      v39 = std::_Rb_tree_decrement();
      v4 = v55;
      v18 = v49;
      v22 = *(_DWORD *)(v39 + 32);
LABEL_23:
      if ( v20 <= v22 )
        goto LABEL_25;
    }
    v52 = v4;
    v46 = v18;
    *(_DWORD *)(operator new(0x28u) + 32) = v20;
    std::_Rb_tree_insert_and_rebalance();
    v4 = v52;
    v18 = v46;
    ++*(_QWORD *)(v52 + 40);
LABEL_25:
    if ( v61 == v20 )
      break;
    v24 = *(__int64 (__fastcall **)(__int64, int))(*a3 + 96LL);
    if ( v24 == sub_212E0 )
    {
      LODWORD(v25) = *(_DWORD *)(a3[9] + ((__int64)v20 << 6) + 24);
    }
    else
    {
      v56 = v4;
      v50 = v18;
      v40 = v24((__int64)a3, v20);
      v4 = v56;
      v18 = v50;
      LODWORD(v25) = v40;
    }
    if ( (int)v25 > 0 )
    {
      v60 = v20;
      v26 = 0;
      v27 = (__int64)v20 << 6;
      v28 = v18;
      v25 = (int)v25;
      do
      {
        v29 = *(__int64 (__fastcall **)(__int64, int, int))(*a3 + 112LL);
        if ( v29 == sub_21300 )
        {
          v30 = *(_DWORD *)(*(_QWORD *)(a3[9] + v27 + 16) + 4 * v26);
        }
        else
        {
          v58 = v4;
          v53 = v27;
          v47 = v25;
          v37 = v29((__int64)a3, v60, v26);
          v4 = v58;
          v27 = v53;
          v25 = v47;
          v30 = v37;
        }
        v31 = *(_QWORD *)(v4 + 16);
        if ( !v31 )
          goto LABEL_39;
        v32 = v28;
        do
        {
          while ( 1 )
          {
            v33 = *(_QWORD *)(v31 + 16);
            v34 = *(_QWORD *)(v31 + 24);
            if ( v30 > *(_DWORD *)(v31 + 32) )
              break;
            v32 = v31;
            v31 = *(_QWORD *)(v31 + 16);
            if ( !v33 )
              goto LABEL_37;
          }
          v31 = *(_QWORD *)(v31 + 24);
        }
        while ( v34 );
LABEL_37:
        if ( v28 == v32 || v30 < *(_DWORD *)(v32 + 32) )
        {
LABEL_39:
          v35 = v19[1];
          v36 = *v19;
          if ( v19[2] < (unsigned __int64)(v35 + 1) )
          {
            v59 = v4;
            v54 = v27;
            v48 = v25;
            v38 = qvector_reserve();
            v4 = v59;
            v27 = v54;
            *v19 = v38;
            v36 = v38;
            v25 = v48;
            v35 = v19[1];
          }
          *(_DWORD *)(v36 + 4 * v35) = v30;
          ++v19[1];
        }
        ++v26;
      }
      while ( v25 != v26 );
      v18 = v28;
    }
    v17 = v19[1];
    if ( !v17 )
      return 0;
  }
  v41 = v19[1];
  v42 = *v19;
  if ( v19[2] < (unsigned __int64)(v41 + 1) )
  {
    v44 = qvector_reserve();
    *v19 = v44;
    v42 = v44;
    v41 = v19[1];
  }
  *(_DWORD *)(v42 + 4 * v41) = v20;
  ++v19[1];
  return 1;
}
