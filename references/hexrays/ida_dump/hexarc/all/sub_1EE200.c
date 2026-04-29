__int64 __fastcall sub_1EE200(__int64 a1, int *a2, unsigned int a3)
{
  bool v5; // zf
  __int64 v6; // rax
  int v7; // edx
  unsigned int *v8; // rbx
  int v9; // ebp
  unsigned int v10; // r12d
  __int64 v11; // rax
  __int64 v12; // r15
  unsigned __int64 v13; // rsi
  signed __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int v17; // r10d
  int v18; // eax
  int v19; // eax
  signed __int64 v20; // rax
  int *v21; // r15
  int *v22; // rax
  __int64 v23; // rax
  int v24; // edx
  _QWORD **v25; // rbx
  void *v26; // rdi
  __int64 v28; // rdx
  __int64 v29; // rax
  int v30; // ebp
  __int64 v31; // rsi
  __int64 v32; // rdx
  int *i; // rbp
  __int64 v34; // rdx
  unsigned __int64 v35; // [rsp+8h] [rbp-F0h]
  unsigned __int8 v36; // [rsp+1Ah] [rbp-DEh]
  char v37; // [rsp+1Ah] [rbp-DEh]
  char v38; // [rsp+1Bh] [rbp-DDh]
  char v40; // [rsp+20h] [rbp-D8h] BYREF
  int v41; // [rsp+28h] [rbp-D0h] BYREF
  void *v42; // [rsp+30h] [rbp-C8h]
  int *v43; // [rsp+38h] [rbp-C0h]
  int *v44; // [rsp+40h] [rbp-B8h]
  __int64 v45; // [rsp+48h] [rbp-B0h]
  _QWORD v46[5]; // [rsp+50h] [rbp-A8h] BYREF
  char v47; // [rsp+78h] [rbp-80h]
  __int64 v48; // [rsp+80h] [rbp-78h] BYREF
  __int128 v49; // [rsp+88h] [rbp-70h]
  char *v50; // [rsp+98h] [rbp-60h]
  unsigned int *v51; // [rsp+A0h] [rbp-58h]
  unsigned int v52; // [rsp+A8h] [rbp-50h]
  int v53; // [rsp+ACh] [rbp-4Ch]
  unsigned __int64 v54; // [rsp+B8h] [rbp-40h]

  v54 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a1 + 440) == 0;
  v41 = 0;
  v43 = &v41;
  v44 = &v41;
  v6 = *a2;
  v42 = nullptr;
  v45 = 0;
  v7 = v6;
  v8 = (unsigned int *)(*(_QWORD *)(a1 + 432) + 104 * v6);
  if ( v5 )
    return 0;
  v38 = 0;
  v9 = 0;
  v35 = (int)a3;
  v10 = 0;
  v11 = 0;
  do
  {
    if ( v7 != v9 )
    {
      v12 = *(_QWORD *)(a1 + 432) + 104 * v11;
      if ( !*(_DWORD *)(v12 + 92) )
      {
        v13 = *(int *)(v12 + 88);
        v17 = sub_1BE260((int *)v12, v13, (int *)v8, v35);
        if ( (_BYTE)v17 )
        {
          if ( !*(_QWORD *)(a1 + 800) )
            goto LABEL_19;
          v14 = *v8;
          if ( (((_DWORD)v14 - 2) & 0xFFFFFFFD) == 0
            || (v18 = *(_DWORD *)v12, v15 = (*(_DWORD *)v12 - 2) & 0xFFFFFFFD, ((*(_DWORD *)v12 - 2) & 0xFFFFFFFD) == 0) )
          {
LABEL_43:
            v10 = -20;
            goto LABEL_34;
          }
          if ( v18 == 5 )
          {
            v19 = **(_DWORD **)(v12 + 8);
            goto LABEL_14;
          }
          if ( v18 > 5 )
          {
            if ( v18 != 6 )
              goto LABEL_48;
          }
          else if ( v18 != 1 )
          {
            if ( v18 == 3 )
            {
              v19 = *(unsigned __int16 *)(v12 + 8);
LABEL_14:
              v20 = (unsigned int)(*(_DWORD *)(v12 + 88) + v19);
              if ( *(_DWORD *)(a1 + 792) > v9 )
              {
                v15 = *(unsigned int *)(v12 + 24);
                if ( (v15 & 0x100) != 0 )
                {
                  if ( *(_BYTE *)(a1 + 320) )
                    goto LABEL_43;
                  BYTE1(v15) &= 0x80u;
                  if ( BYTE1(v15) )
                    goto LABEL_43;
                  v38 = v17;
LABEL_19:
                  v21 = (int *)v42;
                  if ( v42 )
                  {
                    while ( 1 )
                    {
                      v15 = (unsigned int)v21[8];
                      v13 = 0;
                      v22 = *((int **)v21 + 3);
                      if ( (int)v15 > v9 )
                      {
                        v22 = *((int **)v21 + 2);
                        v13 = v17;
                      }
                      if ( !v22 )
                        break;
                      v21 = v22;
                    }
                    if ( !(_BYTE)v13 )
                    {
LABEL_26:
                      if ( (int)v15 >= v9 )
                      {
LABEL_30:
                        v7 = *a2;
                        v10 += *a2 > v9;
                        goto LABEL_31;
                      }
                      goto LABEL_27;
                    }
                    if ( v21 == v43 )
                    {
LABEL_27:
                      if ( v21 != &v41 )
                        LOBYTE(v17) = v21[8] > v9;
                      goto LABEL_29;
                    }
                  }
                  else
                  {
                    v21 = v43;
                    if ( v43 == &v41 )
                    {
LABEL_29:
                      v36 = v17;
                      v23 = operator new(0x28u);
                      *(_DWORD *)(v23 + 32) = v9;
                      std::_Rb_tree_insert_and_rebalance(v36, v23, v21, &v41);
                      ++v45;
                      goto LABEL_30;
                    }
                    v21 = &v41;
                  }
                  v37 = v17;
                  v29 = std::_Rb_tree_decrement(v21, v13, v14, v15, v16);
                  LOBYTE(v17) = v37;
                  LODWORD(v15) = *(_DWORD *)(v29 + 32);
                  goto LABEL_26;
                }
              }
              if ( (_DWORD)v14 == 5 )
              {
                v28 = **((_QWORD **)v8 + 1);
              }
              else
              {
                if ( (int)v14 > 5 )
                {
                  if ( (_DWORD)v14 != 6 )
                  {
LABEL_52:
                    v28 = -1;
                    goto LABEL_42;
                  }
                }
                else if ( (_DWORD)v14 != 1 )
                {
                  if ( (_DWORD)v14 == 3 )
                  {
                    v28 = *((unsigned __int16 *)v8 + 4);
                    goto LABEL_42;
                  }
                  goto LABEL_52;
                }
                v28 = *((_QWORD *)v8 + 1);
              }
LABEL_42:
              v14 = v35 + v28;
              if ( v20 > v14 )
                goto LABEL_43;
              goto LABEL_19;
            }
LABEL_48:
            v19 = -1;
            goto LABEL_14;
          }
          v19 = *(_DWORD *)(v12 + 8);
          goto LABEL_14;
        }
        v7 = *a2;
      }
    }
LABEL_31:
    v11 = ++v9;
  }
  while ( (unsigned __int64)v9 < *(_QWORD *)(a1 + 440) );
  v24 = v7 - v10;
  v5 = v45 == 0;
  *a2 = v24;
  if ( v5 )
    goto LABEL_33;
  v50 = &v40;
  memset(&v46[1], 0, 32);
  v47 = 0;
  v46[0] = &off_4AB368;
  v48 = 0;
  v51 = v8;
  v52 = a3;
  v53 = v24;
  v49 = 0;
  v30 = sub_1194F0(a1, (__int64)v46);
  if ( v30 )
    goto LABEL_58;
  v31 = 0;
  sub_14F310((__int64)&v48, 0);
  if ( *v8 == 1 )
  {
    v31 = *((_QWORD *)v8 + 1);
    sub_229600(a1 + 816, v31, a3);
  }
  for ( i = &v41; i != v43; i = (int *)std::_Rb_tree_decrement(i, v31, v34) )
  {
    v31 = *(unsigned int *)(std::_Rb_tree_decrement(i, v31, v32) + 32);
    sub_1EDF80(a1, v31);
  }
  v30 = -36;
  if ( v38 )
  {
LABEL_58:
    v46[0] = &off_4AB368;
    sub_14F310((__int64)&v48, 1);
    if ( v48 )
    {
      *(_QWORD *)&v49 = 0;
      qfree(v48);
    }
    v10 = v30;
  }
  else
  {
    v46[0] = &off_4AB368;
    sub_14F310((__int64)&v48, 1);
    if ( v48 )
    {
      *(_QWORD *)&v49 = 0;
      qfree(v48);
    }
LABEL_33:
    if ( v10 )
    {
      if ( !under_debugger )
        sub_37B760(51719);
      BUG();
    }
  }
LABEL_34:
  v25 = (_QWORD **)v42;
  if ( v42 )
  {
    do
    {
      sub_1E6370(v25[3]);
      v26 = v25;
      v25 = (_QWORD **)v25[2];
      operator delete(v26, 0x28u);
    }
    while ( v25 );
  }
  return v10;
}
