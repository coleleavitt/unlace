/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: deserialize_dynamic_register_set
// Address: 0x00000000000AFFF8

//----- (00000000000AFFF8) ----------------------------------------------------
void __fastcall deserialize_dynamic_register_set(__int64 a1, unsigned __int64 *a2)
{
  _QWORD *v3; // x0
  void **v5; // x0
  void **v6; // x21
  unsigned __int64 v7; // x22
  __int64 v8; // x23
  unsigned __int64 v9; // x24
  void *v10; // x8
  void **v11; // x25
  void *v12; // x0
  void **v13; // x0
  void ***v14; // x29
  unsigned __int64 v15; // x22
  __int64 v16; // x23
  unsigned __int64 v17; // x24
  void *v18; // x8
  void **v19; // x25
  unsigned __int64 v20; // x1
  unsigned int v21; // w0
  __int64 v22; // x22
  __int64 v23; // x23
  pthread_mutex_t *v24; // x28
  char *v25; // x24
  __int64 v26; // x29
  _QWORD *v27; // x0
  _QWORD *v28; // x24
  char **v29; // x25
  const char *v30; // x26
  _BYTE *v31; // x9
  size_t v33; // x0
  char *v34; // x1
  pthread_mutex_t *v35; // x23
  unsigned __int64 v36; // x28
  size_t v37; // x27
  char *v38; // x24
  char *v39; // x8
  __int64 v40; // x8
  unsigned __int64 v41; // x9
  void **v42; // x1
  unsigned __int64 v43; // x2
  void **v44; // x0
  void **v45; // x0
  __int64 v46; // x8
  unsigned __int64 v47; // x9
  void **v48; // x1
  unsigned __int64 v49; // x2
  void **v50; // x0
  void **v51; // x0
  void *v52; // x9
  unsigned int v53; // w0
  unsigned __int64 v54; // x23
  unsigned int v55; // w24
  unsigned __int64 v56; // x22
  pthread_mutex_t *v57; // x24
  unsigned int v58; // w0
  unsigned __int64 v59; // x25
  unsigned int v60; // w26
  unsigned __int64 v61; // x26
  char *v62; // x1
  unsigned __int8 *v63; // x9
  __int64 v65; // x8
  char *v66; // x0
  char **v67; // x8
  __int128 v68; // q0
  char *v69; // x10
  char *v70; // x8
  unsigned int v71; // w0
  __int64 v72; // x29
  __int64 v73; // x22
  unsigned __int64 v74; // x2
  _QWORD *v75; // x0
  _QWORD *v76; // x23
  unsigned __int64 v77; // x9
  __int64 v78; // x28
  _QWORD *v79; // x0
  _QWORD *v80; // x24
  char **v81; // x25
  const char *v82; // x26
  _BYTE *v83; // x9
  size_t v85; // x0
  char *v86; // x1
  unsigned __int64 v87; // x9
  size_t v88; // x27
  char *v89; // x0
  char *v90; // x24
  char *v91; // x8
  char *v92; // x24
  unsigned int v93; // w0
  _BOOL4 v94; // [xsp+Ch] [xbp-A4h]
  unsigned __int64 v95; // [xsp+18h] [xbp-98h]
  __int64 v96; // [xsp+20h] [xbp-90h]
  __int64 v97; // [xsp+20h] [xbp-90h]
  void *ptr[2]; // [xsp+30h] [xbp-80h] BYREF
  char *v99; // [xsp+40h] [xbp-70h]
  __int64 v100; // [xsp+48h] [xbp-68h]

  v100 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a1 )
  {
    v3 = *(_QWORD **)a1;
    if ( v3 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      qfree(v3);
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 16) = 0;
    }
    v6 = (void **)(a1 + 24);
    v5 = *(void ***)(a1 + 24);
    if ( v5 )
    {
      v7 = *(_QWORD *)(a1 + 32);
      if ( v7 )
      {
        v8 = 0;
        v9 = 1;
        v10 = *v5;
        if ( !*v5 )
          goto LABEL_9;
        while ( 1 )
        {
          v11 = &v5[v8];
          v5[v8 + 1] = nullptr;
          qfree(v10);
          *v11 = nullptr;
          v11[2] = nullptr;
          if ( v9 >= v7 )
            break;
          while ( 1 )
          {
            v5 = (void **)*v6;
            ++v9;
            v8 += 3;
            v10 = *(void **)((char *)*v6 + v8 * 8);
            if ( v10 )
              break;
LABEL_9:
            if ( v9 >= v7 )
              goto LABEL_10;
          }
        }
LABEL_10:
        v5 = (void **)*v6;
      }
      *(_QWORD *)(a1 + 32) = 0;
      qfree(v5);
      *(_QWORD *)(a1 + 24) = 0;
      *(_QWORD *)(a1 + 40) = 0;
    }
    v12 = *(void **)(a1 + 48);
    if ( v12 )
    {
      *(_QWORD *)(a1 + 56) = 0;
      qfree(v12);
      *(_QWORD *)(a1 + 48) = 0;
      *(_QWORD *)(a1 + 64) = 0;
    }
    v14 = (void ***)(a1 + 72);
    v13 = *(void ***)(a1 + 72);
    if ( v13 )
    {
      v15 = *(_QWORD *)(a1 + 80);
      if ( v15 )
      {
        v16 = 0;
        v17 = 1;
        v18 = *v13;
        if ( !*v13 )
          goto LABEL_19;
        while ( 1 )
        {
          v19 = &v13[v16];
          v13[v16 + 1] = nullptr;
          qfree(v18);
          *v19 = nullptr;
          v19[2] = nullptr;
          if ( v17 >= v15 )
            break;
          while ( 1 )
          {
            v13 = *v14;
            ++v17;
            v16 += 3;
            v18 = (*v14)[v16];
            if ( v18 )
              break;
LABEL_19:
            if ( v17 >= v15 )
              goto LABEL_20;
          }
        }
LABEL_20:
        v13 = *v14;
      }
      *(_QWORD *)(a1 + 80) = 0;
      qfree(v13);
      *(_QWORD *)(a1 + 72) = 0;
      *(_QWORD *)(a1 + 88) = 0;
    }
    v20 = a2[1];
    if ( *a2 < v20 )
    {
      v21 = unpack_dd(a2, v20);
      v94 = v21 > 0xFFFFFEFF && (unsigned __int8)v21 != 0;
      if ( v94 )
        v21 = unpack_dd(a2, a2[1]);
      if ( v21 )
      {
        v22 = 0;
        v23 = v21;
        v24 = (pthread_mutex_t *)(a1 + 48);
        v96 = v21;
        do
        {
          v26 = *(_QWORD *)(a1 + 32);
          if ( *(_QWORD *)(a1 + 40) >= (unsigned __int64)(v26 + 1) )
          {
            v28 = *v6;
          }
          else
          {
            v27 = qvector_reserve((pthread_mutex_t *)(a1 + 24), *(void **)(a1 + 24), v26 + 1, 0x18u);
            v26 = *(_QWORD *)(a1 + 32);
            v28 = v27;
            *(_QWORD *)(a1 + 24) = v27;
          }
          v29 = (char **)&v28[3 * v26];
          v29[1] = nullptr;
          v29[2] = nullptr;
          *v29 = nullptr;
          ++*(_QWORD *)(a1 + 32);
          v30 = (const char *)*a2;
          v31 = (_BYTE *)*a2;
          do
          {
            if ( (unsigned __int64)v31 >= a2[1] )
              goto LABEL_41;
          }
          while ( *v31++ );
          *a2 = (unsigned __int64)v31;
          if ( !v30 || (v33 = strlen(v30)) == 0 )
          {
LABEL_41:
            v39 = (char *)&v28[3 * v26];
            v14 = (void ***)(a1 + 72);
            *((_QWORD *)v39 + 1) = 0;
            v25 = &byte_F154B;
            goto LABEL_42;
          }
          v34 = *v29;
          v35 = v24;
          v36 = v33 + 1;
          v37 = v33;
          if ( v28[3 * v26 + 2] < v33 + 1 )
          {
            v34 = (char *)qvector_reserve((pthread_mutex_t *)&v28[3 * v26], v34, v36, 1u);
            *v29 = v34;
          }
          v38 = (char *)&v28[3 * v26];
          *((_QWORD *)v38 + 1) = v36;
          memmove(v34, v30, v37);
          (*v29)[v37] = 0;
          if ( *((_QWORD *)v38 + 1) )
            v25 = *v29;
          else
            v25 = &byte_F154B;
          v24 = v35;
          v23 = v96;
          v14 = (void ***)(a1 + 72);
LABEL_42:
          ptr[0] = v25;
          v40 = *(_QWORD *)(a1 + 56);
          v41 = *(_QWORD *)(a1 + 64);
          v42 = *(void ***)(a1 + 48);
          v43 = v40 + 1;
          if ( v42 > ptr || &v42[v41] <= ptr )
          {
            if ( v41 < v43 )
            {
              v45 = (void **)qvector_reserve(v24, v42, v43, 8u);
              *(_QWORD *)(a1 + 48) = v45;
              v40 = *(_QWORD *)(a1 + 56);
              v25 = (char *)ptr[0];
              v42 = v45;
            }
          }
          else if ( v41 < v43 )
          {
            v44 = (void **)qvector_reserve(v24, v42, v43, 8u);
            v40 = *(_QWORD *)(a1 + 56);
            v42 = v44;
            *(_QWORD *)(a1 + 48) = v44;
          }
          v42[v40] = v25;
          ++v22;
          ++*(_QWORD *)(a1 + 56);
        }
        while ( v22 != v23 );
      }
      else
      {
        v24 = (pthread_mutex_t *)(a1 + 48);
      }
      ptr[0] = nullptr;
      v46 = *(_QWORD *)(a1 + 56);
      v47 = *(_QWORD *)(a1 + 64);
      v48 = *(void ***)(a1 + 48);
      v49 = v46 + 1;
      if ( v48 > ptr || &v48[v47] <= ptr )
      {
        if ( v47 < v49 )
        {
          v51 = (void **)qvector_reserve(v24, v48, v49, 8u);
          v24->__align = (__int64)v51;
          v46 = *(_QWORD *)(a1 + 56);
          v52 = ptr[0];
          v48 = v51;
LABEL_58:
          v48[v46] = v52;
          ++*(_QWORD *)(a1 + 56);
          v53 = unpack_dd(a2, a2[1]);
          v54 = v53;
          v55 = v53;
          sub_B07DC((__int64)v14, v53);
          if ( v55 )
          {
            v56 = 0;
            do
            {
              v57 = (pthread_mutex_t *)&(*v14)[3 * v56];
              v58 = unpack_dd(a2, a2[1]);
              v59 = v58;
              v60 = v58;
              ptr[0] = nullptr;
              sub_49E5C(v57, v58, (char *)ptr);
              if ( v60 )
              {
                v61 = 0;
                do
                {
                  v62 = (char *)*a2;
                  v63 = (unsigned __int8 *)*a2;
                  while ( (unsigned __int64)v63 < a2[1] )
                  {
                    if ( !*v63++ )
                    {
                      *a2 = (unsigned __int64)v63;
                      goto LABEL_67;
                    }
                  }
                  v62 = nullptr;
LABEL_67:
                  sub_39140(ptr, v62);
                  if ( ptr[1] >= (char *)&dword_0 + 2 )
                  {
                    v65 = *(_QWORD *)(a1 + 32);
                    if ( *(_QWORD *)(a1 + 40) >= (unsigned __int64)(v65 + 1) )
                    {
                      v66 = (char *)*v6;
                    }
                    else
                    {
                      v66 = (char *)qvector_reserve((pthread_mutex_t *)(a1 + 24), *v6, v65 + 1, 0x18u);
                      v65 = *(_QWORD *)(a1 + 32);
                      *(_QWORD *)(a1 + 24) = v66;
                    }
                    v67 = (char **)&v66[24 * v65];
                    v67[1] = nullptr;
                    v67[2] = nullptr;
                    *v67 = nullptr;
                    ++*(_QWORD *)(a1 + 32);
                    v68 = *(_OWORD *)v67;
                    v69 = v67[2];
                    *v67 = (char *)ptr[0];
                    v67[1] = (char *)ptr[1];
                    v67[2] = v99;
                    *(_OWORD *)ptr = v68;
                    v99 = v69;
                    if ( v67[1] )
                      v70 = *v67;
                    else
                      v70 = &byte_F154B;
                    *(_QWORD *)(v57->__align + 8 * v61) = v70;
                  }
                  if ( ptr[0] )
                  {
                    ptr[1] = nullptr;
                    qfree(ptr[0]);
                    ptr[0] = nullptr;
                    v99 = nullptr;
                  }
                  ++v61;
                }
                while ( v61 < v59 );
              }
              ++v56;
            }
            while ( v56 < v54 );
          }
          v71 = unpack_dd(a2, a2[1]);
          if ( v71 )
          {
            v72 = 0;
            v97 = v71;
            do
            {
              v73 = *(_QWORD *)(a1 + 8);
              v74 = v73 + 1;
              if ( *(_QWORD *)(a1 + 16) >= (unsigned __int64)(v73 + 1) )
              {
                v76 = *(_QWORD **)a1;
              }
              else
              {
                v75 = qvector_reserve((pthread_mutex_t *)a1, *(void **)a1, v74, 0x20u);
                v73 = *(_QWORD *)(a1 + 8);
                v76 = v75;
                *(_QWORD *)a1 = v75;
                v74 = v73 + 1;
              }
              v78 = *(_QWORD *)(a1 + 32);
              v77 = *(_QWORD *)(a1 + 40);
              *(_QWORD *)(a1 + 8) = v74;
              if ( v77 >= v78 + 1 )
              {
                v80 = *v6;
              }
              else
              {
                v79 = qvector_reserve((pthread_mutex_t *)(a1 + 24), *(void **)(a1 + 24), v78 + 1, 0x18u);
                v78 = *(_QWORD *)(a1 + 32);
                v80 = v79;
                *(_QWORD *)(a1 + 24) = v79;
              }
              v81 = (char **)&v80[3 * v78];
              v81[1] = nullptr;
              v81[2] = nullptr;
              *v81 = nullptr;
              ++*(_QWORD *)(a1 + 32);
              v82 = (const char *)*a2;
              v83 = (_BYTE *)*a2;
              do
              {
                if ( (unsigned __int64)v83 >= a2[1] )
                  goto LABEL_96;
              }
              while ( *v83++ );
              *a2 = (unsigned __int64)v83;
              if ( !v82 || (v85 = strlen(v82)) == 0 )
              {
LABEL_96:
                v80[3 * v78 + 1] = 0;
                goto LABEL_97;
              }
              v86 = *v81;
              v87 = v85 + 1;
              v88 = v85;
              if ( v80[3 * v78 + 2] < v85 + 1 )
              {
                v95 = v85 + 1;
                v89 = (char *)qvector_reserve((pthread_mutex_t *)&v80[3 * v78], v86, v87, 1u);
                v87 = v95;
                v86 = v89;
                *v81 = v89;
              }
              v90 = (char *)&v80[3 * v78];
              *((_QWORD *)v90 + 1) = v87;
              memmove(v86, v82, v88);
              (*v81)[v88] = 0;
              if ( *((_QWORD *)v90 + 1) )
              {
                v91 = *v81;
                goto LABEL_98;
              }
LABEL_97:
              v91 = &byte_F154B;
LABEL_98:
              v92 = (char *)&v76[4 * v73];
              *(_QWORD *)v92 = v91;
              *((_DWORD *)v92 + 2) = unpack_dd(a2, a2[1]);
              v92[12] = unpack_dd(a2, a2[1]);
              v92[13] = unpack_dd(a2, a2[1]);
              v93 = unpack_dd(a2, a2[1]);
              if ( v93 && *(_QWORD *)(a1 + 80) >= (unsigned __int64)v93 )
                v76[4 * v73 + 2] = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 24LL * v93 - 24);
              else
                *((_QWORD *)v92 + 2) = 0;
              ++v72;
              v76[4 * v73 + 3] = unpack_dq(a2, a2[1]) - 1;
            }
            while ( v72 != v97 );
          }
          if ( v94 )
            *(_DWORD *)(a1 + 96) = unpack_dd(a2, a2[1]);
          return;
        }
      }
      else if ( v47 < v49 )
      {
        v50 = (void **)qvector_reserve(v24, v48, v49, 8u);
        v24->__align = (__int64)v50;
        v46 = *(_QWORD *)(a1 + 56);
        v48 = v50;
      }
      v52 = nullptr;
      goto LABEL_58;
    }
  }
}
// 0: using guessed type int dword_0;
// F154B: using guessed type char byte_F154B;
