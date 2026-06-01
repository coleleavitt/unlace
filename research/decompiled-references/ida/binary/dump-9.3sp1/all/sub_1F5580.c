__int64 __fastcall sub_1F5580(__int64 a1, int *a2, unsigned int a3)
{
  bool v5; // zf
  __int64 v6; // rax
  int v7; // edx
  __int64 v8; // rbx
  int v9; // ebp
  unsigned int v10; // r12d
  __int64 v11; // rax
  __int64 v12; // r15
  char v13; // r10
  int v14; // edx
  int v15; // eax
  int v16; // eax
  signed __int64 v17; // rax
  int v18; // ecx
  int *v19; // r15
  int v20; // ecx
  char v21; // si
  int *v22; // rax
  int v23; // edx
  _QWORD **v24; // rbx
  void *v25; // rdi
  __int64 v27; // rdx
  int v28; // ebp
  __int64 v29; // rax
  unsigned __int64 v30; // [rsp+8h] [rbp-F0h]
  char v31; // [rsp+1Bh] [rbp-DDh]
  char v33; // [rsp+20h] [rbp-D8h] BYREF
  int v34; // [rsp+28h] [rbp-D0h] BYREF
  void *v35; // [rsp+30h] [rbp-C8h]
  int *v36; // [rsp+38h] [rbp-C0h]
  int *v37; // [rsp+40h] [rbp-B8h]
  __int64 v38; // [rsp+48h] [rbp-B0h]
  _QWORD v39[5]; // [rsp+50h] [rbp-A8h] BYREF
  char v40; // [rsp+78h] [rbp-80h]
  __int64 v41; // [rsp+80h] [rbp-78h] BYREF
  __int128 v42; // [rsp+88h] [rbp-70h]
  char *v43; // [rsp+98h] [rbp-60h]
  __int64 v44; // [rsp+A0h] [rbp-58h]
  unsigned int v45; // [rsp+A8h] [rbp-50h]
  int v46; // [rsp+ACh] [rbp-4Ch]
  unsigned __int64 v47; // [rsp+B8h] [rbp-40h]

  v47 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a1 + 440) == 0;
  v34 = 0;
  v36 = &v34;
  v37 = &v34;
  v6 = *a2;
  v35 = nullptr;
  v38 = 0;
  v7 = v6;
  v8 = *(_QWORD *)(a1 + 432) + 104 * v6;
  if ( v5 )
    return 0;
  v31 = 0;
  v9 = 0;
  v30 = (int)a3;
  v10 = 0;
  v11 = 0;
  do
  {
    if ( v7 != v9 )
    {
      v12 = *(_QWORD *)(a1 + 432) + 104 * v11;
      if ( !*(_DWORD *)(v12 + 92) )
      {
        v13 = sub_1C4AE0((int *)v12, *(int *)(v12 + 88), (int *)v8, v30);
        if ( v13 )
        {
          if ( !*(_QWORD *)(a1 + 800) )
            goto LABEL_19;
          v14 = *(_DWORD *)v8;
          if ( ((*(_DWORD *)v8 - 2) & 0xFFFFFFFD) == 0
            || (v15 = *(_DWORD *)v12, ((*(_DWORD *)v12 - 2) & 0xFFFFFFFD) == 0) )
          {
LABEL_41:
            v10 = -20;
            goto LABEL_32;
          }
          if ( v15 == 5 )
          {
            v16 = **(_DWORD **)(v12 + 8);
            goto LABEL_14;
          }
          if ( v15 > 5 )
          {
            if ( v15 != 6 )
              goto LABEL_46;
          }
          else if ( v15 != 1 )
          {
            if ( v15 == 3 )
            {
              v16 = *(unsigned __int16 *)(v12 + 8);
LABEL_14:
              v17 = (unsigned int)(*(_DWORD *)(v12 + 88) + v16);
              if ( *(_DWORD *)(a1 + 792) > v9 )
              {
                v18 = *(_DWORD *)(v12 + 24);
                if ( (v18 & 0x100) != 0 )
                {
                  if ( *(_BYTE *)(a1 + 320) || (v18 & 0x8000) != 0 )
                    goto LABEL_41;
                  v31 = v13;
LABEL_19:
                  v19 = (int *)v35;
                  if ( v35 )
                  {
                    while ( 1 )
                    {
                      v20 = v19[8];
                      v21 = 0;
                      v22 = *((int **)v19 + 3);
                      if ( v20 > v9 )
                      {
                        v22 = *((int **)v19 + 2);
                        v21 = v13;
                      }
                      if ( !v22 )
                        break;
                      v19 = v22;
                    }
                    if ( !v21 )
                    {
LABEL_26:
                      if ( v20 >= v9 )
                      {
LABEL_28:
                        v7 = *a2;
                        v10 += *a2 > v9;
                        goto LABEL_29;
                      }
LABEL_27:
                      *(_DWORD *)(operator new(0x28u) + 32) = v9;
                      std::_Rb_tree_insert_and_rebalance();
                      ++v38;
                      goto LABEL_28;
                    }
                    if ( v19 == v36 )
                      goto LABEL_27;
                  }
                  else if ( v36 == &v34 )
                  {
                    goto LABEL_27;
                  }
                  v20 = *(_DWORD *)(std::_Rb_tree_decrement() + 32);
                  goto LABEL_26;
                }
              }
              if ( v14 == 5 )
              {
                v27 = **(_QWORD **)(v8 + 8);
              }
              else
              {
                if ( v14 > 5 )
                {
                  if ( v14 != 6 )
                  {
LABEL_50:
                    v27 = -1;
                    goto LABEL_40;
                  }
                }
                else if ( v14 != 1 )
                {
                  if ( v14 == 3 )
                  {
                    v27 = *(unsigned __int16 *)(v8 + 8);
                    goto LABEL_40;
                  }
                  goto LABEL_50;
                }
                v27 = *(_QWORD *)(v8 + 8);
              }
LABEL_40:
              if ( v17 > (__int64)(v30 + v27) )
                goto LABEL_41;
              goto LABEL_19;
            }
LABEL_46:
            v16 = -1;
            goto LABEL_14;
          }
          v16 = *(_DWORD *)(v12 + 8);
          goto LABEL_14;
        }
        v7 = *a2;
      }
    }
LABEL_29:
    v11 = ++v9;
  }
  while ( (unsigned __int64)v9 < *(_QWORD *)(a1 + 440) );
  v23 = v7 - v10;
  v5 = v38 == 0;
  *a2 = v23;
  if ( v5 )
    goto LABEL_31;
  v43 = &v33;
  memset(&v39[1], 0, 32);
  v40 = 0;
  v39[0] = &off_4DEB68;
  v41 = 0;
  v44 = v8;
  v45 = a3;
  v46 = v23;
  v42 = 0;
  v28 = sub_11FBB0(a1, (__int64)v39);
  if ( v28 )
    goto LABEL_56;
  sub_1559D0((__int64)&v41, 0);
  if ( *(_DWORD *)v8 == 1 )
    sub_230980(a1 + 816, *(_QWORD *)(v8 + 8), a3);
  if ( v36 != &v34 )
  {
    do
    {
      v29 = std::_Rb_tree_decrement();
      sub_1F5300(a1, *(_DWORD *)(v29 + 32));
    }
    while ( (int *)std::_Rb_tree_decrement() != v36 );
  }
  v28 = -36;
  if ( v31 )
  {
LABEL_56:
    v39[0] = &off_4DEB68;
    sub_1559D0((__int64)&v41, 1);
    if ( v41 )
    {
      *(_QWORD *)&v42 = 0;
      qfree(v41);
    }
    v10 = v28;
  }
  else
  {
    v39[0] = &off_4DEB68;
    sub_1559D0((__int64)&v41, 1);
    if ( v41 )
    {
      *(_QWORD *)&v42 = 0;
      qfree(v41);
    }
LABEL_31:
    if ( v10 )
    {
      if ( !under_debugger )
        sub_383060(51719);
      BUG();
    }
  }
LABEL_32:
  v24 = (_QWORD **)v35;
  if ( v35 )
  {
    do
    {
      sub_1ED6F0(v24[3]);
      v25 = v24;
      v24 = (_QWORD **)v24[2];
      operator delete(v25, 0x28u);
    }
    while ( v24 );
  }
  return v10;
}
