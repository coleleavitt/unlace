__int64 __fastcall sub_3F6CE0(__int64 a1, void *a2, unsigned __int8 a3, __int64 a4, unsigned int *a5, __int64 a6)
{
  _QWORD *v8; // rax
  __int64 v13; // rdi
  _QWORD *v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rdx
  unsigned int v17; // ecx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rax
  char *v23; // rbp
  char *v24; // r15
  __int64 v25; // rax
  unsigned __int64 v26; // rcx
  __int64 *v27; // rsi
  __int64 v28; // r12
  unsigned __int64 v29; // rdx
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rax
  char *v33; // r13
  char *v34; // r15
  int v35; // r12d
  int v36; // ebp
  __int64 v37; // rax
  unsigned __int64 v38; // rcx
  __int64 *v39; // rsi
  unsigned __int64 v40; // rdx
  char *v41; // r12
  char *v42; // r13
  char *v43; // rsi
  __int64 v44; // rax
  size_t v45; // rdx
  __int64 v46; // r8
  __int64 v47; // rbp
  __int64 v48; // r15
  unsigned __int64 v49; // r14
  __int64 v50; // rax
  void *v51; // rdi
  __int64 v52; // r8
  char *v53; // rdi
  __int64 v54; // r14
  unsigned __int64 v55; // r15
  char *v56; // rax
  __int64 v57; // r12
  unsigned __int64 v58; // r15
  __int64 v59; // r14
  __int64 v60; // rax
  size_t v61; // rdx
  char *v62; // r12
  char *v63; // r15
  char *v64; // rsi
  __int64 v65; // rax
  size_t v66; // rdx
  __int64 v67; // r8
  __int64 v68; // rbp
  __int64 v69; // r13
  unsigned __int64 v70; // r14
  __int64 v71; // rax
  __int64 v72; // r8
  __int64 v73; // r8
  __int64 v74; // rax
  size_t v75; // rdx
  __int64 v76; // [rsp+0h] [rbp-98h]
  __int64 v77; // [rsp+0h] [rbp-98h]
  __int64 v78; // [rsp+0h] [rbp-98h]
  __int64 v79; // [rsp+0h] [rbp-98h]
  __int64 v80; // [rsp+0h] [rbp-98h]
  __int64 v81; // [rsp+18h] [rbp-80h] BYREF
  void *ptr; // [rsp+20h] [rbp-78h] BYREF
  __int128 v83; // [rsp+28h] [rbp-70h]
  void *v84; // [rsp+40h] [rbp-58h] BYREF
  __int128 v85; // [rsp+48h] [rbp-50h]
  unsigned __int64 v86; // [rsp+58h] [rbp-40h]

  v86 = __readfsqword(0x28u);
  if ( a2 == *(void **)(a1 + 168) )
    goto LABEL_9;
  v8 = *(_QWORD **)(a1 + 136);
  v13 = a1 + 128;
  if ( v8 )
  {
    v14 = (_QWORD *)v13;
    do
    {
      while ( 1 )
      {
        v15 = v8[2];
        v16 = v8[3];
        if ( v8[4] < (unsigned __int64)a2 )
          break;
        v14 = v8;
        v8 = (_QWORD *)v8[2];
        if ( !v15 )
          goto LABEL_7;
      }
      v8 = (_QWORD *)v8[3];
    }
    while ( v16 );
LABEL_7:
    if ( (_QWORD *)v13 != v14 && (unsigned __int64)a2 >= v14[4] )
    {
LABEL_9:
      *(_QWORD *)(a1 + 168) = a2;
      return 1;
    }
  }
  if ( (unsigned int)sub_3F69D0(a1, a2, a3, a4, a5, a6) )
    return 1;
  if ( a2 == *(void **)(a1 + 64) && a3 == 83 && a4 == 1 )
  {
    sub_7BE7C0(a1 + 64, *(_QWORD *)(a1 + 24), 1, a5, a6, 83);
    return 1;
  }
  v19 = sub_3BDE50(*(_QWORD **)(a1 + 88), (__int64)a2);
  v17 = 0;
  if ( v19 >= *(_QWORD *)(a1 + 96) && v19 < *(_QWORD *)(a1 + 104) )
  {
    if ( a2 == *(void **)(a1 + 32) )
    {
      v20 = *(_QWORD *)(a1 + 48);
    }
    else
    {
      v30 = *(_QWORD *)(a1 + 24);
      v84 = a2;
      v31 = sub_7BF130(&v84, v30, a1 + 40);
      v17 = 0;
      if ( v31 <= 0 )
      {
        *(_QWORD *)(a1 + 48) = 0;
        *(_QWORD *)(a1 + 32) = a2;
        goto LABEL_39;
      }
      *(_QWORD *)(a1 + 32) = a2;
      v20 = *(_QWORD *)(a1 + 48);
    }
    if ( v20 > 0xB )
    {
      v21 = strncmp(*(const char **)(a1 + 40), "$ pv2 blob ", 0xBu);
      v17 = 0;
      if ( !v21 )
      {
        if ( a3 == 87 && !a4 )
        {
          ptr = nullptr;
          v83 = 0;
          v22 = ea2node(a2);
          netnode_qgetblob(v22, &ptr, 1, 0, 87);
          v23 = (char *)ptr;
          v84 = nullptr;
          v85 = 0;
          v24 = (char *)ptr + v83;
          if ( ptr >= (char *)ptr + (unsigned __int64)v83 )
          {
            if ( !ptr )
              goto LABEL_75;
          }
          else
          {
            v25 = 0;
            v26 = 0;
            v27 = nullptr;
            while ( 1 )
            {
              v28 = -1;
              if ( v24 >= v23 + 4 )
              {
                if ( *(_DWORD *)v23 != -1 )
                  v28 = *(unsigned int *)v23;
                v23 += 4;
              }
              v81 = v28;
              v29 = v25 + 1;
              if ( &v81 < v27 || &v81 >= &v27[v26] )
              {
                if ( v26 < v29 )
                {
                  v84 = (void *)qvector_reserve(&v84, v27, v29, 8);
                  v27 = (__int64 *)v84;
                  v28 = v81;
                  v25 = v85;
                }
              }
              else if ( v26 < v29 )
              {
                v84 = (void *)qvector_reserve(&v84, v27, v29, 8);
                v27 = (__int64 *)v84;
                v25 = v85;
              }
              v27[v25] = v28;
              v25 = v85 + 1;
              *(_QWORD *)&v85 = v85 + 1;
              if ( v23 >= v24 )
                break;
              v27 = (__int64 *)v84;
              v26 = *((_QWORD *)&v85 + 1);
            }
            v23 = (char *)ptr;
            if ( !ptr )
              goto LABEL_66;
          }
          *(_QWORD *)&v83 = 0;
          qfree(v23);
          ptr = nullptr;
          v25 = v85;
          *((_QWORD *)&v83 + 1) = 0;
LABEL_66:
          v41 = (char *)v84;
          v42 = (char *)v84 + 8 * v25;
          if ( v84 != v42 )
          {
            do
            {
              v47 = v83;
              v48 = *(_QWORD *)v41;
              v49 = v83 + 8;
              v52 = v83 + 8;
              if ( (unsigned __int64)v83 < 0xFFFFFFFFFFFFFFF8LL )
              {
                v43 = (char *)ptr;
                v44 = v83;
                v45 = 8;
                if ( *((_QWORD *)&v83 + 1) < v49 )
                {
                  v77 = v83 + 8;
                  ptr = (void *)qvector_reserve(&ptr, ptr, v83 + 8, 1);
                  v43 = (char *)ptr;
                  v44 = v83;
                  v52 = v77;
                  v45 = v49 - v83;
                }
                v76 = v52;
                memset(&v43[v44], 0, v45);
                v46 = v76;
              }
              else
              {
                v46 = 0x7FFFFFFFFFFFFFFFLL;
              }
              v41 += 8;
              *(_QWORD *)&v83 = v46;
              *(_QWORD *)((char *)ptr + v47) = v48;
            }
            while ( v42 != v41 );
          }
LABEL_75:
          v50 = ea2node(a2);
          netnode_setblob(v50, ptr, v83, 0, 87);
          if ( v84 )
          {
            *(_QWORD *)&v85 = 0;
            qfree(v84);
          }
          v51 = ptr;
          if ( !ptr )
            return 1;
          goto LABEL_78;
        }
        if ( a3 == 80 && !a4 )
        {
          ptr = nullptr;
          v83 = 0;
          v32 = ea2node(a2);
          netnode_qgetblob(v32, &ptr, 1, 0, 80);
          v33 = (char *)ptr + v83;
          if ( (char *)ptr + (unsigned __int64)v83 < (char *)ptr + 4 )
          {
            v34 = (char *)ptr;
            v35 = 0;
            v36 = 0;
          }
          else
          {
            v34 = (char *)ptr + 8;
            v35 = *(_DWORD *)ptr;
            if ( v33 < (char *)ptr + 8 )
            {
              v34 = (char *)ptr + 4;
              v36 = 0;
            }
            else
            {
              v36 = *((_DWORD *)ptr + 1);
            }
          }
          v84 = nullptr;
          v85 = 0;
          if ( v34 < v33 )
          {
            v37 = 0;
            v38 = 0;
            v39 = nullptr;
            while ( 1 )
            {
              v73 = -1;
              if ( v33 >= v34 + 4 )
              {
                if ( *(_DWORD *)v34 != -1 )
                  v73 = *(unsigned int *)v34;
                v34 += 4;
              }
              v81 = v73;
              v40 = v37 + 1;
              if ( &v81 < v39 || &v81 >= &v39[v38] )
              {
                if ( v38 < v40 )
                {
                  v84 = (void *)qvector_reserve(&v84, v39, v40, 8);
                  v39 = (__int64 *)v84;
                  v73 = v81;
                  v37 = v85;
                }
              }
              else if ( v38 < v40 )
              {
                v80 = v73;
                v84 = (void *)qvector_reserve(&v84, v39, v40, 8);
                v39 = (__int64 *)v84;
                v73 = v80;
                v37 = v85;
              }
              v39[v37] = v73;
              v37 = v85 + 1;
              *(_QWORD *)&v85 = v85 + 1;
              if ( v34 >= v33 )
                break;
              v39 = (__int64 *)v84;
              v38 = *((_QWORD *)&v85 + 1);
            }
          }
          v53 = (char *)ptr;
          if ( ptr )
          {
            *(_QWORD *)&v83 = 0;
            qfree(ptr);
            ptr = nullptr;
            v54 = v83;
            *((_QWORD *)&v83 + 1) = 0;
            v55 = v83 + 4;
            if ( (unsigned __int64)v83 >= 0xFFFFFFFFFFFFFFFCLL )
            {
LABEL_81:
              *(_QWORD *)&v83 = 0x7FFFFFFFFFFFFFFFLL;
              v56 = nullptr;
              goto LABEL_82;
            }
          }
          else
          {
            v54 = v83;
            v55 = v83 + 4;
            if ( (unsigned __int64)v83 >= 0xFFFFFFFFFFFFFFFCLL )
              goto LABEL_81;
            if ( *((_QWORD *)&v83 + 1) >= v55 )
            {
              v74 = v83;
              v75 = 4;
LABEL_102:
              memset(&v53[v74], 0, v75);
              *(_QWORD *)&v83 = v55;
              v56 = (char *)ptr;
LABEL_82:
              *(_DWORD *)&v56[v54] = v35;
              v57 = v83;
              v58 = v83 + 4;
              v59 = v83 + 4;
              if ( (unsigned __int64)v83 >= 0xFFFFFFFFFFFFFFFCLL )
              {
                v59 = 0x7FFFFFFFFFFFFFFFLL;
              }
              else
              {
                v60 = v83;
                v61 = 4;
                if ( *((_QWORD *)&v83 + 1) < v58 )
                {
                  ptr = (void *)qvector_reserve(&ptr, ptr, v83 + 4, 1);
                  v60 = v83;
                  v61 = v58 - v83;
                }
                memset((char *)ptr + v60, 0, v61);
              }
              *(_QWORD *)&v83 = v59;
              *(_DWORD *)((char *)ptr + v57) = v36;
              v62 = (char *)v84;
              v63 = (char *)v84 + 8 * v85;
              if ( v84 != v63 )
              {
                do
                {
                  v68 = v83;
                  v69 = *(_QWORD *)v62;
                  v70 = v83 + 8;
                  v72 = v83 + 8;
                  if ( (unsigned __int64)v83 < 0xFFFFFFFFFFFFFFF8LL )
                  {
                    v64 = (char *)ptr;
                    v65 = v83;
                    v66 = 8;
                    if ( *((_QWORD *)&v83 + 1) < v70 )
                    {
                      v79 = v83 + 8;
                      ptr = (void *)qvector_reserve(&ptr, ptr, v83 + 8, 1);
                      v64 = (char *)ptr;
                      v65 = v83;
                      v72 = v79;
                      v66 = v70 - v83;
                    }
                    v78 = v72;
                    memset(&v64[v65], 0, v66);
                    v67 = v78;
                  }
                  else
                  {
                    v67 = 0x7FFFFFFFFFFFFFFFLL;
                  }
                  v62 += 8;
                  *(_QWORD *)&v83 = v67;
                  *(_QWORD *)((char *)ptr + v68) = v69;
                }
                while ( v63 != v62 );
              }
              v71 = ea2node(a2);
              netnode_setblob(v71, ptr, v83, 0, 80);
              if ( v84 )
              {
                *(_QWORD *)&v85 = 0;
                qfree(v84);
              }
              v51 = ptr;
              if ( !ptr )
                return 1;
LABEL_78:
              *(_QWORD *)&v83 = 0;
              qfree(v51);
              return 1;
            }
          }
          ptr = (void *)qvector_reserve(&ptr, 0, v55, 1);
          v53 = (char *)ptr;
          v74 = v83;
          v75 = v55 - v83;
          goto LABEL_102;
        }
      }
    }
  }
LABEL_39:
  if ( *(void **)(a1 + 80) == a2 && a3 == 65 )
  {
    sub_7BE7C0(a1 + 80, *(_QWORD *)(a1 + 24), (int)a4, a5, a6, 65);
    return 1;
  }
  return v17;
}
