__int64 __fastcall sub_3B1690(int a1, _QWORD *a2, __int64 *a3, char a4)
{
  __int64 *v4; // r8
  int v6; // ebp
  __int64 v8; // r12
  int v9; // r15d
  int v10; // eax
  int v11; // ebx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rbp
  int v14; // ebp
  _QWORD *v15; // r9
  __int64 v16; // rsi
  __int64 v17; // r13
  int v18; // eax
  unsigned int **v19; // rax
  __int64 v20; // rdi
  int v21; // eax
  __int64 bpt_kernel_interface; // rdi
  __int64 v24; // rax
  unsigned int **v25; // r10
  __int64 v26; // rdx
  char v27; // al
  __int64 *v28; // r10
  _QWORD *v29; // r9
  __int64 *v30; // r8
  __int64 v31; // rax
  __int64 *v32; // [rsp+8h] [rbp-90h]
  _QWORD *v33; // [rsp+8h] [rbp-90h]
  unsigned int **v34; // [rsp+8h] [rbp-90h]
  _QWORD *v35; // [rsp+8h] [rbp-90h]
  __int64 *v36; // [rsp+8h] [rbp-90h]
  _QWORD *v37; // [rsp+8h] [rbp-90h]
  __int64 *v38; // [rsp+8h] [rbp-90h]
  _QWORD *v39; // [rsp+8h] [rbp-90h]
  __int64 *v40; // [rsp+10h] [rbp-88h]
  _QWORD *v41; // [rsp+10h] [rbp-88h]
  unsigned int **v42; // [rsp+10h] [rbp-88h]
  _QWORD *v43; // [rsp+10h] [rbp-88h]
  __int64 *v44; // [rsp+10h] [rbp-88h]
  __int64 *v45; // [rsp+10h] [rbp-88h]
  __int64 *v46; // [rsp+18h] [rbp-80h]
  unsigned int v47; // [rsp+20h] [rbp-78h]
  unsigned int *v49; // [rsp+28h] [rbp-70h]
  unsigned int *v50; // [rsp+30h] [rbp-68h]
  void *ptr; // [rsp+40h] [rbp-58h] BYREF
  __int128 v52; // [rsp+48h] [rbp-50h]
  unsigned __int64 v53; // [rsp+58h] [rbp-40h]

  v4 = a3;
  v6 = 0;
  v53 = __readfsqword(0x28u);
  v8 = a2[1];
  v9 = v8;
  if ( (int)v8 > 0 )
  {
    while ( 1 )
    {
      v10 = compare_bpt_locs(*a2, *a2 + 12LL);
      if ( v10 )
        break;
      if ( (_DWORD)v8 == ++v6 )
      {
        v4 = a3;
        if ( !a3 )
          goto LABEL_40;
        v12 = a3[1];
        v13 = (int)v8;
        if ( v12 < (int)v8 )
          goto LABEL_14;
        if ( v12 == (int)v8 )
        {
LABEL_40:
          v14 = 0;
          v11 = 1;
          v15 = *(_QWORD **)(qword_2CA1698 + 1384);
          goto LABEL_21;
        }
        goto LABEL_31;
      }
    }
    v4 = a3;
    v11 = v10;
    if ( !v4 )
      goto LABEL_18;
    v12 = v4[1];
    v13 = (int)v8;
    if ( v12 >= (int)v8 )
    {
      if ( (int)v8 != v12 )
        v4[1] = (int)v8;
      if ( v10 > 0 )
      {
        v14 = 0;
      }
      else
      {
        v14 = v8 - 1;
        v9 = -1;
      }
      v15 = *(_QWORD **)(qword_2CA1698 + 1384);
      goto LABEL_21;
    }
    goto LABEL_15;
  }
  if ( a3 )
  {
    v12 = a3[1];
    v13 = (int)v8;
    if ( v12 >= (int)v8 )
    {
      if ( v12 != (int)v8 )
LABEL_31:
        v4[1] = v13;
      goto LABEL_32;
    }
LABEL_14:
    v11 = 1;
LABEL_15:
    v16 = *v4;
    if ( v4[2] < v13 )
    {
      v38 = v4;
      v31 = qvector_reserve(v4, v16, v13, 4);
      v4 = v38;
      v16 = v31;
      *v38 = v31;
      v12 = v38[1];
    }
    v32 = v4;
    memset((void *)(v16 + 4 * v12), 0, 4 * (v13 - v12));
    v4 = v32;
    v32[1] = v13;
LABEL_18:
    v14 = 0;
    if ( v11 <= 0 )
    {
      v14 = v8 - 1;
      v9 = -1;
    }
    v15 = *(_QWORD **)(qword_2CA1698 + 1384);
    goto LABEL_21;
  }
LABEL_32:
  if ( !(_DWORD)v8 )
    return 0;
  v11 = 1;
  v14 = 0;
  v15 = *(_QWORD **)(qword_2CA1698 + 1384);
LABEL_21:
  v47 = 0;
  do
  {
    v17 = *a2 + 24LL * v14;
    v18 = 3;
    if ( *(_DWORD *)(v17 + 8) && *(_DWORD *)(v17 + 20) )
    {
      v40 = v4;
      v33 = v15;
      v19 = (unsigned int **)sub_3AAB40(v17 - 32);
      v15 = v33;
      v4 = v40;
      if ( v19 == (unsigned int **)(*v33 + 8LL * v33[1])
        || (v46 = v40,
            v41 = v33,
            v20 = (__int64)(*v19 + 8),
            v34 = v19,
            v21 = compare_bpt_locs(v20, v17),
            v15 = v41,
            v4 = v46,
            v21) )
      {
        v18 = 1;
      }
      else
      {
        v42 = v34;
        v35 = v15;
        bpt_kernel_interface = get_bpt_kernel_interface(v20, v17);
        v49 = (unsigned int *)(v17 + 12);
        v24 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)bpt_kernel_interface + 280LL))(
                bpt_kernel_interface,
                v17 + 12);
        v15 = v35;
        v25 = v42;
        v4 = v46;
        v26 = v24;
        if ( v24 )
        {
          v18 = 2;
          if ( a4 )
          {
            ptr = nullptr;
            v52 = 0;
            sub_3B0010((unsigned int *)(v26 + 32), (__int64 *)&ptr);
            sub_365330();
          }
        }
        else
        {
          v43 = v35;
          v36 = (__int64 *)v25;
          v50 = *v25;
          v27 = must_journal(bpt_kernel_interface, v17 + 12, 0);
          v28 = v36;
          v29 = v43;
          v30 = v46;
          if ( v27 )
          {
            ptr = nullptr;
            v52 = 0;
            sub_3A73C0((__int64 *)&ptr, v50 + 8);
            sub_3A73C0((__int64 *)&ptr, v49);
            add_undo_record(197, ptr, v52);
            v29 = v43;
            v28 = v36;
            v30 = v46;
            if ( ptr )
            {
              v45 = v36;
              v39 = v29;
              *(_QWORD *)&v52 = 0;
              qfree(ptr);
              v30 = v46;
              v28 = v45;
              v29 = v39;
            }
          }
          v44 = v30;
          v37 = v29;
          sub_3AACB0(v28, v17, (__int64)v49, 0);
          ++v47;
          v15 = v37;
          v18 = 0;
          v4 = v44;
        }
      }
    }
    if ( v4 )
      *(_DWORD *)(*v4 + 4LL * v14) = v18;
    v14 += v11;
  }
  while ( v14 != v9 );
  return v47;
}

