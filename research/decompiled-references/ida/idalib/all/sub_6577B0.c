__int64 __fastcall sub_6577B0(__int64 a1, __int64 a2, char *a3, _QWORD *a4, int a5, double a6, double a7)
{
  size_t v7; // rax
  size_t v8; // r13
  size_t v9; // rbx
  char *v10; // r14
  _QWORD *v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // r15
  const char *v14; // r13
  _QWORD *v15; // r12
  _QWORD *v16; // rbx
  _QWORD *v17; // r13
  const char *v18; // rsi
  const char *v19; // rdi
  int v20; // eax
  _QWORD *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  int named_type; // eax
  __int64 result; // rax
  const char *v26; // rdi
  const char *v27; // rsi
  int v28; // r9d
  char *v29; // r12
  size_t v30; // r13
  char *v31; // r12
  size_t v32; // r13
  char *v33; // r12
  size_t v34; // r13
  char *v35; // r12
  size_t v36; // r13
  int v37; // esi
  char *v38; // rax
  int v39; // edx
  char v40; // al
  void *v41; // rdi
  char *v42; // rdi
  __int64 v43; // r13
  __int64 v44; // rbx
  __int64 v45; // r14
  char *v46; // r12
  void *v47; // rdi
  void *v48; // rdi
  int v49; // r13d
  size_t v50; // rax
  size_t v51; // r14
  size_t v52; // r13
  _QWORD *v53; // rax
  _QWORD *v54; // rdx
  _QWORD *v55; // r14
  __int64 v56; // r13
  __int64 v57; // rdi
  __int64 v58; // rax
  void *v59; // rdi
  void *v60; // r15
  __int64 v62; // [rsp+10h] [rbp-140h]
  _QWORD *v63; // [rsp+18h] [rbp-138h]
  char v64; // [rsp+18h] [rbp-138h]
  _QWORD *v65; // [rsp+18h] [rbp-138h]
  __int64 v67; // [rsp+28h] [rbp-128h]
  const char *v69; // [rsp+38h] [rbp-118h]
  unsigned int v70; // [rsp+38h] [rbp-118h]
  unsigned int v71; // [rsp+38h] [rbp-118h]
  unsigned int v72; // [rsp+38h] [rbp-118h]
  unsigned int v73; // [rsp+38h] [rbp-118h]
  char *v74; // [rsp+38h] [rbp-118h]
  unsigned int v75; // [rsp+40h] [rbp-110h] BYREF
  _BYTE v76[4]; // [rsp+44h] [rbp-10Ch] BYREF
  char *v77; // [rsp+48h] [rbp-108h] BYREF
  char *v78; // [rsp+50h] [rbp-100h] BYREF
  char *v79; // [rsp+58h] [rbp-F8h] BYREF
  char *v80; // [rsp+60h] [rbp-F0h] BYREF
  __int64 *v81; // [rsp+68h] [rbp-E8h] BYREF
  void *v82; // [rsp+70h] [rbp-E0h] BYREF
  __int128 v83; // [rsp+78h] [rbp-D8h]
  void *v84; // [rsp+90h] [rbp-C0h] BYREF
  __int128 v85; // [rsp+98h] [rbp-B8h]
  void *v86; // [rsp+B0h] [rbp-A0h] BYREF
  __int128 v87; // [rsp+B8h] [rbp-98h]
  void *ptr; // [rsp+D0h] [rbp-80h] BYREF
  __int128 v89; // [rsp+D8h] [rbp-78h]
  char *s2; // [rsp+F0h] [rbp-60h] BYREF
  __int128 v91; // [rsp+F8h] [rbp-58h]
  _QWORD *v92; // [rsp+108h] [rbp-48h]
  int v93; // [rsp+110h] [rbp-40h]
  unsigned __int64 v94; // [rsp+118h] [rbp-38h]

  v67 = a1;
  v62 = a2;
  v94 = __readfsqword(0x28u);
  if ( !a2 )
  {
    v62 = *(_QWORD *)(*(_QWORD *)(qword_2CCB598 + 1672) + 8LL);
    if ( a1 )
      goto LABEL_3;
LABEL_42:
    v67 = *(_QWORD *)(*(_QWORD *)(qword_2CCB598 + 1672) + 8LL);
    goto LABEL_3;
  }
  if ( !a1 )
    goto LABEL_42;
LABEL_3:
  s2 = nullptr;
  v91 = 0;
  if ( a3 )
  {
    v7 = strlen(a3);
    v8 = v7 + 1;
    v9 = v7;
    s2 = (char *)qvector_reserve(&s2, 0, v7 + 1, 1);
    *(_QWORD *)&v91 = v8;
    memmove(s2, a3, v9);
    s2[v9] = 0;
    v10 = s2;
    v11 = a4 + 1;
    v12 = (_QWORD *)a4[2];
    if ( !v12 )
    {
LABEL_18:
      if ( v10 )
      {
        *(_QWORD *)&v91 = 0;
        qfree(v10);
      }
LABEL_20:
      v75 = 0;
      named_type = get_named_type(
                     v62,
                     (_DWORD)a3,
                     1,
                     (unsigned int)&v78,
                     (unsigned int)&v79,
                     (unsigned int)&v77,
                     (__int64)&v80,
                     (__int64)v76,
                     (__int64)&v75);
      if ( named_type != 2 || (a5 & 1) == 0 )
      {
        if ( named_type && v67 == v62 )
        {
          if ( (*(_BYTE *)(v62 + 32) & 0x10) != 0 && named_type == 1 )
            return v75;
          v75 = 0;
          goto LABEL_44;
        }
        v75 = 0;
        if ( named_type )
        {
          s2 = v78;
          v49 = sub_56BDB0(v62, (__int64 *)&s2, nullptr, 0.0, a7);
          if ( (unsigned int)get_named_type(v67, (_DWORD)a3, 3, (unsigned int)&s2, 0, 0, 0, 0, (__int64)&v75) )
          {
            if ( v49 == -1 || v49 == sub_56BDB0(v67, (__int64 *)&s2, nullptr, 0.0, a7) )
              return v75;
            v75 = 0;
          }
          else if ( v75 )
          {
            goto LABEL_45;
          }
LABEL_44:
          v75 = alloc_type_ordinals(v67, 1);
          sub_65C7F0(*(_QWORD *)(qword_2CCB598 + 1672), v67, v75, 1, (_DWORD)a3, (unsigned int)&unk_2C81AC0, 0, 0, 0, 0);
          s2 = a3;
          LODWORD(v91) = v75;
          sub_656410(a4, (__int64)&s2);
LABEL_45:
          v29 = v78;
          v82 = nullptr;
          v83 = 0;
          if ( v78 )
          {
            v30 = strlen(v78);
            v82 = (void *)qvector_reserve(&v82, 0, v30 + 1, 1);
            *(_QWORD *)&v83 = v30 + 1;
            memmove(v82, v29, v30);
            *((_BYTE *)v82 + v30) = 0;
          }
          v31 = v79;
          v84 = nullptr;
          v85 = 0;
          if ( v79 )
          {
            v32 = strlen(v79);
            v84 = (void *)qvector_reserve(&v84, 0, v32 + 1, 1);
            *(_QWORD *)&v85 = v32 + 1;
            memmove(v84, v31, v32);
            *((_BYTE *)v84 + v32) = 0;
          }
          v33 = v77;
          v86 = nullptr;
          v87 = 0;
          if ( v77 )
          {
            v34 = strlen(v77);
            v86 = (void *)qvector_reserve(&v86, 0, v34 + 1, 1);
            *(_QWORD *)&v87 = v34 + 1;
            memmove(v86, v33, v34);
            *((_BYTE *)v86 + v34) = 0;
          }
          v35 = v80;
          ptr = nullptr;
          v89 = 0;
          if ( v80 )
          {
            v36 = strlen(v80);
            ptr = (void *)qvector_reserve(&ptr, 0, v36 + 1, 1);
            *(_QWORD *)&v89 = v36 + 1;
            memmove(ptr, v35, v36);
            *((_BYTE *)ptr + v36) = 0;
          }
          s2 = (char *)off_2B371E8;
          *(_QWORD *)&v91 = v67;
          *((_QWORD *)&v91 + 1) = v62;
          v92 = a4;
          v93 = a5;
          sub_650CF0(v62, (__int64)&s2, (__m128i *)&v82, nullptr, 0, v28);
          v37 = (int)v82;
          v38 = (char *)v82;
          if ( !(_QWORD)v83 )
            v38 = &byte_2CCBFD8;
          if ( (*v38 & 0x3F) == 0x2D )
          {
            v40 = *(_BYTE *)v82;
            v81 = nullptr;
            v64 = v40;
            sub_64D850(&s2, (__int64)v82, (__int64)v84, (__int64)ptr, nullptr, &v81);
            v74 = s2;
            if ( s2 )
            {
              if ( (s2[52] & 0x10) == 0 && (unsigned int)sub_416660((__int64 *)s2, 2) <= 1 )
              {
                if ( v82 )
                {
                  *(_QWORD *)&v83 = 0;
                  qfree(v82);
                  v82 = nullptr;
                  *((_QWORD *)&v83 + 1) = 0;
                }
                if ( v84 )
                {
                  *(_QWORD *)&v85 = 0;
                  qfree(v84);
                  v84 = nullptr;
                  *((_QWORD *)&v85 + 1) = 0;
                }
                if ( ptr )
                {
                  *(_QWORD *)&v89 = 0;
                  qfree(ptr);
                  ptr = nullptr;
                  *((_QWORD *)&v89 + 1) = 0;
                }
                if ( (unsigned __int8)sub_536150(
                                        (__int64)v74,
                                        (__int64 *)&v82,
                                        (__int64)&v84,
                                        (__int64)&ptr,
                                        v64,
                                        *((_DWORD *)v74 + 12) & 0xF,
                                        v81) )
                {
                  sub_6A7040(&v84, &v82);
                  sub_6A7040(&ptr, &v82);
                }
              }
              v41 = *((void **)v74 + 3);
              if ( v41 )
              {
                *((_QWORD *)v74 + 4) = 0;
                qfree(v41);
              }
              v42 = *(char **)v74;
              if ( *(_QWORD *)v74 )
              {
                if ( *((_QWORD *)v74 + 1) )
                {
                  v65 = v11;
                  v43 = *((_QWORD *)v74 + 1);
                  v44 = 0;
                  v45 = 0;
                  do
                  {
                    v46 = &v42[v45];
                    v47 = *(void **)&v42[v45 + 24];
                    if ( v47 )
                    {
                      *((_QWORD *)v46 + 4) = 0;
                      qfree(v47);
                    }
                    v48 = *(void **)v46;
                    if ( *(_QWORD *)v46 )
                    {
                      *((_QWORD *)v46 + 1) = 0;
                      qfree(v48);
                    }
                    ++v44;
                    v45 += 56;
                    v42 = *(char **)v74;
                  }
                  while ( v43 != v44 );
                  v11 = v65;
                }
                *((_QWORD *)v74 + 1) = 0;
                qfree(v42);
              }
              qfree(v74);
            }
            v37 = (int)v82;
          }
          v39 = sub_65C7F0(
                  *(_QWORD *)(qword_2CCB598 + 1672),
                  v67,
                  v75,
                  5,
                  (_DWORD)a3,
                  v37,
                  (__int64)v84,
                  (__int64)v86,
                  (__int64)ptr,
                  (__int64)v76);
          result = v75;
          if ( v39 )
          {
            s2 = nullptr;
            v91 = 0;
            if ( a3 )
            {
              v50 = strlen(a3);
              v51 = v50 + 1;
              v52 = v50;
              s2 = (char *)qvector_reserve(&s2, 0, v50 + 1, 1);
              *(_QWORD *)&v91 = v51;
              memmove(s2, a3, v52);
              s2[v52] = 0;
            }
            v53 = sub_657610((__int64)a4, (__int64)&s2);
            v55 = v54;
            v56 = (__int64)v53;
            if ( (_QWORD *)a4[3] == v53 && v11 == v54 )
            {
              sub_6492F0((_QWORD *)a4[2]);
              a4[2] = 0;
              a4[3] = v11;
              a4[4] = v11;
              a4[5] = 0;
            }
            else if ( v54 != v53 )
            {
              do
              {
                v57 = v56;
                v56 = std::_Rb_tree_increment(v56);
                v58 = std::_Rb_tree_rebalance_for_erase(v57, v11);
                v59 = *(void **)(v58 + 32);
                v60 = (void *)v58;
                if ( v59 )
                {
                  *(_QWORD *)(v58 + 40) = 0;
                  qfree(v59);
                }
                operator delete(v60, 0x40u);
                --a4[5];
              }
              while ( v55 != (_QWORD *)v56 );
            }
            if ( s2 )
            {
              *(_QWORD *)&v91 = 0;
              qfree(s2);
            }
            result = 0;
          }
          if ( ptr )
          {
            v70 = result;
            *(_QWORD *)&v89 = 0;
            qfree(ptr);
            result = v70;
          }
          if ( v86 )
          {
            v71 = result;
            *(_QWORD *)&v87 = 0;
            qfree(v86);
            result = v71;
          }
          if ( v84 )
          {
            v72 = result;
            *(_QWORD *)&v85 = 0;
            qfree(v84);
            result = v72;
          }
          if ( v82 )
          {
            v73 = result;
            *(_QWORD *)&v83 = 0;
            qfree(v82);
            return v73;
          }
          return result;
        }
        if ( (unsigned int)get_named_type(v67, (_DWORD)a3, 3, (unsigned int)&s2, 0, 0, 0, 0, (__int64)&v75) )
          return v75;
      }
      return 0;
    }
  }
  else
  {
    v10 = nullptr;
    v11 = a4 + 1;
    v12 = (_QWORD *)a4[2];
    if ( !v12 )
      goto LABEL_20;
  }
  v13 = v91;
  v14 = haystack;
  v63 = v11;
  v15 = v11;
  v16 = v12;
  if ( (_QWORD)v91 )
    v14 = v10;
  v69 = v14;
  while ( 1 )
  {
    v22 = v16[5];
    if ( !v13 )
      break;
    if ( v22 )
      goto LABEL_17;
    v17 = v16;
    v18 = v10;
    v19 = haystack;
LABEL_10:
    v20 = strcmp(v19, v18);
    v21 = (_QWORD *)v16[2];
    v16 = (_QWORD *)v16[3];
    if ( v20 >= 0 )
    {
      v15 = v17;
      v16 = v21;
    }
    if ( !v16 )
      goto LABEL_28;
  }
  if ( v22 )
  {
LABEL_17:
    v19 = (const char *)v16[4];
    v18 = v69;
    v17 = v16;
    goto LABEL_10;
  }
  while ( 1 )
  {
    v23 = v16[2];
    if ( !v23 )
      break;
    v15 = v16;
    v16 = (_QWORD *)v16[2];
    if ( *(_QWORD *)(v23 + 40) )
      goto LABEL_17;
  }
  v15 = v16;
LABEL_28:
  v11 = v63;
  if ( v15 == v63 )
    goto LABEL_18;
  if ( !v15[5] )
  {
    v26 = v10;
    v27 = haystack;
    if ( v13 )
      goto LABEL_32;
    if ( v10 )
      goto LABEL_38;
    return *((unsigned int *)v15 + 14);
  }
  v26 = haystack;
  v27 = (const char *)v15[4];
  if ( v13 )
    v26 = v10;
LABEL_32:
  if ( strcmp(v26, v27) < 0 )
    goto LABEL_18;
  if ( !v10 )
    return *((unsigned int *)v15 + 14);
LABEL_38:
  *(_QWORD *)&v91 = 0;
  qfree(v10);
  return *((unsigned int *)v15 + 14);
}
