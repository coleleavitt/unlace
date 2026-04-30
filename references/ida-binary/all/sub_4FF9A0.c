void __fastcall sub_4FF9A0(__int64 *a1, int **a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r15
  int *v12; // rbx
  char *v13; // rbp
  __int64 v14; // r12
  int i; // r14d
  int v16; // r15d
  __int64 v17; // r9
  __int64 v18; // rax
  int v19; // r15d
  int v20; // r15d
  int *v21; // rax
  char *v22; // rdi
  int *v23; // rdx
  char *v24; // rcx
  char *v25; // rcx
  size_t v26; // rdx
  char *v27; // rax
  char *v28; // rax
  __int64 v29; // rax
  int v30; // r14d
  __int64 v31; // rdx
  __int64 v32; // rcx
  _DWORD *v33; // rsi
  __int64 v34; // rax
  unsigned __int64 v35; // rax
  int *v36; // rdi
  unsigned __int64 v37; // rdx
  int *v38; // rax
  int *v39; // rsi
  __int64 v40; // rcx
  __int64 v41; // r10
  char *v42; // rax
  __int64 v43; // [rsp+8h] [rbp-70h]
  int v44; // [rsp+8h] [rbp-70h]
  __int64 v45; // [rsp+8h] [rbp-70h]
  char *v46; // [rsp+8h] [rbp-70h]
  __int64 v47; // [rsp+10h] [rbp-68h]
  char *v48; // [rsp+10h] [rbp-68h]
  __int64 v49; // [rsp+18h] [rbp-60h]
  void *ptr[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v51; // [rsp+30h] [rbp-48h]
  unsigned __int64 v52; // [rsp+38h] [rbp-40h]

  v52 = __readfsqword(0x28u);
  v6 = *a1;
  if ( *a1 )
  {
    v8 = *(_QWORD *)(v6 + 48);
    v51 = 0;
    *(_OWORD *)ptr = 0;
    sub_4FD710(ptr, v8, a3, a4, a5, a6);
    v11 = *(_QWORD *)(v6 + 32);
    v12 = (int *)ptr[0];
    v13 = (char *)ptr[1];
    v14 = v51;
    v43 = v6 + 16;
    if ( v6 + 16 != v11 )
    {
      do
      {
        v30 = *(_DWORD *)(v11 + 32);
        if ( v12 )
        {
          if ( *v12 > 1 )
            goto LABEL_34;
LABEL_44:
          v35 = ((unsigned __int64)v12 + 31) & 0xFFFFFFFFFFFFFFF0LL;
          if ( *((_QWORD *)v12 + 1) - ((__int64)&v13[-v35] >> 2) == v14 )
          {
            if ( !v14 && (char *)v35 != v13 )
            {
              *((_DWORD *)v13 - 1) = v30;
              v14 = 1;
              v13 -= 4;
              goto LABEL_31;
            }
            goto LABEL_34;
          }
          *(_DWORD *)&v13[4 * v14++] = v30;
          goto LABEL_31;
        }
LABEL_38:
        ptr[0] = v12;
        ptr[1] = v13;
        v51 = v14;
        sub_187120((__int64)ptr, 0, 1, 0, v9, v10);
        v13 = (char *)ptr[1];
        v32 = v51;
        v12 = (int *)ptr[0];
        v33 = (char *)ptr[1] + 4 * v14;
        if ( v51 > v14 )
        {
          v49 = v51;
          v48 = (char *)ptr[1] + 4 * v14;
          memmove(v33 + 1, v33, 4 * (v51 - v14));
          v32 = v49;
          v33 = v48;
        }
        *v33 = v30;
        v14 = v32 + 1;
        if ( v12 )
        {
LABEL_31:
          while ( *v12 <= 1 )
          {
            v29 = std::_Rb_tree_increment(v11);
            v11 = v29;
            if ( v43 == v29 )
              goto LABEL_3;
            v30 = *(_DWORD *)(v29 + 32);
            if ( *v12 <= 1 )
              goto LABEL_44;
LABEL_34:
            if ( *v12 > 1 )
              goto LABEL_38;
            v31 = (__int64)&v13[-(((unsigned __int64)v12 + 31) & 0xFFFFFFFFFFFFFFF0LL)] >> 2;
            if ( *((_QWORD *)v12 + 1) - v14 - v31 > 0 )
            {
              v28 = &v13[4 * v14];
            }
            else
            {
              if ( (__int64)&v13[-(((unsigned __int64)v12 + 31) & 0xFFFFFFFFFFFFFFF0LL)] <= 0
                || 3 * v14 >= 2LL * *((_QWORD *)v12 + 1) )
              {
                goto LABEL_38;
              }
              v25 = &v13[-4 * v31];
              v26 = 4 * v14;
              if ( v14 && v25 != v13 && v13 && v25 )
              {
                v27 = (char *)memmove(v25, v13, v26);
                v26 = 4 * v14;
                v25 = v27;
              }
              v28 = &v25[v26];
              v13 = v25;
            }
            *(_DWORD *)v28 = v30;
            ++v14;
          }
        }
        ptr[0] = v12;
        ptr[1] = v13;
        v51 = v14;
        sub_187120((__int64)ptr, 0, 0, 0, v9, v10);
        v12 = (int *)ptr[0];
        v13 = (char *)ptr[1];
        v34 = std::_Rb_tree_increment(v11);
        v14 = v51;
        v11 = v34;
      }
      while ( v43 != v34 );
    }
LABEL_3:
    for ( i = 1; i < v14; ++i )
    {
      if ( v12 && *v12 <= 1 )
      {
        v16 = i - 1;
        v17 = *(unsigned int *)&v13[4 * i];
      }
      else
      {
        ptr[0] = v12;
        ptr[1] = v13;
        v51 = v14;
        sub_187120((__int64)ptr, 0, 0, 0, v9, v10);
        v13 = (char *)ptr[1];
        v12 = (int *)ptr[0];
        v16 = i - 1;
        v14 = v51;
        v17 = *((unsigned int *)ptr[1] + i);
        if ( !ptr[0] )
          goto LABEL_7;
      }
      if ( *v12 > 1 )
      {
LABEL_7:
        v44 = v17;
        ptr[0] = v12;
        ptr[1] = v13;
        v51 = v14;
        sub_187120((__int64)ptr, 0, 0, 0, v9, v17);
        LODWORD(v17) = v44;
        v12 = (int *)ptr[0];
        v13 = (char *)ptr[1];
        v14 = v51;
      }
      v18 = v16;
      v19 = v17;
      v10 = (__int64)a2[2];
      v20 = v19 - *(_DWORD *)&v13[4 * v18];
      v21 = *a2;
      if ( !*a2 )
        goto LABEL_12;
      if ( *v21 > 1 )
      {
        if ( v21 )
        {
LABEL_11:
          if ( *v21 <= 1 )
          {
            v38 = *a2;
            if ( *a2 )
            {
              v39 = a2[1];
              v40 = *((_QWORD *)v38 + 1);
              v23 = a2[2];
              v41 = (__int64)v39 - (((unsigned __int64)v38 + 31) & 0xFFFFFFFFFFFFFFF0LL);
              if ( v40 - (__int64)v23 - (v41 >> 2) > 0 )
              {
                v24 = (char *)&v39[v10];
                goto LABEL_14;
              }
              if ( v41 > 0 && 3 * (__int64)v23 < 2 * v40 )
              {
                v22 = (char *)&v39[-(v41 >> 2)];
                if ( v23 && v39 != (int *)v22 && v39 && v22 )
                {
                  v45 = (__int64)a2[2];
                  v42 = (char *)memmove(v22, v39, 4LL * (_QWORD)v23);
                  v23 = a2[2];
                  v10 = v45;
                  v22 = v42;
                }
                a2[1] = (int *)v22;
LABEL_13:
                v24 = &v22[4 * v10];
LABEL_14:
                if ( (__int64)v23 > v10 )
                {
                  v46 = v24;
                  memmove(v24 + 4, v24, 4 * ((_QWORD)v23 - v10));
                  v23 = a2[2];
                  v24 = v46;
                }
                a2[2] = (int *)((char *)v23 + 1);
                *(_DWORD *)v24 = v20;
                goto LABEL_17;
              }
            }
          }
        }
LABEL_12:
        v47 = (__int64)a2[2];
        sub_187120((__int64)a2, 0, 1, 0, v9, v10);
        v22 = (char *)a2[1];
        v23 = a2[2];
        v10 = v47;
        goto LABEL_13;
      }
      v36 = a2[1];
      v37 = ((unsigned __int64)v21 + 31) & 0xFFFFFFFFFFFFFFF0LL;
      if ( *((_QWORD *)v21 + 1) - ((__int64)((__int64)v36 - v37) >> 2) == v10 )
      {
        if ( v10 || v36 == (int *)v37 )
          goto LABEL_11;
        *(v36 - 1) = v20;
        --a2[1];
        a2[2] = (int *)((char *)a2[2] + 1);
      }
      else
      {
        v36[v10] = v20;
        a2[2] = (int *)((char *)a2[2] + 1);
      }
LABEL_17:
      if ( !*a2 || **a2 > 1 )
        sub_187120((__int64)a2, 0, 0, 0, v9, v10);
    }
    if ( v12 )
    {
      if ( !_InterlockedSub(v12, 1u) )
        free(v12);
    }
  }
}
