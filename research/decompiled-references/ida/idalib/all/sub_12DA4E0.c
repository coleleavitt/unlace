__int64 __fastcall sub_12DA4E0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  int *v7; // r15
  int *v8; // rbp
  _QWORD *v9; // r12
  int v10; // eax
  int v11; // r14d
  unsigned int v12; // r11d
  signed int v13; // r13d
  __int64 v14; // rax
  int v15; // edx
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rax
  void *v20; // rax
  void **v22; // rcx
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // r14
  void *v30; // rax
  unsigned int v31; // [rsp+8h] [rbp-80h]
  unsigned __int8 v32; // [rsp+Fh] [rbp-79h]
  unsigned int v33; // [rsp+10h] [rbp-78h]
  unsigned int v34; // [rsp+10h] [rbp-78h]
  __int64 v35; // [rsp+10h] [rbp-78h]
  __int64 v36; // [rsp+10h] [rbp-78h]
  __int64 v37; // [rsp+10h] [rbp-78h]
  _QWORD *v38; // [rsp+20h] [rbp-68h]
  __int64 v39; // [rsp+28h] [rbp-60h]
  unsigned __int64 v40; // [rsp+30h] [rbp-58h] BYREF
  __int64 v41; // [rsp+38h] [rbp-50h]
  __int64 v42; // [rsp+40h] [rbp-48h]
  int v43; // [rsp+48h] [rbp-40h]

  v32 = *(_BYTE *)(a2 + 32);
  if ( v32 )
  {
    v6 = *(unsigned int *)(a2 + 48);
    v7 = *(int **)(a2 + 40);
    v8 = &v7[14 * v6];
    if ( v8 != v7 )
    {
      v9 = a1 + 4;
      v38 = a1 + 3;
      do
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v10 = *v7;
            if ( *v7 != 1 )
              break;
            v24 = *(_QWORD *)(v7 + 9);
            v25 = *(_QWORD *)(v7 + 7);
            v7 += 14;
            a2 = (unsigned int)*(v7 - 8);
            sub_12DA010((__int64)a1, (const char *)a2, v25, v24, *(v7 - 3), *((unsigned __int8 *)v7 - 8));
            if ( v7 == v8 )
              goto LABEL_36;
          }
          if ( v10 )
            break;
          v22 = *((void ***)v7 + 1);
          v23 = *(_QWORD *)(v7 + 7);
          v7 += 14;
          a2 = (unsigned int)*(v7 - 8);
          sub_12D9AA0((__int64)a1, a2, v23, v22, *((_QWORD *)v7 - 5), *((unsigned __int8 *)v7 - 8));
          if ( v7 == v8 )
            goto LABEL_36;
        }
        if ( v10 != 2 )
          goto LABEL_35;
        v11 = v7[11];
        if ( !v11 )
          goto LABEL_35;
        v12 = v7[8];
        v13 = v7[7];
        a4 = (__int64)(a1 + 4);
        a2 = a1[6];
        v31 = v11 + v12;
        v14 = a1[5];
        if ( v14 )
        {
          do
          {
            while ( 1 )
            {
              v15 = *(_DWORD *)(v14 + 32);
              if ( v13 < v15 || v12 < *(_DWORD *)(v14 + 36) && v13 == v15 )
                break;
              v14 = *(_QWORD *)(v14 + 24);
              if ( !v14 )
                goto LABEL_15;
            }
            a4 = v14;
            v14 = *(_QWORD *)(v14 + 16);
          }
          while ( v14 );
LABEL_15:
          if ( a4 == a2 )
            goto LABEL_17;
        }
        else if ( v9 == (_QWORD *)a2 )
        {
          goto LABEL_48;
        }
        v33 = v7[8];
        v16 = std::_Rb_tree_decrement(a4);
        v12 = v33;
        a4 = v16;
LABEL_17:
        if ( v9 == (_QWORD *)a4 )
          goto LABEL_49;
        v17 = *(_DWORD *)(a4 + 32);
        if ( v13 < v17 )
          goto LABEL_42;
        v6 = *(unsigned int *)(a4 + 36);
        a2 = (unsigned int)(v6 + *(_DWORD *)(a4 + 56));
        if ( v12 >= (unsigned int)a2 || v13 != v17 )
        {
          while ( 1 )
          {
            v34 = v12;
            v18 = std::_Rb_tree_increment(a4, (const char *)a2);
            v12 = v34;
            a4 = v18;
            if ( v9 == (_QWORD *)v18 )
              break;
            v17 = *(_DWORD *)(v18 + 32);
            v6 = *(unsigned int *)(a4 + 36);
            if ( v13 < v17 )
              goto LABEL_42;
            a2 = (unsigned int)(v6 + *(_DWORD *)(a4 + 56));
            if ( v34 < (unsigned int)a2 && v13 == v17 )
              goto LABEL_25;
          }
LABEL_49:
          a2 = (__int64)(a1 + 4);
LABEL_48:
          v40 = __PAIR64__(v12, v13);
          v41 = 0;
          v42 = 0;
          v43 = 0;
          *(_DWORD *)(sub_12D89D0(v38, a2, (__int64 *)&v40) + 56) = v11;
          goto LABEL_35;
        }
LABEL_25:
        if ( v12 < (unsigned int)v6 )
        {
LABEL_42:
          a2 = a4;
          v36 = a4;
          v40 = __PAIR64__(v12, v13);
          v41 = 0;
          v42 = 0;
          v43 = 0;
          v26 = sub_12D89D0(v38, a4, (__int64 *)&v40);
          a4 = v36;
          *(_DWORD *)(v26 + 56) = v11;
          v6 = v26 + 40;
          goto LABEL_43;
        }
        if ( v31 > (unsigned int)a2 || v13 > v17 )
        {
          *(_DWORD *)(a4 + 56) = v31 - v6;
          if ( v12 == (_DWORD)v6 )
          {
            *(_QWORD *)(a4 + 40) = 0;
            *(_QWORD *)(a4 + 48) = 0;
          }
          v35 = a4 + 40;
          v19 = std::_Rb_tree_increment(a4, (const char *)a2);
          v6 = v35;
          a4 = v19;
LABEL_43:
          if ( v9 != (_QWORD *)a4 )
          {
            while ( 1 )
            {
              v27 = *(_DWORD *)(a4 + 32);
              if ( v13 <= v27 )
              {
                a2 = *(unsigned int *)(a4 + 36);
                if ( v31 <= (unsigned int)a2 || v13 != v27 )
                  goto LABEL_35;
                a2 = (unsigned int)(*(_DWORD *)(a4 + 56) + a2);
                if ( v31 < (unsigned int)a2 )
                  break;
              }
              v39 = v6;
              v37 = a4;
              v28 = std::_Rb_tree_increment(a4, (const char *)a2);
              a2 = (__int64)(a1 + 4);
              v29 = v28;
              v30 = (void *)std::_Rb_tree_rebalance_for_erase(v37, v9);
              operator delete(v30);
              --a1[8];
              a4 = v29;
              v6 = v39;
              if ( v9 == (_QWORD *)v29 )
                goto LABEL_35;
            }
            *(_DWORD *)(v6 + 16) = *(_DWORD *)(v6 + 16) - v31 + a2;
            a2 = (__int64)(a1 + 4);
            v20 = (void *)std::_Rb_tree_rebalance_for_erase(a4, v9);
            operator delete(v20);
            --a1[8];
          }
        }
LABEL_35:
        v7 += 14;
      }
      while ( v7 != v8 );
    }
LABEL_36:
    sub_12D7AF0((__int64)a1, a2, v6, a4, a5, a6);
  }
  return v32;
}
