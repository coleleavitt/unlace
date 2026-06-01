/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: serialize_dynamic_register_set
// Address: 0x0000000100072CA0

//----- (0000000100072CA0) ----------------------------------------------------
__int64 __fastcall serialize_dynamic_register_set(void **a1, __int64 *a2)
{
  __int64 v2; // r15
  __int64 v3; // r12
  __int64 v5; // rbx
  void *v6; // rcx
  void **v7; // rax
  const char *v8; // r14
  size_t v9; // rax
  size_t v10; // r13
  char *v11; // r15
  unsigned __int64 v12; // rdx
  char *v13; // rax
  __int64 v14; // rbx
  void **v15; // r12
  unsigned __int64 v16; // r15
  __int64 **v17; // r13
  __int64 **v18; // r12
  __int64 *v19; // rax
  unsigned __int64 v20; // rax
  __int64 *v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // rbx
  __int64 v24; // r13
  __int64 *v25; // rax
  __int64 **v26; // r14
  __int64 **v27; // r15
  unsigned __int64 v28; // rax
  __int64 *v29; // rax
  unsigned int v30; // r14d
  int v31; // eax
  __int64 v32; // r15
  __int64 v33; // rbx
  char *v34; // rcx
  const char *v35; // r14
  size_t v36; // rax
  size_t v37; // r13
  char *v38; // r15
  unsigned __int64 v39; // rdx
  char *v40; // rax
  __int64 v41; // r12
  const char *v42; // r14
  size_t v43; // rax
  size_t v44; // r13
  void **v45; // rdx
  void *v46; // rcx
  unsigned __int64 v47; // r15
  char *v48; // rax
  __int64 v49; // rbx
  __int64 v50; // rdx
  unsigned __int64 v51; // rcx
  __int128 *v52; // rax
  unsigned int v53; // esi
  __int64 v55; // [rsp+8h] [rbp-A8h]
  __int64 v56; // [rsp+10h] [rbp-A0h]
  __int64 v58; // [rsp+20h] [rbp-90h]
  void *v59; // [rsp+20h] [rbp-90h]
  __int64 v60; // [rsp+28h] [rbp-88h]
  __int64 v61; // [rsp+30h] [rbp-80h]
  void *v62; // [rsp+38h] [rbp-78h]
  __int64 v63; // [rsp+38h] [rbp-78h]
  __int64 v64; // [rsp+38h] [rbp-78h]
  char *v65; // [rsp+38h] [rbp-78h]
  __int128 *v66; // [rsp+48h] [rbp-68h] BYREF
  __int128 v67; // [rsp+50h] [rbp-60h] BYREF
  __int128 *v68; // [rsp+60h] [rbp-50h] BYREF
  __int128 v69; // [rsp+68h] [rbp-48h] BYREF
  unsigned __int8 v70; // [rsp+7Fh] [rbp-31h] BYREF

  v2 = a2[6];
  v60 = a2[1];
  v61 = *a2;
  if ( v60 != 0 && *a2 != 0 && v2 != 0 )
  {
    sub_100032FE0(a1, 0xFFFFFF01);
    v3 = -1;
    while ( *(_QWORD *)(v2 + 8 * v3++ + 8) != 0 )
      ;
    sub_100032FE0(a1, v3);
    if ( v3 )
    {
      v5 = 0;
      v58 = v2;
      do
      {
        v8 = *(const char **)(v2 + 8 * v5);
        if ( !v8 )
          v8 = &_s;
        v9 = strlen(v8);
        v10 = v9 + 1;
        if ( v9 != -1 )
        {
          v11 = (char *)a1[1];
          v12 = 0x7FFFFFFFFFFFFFFFLL;
          if ( !__CFADD__(v10, v11) )
            v12 = (unsigned __int64)&v11[v10];
          if ( (unsigned __int64)v11 >= v12 )
          {
            v7 = a1;
            if ( v11 != (char *)v12 )
            {
              LOBYTE(v68) = 0;
              sub_10001CE90((__int64)a1, v12, (unsigned __int8 *)&v68);
              v7 = a1;
            }
          }
          else
          {
            v13 = (char *)*a1;
            v62 = (void *)v12;
            if ( (unsigned __int64)a1[2] >= v12 )
            {
              v6 = a1[1];
            }
            else
            {
              v13 = (char *)qvector_reserve((__int64)a1, v13, v12, 1u);
              *a1 = v13;
              v6 = a1[1];
              v12 = (unsigned __int64)v62;
            }
            __bzero(&v13[(_QWORD)v6], v12 - (_QWORD)v6);
            v7 = a1;
            a1[1] = v62;
          }
          memcpy(&v11[(_QWORD)*v7], v8, v10);
          v2 = v58;
        }
        ++v5;
      }
      while ( v3 != v5 );
    }
    v69 = 0;
    v68 = &v69;
    v14 = 0;
    v63 = 0;
    v15 = a1;
    do
    {
      v16 = *(_QWORD *)(v61 + 32 * v14 + 16);
      if ( v16 )
      {
        v17 = (__int64 **)&v69;
        v18 = (__int64 **)&v69;
        if ( (_QWORD)v69 )
        {
          v19 = (__int64 *)v69;
          while ( 1 )
          {
            while ( 1 )
            {
              v17 = (__int64 **)v19;
              v20 = v19[4];
              if ( v16 >= v20 )
                break;
              v19 = *v17;
              v18 = v17;
              if ( !*v17 )
                goto LABEL_32;
            }
            if ( v16 <= v20 )
              break;
            v19 = v17[1];
            if ( !v19 )
            {
              v18 = v17 + 1;
              goto LABEL_32;
            }
          }
        }
        else
        {
LABEL_32:
          v21 = (__int64 *)operator new(0x30u);
          v21[4] = v16;
          v21[5] = v63;
          *(_OWORD *)v21 = 0;
          v21[2] = (__int64)v17;
          *v18 = v21;
          if ( *(_QWORD *)v68 )
          {
            v68 = *(__int128 **)v68;
            v21 = *v18;
          }
          sub_10000C830((__int64 *)v69, v21);
          ++*((_QWORD *)&v69 + 1);
          ++v63;
        }
        v15 = a1;
      }
      ++v14;
    }
    while ( v14 != v60 );
    v67 = 0;
    v66 = &v67;
    sub_100032FE0(v15, v63);
    v22 = 0;
    do
    {
      v56 = v22;
      v23 = *(_QWORD *)(v61 + 32 * v22 + 16);
      if ( v23 )
      {
        v24 = 32 * v22;
        v25 = (__int64 *)v67;
        v26 = (__int64 **)&v67;
LABEL_39:
        v27 = v26;
        if ( v25 )
        {
          do
          {
            v26 = (__int64 **)v25;
            v28 = v25[4];
            if ( v23 < v28 )
            {
              v25 = *v26;
              goto LABEL_39;
            }
            if ( v23 <= v28 )
              goto LABEL_35;
            v25 = v26[1];
          }
          while ( v25 );
          v27 = v26 + 1;
        }
        v29 = (__int64 *)operator new(0x28u);
        v29[4] = v23;
        *(_OWORD *)v29 = 0;
        v29[2] = (__int64)v26;
        *v27 = v29;
        if ( *(_QWORD *)v66 )
        {
          v66 = *(__int128 **)v66;
          v29 = *v27;
        }
        sub_10000C830((__int64 *)v67, v29);
        ++*((_QWORD *)&v67 + 1);
        v30 = 1;
        v64 = v61 + v24;
        if ( (*(_BYTE *)(v61 + v24 + 9) & 1) == 0 )
        {
          v31 = *(unsigned __int8 *)(v64 + 13);
          v30 = 16;
          if ( v31 != 1 )
          {
            if ( v31 != 2 )
            {
              if ( under_debugger != 1 )
                interr(0x6F7u);
              BUG();
            }
            v30 = 32;
          }
        }
        sub_100032FE0(v15, v30);
        v32 = v30;
        v33 = 0;
        v55 = v30;
        do
        {
          v35 = *(const char **)(*(_QWORD *)(v64 + 16) + 8 * v33);
          if ( !v35 )
            v35 = &_s;
          v36 = strlen(v35);
          v37 = v36 + 1;
          if ( v36 != -1 )
          {
            v38 = (char *)v15[1];
            v39 = 0x7FFFFFFFFFFFFFFFLL;
            if ( !__CFADD__(v37, v38) )
              v39 = (unsigned __int64)&v38[v37];
            if ( (unsigned __int64)v38 >= v39 )
            {
              v15 = a1;
              if ( v38 != (char *)v39 )
              {
                v70 = 0;
                sub_10001CE90((__int64)a1, v39, &v70);
              }
            }
            else
            {
              v15 = a1;
              v40 = (char *)*a1;
              v59 = (void *)v39;
              if ( (unsigned __int64)a1[2] >= v39 )
              {
                v34 = v38;
              }
              else
              {
                v40 = (char *)qvector_reserve((__int64)a1, v40, v39, 1u);
                *a1 = v40;
                v34 = (char *)a1[1];
                v39 = (unsigned __int64)v59;
              }
              __bzero(&v40[(_QWORD)v34], v39 - (_QWORD)v34);
              a1[1] = v59;
            }
            memcpy(&v38[(_QWORD)*v15], v35, v37);
            v32 = v55;
          }
          ++v33;
        }
        while ( v32 != v33 );
      }
LABEL_35:
      v22 = v56 + 1;
    }
    while ( v56 + 1 != v60 );
    sub_100032FE0(v15, v60);
    v41 = 0;
    do
    {
      v42 = *(const char **)(v61 + 32 * v41);
      if ( !v42 )
        v42 = &_s;
      v43 = strlen(v42);
      v44 = v43 + 1;
      if ( v43 != -1 )
      {
        v45 = a1;
        v46 = a1[1];
        v47 = (unsigned __int64)v46 + v44;
        if ( __CFADD__(v44, v46) )
          v47 = 0x7FFFFFFFFFFFFFFFLL;
        v65 = (char *)a1[1];
        if ( (unsigned __int64)v46 >= v47 )
        {
          if ( v46 != (void *)v47 )
          {
            v70 = 0;
            sub_10001CE90((__int64)a1, v47, &v70);
            v45 = a1;
          }
        }
        else
        {
          v48 = (char *)*a1;
          if ( (unsigned __int64)a1[2] < v47 )
          {
            v48 = (char *)qvector_reserve((__int64)a1, *a1, v47, 1u);
            *a1 = v48;
          }
          __bzero(&v48[(_QWORD)a1[1]], v47 - (_QWORD)a1[1]);
          v45 = a1;
          a1[1] = (void *)v47;
        }
        memcpy(&v65[(_QWORD)*v45], v42, v44);
      }
      v49 = v61 + 32 * v41;
      sub_100032FE0(a1, *(_DWORD *)(v49 + 8));
      sub_100032FE0(a1, *(unsigned __int8 *)(v49 + 12));
      sub_100032FE0(a1, *(unsigned __int8 *)(v49 + 13));
      v50 = v69;
      if ( !(_QWORD)v69 )
        goto LABEL_85;
      v51 = *(_QWORD *)(v49 + 16);
      v52 = &v69;
      do
      {
        if ( *(_QWORD *)(v50 + 32) >= v51 )
          v52 = (__int128 *)v50;
        v50 = *(_QWORD *)(v50 + 8LL * (*(_QWORD *)(v50 + 32) < v51));
      }
      while ( v50 );
      if ( v52 != &v69 && v51 >= *((_QWORD *)v52 + 4) )
        v53 = *((_QWORD *)v52 + 5) + 1;
      else
LABEL_85:
        v53 = 0;
      sub_100032FE0(a1, v53);
      sub_10005A320(a1, *(_QWORD *)(v49 + 24) + 1LL);
      ++v41;
    }
    while ( v41 != v60 );
    sub_100032FE0(a1, *((_DWORD *)a2 + 24));
    sub_100073B40((__int64)&v66, (_QWORD *)v67);
    sub_100073B00((__int64)&v68, (_QWORD *)v69);
  }
  return __stack_chk_guard;
}
// 100082B16: using guessed type __int64 __fastcall __bzero(_QWORD, _QWORD);
// 1000AE23D: using guessed type char under_debugger;
