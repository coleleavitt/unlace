void __fastcall sub_189D860(
        __int64 *a1,
        unsigned __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        double a8,
        int *a9,
        int a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18)
{
  __int64 v19; // r13
  unsigned __int64 v20; // r14
  __int64 v21; // rbp
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // r14
  __int64 v25; // rbp
  __int64 v26; // r12
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdi
  unsigned __int8 v30; // cl
  unsigned __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 v37; // rbp
  int v38; // r15d
  __int64 v39; // r14
  unsigned __int8 v40; // r9
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rsi
  __int64 v44; // rax
  unsigned __int8 v45; // dl
  __int64 v46; // r15
  int v47; // r8d
  int v48; // r9d
  __int64 v49; // rax
  __int64 v50; // rax
  unsigned __int64 v51; // rdx
  unsigned int v52; // ecx
  __int64 v53; // rax
  __int64 v54; // r15
  int v55; // r8d
  int v56; // r9d
  __int64 v57; // rax
  __int64 v58; // r15
  int v59; // r8d
  int v60; // r9d
  __int64 v61; // rax
  void **p_ptr; // [rsp+0h] [rbp-808h]
  int v63[2]; // [rsp+0h] [rbp-808h]
  __int64 v64; // [rsp+8h] [rbp-800h]
  unsigned __int8 **v65; // [rsp+10h] [rbp-7F8h]
  int *v66; // [rsp+18h] [rbp-7F0h]
  int *v67; // [rsp+20h] [rbp-7E8h]
  int v68[2]; // [rsp+28h] [rbp-7E0h]
  _QWORD *v69; // [rsp+28h] [rbp-7E0h]
  int v70; // [rsp+30h] [rbp-7D8h]
  int v71; // [rsp+30h] [rbp-7D8h]
  int v72[2]; // [rsp+30h] [rbp-7D8h]
  int v73; // [rsp+30h] [rbp-7D8h]
  int v74[2]; // [rsp+30h] [rbp-7D8h]
  int v75[2]; // [rsp+30h] [rbp-7D8h]
  int v76; // [rsp+38h] [rbp-7D0h]
  int v77[2]; // [rsp+40h] [rbp-7C8h] BYREF
  int v78[2]; // [rsp+48h] [rbp-7C0h]
  int v79[2]; // [rsp+50h] [rbp-7B8h]
  int v80; // [rsp+58h] [rbp-7B0h] BYREF
  int v81; // [rsp+5Ch] [rbp-7ACh] BYREF
  int v82[2]; // [rsp+60h] [rbp-7A8h] BYREF
  int v83[2]; // [rsp+68h] [rbp-7A0h] BYREF
  int v84; // [rsp+70h] [rbp-798h]
  int v85; // [rsp+78h] [rbp-790h]
  _DWORD v86[3]; // [rsp+7Ch] [rbp-78Ch] BYREF
  int v87[2]; // [rsp+88h] [rbp-780h]
  int v88[2]; // [rsp+90h] [rbp-778h]
  int v89; // [rsp+98h] [rbp-770h]
  void *ptr; // [rsp+A0h] [rbp-768h] BYREF
  int v91[2]; // [rsp+A8h] [rbp-760h]
  int v92; // [rsp+B0h] [rbp-758h] BYREF
  int v93; // [rsp+B8h] [rbp-750h]
  int v94; // [rsp+C0h] [rbp-748h]
  int v95; // [rsp+C8h] [rbp-740h]
  int v96[2]; // [rsp+D0h] [rbp-738h] BYREF
  int v97[2]; // [rsp+D8h] [rbp-730h]
  int v98[4]; // [rsp+E0h] [rbp-728h]
  int v99[2]; // [rsp+F0h] [rbp-718h]
  int v100; // [rsp+F8h] [rbp-710h]
  int v101[2]; // [rsp+100h] [rbp-708h] BYREF
  int v102[2]; // [rsp+108h] [rbp-700h]
  int v103[2]; // [rsp+110h] [rbp-6F8h]
  int v104[2]; // [rsp+118h] [rbp-6F0h]
  int v105[2]; // [rsp+120h] [rbp-6E8h]
  int v106[2]; // [rsp+128h] [rbp-6E0h]
  char v107[8]; // [rsp+130h] [rbp-6D8h]
  int v108[2]; // [rsp+138h] [rbp-6D0h]
  int v109[2]; // [rsp+140h] [rbp-6C8h]
  int v110[2]; // [rsp+148h] [rbp-6C0h]
  int v111[2]; // [rsp+150h] [rbp-6B8h] BYREF
  int v112; // [rsp+158h] [rbp-6B0h]
  char v113; // [rsp+160h] [rbp-6A8h]
  int v114; // [rsp+168h] [rbp-6A0h]
  int v115; // [rsp+170h] [rbp-698h]
  int v116; // [rsp+178h] [rbp-690h]
  int v117; // [rsp+180h] [rbp-688h]
  int v118; // [rsp+188h] [rbp-680h]
  int v119; // [rsp+190h] [rbp-678h]
  int v120; // [rsp+198h] [rbp-670h]
  int v121; // [rsp+1A0h] [rbp-668h]
  int v122; // [rsp+1A8h] [rbp-660h]
  int v123[2]; // [rsp+1B0h] [rbp-658h] BYREF
  int v124[2]; // [rsp+1B8h] [rbp-650h]
  __int64 v125; // [rsp+1C0h] [rbp-648h]
  int v126[2]; // [rsp+1C8h] [rbp-640h]
  char v127[8]; // [rsp+1D0h] [rbp-638h]
  int **v128; // [rsp+1D8h] [rbp-630h]
  int *v129; // [rsp+1E0h] [rbp-628h]
  int *v130; // [rsp+1E8h] [rbp-620h]
  __int64 v131; // [rsp+1F0h] [rbp-618h]
  int *v132; // [rsp+1F8h] [rbp-610h]
  __int64 *v133; // [rsp+200h] [rbp-608h]
  __int64 v134; // [rsp+208h] [rbp-600h]
  __int64 v135; // [rsp+210h] [rbp-5F8h]
  unsigned __int64 v136; // [rsp+220h] [rbp-5E8h] BYREF
  unsigned __int64 v137; // [rsp+228h] [rbp-5E0h]
  int v138; // [rsp+230h] [rbp-5D8h] BYREF
  int v139[342]; // [rsp+2B0h] [rbp-558h] BYREF

  *(_QWORD *)v83 = a2;
  v19 = a16;
  *(_QWORD *)v82 = a3;
  v81 = a4;
  *(_QWORD *)v77 = a5;
  *(_QWORD *)v78 = a6;
  LOBYTE(v80) = a18;
  v86[0] = 0;
  v64 = sub_168B6C0((__int64)a1);
  *(_QWORD *)v124 = v82;
  v125 = (__int64)v86;
  *(_QWORD *)v127 = &v80;
  v128 = &a9;
  v129 = v83;
  v132 = &v81;
  v133 = &a11;
  *(_QWORD *)v123 = a1;
  v134 = a15;
  *(_QWORD *)v126 = v19;
  v135 = a17;
  v130 = v77;
  v131 = v64;
  if ( v78[0] )
  {
    v20 = 0;
    v21 = 4LL * (unsigned int)(v78[0] - 1) + 4;
    do
    {
      v22 = sub_1A86640(a1, *(_QWORD *)(*(_QWORD *)v77 + 2 * v20), (unsigned int)a9[v20 / 4], 0);
      v23 = *(unsigned int *)(v19 + 8);
      a2 = *(unsigned int *)(v19 + 12);
      if ( v23 + 1 > a2 )
      {
        a2 = v19 + 16;
        *(_QWORD *)v63 = v22;
        sub_2237220(v19, v19 + 16, v23 + 1, 8);
        v23 = *(unsigned int *)(v19 + 8);
        v22 = *(_QWORD *)v63;
      }
      *(_QWORD *)(*(_QWORD *)v19 + 8 * v23) = v22;
      ++*(_DWORD *)(v19 + 8);
      if ( v22 )
        ++v86[0];
      v20 += 4LL;
    }
    while ( v21 != v20 );
    if ( v86[0] != *(_QWORD *)v78 )
    {
      p_ptr = &ptr;
      ptr = &v92;
      *(_QWORD *)v91 = 0x400000000LL;
      if ( v78[0] )
      {
        v24 = 0;
        v25 = 0;
        v26 = 4LL * (unsigned int)(v78[0] - 1) + 4;
        while ( 1 )
        {
          a2 = *(_QWORD *)v83;
          v28 = sub_1A5B7C0(*a1, *(_QWORD *)v83, *(_QWORD *)(*(_QWORD *)v77 + 2 * v24), (unsigned int)a9[v24 / 4], 0, 0);
          if ( !v28 )
          {
            v50 = (unsigned int)v91[0];
            v51 = (unsigned int)v91[0] + 1LL;
            if ( v51 > (unsigned int)v91[1] )
            {
              a2 = (unsigned __int64)&v92;
              sub_2237220(&ptr, &v92, v51, 8);
              v50 = (unsigned int)v91[0];
            }
            *((_QWORD *)ptr + v50) = 0;
            ++v91[0];
            goto LABEL_13;
          }
          v29 = (unsigned int)v91[0];
          v30 = *(_BYTE *)(v28 + 28) & 0x7F;
          v31 = (unsigned int)v91[0] + 1LL;
          a2 = (unsigned int)v30 - 58;
          if ( (unsigned int)a2 <= 9 )
          {
            v27 = v28 & 0xFFFFFFFFFFFFFFFBLL;
            if ( v31 > (unsigned int)v91[1] )
              goto LABEL_18;
          }
          else
          {
            if ( v30 != 20 )
            {
              if ( v31 > (unsigned int)v91[1] )
              {
                a2 = (unsigned __int64)&v92;
                sub_2237220(&ptr, &v92, v31, 8);
                v29 = (unsigned int)v91[0];
              }
              *((_QWORD *)ptr + v29) = 0;
              ++v91[0];
              goto LABEL_13;
            }
            v27 = v28 | 4;
            if ( v31 > (unsigned int)v91[1] )
            {
LABEL_18:
              a2 = (unsigned __int64)&v92;
              *(_QWORD *)v68 = v27;
              sub_2237220(&ptr, &v92, v31, 8);
              v29 = (unsigned int)v91[0];
              v27 = *(_QWORD *)v68;
            }
          }
          v25 = (unsigned int)(v25 + 1);
          *((_QWORD *)ptr + v29) = v27;
          ++v91[0];
LABEL_13:
          v24 += 4LL;
          if ( v26 == v24 )
            goto LABEL_21;
        }
      }
      v25 = 0;
      goto LABEL_21;
    }
LABEL_64:
    sub_189D140((__int64 **)v123, a7, a8);
    return;
  }
  if ( !*(_QWORD *)v78 )
    goto LABEL_64;
  v25 = 0;
  p_ptr = &ptr;
  ptr = &v92;
  *(_QWORD *)v91 = 0x400000000LL;
LABEL_21:
  v67 = v139;
  sub_15DCD40((__int64)v139);
  *(_QWORD *)&v86[1] = v139;
  *(_QWORD *)v88 = a1;
  *(_QWORD *)v87 = v64;
  *(_QWORD *)v103 = &v86[1];
  *(_QWORD *)v101 = v19;
  *(_QWORD *)v104 = &ptr;
  *(_QWORD *)v105 = &a9;
  *(_QWORD *)v102 = v77;
  *(_QWORD *)v106 = a13;
  *(_QWORD *)v107 = a12;
  *(_QWORD *)v108 = &v81;
  *(_QWORD *)v109 = a14;
  *(_QWORD *)v110 = &a11;
  v36 = *(_QWORD *)v78;
  if ( *(_QWORD *)v78 == v25 )
  {
LABEL_63:
    sub_189A000((__int64)v101, *(double *)a7.m128i_i64, a8, a2, v32, v33, v34, v35);
    goto LABEL_30;
  }
  if ( !v78[0] )
  {
LABEL_62:
    v32 = v86[0];
    if ( v86[0] == v36 )
    {
      sub_189D140((__int64 **)v123, a7, a8);
      goto LABEL_30;
    }
    goto LABEL_63;
  }
  v37 = 0;
  v66 = &v138;
  v65 = (unsigned __int8 **)&v136;
  v38 = 15;
  v39 = (unsigned int)(v78[0] - 1);
  while ( 1 )
  {
    if ( *(_QWORD *)(*(_QWORD *)v19 + 8 * v37) )
    {
      if ( v38 == 15 )
      {
        if ( (*((_QWORD *)ptr + v37) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          v38 = 11;
      }
      else if ( v38 != 11 && (*((_QWORD *)ptr + v37) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      {
        v40 = 1;
LABEL_29:
        sub_189D740(a1, **(_QWORD **)v77, *a9, *(_QWORD *)(*(_QWORD *)v77 + 8 * v37), a9[v37], v40);
        v41 = a13;
        *(_DWORD *)(v19 + 8) = 0;
        *(_DWORD *)(v41 + 8) = 0;
        goto LABEL_30;
      }
      goto LABEL_41;
    }
    if ( (*((_QWORD *)ptr + v37) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      break;
    if ( v38 == 15 )
    {
      v38 = 0;
    }
    else if ( v38 )
    {
      v40 = 0;
      goto LABEL_29;
    }
LABEL_41:
    if ( v39 == v37 )
    {
      v36 = *(_QWORD *)v78;
      goto LABEL_62;
    }
    ++v37;
  }
  a7 = 0;
  *(_QWORD *)v97 = 0x101010101LL;
  *(_QWORD *)v96 = &off_2BC6D88;
  *(_OWORD *)v98 = 0;
  *(_QWORD *)v99 = v64;
  v42 = *a1;
  *(_QWORD *)v79 = 4 * v37;
  v70 = v42;
  v76 = v83[0];
  v43 = *(_QWORD *)(*(_QWORD *)v77 + 8 * v37);
  v100 = v38;
  LODWORD(v42) = a9[v37];
  v136 = v43;
  LODWORD(v137) = v42;
  sub_B85890(v66, v43);
  sub_1A6BD60((unsigned int)v111, v70, (_DWORD)v65, v38, v76, 0, (__int64)v96, 1, 0, 0, 0, 1);
  if ( *(_QWORD *)v111 )
  {
    v44 = sub_183AA90((__int64)v111);
    if ( v44 )
    {
      v45 = *(_BYTE *)(v44 + 28) & 0x7F;
      if ( v45 == 19 )
      {
        v46 = *a1;
        v71 = v44;
        sub_168B9B0((__int64)v65, (__int64)a1, 5347);
        sub_AE9DF0(v65, *(_QWORD *)(*(_QWORD *)v77 + 8 * v37), 5u);
        sub_1A60AF0(
          v46,
          (int)v111,
          (int)v65,
          1,
          v47,
          v48,
          (int)p_ptr,
          v64,
          (int)v65,
          (int)v66,
          (int)v67,
          (int)v111,
          v71,
          v76,
          v77[0],
          v78[0],
          v79[0],
          v80,
          v82[0],
          v83[0],
          v84,
          v85,
          v86[1],
          v87[0],
          v88[0],
          v89,
          (int)ptr,
          v91[0],
          v92,
          v93,
          v94,
          v95,
          v96[0],
          v97[0],
          v98[0],
          v98[2],
          v99[0],
          v100,
          v101[0],
          v102[0],
          v103[0],
          v104[0],
          v105[0],
          v106[0],
          v107[0],
          v108[0],
          v109[0],
          v110[0],
          *(void **)v111,
          v112,
          v113,
          v114,
          v115,
          v116,
          v117,
          v118,
          v119,
          v120,
          v121,
          v122,
          v123[0],
          v124[0],
          v125,
          v126[0],
          v127[0]);
        a2 = v136;
        v49 = *(_QWORD *)v72;
        if ( v136 && v137 )
        {
          sub_1580C40(v137, v136);
          v49 = *(_QWORD *)v72;
        }
        v38 = 11;
        *(_QWORD *)(*(_QWORD *)v19 + 8 * v37) = v49;
        ++v86[0];
      }
      else
      {
        v73 = v44;
        if ( (unsigned int)v45 - 58 > 9 )
        {
          if ( v45 != 20 )
            goto LABEL_57;
          v58 = *a1;
          sub_168B9B0((__int64)v65, (__int64)a1, 5375);
          sub_AE9DF0(v65, *(_QWORD *)(*(_QWORD *)v77 + 8 * v37), 5u);
          sub_AE9DF0(v65, 1, 2u);
          sub_1A60AF0(
            v58,
            (int)v111,
            (int)v65,
            1,
            v59,
            v60,
            (int)p_ptr,
            v64,
            (int)v65,
            (int)v66,
            (int)v67,
            (int)v111,
            v73,
            v76,
            v77[0],
            v78[0],
            v79[0],
            v80,
            v82[0],
            v83[0],
            v84,
            v85,
            v86[1],
            v87[0],
            v88[0],
            v89,
            (int)ptr,
            v91[0],
            v92,
            v93,
            v94,
            v95,
            v96[0],
            v97[0],
            v98[0],
            v98[2],
            v99[0],
            v100,
            v101[0],
            v102[0],
            v103[0],
            v104[0],
            v105[0],
            v106[0],
            v107[0],
            v108[0],
            v109[0],
            v110[0],
            *(void **)v111,
            v112,
            v113,
            v114,
            v115,
            v116,
            v117,
            v118,
            v119,
            v120,
            v121,
            v122,
            v123[0],
            v124[0],
            v125,
            v126[0],
            v127[0]);
          a2 = v136;
          v61 = *(_QWORD *)v75;
          if ( v136 && v137 )
          {
            sub_1580C40(v137, v136);
            v61 = *(_QWORD *)v75;
          }
          v38 = 0;
          *((_QWORD *)ptr + v37) = v61 | 4;
        }
        else
        {
          v54 = *a1;
          sub_168B9B0((__int64)v65, (__int64)a1, 5377);
          sub_AE9DF0(v65, *(_QWORD *)(*(_QWORD *)v77 + 8 * v37), 5u);
          sub_1A60AF0(
            v54,
            (int)v111,
            (int)v65,
            1,
            v55,
            v56,
            (int)p_ptr,
            v64,
            (int)v65,
            (int)v66,
            (int)v67,
            (int)v111,
            v73,
            v76,
            v77[0],
            v78[0],
            v79[0],
            v80,
            v82[0],
            v83[0],
            v84,
            v85,
            v86[1],
            v87[0],
            v88[0],
            v89,
            (int)ptr,
            v91[0],
            v92,
            v93,
            v94,
            v95,
            v96[0],
            v97[0],
            v98[0],
            v98[2],
            v99[0],
            v100,
            v101[0],
            v102[0],
            v103[0],
            v104[0],
            v105[0],
            v106[0],
            v107[0],
            v108[0],
            v109[0],
            v110[0],
            *(void **)v111,
            v112,
            v113,
            v114,
            v115,
            v116,
            v117,
            v118,
            v119,
            v120,
            v121,
            v122,
            v123[0],
            v124[0],
            v125,
            v126[0],
            v127[0]);
          a2 = v136;
          v57 = *(_QWORD *)v74;
          if ( v136 && v137 )
          {
            sub_1580C40(v137, v136);
            v57 = *(_QWORD *)v74;
          }
          v38 = 0;
          *((_QWORD *)ptr + v37) = v57 & 0xFFFFFFFFFFFFFFFBLL;
        }
      }
      sub_17A1D90(v69);
      goto LABEL_41;
    }
  }
LABEL_57:
  v52 = 4395;
  if ( v38 != 15 )
  {
    v52 = 5346;
    if ( v38 != 11 )
      v52 = 5376;
  }
  sub_168B9F0((__int64)v65, a1, *(int *)((char *)a9 + *(_QWORD *)v79), v52, 0);
  sub_169D880((__int64)v65, (__int64 *)(8 * v37 + *(_QWORD *)v77));
  sub_15F7200(v65);
  v53 = a13;
  *(_DWORD *)(v19 + 8) = 0;
  *(_DWORD *)(v53 + 8) = 0;
  sub_17A1D90(v111);
LABEL_30:
  sub_15D7C30((__int64)v67);
  if ( ptr != p_ptr + 2 )
    free(ptr);
}
