void __fastcall sub_18CD690(
        __int64 *a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        double a8)
{
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 i; // rax
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rsi
  unsigned __int64 v26; // r12
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rbp
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // r13
  __int64 v37; // rax
  __int64 *v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // rax
  __int64 *v43; // r13
  __int64 v44; // r12
  size_t v45; // rax
  __int64 v46; // rax
  unsigned int v47; // eax
  __int64 v48; // rsi
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  unsigned int v52; // eax
  __int64 v53; // rsi
  size_t v54; // r15
  int v55; // esi
  size_t v56; // r8
  unsigned int v57; // eax
  size_t v58; // rax
  void *v59; // rdi
  __int64 v60; // rdx
  __int64 v61; // rax
  size_t v62; // rax
  __int64 v63; // rax
  __int64 v64; // rsi
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  unsigned int v68; // eax
  size_t v69; // r14
  int v70; // eax
  __int64 v71; // r14
  size_t v72; // rax
  unsigned int v73; // edx
  signed __int64 v74; // r8
  unsigned int v75; // edx
  unsigned int v76; // ecx
  unsigned int v77; // [rsp+0h] [rbp-1C0h]
  __int64 v78; // [rsp+0h] [rbp-1C0h]
  __int64 v79; // [rsp+8h] [rbp-1B8h]
  int v80; // [rsp+14h] [rbp-1ACh]
  _DWORD v81[5]; // [rsp+20h] [rbp-1A0h] BYREF
  char v82; // [rsp+34h] [rbp-18Ch]
  unsigned __int64 v83; // [rsp+38h] [rbp-188h] BYREF
  char v84; // [rsp+40h] [rbp-180h]
  void *v85; // [rsp+50h] [rbp-170h]
  __int64 v86; // [rsp+60h] [rbp-160h] BYREF
  _DWORD v87[6]; // [rsp+78h] [rbp-148h] BYREF
  void *v88; // [rsp+90h] [rbp-130h]
  _BYTE v89[24]; // [rsp+A0h] [rbp-120h] BYREF
  _DWORD v90[6]; // [rsp+B8h] [rbp-108h] BYREF
  void *v91; // [rsp+D0h] [rbp-F0h]
  _BYTE v92[24]; // [rsp+E0h] [rbp-E0h] BYREF
  _BYTE v93[200]; // [rsp+F8h] [rbp-C8h] BYREF

  v8 = *(_QWORD *)(a2 + 16);
  if ( v8 )
  {
    v9 = *(_QWORD *)(v8 + 40);
    if ( (v9 & 7) == 0 )
    {
      v10 = v9 & 0xFFFFFFFFFFFFFFF8LL;
      v11 = v10;
      if ( v10 )
      {
        v12 = *(_QWORD *)(v10 + 16);
        if ( *(_DWORD *)v12 == 3 && *(_WORD *)(v12 + 16) == 29545 && *(_BYTE *)(v12 + 18) == 97 )
        {
          v77 = a3;
          v16 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL);
          if ( (*(_BYTE *)(a2 + 40) & 1) != 0 )
            v16 = sub_F68450(*(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4, a5);
          v17 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF0LL);
          if ( (unsigned int)*(unsigned __int8 *)(v17 + 16) - 35 <= 1
            || (v60 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
                    - 35,
                (unsigned int)v60 <= 1)
            && (v17 = sub_F63050(v17, a2, v60, a4)) != 0 )
          {
            for ( i = *(_QWORD *)(v17 + 24); ; i = *(_QWORD *)(v19 + 24) )
            {
              v19 = *(_QWORD *)(i & 0xFFFFFFFFFFFFFFF0LL);
              v20 = *(unsigned __int8 *)(v19 + 16);
              if ( (unsigned int)(v20 - 35) > 1 )
              {
                if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v19 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
                   - 35 > 1 )
                  return;
                v61 = sub_F63050(v19, a2, v20, a4);
                v19 = v61;
                if ( !v61 )
                  return;
                v20 = *(unsigned __int8 *)(v61 + 16);
              }
              if ( (_BYTE)v20 == 36 )
                break;
            }
            v21 = sub_F62610(v19, a2, v20, a4, a5, a6);
            if ( v21 )
            {
              v25 = v11;
              *(_QWORD *)v81 = 0;
              v26 = sub_BAE3D0(v21, v11, (__int64 *)v81, v22, v23, v24);
              v33 = sub_BAB630(*(__int64 *)v81, v25, v27, v28, v29, v30);
              if ( !v33 )
              {
                v36 = *(_QWORD *)v81;
                v37 = *(_QWORD *)(*(_QWORD *)v81 + 120LL);
                if ( !v37 )
                {
                  sub_A794E0(
                    (__int64 *)(*(_QWORD *)(*(_QWORD *)v81 + 96LL) + 88LL),
                    *(_QWORD *)(*(_QWORD *)v81 + 96LL),
                    v31,
                    v32,
                    v34,
                    v35);
                  v37 = *(_QWORD *)(v36 + 120);
                }
                v38 = (__int64 *)(v37 & 0xFFFFFFFFFFFFFFF8LL);
                if ( v38 )
                {
                  v39 = *v38;
                  if ( v39 && (v40 = sub_B8E970(v39 + 48), (v41 = v40) != 0) )
                  {
                    if ( (*(_BYTE *)(v40 + 28) & 0x7F) == 0x32 )
                    {
                      v33 = v40;
                    }
                    else
                    {
                      while ( 1 )
                      {
                        v42 = *(_QWORD *)(v41 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                        v41 = v42;
                        if ( !v42 )
                          break;
                        if ( (*(_BYTE *)(v42 + 28) & 0x7F) == 0x32 )
                        {
                          v33 = v42;
                          break;
                        }
                      }
                    }
                  }
                  else
                  {
                    v33 = 0;
                  }
                }
                if ( v26 == v33 )
                {
                  v43 = a1 + 1;
                  v44 = *(_QWORD *)(a1[31] + 17504);
                  if ( a4 )
                  {
                    v45 = j__strlen("object_setClass");
                    v46 = sub_6F3470(v44, "object_setClass", v45);
                    if ( sub_1A5B7C0(a1, a1[24], v46, 0, 0, 0) )
                    {
                      v47 = sub_EEC140(a4);
                      v48 = v47;
                      v80 = sub_15F0EF0((__int64)a1, v47, 0, a7, a8);
                      v52 = sub_C00A40(a2, v48, v49, v50, v51);
                      v53 = (__int64)(a1 + 1);
                      sub_168B9F0((__int64)v93, a1 + 1, v52, 0x1C12u, 0);
                      v54 = j__strlen("object_setClass(");
                      if ( (*(_BYTE *)(a2 + 40) & 2) != 0 )
                        v55 = *(_DWORD *)(a2 + 32);
                      else
                        v55 = sub_EEB7E0(*(_QWORD *)(a2 + 24), v53, *(double *)a7.m128i_i64);
                      sub_9EC740((__int64)&v83, v55, "object_setClass(", v54, 0);
                      v79 = sub_1589170((__int64)v93, &v83);
                      v56 = j__strlen(",");
                      v57 = *(_DWORD *)(a2 + 36);
                      v82 = 1;
                      *(_QWORD *)&v81[3] = __PAIR64__(v77, v57);
                      sub_18BE5B0((__int64)v87, __SPAIR64__(v77, v57), 1, ",", v56);
                      v78 = sub_1589170(v79, v87);
                      v58 = j__strlen(")");
                      sub_9EC740((__int64)v90, v80, ")", v58, 0);
                      sub_1589170(v78, v90);
                      if ( v91 != v92 )
                        operator delete(v91);
                      if ( v88 != v89 )
                        operator delete(v88);
                      v59 = v85;
                      if ( v85 == &v86 )
                        goto LABEL_37;
                      goto LABEL_36;
                    }
                    v75 = *(_DWORD *)(a2 + 32);
                    v76 = 7186;
                  }
                  else
                  {
                    v62 = j__strlen("object_getClass");
                    v63 = sub_6F3470(v44, "object_getClass", v62);
                    v64 = a1[24];
                    if ( sub_1A5B7C0(a1, v64, v63, 0, 0, 0) )
                    {
                      v68 = sub_C00A40(a2, v64, v65, v66, v67);
                      sub_168B9F0((__int64)v93, a1 + 1, v68, 0x1C13u, 0);
                      v69 = j__strlen("object_getClass(");
                      if ( (*(_BYTE *)(a2 + 40) & 2) != 0 )
                        v70 = *(_DWORD *)(a2 + 32);
                      else
                        v70 = sub_EEB7E0(*(_QWORD *)(a2 + 24), (__int64)(a1 + 1), *(double *)a7.m128i_i64);
                      sub_9EC740((__int64)v87, v70, "object_getClass(", v69, 0);
                      v71 = sub_1589170((__int64)v93, v87);
                      v72 = j__strlen(")");
                      v73 = *(_DWORD *)(a2 + 36);
                      v84 = 1;
                      v74 = v72;
                      LODWORD(v72) = *(_DWORD *)(a2 + 32);
                      v83 = __PAIR64__(v72, v73);
                      sub_18BE5B0((__int64)v90, __SPAIR64__(v72, v73), 1, ")", v74);
                      sub_1589170(v71, v90);
                      if ( v91 != v92 )
                        operator delete(v91);
                      v59 = v88;
                      if ( v88 == v89 )
                        goto LABEL_37;
LABEL_36:
                      operator delete(v59);
LABEL_37:
                      sub_15F7200(v93);
                      sub_168B9F0((__int64)v93, v43, *(_DWORD *)(v33 + 24), 0x17A9u, 0);
                      sub_15F7200(v93);
                      return;
                    }
                    v75 = *(_DWORD *)(a2 + 32);
                    v76 = 7187;
                  }
                  sub_168B9F0((__int64)v93, a1 + 1, v75, v76, 0);
                  goto LABEL_37;
                }
              }
            }
          }
        }
      }
    }
  }
}
