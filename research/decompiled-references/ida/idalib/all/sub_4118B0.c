void __fastcall sub_4118B0(__int64 a1, unsigned __int8 a2, __int64 a3, __int64 a4, char *a5, __int64 a6)
{
  __int64 *v9; // r14
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rax
  _QWORD *v12; // r9
  char v13; // r13
  unsigned __int64 v14; // r8
  _QWORD *v15; // rax
  _QWORD *v16; // r12
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  _QWORD *v19; // r15
  _QWORD *v20; // rax
  _QWORD *v21; // rdx
  unsigned __int64 v22; // r8
  _QWORD *v23; // r9
  _QWORD *v24; // r15
  _BOOL8 v25; // rdi
  _QWORD *v26; // rax
  bool v27; // zf
  unsigned __int64 v28; // rax
  void **v29; // rbx
  void **v30; // r12
  void *v31; // rdi
  __int64 v32; // rax
  void **v33; // rsi
  __int64 v34; // r12
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned __int64 v37; // [rsp+0h] [rbp-48h]
  unsigned __int64 v38; // [rsp+0h] [rbp-48h]
  unsigned __int64 v39; // [rsp+0h] [rbp-48h]
  _QWORD *v40; // [rsp+8h] [rbp-40h]

  if ( *(_BYTE *)(a1 + 2321) == 1 && a6 == 1 )
  {
    if ( a2 == 100 )
    {
      v9 = (__int64 *)(a1 + 1792);
      goto LABEL_9;
    }
    if ( a2 > 0x64u )
    {
      if ( a2 == 120 )
      {
        v9 = (__int64 *)(a1 + 2000);
        goto LABEL_9;
      }
    }
    else
    {
      if ( a2 == 68 )
      {
        v9 = (__int64 *)(a1 + 1896);
        goto LABEL_9;
      }
      if ( a2 == 88 )
      {
        v9 = (__int64 *)(a1 + 2104);
LABEL_9:
        v10 = sub_3BDE50((_QWORD *)a1, a3);
        v11 = sub_3BDE50((_QWORD *)a1, a4);
        v12 = v9 + 8;
        v13 = *a5;
        v14 = v11;
        v15 = (_QWORD *)v9[9];
        v16 = v9 + 8;
        if ( v15 )
        {
          do
          {
            while ( 1 )
            {
              v17 = v15[4];
              if ( v17 < v10 || v10 >= v17 && v15[5] < v14 )
                break;
              v16 = v15;
              v15 = (_QWORD *)v15[2];
              if ( !v15 )
                goto LABEL_16;
            }
            v15 = (_QWORD *)v15[3];
          }
          while ( v15 );
LABEL_16:
          if ( v12 != v16 )
          {
            v18 = v16[4];
            if ( v10 >= v18 && (v18 < v10 || v14 >= v16[5]) )
              goto LABEL_26;
          }
        }
        v19 = v16;
        v16 = (_QWORD *)v9[3];
        ++v9[6];
        if ( v16 )
        {
          v9[3] = *v16;
          v16[5] = v14;
          v16[4] = v10;
          *((_BYTE *)v16 + 48) = 0;
          v37 = v14;
          v20 = sub_40CE50(v9, v19, v10, v14);
          v22 = v37;
          v23 = v9 + 8;
          v24 = v20;
          if ( v21 )
          {
LABEL_22:
            if ( v23 == v21 || v24 )
            {
              v25 = 1;
            }
            else
            {
              v28 = v21[4];
              v25 = 1;
              if ( v10 >= v28 )
              {
                v25 = 0;
                if ( v28 >= v10 )
                  v25 = v22 < v21[5];
              }
            }
            std::_Rb_tree_insert_and_rebalance(v25, v16, v21, v23);
            ++v9[12];
            goto LABEL_26;
          }
        }
        else
        {
          v16 = (_QWORD *)v9[4];
          if ( v16 == (_QWORD *)v9[5] )
          {
            v39 = v14;
            v32 = qalloc_or_throw(&loc_3FFFF0);
            v33 = (void **)*v9;
            v14 = v39;
            v9[4] = v32;
            v34 = v32;
            v12 = v9 + 8;
            v9[5] = (__int64)&loc_3FFFF0 + v32;
            v35 = v9[1];
            if ( v9[2] < (unsigned __int64)(v35 + 1) )
            {
              v36 = qvector_reserve(v9, v33, v35 + 1, 8);
              v12 = v9 + 8;
              v14 = v39;
              *v9 = v36;
              v33 = (void **)v36;
              v35 = v9[1];
            }
            v33[v35] = (void *)v34;
            v16 = (_QWORD *)v9[4];
            ++v9[1];
          }
          v9[4] = (__int64)(v16 + 7);
          v16[5] = v14;
          v16[4] = v10;
          *((_BYTE *)v16 + 48) = 0;
          v40 = v12;
          v38 = v14;
          v26 = sub_40CE50(v9, v19, v10, v14);
          v22 = v38;
          v23 = v40;
          v24 = v26;
          if ( v21 )
            goto LABEL_22;
          if ( !v16 )
          {
LABEL_33:
            v16 = v24;
LABEL_26:
            *((_BYTE *)v16 + 48) = v13;
            sub_411050(a1);
            return;
          }
        }
        *v16 = v9[3];
        v27 = v9[6]-- == 1;
        v9[3] = (__int64)v16;
        if ( v27 )
        {
          v29 = (void **)*v9;
          v30 = (void **)(*v9 + 8 * v9[1]);
          if ( (void **)*v9 != v30 )
          {
            do
            {
              v31 = *v29++;
              qfree(v31);
            }
            while ( v30 != v29 );
            v30 = (void **)*v9;
          }
          if ( v30 )
          {
            v9[1] = 0;
            qfree(v30);
            *v9 = 0;
            v9[2] = 0;
          }
          v9[5] = 0;
          *(_OWORD *)(v9 + 3) = 0;
        }
        goto LABEL_33;
      }
    }
    if ( !under_debugger )
      interr(1808);
    BUG();
  }
}
