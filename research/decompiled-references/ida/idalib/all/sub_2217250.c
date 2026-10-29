void __fastcall sub_2217250(__int64 a1, __int64 *a2, size_t a3)
{
  __int64 *v3; // r13
  __int64 v6; // rax
  int v7; // edx
  int v8; // eax
  _QWORD *v9; // rsi
  unsigned __int64 v10; // rax
  __int64 *v11; // rdx
  __int64 *v12; // r12
  __int64 v13; // r13
  unsigned int v14; // eax
  unsigned int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 *v19; // r15
  __int64 **v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  _QWORD *v26; // rcx
  unsigned int v27; // eax
  __int64 v28; // r15
  unsigned int v29; // eax
  int v30; // eax
  __int64 *v31; // r15
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  _QWORD *v36; // r15
  __int64 *v37; // rax
  __int64 v38; // r12
  __int64 v39; // rax
  __int64 v40; // r12
  __int64 v41; // r15
  unsigned int v42; // eax
  char v43; // dl
  unsigned int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 *v49; // rax
  _QWORD *v50; // r14
  unsigned __int64 v51; // rax
  __int64 *v52; // rdx
  __int64 *v53; // r12
  __int64 *v54; // r15
  __int64 v55; // rbp
  unsigned int v56; // eax
  char v57; // dl
  unsigned int v58; // eax
  int v59; // eax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 *v64; // rax
  __int64 v65; // rax
  __int64 v66; // r14
  unsigned int v67; // eax
  char v68; // dl
  unsigned int v69; // eax
  __int64 v70; // [rsp+0h] [rbp-A8h]
  __int64 *v71; // [rsp+0h] [rbp-A8h]
  __int64 *v72; // [rsp+8h] [rbp-A0h]
  __int64 v73; // [rsp+8h] [rbp-A0h]
  __int64 v74; // [rsp+8h] [rbp-A0h]
  __int64 *v75; // [rsp+8h] [rbp-A0h]
  _QWORD *v76; // [rsp+8h] [rbp-A0h]
  __int64 v77; // [rsp+8h] [rbp-A0h]
  __int64 *v78; // [rsp+8h] [rbp-A0h]
  __int64 v79; // [rsp+10h] [rbp-98h]
  __int64 v80; // [rsp+10h] [rbp-98h]
  unsigned int v81; // [rsp+18h] [rbp-90h]
  __int64 v82; // [rsp+18h] [rbp-90h]
  size_t v83; // [rsp+18h] [rbp-90h]
  __int64 *src; // [rsp+20h] [rbp-88h]
  __int64 *srca; // [rsp+20h] [rbp-88h]
  unsigned __int64 v86; // [rsp+28h] [rbp-80h]
  _QWORD *v87; // [rsp+30h] [rbp-78h]
  _QWORD *v88; // [rsp+38h] [rbp-70h]
  __int64 *v89; // [rsp+48h] [rbp-60h] BYREF
  __int64 *v90; // [rsp+50h] [rbp-58h] BYREF
  size_t v91; // [rsp+58h] [rbp-50h]
  __int64 v92[9]; // [rsp+60h] [rbp-48h] BYREF

  v3 = a2;
  if ( (*(_BYTE *)(a1 + 11) & 0x40) == 0 )
    goto LABEL_2;
  v6 = sub_22103C0();
  v7 = *(_DWORD *)(a1 + 104);
  v87 = (_QWORD *)v6;
  v8 = *(_DWORD *)(a1 + 100);
  if ( v8 == v7 )
  {
    v39 = sub_22111F0((__int64)&qword_2D0A780);
    v90 = a2;
    v40 = v39 + 128;
    v41 = v39;
    v91 = a3;
    v92[0] = a1;
    v42 = sub_2244B30(a2, a3);
    v20 = (__int64 **)v40;
    sub_2216B80(v40, a2, a3, v42, v92);
    if ( v43 )
    {
      v73 = *(_QWORD *)(a1 + 16);
      v70 = *(_QWORD *)(a1 + 24);
      v44 = sub_2244B30(v73, v70);
      v71 = sub_2216B20(v40, v73, v70, v44);
      sub_2216AE0(&v90, (__int64 *)(*(_QWORD *)(v41 + 128) + 8LL * *(unsigned int *)(v41 + 136)), 1);
      v49 = v71;
      if ( v90 == v71 )
        goto LABEL_2;
      goto LABEL_35;
    }
LABEL_12:
    v21 = sub_227D6D0(v20, a2);
    v22 = sub_227BF10(v21, *v87, v87[1]);
    v23 = sub_995540(v22, ": CommandLine Error: Option '");
    v24 = sub_9954E0(v23, *(const void **)(a1 + 16), *(_QWORD *)(a1 + 24));
    sub_995540(v24, "' registered more than once!\n");
    sub_2221C70("inconsistency in registered CommandLine options", 1);
  }
  v9 = *(_QWORD **)(a1 + 88);
  if ( v8 - v7 != 1 )
  {
LABEL_7:
    v10 = sub_2214680((__int64 *)(a1 + 88), v9);
    v72 = v11;
    v12 = (__int64 *)v10;
    v86 = sub_2214700(a1 + 88);
    if ( v12 == (__int64 *)v86 )
      goto LABEL_2;
    src = v3;
    while ( 1 )
    {
      v13 = *v12;
      v91 = a3;
      v90 = src;
      v14 = sub_2244B30(src, a3);
      v15 = sub_2244CB0(v13 + 128, src, a3, v14);
      v81 = v15;
      v19 = (__int64 *)(*(_QWORD *)(v13 + 128) + 8LL * v15);
      if ( *v19 )
      {
        if ( *v19 != -8 )
        {
          v20 = &v89;
          a2 = (__int64 *)(*(_QWORD *)(v13 + 128) + 8LL * v15);
          sub_2216AE0(&v89, v19, 0);
          goto LABEL_12;
        }
        --*(_DWORD *)(v13 + 144);
      }
      v25 = sub_22300B0(a3 + 17, 8, v15, v16, v17, v18);
      v26 = (_QWORD *)v25;
      if ( a3 )
      {
        v88 = (_QWORD *)v25;
        memcpy((void *)(v25 + 16), src, a3);
        v26 = v88;
      }
      *((_BYTE *)v26 + a3 + 16) = 0;
      *v26 = a3;
      v26[1] = a1;
      *v19 = (__int64)v26;
      ++*(_DWORD *)(v13 + 140);
      v27 = sub_22450D0(v13 + 128, v81);
      sub_2216AE0(&v89, (__int64 *)(*(_QWORD *)(v13 + 128) + 8LL * v27), 0);
      v28 = *(_QWORD *)(a1 + 24);
      v82 = *(_QWORD *)(a1 + 16);
      v29 = sub_2244B30(v82, v28);
      v30 = sub_2244E60(v13 + 128, v82, v28, v29);
      if ( v30 == -1 )
        sub_2216AE0(&v90, (__int64 *)(*(_QWORD *)(v13 + 128) + 8LL * *(unsigned int *)(v13 + 136)), 1);
      else
        sub_2216AE0(&v90, (__int64 *)(*(_QWORD *)(v13 + 128) + 8LL * v30), 1);
      v31 = v90;
      sub_2216AE0(&v90, (__int64 *)(*(_QWORD *)(v13 + 128) + 8LL * *(unsigned int *)(v13 + 136)), 1);
      if ( v31 != v90 )
      {
        v36 = (_QWORD *)*v31;
        sub_2244F90(v13 + 128, v36, v32, v33, v34, v35);
        operator delete(v36, *v36 + 17LL, 8);
      }
      if ( v72 == v12 + 1 )
      {
        v12 = v72;
        if ( v72 == (__int64 *)v86 )
          goto LABEL_26;
      }
      else
      {
        if ( (unsigned __int64)v12[1] < 0xFFFFFFFFFFFFFFFELL )
        {
          ++v12;
        }
        else
        {
          v37 = v12 + 2;
          do
          {
            v12 = v37;
            if ( v72 == v37 )
              break;
            ++v37;
          }
          while ( (unsigned __int64)*v12 >= 0xFFFFFFFFFFFFFFFELL );
        }
        if ( v12 == (__int64 *)v86 )
        {
LABEL_26:
          v3 = src;
          goto LABEL_2;
        }
      }
    }
  }
  v38 = *(_QWORD *)sub_2214680((__int64 *)(a1 + 88), v9);
  if ( v38 != sub_22102D0() )
  {
    v9 = *(_QWORD **)(a1 + 88);
    goto LABEL_7;
  }
  v51 = sub_2214680(v87 + 34, (_QWORD *)v87[34]);
  v53 = v52;
  v54 = (__int64 *)v51;
  srca = (__int64 *)sub_2214700((__int64)(v87 + 34));
  if ( v54 != srca )
  {
    v83 = a3;
    do
    {
      v55 = *v54;
      v90 = v3;
      v92[0] = a1;
      v91 = v83;
      v56 = sub_2244B30(v3, v83);
      a2 = v90;
      v20 = (__int64 **)(v55 + 128);
      sub_2216B80(v55 + 128, v90, v91, v56, v92);
      if ( !v57 )
        goto LABEL_12;
      v79 = *(_QWORD *)(a1 + 16);
      v74 = *(_QWORD *)(a1 + 24);
      v58 = sub_2244B30(v79, v74);
      v59 = sub_2244E60(v55 + 128, v79, v74, v58);
      if ( v59 == -1 )
        sub_2216AE0(&v90, (__int64 *)(*(_QWORD *)(v55 + 128) + 8LL * *(unsigned int *)(v55 + 136)), 1);
      else
        sub_2216AE0(&v90, (__int64 *)(*(_QWORD *)(v55 + 128) + 8LL * v59), 1);
      v75 = v90;
      sub_2216AE0(&v90, (__int64 *)(*(_QWORD *)(v55 + 128) + 8LL * *(unsigned int *)(v55 + 136)), 1);
      if ( v75 != v90 )
      {
        v76 = (_QWORD *)*v75;
        sub_2244F90(v55 + 128, v76, v60, v61, v62, v63);
        operator delete(v76, *v76 + 17LL, 8);
      }
      if ( v53 == v54 + 1 )
      {
        v54 = v53;
      }
      else if ( (unsigned __int64)v54[1] < 0xFFFFFFFFFFFFFFFELL )
      {
        ++v54;
      }
      else
      {
        v64 = v54 + 2;
        do
        {
          v54 = v64;
          if ( v53 == v64 )
            break;
          ++v64;
        }
        while ( (unsigned __int64)*v54 >= 0xFFFFFFFFFFFFFFFELL );
      }
    }
    while ( v54 != srca );
    a3 = v83;
  }
  v65 = sub_22102D0();
  v90 = v3;
  v40 = v65 + 128;
  v66 = v65;
  v91 = a3;
  v92[0] = a1;
  v67 = sub_2244B30(v3, a3);
  a2 = v90;
  v20 = (__int64 **)v40;
  sub_2216B80(v40, v90, v91, v67, v92);
  if ( !v68 )
    goto LABEL_12;
  v80 = *(_QWORD *)(a1 + 16);
  v77 = *(_QWORD *)(a1 + 24);
  v69 = sub_2244B30(v80, v77);
  v78 = sub_2216B20(v40, v80, v77, v69);
  sub_2216AE0(&v90, (__int64 *)(*(_QWORD *)(v66 + 128) + 8LL * *(unsigned int *)(v66 + 136)), 1);
  v49 = v78;
  if ( v90 != v78 )
  {
LABEL_35:
    v50 = (_QWORD *)*v49;
    sub_2244F90(v40, *v49, v45, v46, v47, v48);
    operator delete(v50, *v50 + 17LL, 8);
  }
LABEL_2:
  *(_QWORD *)(a1 + 16) = v3;
  *(_QWORD *)(a1 + 24) = a3;
  if ( a3 == 1 )
    *(_BYTE *)(a1 + 11) |= 0x10u;
}
