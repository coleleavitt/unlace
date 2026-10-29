unsigned __int64 __fastcall sub_4B81A0(_QWORD *a1, int a2, int a3, int a4)
{
  __int64 v6; // rdi
  unsigned int v9; // r12d
  unsigned int v10; // ebx
  unsigned int v11; // eax
  __int64 v12; // r15
  unsigned int v13; // r12d
  int *v14; // r10
  unsigned int v15; // r13d
  _QWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  int *v20; // r11
  unsigned int v21; // esi
  _DWORD *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 i; // rbx
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rax
  unsigned int v30; // [rsp+4h] [rbp-B4h]
  int *v31; // [rsp+10h] [rbp-A8h]
  int *v32; // [rsp+10h] [rbp-A8h]
  int *v33; // [rsp+10h] [rbp-A8h]
  int *v34; // [rsp+10h] [rbp-A8h]
  int *v35; // [rsp+18h] [rbp-A0h]
  int *v36; // [rsp+18h] [rbp-A0h]
  int v37; // [rsp+28h] [rbp-90h]
  unsigned int v38; // [rsp+38h] [rbp-80h] BYREF
  int v39; // [rsp+3Ch] [rbp-7Ch] BYREF
  char v40[8]; // [rsp+40h] [rbp-78h] BYREF
  int v41; // [rsp+48h] [rbp-70h] BYREF
  _QWORD *v42; // [rsp+50h] [rbp-68h]
  int *v43; // [rsp+58h] [rbp-60h]
  int *v44; // [rsp+60h] [rbp-58h]
  __int64 v45; // [rsp+68h] [rbp-50h]
  unsigned __int64 v46; // [rsp+78h] [rbp-40h]

  v6 = *a1;
  v46 = __readfsqword(0x28u);
  sub_4C9570(v6);
  if ( (unsigned __int8)sub_614FB0(*a1, 35) != 10 )
    return v46 - __readfsqword(0x28u);
  v41 = 0;
  v42 = nullptr;
  v43 = &v41;
  v44 = &v41;
  v45 = 0;
  v37 = a3 - a2;
  v9 = sub_3B90A0(a1, a2);
  v30 = sub_3B90A0(a1, a2 + a4);
  v10 = netnode_lower_bound(*((unsigned int *)a1 + 583), v9, 83);
  if ( v10 < v30 )
  {
    while ( 1 )
    {
      v11 = netnode_altval(*((unsigned int *)a1 + 583), v10, 65);
      v12 = v11;
      v13 = v11;
      if ( v11 )
        break;
LABEL_24:
      v10 = netnode_supnext(*((unsigned int *)a1 + 583), v10, 65);
      if ( v10 >= v30 )
        goto LABEL_25;
    }
    v14 = &v41;
    v15 = v37 + v10;
    v16 = v42;
    if ( v42 )
    {
      do
      {
        while ( 1 )
        {
          v17 = v16[2];
          v18 = v16[3];
          if ( *((_DWORD *)v16 + 8) < v15 )
            break;
          v14 = (int *)v16;
          v16 = (_QWORD *)v16[2];
          if ( !v17 )
            goto LABEL_10;
        }
        v16 = (_QWORD *)v16[3];
      }
      while ( v18 );
LABEL_10:
      if ( v14 != &v41 && v15 >= v14[8] )
      {
LABEL_23:
        *((_QWORD *)v14 + 5) = v12;
        netnode_supdel(*((unsigned int *)a1 + 583), v10, 65);
        v25 = *((unsigned int *)a1 + 582);
        v38 = v15 + 1;
        netnode_supset(v25, v13, &v38, 4, 65);
        goto LABEL_24;
      }
    }
    v31 = v14;
    v19 = operator new(0x30u);
    v14 = v31;
    *(_DWORD *)(v19 + 32) = v15;
    v20 = (int *)v19;
    *(_QWORD *)(v19 + 40) = 0;
    if ( v31 == &v41 )
    {
      if ( v45 )
      {
        v22 = v44;
        v14 = nullptr;
        if ( v44[8] < v15 )
          goto LABEL_21;
      }
    }
    else
    {
      v21 = v31[8];
      if ( v15 >= v21 )
      {
        if ( v21 >= v15 )
          goto LABEL_33;
        if ( v44 != v31 )
        {
          v36 = (int *)v19;
          v29 = std::_Rb_tree_increment();
          v20 = v36;
          v22 = (_DWORD *)v29;
          if ( v15 >= *(_DWORD *)(v29 + 32) )
            goto LABEL_20;
          v14 = v31;
          if ( *((_QWORD *)v31 + 3) )
          {
            v14 = (int *)v29;
            goto LABEL_21;
          }
        }
        if ( v14 )
          goto LABEL_22;
        goto LABEL_33;
      }
      v22 = v31;
      if ( v43 == v31 )
        goto LABEL_21;
      v35 = (int *)v19;
      v23 = std::_Rb_tree_decrement();
      v20 = v35;
      v22 = (_DWORD *)v23;
      if ( *(_DWORD *)(v23 + 32) < v15 )
      {
        v14 = nullptr;
        if ( *(_QWORD *)(v23 + 24) )
        {
          v14 = v31;
          v22 = v31;
        }
LABEL_21:
        if ( v22 )
        {
LABEL_22:
          v33 = v20;
          std::_Rb_tree_insert_and_rebalance();
          ++v45;
          v14 = v33;
          goto LABEL_23;
        }
LABEL_33:
        if ( v20 )
        {
          v34 = v14;
          operator delete(v20, 0x30u);
          v14 = v34;
        }
        goto LABEL_23;
      }
    }
LABEL_20:
    v32 = v20;
    v24 = sub_4B0F80((__int64)v40, v15);
    v20 = v32;
    v14 = (int *)v24;
    goto LABEL_21;
  }
LABEL_25:
  for ( i = (__int64)v43; (int *)i != &v41; i = std::_Rb_tree_increment() )
  {
    v27 = *(unsigned int *)(i + 32);
    v28 = *((unsigned int *)a1 + 583);
    v39 = *(_QWORD *)(i + 40);
    netnode_supset(v28, v27, &v39, 4, 65);
  }
  sub_4B1A60(v42);
  return v46 - __readfsqword(0x28u);
}

