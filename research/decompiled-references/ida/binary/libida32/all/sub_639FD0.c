__int64 __fastcall sub_639FD0(__int64 a1, __int64 a2, char *a3, _QWORD *a4, int a5, double a6, double a7)
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
  __int64 v57; // rax
  void *v58; // rdi
  void *v59; // r15
  __int64 v61; // [rsp+10h] [rbp-140h]
  _QWORD *v62; // [rsp+18h] [rbp-138h]
  char v63; // [rsp+18h] [rbp-138h]
  _QWORD *v64; // [rsp+18h] [rbp-138h]
  __int64 v66; // [rsp+28h] [rbp-128h]
  const char *v68; // [rsp+38h] [rbp-118h]
  unsigned int v69; // [rsp+38h] [rbp-118h]
  unsigned int v70; // [rsp+38h] [rbp-118h]
  unsigned int v71; // [rsp+38h] [rbp-118h]
  unsigned int v72; // [rsp+38h] [rbp-118h]
  char *v73; // [rsp+38h] [rbp-118h]
  unsigned int v74; // [rsp+40h] [rbp-110h] BYREF
  _BYTE v75[4]; // [rsp+44h] [rbp-10Ch] BYREF
  char *v76; // [rsp+48h] [rbp-108h] BYREF
  char *v77; // [rsp+50h] [rbp-100h] BYREF
  char *v78; // [rsp+58h] [rbp-F8h] BYREF
  char *v79; // [rsp+60h] [rbp-F0h] BYREF
  __int64 *v80; // [rsp+68h] [rbp-E8h] BYREF
  void *v81; // [rsp+70h] [rbp-E0h] BYREF
  __int128 v82; // [rsp+78h] [rbp-D8h]
  void *v83; // [rsp+90h] [rbp-C0h] BYREF
  __int128 v84; // [rsp+98h] [rbp-B8h]
  void *v85; // [rsp+B0h] [rbp-A0h] BYREF
  __int128 v86; // [rsp+B8h] [rbp-98h]
  void *ptr; // [rsp+D0h] [rbp-80h] BYREF
  __int128 v88; // [rsp+D8h] [rbp-78h]
  char *s2; // [rsp+F0h] [rbp-60h] BYREF
  __int128 v90; // [rsp+F8h] [rbp-58h]
  _QWORD *v91; // [rsp+108h] [rbp-48h]
  int v92; // [rsp+110h] [rbp-40h]
  unsigned __int64 v93; // [rsp+118h] [rbp-38h]

  v66 = a1;
  v61 = a2;
  v93 = __readfsqword(0x28u);
  if ( !a2 )
  {
    v61 = *(_QWORD *)(*(_QWORD *)(qword_2CA1698 + 1480) + 8LL);
    if ( a1 )
      goto LABEL_3;
LABEL_42:
    v66 = *(_QWORD *)(*(_QWORD *)(qword_2CA1698 + 1480) + 8LL);
    goto LABEL_3;
  }
  if ( !a1 )
    goto LABEL_42;
LABEL_3:
  s2 = nullptr;
  v90 = 0;
  if ( a3 )
  {
    v7 = strlen(a3);
    v8 = v7 + 1;
    v9 = v7;
    s2 = (char *)qvector_reserve(&s2, 0, v7 + 1, 1);
    *(_QWORD *)&v90 = v8;
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
        *(_QWORD *)&v90 = 0;
        qfree(v10);
      }
LABEL_20:
      v74 = 0;
      named_type = get_named_type(
                     v61,
                     (int)a3,
                     1,
                     (int)&v77,
                     (int)&v78,
                     (int)&v76,
                     (__int64)&v79,
                     (__int64)v75,
                     (__int64)&v74);
      if ( named_type != 2 || (a5 & 1) == 0 )
      {
        if ( named_type && v66 == v61 )
        {
          if ( (*(_BYTE *)(v61 + 32) & 0x10) != 0 && named_type == 1 )
            return v74;
          v74 = 0;
          goto LABEL_44;
        }
        v74 = 0;
        if ( named_type )
        {
          s2 = v77;
          v49 = sub_552550(v61, (__int64 *)&s2, nullptr, 0.0, a7);
          if ( (unsigned int)get_named_type(v66, (int)a3, 3, (int)&s2, 0, 0, 0, 0, (__int64)&v74) )
          {
            if ( v49 == -1 || v49 == sub_552550(v66, (__int64 *)&s2, nullptr, 0.0, a7) )
              return v74;
            v74 = 0;
          }
          else if ( v74 )
          {
            goto LABEL_45;
          }
LABEL_44:
          v74 = alloc_type_ordinals(v66, 1);
          sub_63EF20(*(_QWORD *)(qword_2CA1698 + 1480), v66, v74, 1, (_DWORD)a3, (unsigned int)&unk_2C57AA0, 0, 0, 0, 0);
          s2 = a3;
          LODWORD(v90) = v74;
          sub_638DC0(a4, (__int64)&s2);
LABEL_45:
          v29 = v77;
          v81 = nullptr;
          v82 = 0;
          if ( v77 )
          {
            v30 = strlen(v77);
            v81 = (void *)qvector_reserve(&v81, 0, v30 + 1, 1);
            *(_QWORD *)&v82 = v30 + 1;
            memmove(v81, v29, v30);
            *((_BYTE *)v81 + v30) = 0;
          }
          v31 = v78;
          v83 = nullptr;
          v84 = 0;
          if ( v78 )
          {
            v32 = strlen(v78);
            v83 = (void *)qvector_reserve(&v83, 0, v32 + 1, 1);
            *(_QWORD *)&v84 = v32 + 1;
            memmove(v83, v31, v32);
            *((_BYTE *)v83 + v32) = 0;
          }
          v33 = v76;
          v85 = nullptr;
          v86 = 0;
          if ( v76 )
          {
            v34 = strlen(v76);
            v85 = (void *)qvector_reserve(&v85, 0, v34 + 1, 1);
            *(_QWORD *)&v86 = v34 + 1;
            memmove(v85, v33, v34);
            *((_BYTE *)v85 + v34) = 0;
          }
          v35 = v79;
          ptr = nullptr;
          v88 = 0;
          if ( v79 )
          {
            v36 = strlen(v79);
            ptr = (void *)qvector_reserve(&ptr, 0, v36 + 1, 1);
            *(_QWORD *)&v88 = v36 + 1;
            memmove(ptr, v35, v36);
            *((_BYTE *)ptr + v36) = 0;
          }
          s2 = (char *)off_2B0D228;
          *(_QWORD *)&v90 = v66;
          *((_QWORD *)&v90 + 1) = v61;
          v91 = a4;
          v92 = a5;
          sub_6336F0(v61, (__int64)&s2, (__m128i *)&v81, nullptr, 0, v28);
          v37 = (int)v81;
          v38 = (char *)v81;
          if ( !(_QWORD)v82 )
            v38 = &byte_2CA20D8;
          if ( (*v38 & 0x3F) == 0x2D )
          {
            v40 = *(_BYTE *)v81;
            v80 = nullptr;
            v63 = v40;
            sub_630250(&s2, (__int64)v81, (__int64)v83, (__int64)ptr, nullptr, &v80);
            v73 = s2;
            if ( s2 )
            {
              if ( (s2[52] & 0x10) == 0 && (unsigned int)sub_4032C0((__int64 *)s2, 2) <= 1 )
              {
                if ( v81 )
                {
                  *(_QWORD *)&v82 = 0;
                  qfree(v81);
                  v81 = nullptr;
                  *((_QWORD *)&v82 + 1) = 0;
                }
                if ( v83 )
                {
                  *(_QWORD *)&v84 = 0;
                  qfree(v83);
                  v83 = nullptr;
                  *((_QWORD *)&v84 + 1) = 0;
                }
                if ( ptr )
                {
                  *(_QWORD *)&v88 = 0;
                  qfree(ptr);
                  ptr = nullptr;
                  *((_QWORD *)&v88 + 1) = 0;
                }
                if ( (unsigned __int8)sub_51D630(
                                        (__int64)v73,
                                        (__int64 *)&v81,
                                        (__int64)&v83,
                                        (__int64)&ptr,
                                        v63,
                                        *((_DWORD *)v73 + 12) & 0xF,
                                        v80) )
                {
                  sub_686900(&v83, &v81);
                  sub_686900(&ptr, &v81);
                }
              }
              v41 = *((void **)v73 + 3);
              if ( v41 )
              {
                *((_QWORD *)v73 + 4) = 0;
                qfree(v41);
              }
              v42 = *(char **)v73;
              if ( *(_QWORD *)v73 )
              {
                if ( *((_QWORD *)v73 + 1) )
                {
                  v64 = v11;
                  v43 = *((_QWORD *)v73 + 1);
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
                    v42 = *(char **)v73;
                  }
                  while ( v43 != v44 );
                  v11 = v64;
                }
                *((_QWORD *)v73 + 1) = 0;
                qfree(v42);
              }
              qfree(v73);
            }
            v37 = (int)v81;
          }
          v39 = sub_63EF20(
                  *(_QWORD *)(qword_2CA1698 + 1480),
                  v66,
                  v74,
                  5,
                  (_DWORD)a3,
                  v37,
                  (__int64)v83,
                  (__int64)v85,
                  (__int64)ptr,
                  (__int64)v75);
          result = v74;
          if ( v39 )
          {
            s2 = nullptr;
            v90 = 0;
            if ( a3 )
            {
              v50 = strlen(a3);
              v51 = v50 + 1;
              v52 = v50;
              s2 = (char *)qvector_reserve(&s2, 0, v50 + 1, 1);
              *(_QWORD *)&v90 = v51;
              memmove(s2, a3, v52);
              s2[v52] = 0;
            }
            v53 = sub_4C3150((__int64)a4, (__int64)&s2);
            v55 = v54;
            if ( (_QWORD *)a4[3] == v53 && v11 == v54 )
            {
              sub_62BCF0((_QWORD *)a4[2]);
              a4[2] = 0;
              a4[3] = v11;
              a4[4] = v11;
              a4[5] = 0;
            }
            else if ( v54 != v53 )
            {
              do
              {
                v56 = std::_Rb_tree_increment();
                v57 = std::_Rb_tree_rebalance_for_erase();
                v58 = *(void **)(v57 + 32);
                v59 = (void *)v57;
                if ( v58 )
                {
                  *(_QWORD *)(v57 + 40) = 0;
                  qfree(v58);
                }
                operator delete(v59, 0x40u);
                --a4[5];
              }
              while ( v55 != (_QWORD *)v56 );
            }
            if ( s2 )
            {
              *(_QWORD *)&v90 = 0;
              qfree(s2);
            }
            result = 0;
          }
          if ( ptr )
          {
            v69 = result;
            *(_QWORD *)&v88 = 0;
            qfree(ptr);
            result = v69;
          }
          if ( v85 )
          {
            v70 = result;
            *(_QWORD *)&v86 = 0;
            qfree(v85);
            result = v70;
          }
          if ( v83 )
          {
            v71 = result;
            *(_QWORD *)&v84 = 0;
            qfree(v83);
            result = v71;
          }
          if ( v81 )
          {
            v72 = result;
            *(_QWORD *)&v82 = 0;
            qfree(v81);
            return v72;
          }
          return result;
        }
        if ( (unsigned int)get_named_type(v66, (int)a3, 3, (int)&s2, 0, 0, 0, 0, (__int64)&v74) )
          return v74;
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
  v13 = v90;
  v14 = haystack;
  v62 = v11;
  v15 = v11;
  v16 = v12;
  if ( (_QWORD)v90 )
    v14 = v10;
  v68 = v14;
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
    v18 = v68;
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
  v11 = v62;
  if ( v15 == v62 )
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
  *(_QWORD *)&v90 = 0;
  qfree(v10);
  return *((unsigned int *)v15 + 14);
}

