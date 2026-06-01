__int64 __fastcall sub_173890(__int64 *a1, char **a2, __int64 a3, char **a4, __int64 a5, char a6)
{
  __int64 v9; // rax
  char *v10; // rdx
  __int64 v11; // rsi
  int v13; // ebx
  char *v14; // rax
  char *v15; // rbp
  int v16; // ecx
  int v17; // ecx
  int *v18; // r12
  int v19; // eax
  __int64 v20; // rax
  char *v21; // rax
  char *v22; // rsi
  int v23; // ecx
  int *v24; // r10
  int v25; // edx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  __int64 v28; // rax
  unsigned __int64 v29; // r14
  unsigned __int64 v30; // r15
  size_t v31; // r14
  __int64 v32; // r9
  void *v33; // rdi
  size_t v34; // rdx
  __int64 v35; // rax
  unsigned __int64 v36; // r14
  char *v37; // r15
  char *v38; // rdi
  __int64 v39; // r8
  __int64 v40; // rdi
  char *v42; // r8
  __int64 v43; // r15
  char *v44; // r14
  int v45; // eax
  int v46; // eax
  char *v47; // rdi
  __int64 v48; // rax
  __int64 v49; // rax
  char *v51; // [rsp+8h] [rbp-70h]
  char *v52; // [rsp+8h] [rbp-70h]
  char *v53; // [rsp+10h] [rbp-68h]
  __int64 v54; // [rsp+18h] [rbp-60h]
  __int64 v55; // [rsp+20h] [rbp-58h] BYREF
  __int128 v56; // [rsp+28h] [rbp-50h]
  unsigned __int64 v57; // [rsp+38h] [rbp-40h]

  v9 = 5LL * (_QWORD)a4[1];
  v57 = __readfsqword(0x28u);
  v10 = *a4;
  v11 = (__int64)&(*a4)[4 * v9];
  if ( *a4 != (char *)v11 )
  {
    v13 = a5;
    v14 = *a4;
    v15 = nullptr;
    do
    {
      while ( 1 )
      {
        v16 = *(_DWORD *)v14;
        if ( v13 < *(_DWORD *)v14 )
          goto LABEL_4;
        a5 = (unsigned int)(v16 + *((_DWORD *)v14 + 1));
        if ( v13 >= (int)a5 || a6 && a6 != v14[16] )
          goto LABEL_4;
        if ( v15 )
          break;
        v15 = v14;
LABEL_4:
        v14 += 20;
        if ( (char *)v11 == v14 )
          goto LABEL_12;
      }
      if ( v16 > *(_DWORD *)v15 )
        v15 = v14;
      v14 += 20;
    }
    while ( (char *)v11 != v14 );
LABEL_12:
    if ( v15 )
    {
      v17 = *(_DWORD *)v15;
      v18 = nullptr;
      while ( 1 )
      {
        v19 = *(_DWORD *)v10;
        if ( *(_DWORD *)v10 < v17 || v19 >= v17 + *((_DWORD *)v15 + 1) || v13 < v19 || v10[16] != 40 )
          goto LABEL_14;
        if ( v18 )
        {
          if ( v19 > *v18 )
            v18 = (int *)v10;
          v10 += 20;
          if ( (char *)v11 == v10 )
          {
LABEL_23:
            v20 = -1;
            if ( v18 )
              v20 = sub_173800(a3, (__int64)v18);
            if ( a1 )
              *a1 = v20;
            if ( !a2 )
              return 1;
            v21 = *a4;
            v22 = &(*a4)[20 * (_QWORD)a4[1]];
            if ( *a4 == v22 )
            {
              if ( v18 )
                v26 = v18[2];
              else
                v26 = *((int *)v15 + 2);
              goto LABEL_62;
            }
            v23 = *(_DWORD *)v15;
            v24 = nullptr;
            while ( 1 )
            {
LABEL_31:
              v25 = *(_DWORD *)v21;
              if ( *(_DWORD *)v21 < v23 || v25 >= v23 + *((_DWORD *)v15 + 1) || v13 >= v25 || v21[16] != 40 )
                goto LABEL_30;
              if ( !v24 )
                break;
              if ( v25 < *v24 )
                v24 = (int *)v21;
              v21 += 20;
              if ( v22 == v21 )
              {
LABEL_39:
                if ( v18 )
                {
                  v26 = v18[2];
                  if ( v24 )
                    goto LABEL_41;
LABEL_62:
                  v27 = *((int *)v15 + 3);
                }
                else
                {
                  v26 = *((int *)v15 + 2);
                  if ( !v24 )
                    goto LABEL_62;
LABEL_41:
                  v27 = v24[2];
                }
                v28 = *(_QWORD *)(a3 + 16);
                if ( !v28 )
                  goto LABEL_52;
                v29 = v28 - 1;
                if ( v28 - 1 < v27 )
                {
                  if ( v26 > v29 )
                    v26 = v28 - 1;
                  v30 = v26;
                  v31 = v29 - v26;
                }
                else
                {
                  if ( v27 <= v26 )
                    v26 = v27;
                  v27 -= v26;
                  v30 = v26;
                  v31 = v27;
                }
                v32 = *(_QWORD *)(a3 + 8);
                v55 = 0;
                v56 = 0;
                if ( v31 )
                {
                  v33 = nullptr;
                  v34 = v31 + 1;
                  if ( v31 != -1 )
                  {
                    v54 = v32;
                    v55 = qvector_reserve(&v55, 0, v34, 1);
                    v32 = v54;
                    v33 = (void *)v55;
                    v34 = v31 + 1;
                  }
                  *(_QWORD *)&v56 = v34;
                  v22 = (char *)(v32 + v30);
                  memmove(v33, (const void *)(v32 + v30), v31);
                  *(_BYTE *)(v55 + v31) = 0;
                  v35 = v55;
                  v37 = *((char **)&v56 + 1);
                  v36 = v56;
                }
                else
                {
LABEL_52:
                  v37 = nullptr;
                  v36 = 0;
                  v35 = 0;
                }
                v38 = *a2;
                v55 = 0;
                v56 = 0;
                if ( v38 )
                {
                  a2[1] = nullptr;
                  v53 = (char *)v35;
                  qfree(v38, v22, v27, v26, a5);
                  v40 = v55;
                  a2[1] = (char *)v36;
                  a2[2] = v37;
                  *a2 = v53;
                  if ( v40 )
                  {
                    *(_QWORD *)&v56 = 0;
                    qfree(v40, v22, v27, v26, v39);
                    v36 = (unsigned __int64)a2[1];
                  }
                }
                else
                {
                  *a2 = (char *)v35;
                  a2[1] = (char *)v36;
                  a2[2] = v37;
                }
                if ( v36 > 1 )
                {
                  v22 = *a2;
                  tag_remove(a2, *a2, 0);
                }
                if ( a6 != 15 )
                  return 1;
                v42 = a2[1];
                if ( !v42 )
                  goto LABEL_83;
                v43 = (__int64)(v42 - 1);
                if ( (unsigned __int64)(v42 - 1) <= 3 )
                {
                  if ( v42 == (_BYTE *)&dword_0 + 1 )
                    goto LABEL_83;
                  v44 = *a2;
LABEL_70:
                  if ( v42[(_QWORD)v44 - 2] == 32 )
                  {
                    if ( v43 > 1 )
                    {
                      if ( (unsigned __int64)a2[2] < v43 )
                      {
                        v22 = v44;
                        v52 = v42;
                        v49 = qvector_reserve(a2, v44, v43, 1);
                        v42 = v52;
                        *a2 = (char *)v49;
                        v44 = (char *)v49;
                      }
                      a2[1] = (char *)v43;
                      v42[(_QWORD)v44 - 2] = 0;
                      v42 = a2[1];
                      goto LABEL_78;
                    }
                    goto LABEL_90;
                  }
                }
                else
                {
                  v44 = *a2;
                  v51 = a2[1];
                  v22 = " ...";
                  v45 = strncmp(&v42[(_QWORD)*a2 - 5], " ...", 4u);
                  v42 = v51;
                  if ( v45 )
                    goto LABEL_70;
                  v27 = (unsigned __int64)(v51 - 4);
                  if ( (__int64)(v51 - 4) > 1 )
                  {
                    if ( (unsigned __int64)a2[2] < v27 )
                    {
                      v22 = v44;
                      v48 = qvector_reserve(a2, v44, v27, 1);
                      v42 = v51;
                      v27 = (unsigned __int64)(v51 - 4);
                      *a2 = (char *)v48;
                      v44 = (char *)v48;
                    }
                    a2[1] = (char *)v27;
                    v42[(_QWORD)v44 - 5] = 0;
                    v42 = a2[1];
LABEL_78:
                    if ( v18 )
                      v46 = *v18;
                    else
                      v46 = *(_DWORD *)v15;
                    if ( v42 )
                    {
                      v43 = (__int64)(v42 - 1);
LABEL_82:
                      if ( v13 - v46 < (unsigned __int64)v43 )
                        return 1;
                    }
LABEL_83:
                    v47 = *a2;
                    if ( *a2 )
                    {
                      a2[1] = nullptr;
                      qfree(v47, v22, v27, v26, v42);
                      *a2 = nullptr;
                      a2[2] = nullptr;
                    }
                    return 1;
                  }
LABEL_90:
                  if ( v44 )
                  {
                    a2[1] = nullptr;
                    qfree(v44, v22, v27, v26, v42);
                    *a2 = nullptr;
                    v42 = a2[1];
                    a2[2] = nullptr;
                    goto LABEL_78;
                  }
                }
                if ( v18 )
                  v46 = *v18;
                else
                  v46 = *(_DWORD *)v15;
                goto LABEL_82;
              }
            }
            v24 = (int *)v21;
LABEL_30:
            v21 += 20;
            if ( v22 == v21 )
              goto LABEL_39;
            goto LABEL_31;
          }
        }
        else
        {
          v18 = (int *)v10;
LABEL_14:
          v10 += 20;
          if ( (char *)v11 == v10 )
            goto LABEL_23;
        }
      }
    }
  }
  return 0;
}
