void __fastcall sub_3FE5B0(__int64 a1, unsigned __int8 a2, int a3, unsigned int a4, char *a5, __int64 a6)
{
  __int64 *v9; // r14
  __int64 v10; // rsi
  unsigned int v11; // ebx
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // r9
  char v16; // r13
  __int64 v17; // r8
  __int64 v18; // rax
  _QWORD *v19; // r12
  unsigned int v20; // eax
  __int64 v21; // r15
  __int64 v22; // r15
  __int64 v23; // rdx
  __int64 v24; // rdx
  bool v25; // zf
  void **v26; // rbx
  void **v27; // r12
  void *v28; // rdi
  __int64 v29; // rax
  void **v30; // rsi
  __int64 v31; // r12
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // [rsp+0h] [rbp-44h]

  if ( *(_BYTE *)(a1 + 2233) == 1 && a6 == 1 )
  {
    if ( a2 == 100 )
    {
      v9 = (__int64 *)(a1 + 1704);
      goto LABEL_9;
    }
    if ( a2 > 0x64u )
    {
      if ( a2 == 120 )
      {
        v9 = (__int64 *)(a1 + 1912);
        goto LABEL_9;
      }
    }
    else
    {
      if ( a2 == 68 )
      {
        v9 = (__int64 *)(a1 + 1808);
        goto LABEL_9;
      }
      if ( a2 == 88 )
      {
        v9 = (__int64 *)(a1 + 2016);
LABEL_9:
        v10 = a4;
        v11 = sub_3B9110((_QWORD *)a1, a3);
        v12 = sub_3B9110((_QWORD *)a1, a4);
        v15 = v9 + 8;
        v16 = *a5;
        v17 = v12;
        v18 = v9[9];
        v19 = v9 + 8;
        if ( v18 )
        {
          do
          {
            while ( 1 )
            {
              v13 = *(unsigned int *)(v18 + 32);
              if ( (unsigned int)v13 < v11 || v11 >= (unsigned int)v13 && *(_DWORD *)(v18 + 36) < (unsigned int)v17 )
                break;
              v19 = (_QWORD *)v18;
              v18 = *(_QWORD *)(v18 + 16);
              if ( !v18 )
                goto LABEL_16;
            }
            v18 = *(_QWORD *)(v18 + 24);
          }
          while ( v18 );
LABEL_16:
          if ( v15 != v19 )
          {
            v20 = *((_DWORD *)v19 + 8);
            if ( v11 >= v20 && (v20 < v11 || (unsigned int)v17 >= *((_DWORD *)v19 + 9)) )
              goto LABEL_23;
          }
        }
        v21 = (__int64)v19;
        v19 = (_QWORD *)v9[3];
        ++v9[6];
        if ( v19 )
        {
          v9[3] = *v19;
          *((_DWORD *)v19 + 9) = v17;
          *((_DWORD *)v19 + 8) = v11;
          *((_BYTE *)v19 + 40) = 0;
          v22 = sub_3F9D30(v9, v21, v11, v17);
          if ( v23 )
          {
LABEL_22:
            std::_Rb_tree_insert_and_rebalance();
            ++v9[12];
LABEL_23:
            *((_BYTE *)v19 + 40) = v16;
            sub_3FDD90(a1);
            return;
          }
        }
        else
        {
          v19 = (_QWORD *)v9[4];
          if ( v19 == (_QWORD *)v9[5] )
          {
            v34 = v17;
            v29 = qalloc_or_throw(4194288, v10, v13, v14, v17, v15);
            v30 = (void **)*v9;
            LODWORD(v17) = v34;
            v9[4] = v29;
            v31 = v29;
            v9[5] = v29 + 4194288;
            v32 = v9[1];
            if ( v9[2] < (unsigned __int64)(v32 + 1) )
            {
              v33 = qvector_reserve(v9, v30, v32 + 1, 8);
              LODWORD(v17) = v34;
              *v9 = v33;
              v30 = (void **)v33;
              v32 = v9[1];
            }
            v30[v32] = (void *)v31;
            v19 = (_QWORD *)v9[4];
            ++v9[1];
          }
          v9[4] = (__int64)(v19 + 6);
          *((_DWORD *)v19 + 9) = v17;
          *((_DWORD *)v19 + 8) = v11;
          *((_BYTE *)v19 + 40) = 0;
          v22 = sub_3F9D30(v9, v21, v11, v17);
          if ( v24 )
            goto LABEL_22;
          if ( !v19 )
          {
LABEL_30:
            v19 = (_QWORD *)v22;
            goto LABEL_23;
          }
        }
        *v19 = v9[3];
        v25 = v9[6]-- == 1;
        v9[3] = (__int64)v19;
        if ( v25 )
        {
          v26 = (void **)*v9;
          v27 = (void **)(*v9 + 8 * v9[1]);
          if ( (void **)*v9 != v27 )
          {
            do
            {
              v28 = *v26++;
              qfree(v28);
            }
            while ( v27 != v26 );
            v27 = (void **)*v9;
          }
          if ( v27 )
          {
            v9[1] = 0;
            qfree(v27);
            *v9 = 0;
            v9[2] = 0;
          }
          v9[5] = 0;
          *(_OWORD *)(v9 + 3) = 0;
        }
        goto LABEL_30;
      }
    }
    if ( !under_debugger )
      interr(1808);
    BUG();
  }
}

