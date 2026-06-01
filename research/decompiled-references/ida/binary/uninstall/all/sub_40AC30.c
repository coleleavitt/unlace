__int64 __fastcall sub_40AC30(__int64 a1, const char *a2, int a3, int a4, int a5, int *a6, __int64 a7)
{
  __int64 v11; // r15
  __int64 v12; // rax
  int v13; // eax
  _DWORD *v14; // rax
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rax
  int v18; // r8d
  _BYTE *v19; // r14
  __int64 v20; // r12
  int v21; // edx
  __int64 v22; // rcx
  unsigned int v23; // r8d
  unsigned int v24; // r13d
  __int64 v25; // rax
  unsigned int i; // ebx
  int *v27; // rdi
  int v28; // eax
  bool v29; // zf
  _BYTE *v30; // rsi
  int v31; // edx
  __int64 v32; // rbx
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned int v37; // ebx
  int v38; // eax
  int v39; // edx
  signed int v40; // r13d
  __int64 v41; // r14
  signed int v42; // r12d
  __int64 v43; // rax
  int v44; // edx
  int v45; // ecx
  int v46; // r8d
  int v47; // r9d
  unsigned int v48; // ecx
  unsigned int v49; // r12d
  unsigned int v50; // ebx
  _DWORD *v51; // rax
  int *v52; // rbx
  __int64 v53; // rdi
  __int64 v54; // rsi
  __int64 v55; // rcx
  int v56; // edx
  int v57; // eax
  int v58; // eax
  unsigned int v59; // ebx
  int *v60; // rdi
  int v61; // eax
  int *v62; // rdi
  int v63; // eax
  int v64; // esi
  __int64 v65; // rsi
  __int64 v66; // rdx
  int v67; // ecx
  int v68; // r8d
  int v69; // r9d
  int *v70; // rdi
  int v71; // eax
  __int64 v72; // [rsp+10h] [rbp-E8h]
  unsigned int v73; // [rsp+18h] [rbp-E0h]
  unsigned int v74; // [rsp+1Ch] [rbp-DCh]
  __int64 v75; // [rsp+20h] [rbp-D8h]
  __int64 v76; // [rsp+28h] [rbp-D0h]
  __int64 v77; // [rsp+30h] [rbp-C8h]
  __int64 v78; // [rsp+38h] [rbp-C0h]
  unsigned int v79; // [rsp+44h] [rbp-B4h]
  int v80; // [rsp+48h] [rbp-B0h]
  int v81; // [rsp+4Ch] [rbp-ACh]
  __int64 v82; // [rsp+50h] [rbp-A8h]
  int v83; // [rsp+58h] [rbp-A0h]
  int v84; // [rsp+5Ch] [rbp-9Ch]
  __int64 v85; // [rsp+60h] [rbp-98h]
  __int64 v86; // [rsp+68h] [rbp-90h]
  __int64 v87; // [rsp+70h] [rbp-88h]
  _QWORD *v88; // [rsp+78h] [rbp-80h]
  char *v89; // [rsp+80h] [rbp-78h]
  int v91; // [rsp+94h] [rbp-64h] BYREF
  __int64 v92; // [rsp+98h] [rbp-60h] BYREF
  int v93; // [rsp+A4h] [rbp-54h] BYREF
  int *v94; // [rsp+A8h] [rbp-50h] BYREF
  int v95; // [rsp+B4h] [rbp-44h] BYREF
  int *v96; // [rsp+B8h] [rbp-40h] BYREF
  int v97[13]; // [rsp+C4h] [rbp-34h] BYREF

  v97[0] = a5;
  v80 = 0;
  v79 = 0;
  v81 = *(_DWORD *)(a1 + 324) & 4;
  v11 = sub_4495F0(a1, 576);
  v78 = sub_4495F0(a1, 72);
  v77 = sub_4495F0(a1, 160);
  v76 = sub_4495F0(a1, 80);
  v75 = sub_4495F0(a1, 80);
  v12 = *(_QWORD *)(a1 + 1008);
  if ( v12 )
  {
    if ( a6 )
    {
      v96 = a6;
      if ( a3 >= 0 )
        goto LABEL_7;
      goto LABEL_4;
    }
    v96 = (int *)(v12 + 4);
  }
  else
  {
    v96 = nullptr;
  }
  if ( a3 < 0 )
LABEL_4:
    a3 = strlen(a2);
LABEL_7:
  sub_48B350(a1);
  v82 = *(_QWORD *)(a1 + 168);
  if ( (a4 & 0x20000) != 0 )
    *(_QWORD *)(a1 + 168) = *(_QWORD *)(a1 + 192);
  v84 = a3;
  v86 = v76;
  v13 = *(_DWORD *)(a1 + 324);
  v87 = v77;
  v88 = (_QWORD *)v77;
  v85 = v75;
  v89 = (char *)a2;
  if ( (v13 & 8) != 0 )
  {
    v14 = *(_DWORD **)(*(_QWORD *)(a1 + 960) + 40LL);
    *(_DWORD *)v78 = 4;
    *(_QWORD *)(v78 + 40) = v14;
LABEL_11:
    ++*v14;
    goto LABEL_12;
  }
  if ( (v13 & 2) != 0 )
  {
    v34 = *(_QWORD *)(a1 + 416);
    *(_DWORD *)v78 = 4;
    if ( !v34 )
    {
      v51 = (_DWORD *)sub_496740();
      *(_QWORD *)(v78 + 40) = v51;
      *v51 = 0;
      *(_QWORD *)(*(_QWORD *)(v78 + 40) + 8LL) = off_656088;
      *(_DWORD *)(*(_QWORD *)(v78 + 40) + 16LL) = 0;
      *(_QWORD *)(*(_QWORD *)(v78 + 40) + 24LL) = 0;
      goto LABEL_38;
    }
    v24 = 1;
    v35 = sub_481EB0(a1);
    if ( v35 )
    {
      *(_QWORD *)(v78 + 40) = v35;
LABEL_38:
      v14 = *(_DWORD **)(v78 + 40);
      goto LABEL_11;
    }
LABEL_75:
    if ( *(_DWORD *)(a1 + 152) )
      goto LABEL_79;
    if ( v24 == 2 )
      v24 = sub_488CA0(a1);
    if ( v81 == 0 && v24 > 1 )
    {
      v64 = v24;
      v24 = 1;
      sub_409C80(a1, v64);
    }
    else
    {
LABEL_79:
      if ( v24 != 1 )
        goto LABEL_80;
    }
    v58 = *(_DWORD *)(a1 + 424);
    if ( (v58 & 4) != 0 )
    {
LABEL_81:
      v59 = 0;
      *(_DWORD *)(a1 + 424) = v58 & 0xFFFFFFFB;
      while ( v59 < v79 )
      {
        v60 = (int *)v88[v59];
        v61 = *v60 - 1;
        v29 = *v60 == 1;
        *v60 = v61;
        ++v59;
        if ( v61 < 0 || v29 )
          sub_47B120(v60);
      }
      if ( v80 )
        sub_47DCE0(v11);
      if ( v87 != v77 )
      {
        Tcl_Free(v87);
        Tcl_Free(v85);
      }
      if ( v86 != v76 )
        Tcl_Free(v86);
      v32 = v78;
      v29 = *(_DWORD *)v78 == 4;
      *(_QWORD *)(a1 + 168) = v82;
      if ( v29 )
      {
LABEL_92:
        v62 = *(int **)(v32 + 40);
        v63 = *v62 - 1;
        v29 = *v62 == 1;
        *v62 = v63;
        if ( v63 < 0 || v29 )
          sub_47B120(v62);
      }
      goto LABEL_33;
    }
    sub_479E00(
      a1,
      a2,
      *(_QWORD *)(v11 + 16),
      *(_DWORD *)(v11 + 24) - (unsigned int)(*(_QWORD *)(v11 + 80) == *(_QWORD *)(v11 + 16) + *(int *)(v11 + 24) - 1LL));
LABEL_80:
    v58 = *(_DWORD *)(a1 + 424);
    goto LABEL_81;
  }
  *(_DWORD *)v78 = 0;
  *(_QWORD *)(v78 + 40) = 0;
LABEL_12:
  v15 = *(_QWORD *)(a1 + 952);
  v16 = 1;
  if ( v15 )
    v16 = *(_DWORD *)(v15 + 4) + 1;
  *(_DWORD *)(v78 + 4) = v16;
  v17 = *(_QWORD *)(a1 + 160);
  *(_DWORD *)(v78 + 16) = 0;
  *(_QWORD *)(v78 + 32) = v15;
  *(_QWORD *)(v78 + 8) = 0;
  *(_DWORD *)(a1 + 324) = 0;
  *(_QWORD *)(v78 + 24) = v17;
  do
  {
    if ( (unsigned int)sub_47E270(a1, v89, (unsigned int)v84, 0, v11) )
    {
      v24 = 1;
      goto LABEL_75;
    }
    sub_409C10(v97, v89, *(_QWORD *)(v11 + 16));
    sub_409C30(v97, &v96, *(_QWORD *)(v11 + 16) - a7);
    v18 = *(_DWORD *)(v11 + 28);
    v80 = 1;
    v74 = v18;
    if ( v18 > 0 )
    {
      v19 = *(_BYTE **)(v11 + 16);
      v73 = 0;
      v95 = v97[0];
      v94 = v96;
      if ( (unsigned int)v18 > 0x14 )
      {
        v49 = 4 * v18;
        v50 = 8 * v18;
        v86 = sub_40FB00((unsigned int)(4 * v18));
        v87 = sub_40FB00(v50);
        v85 = sub_40FB00(v49);
      }
      v79 = 0;
      v83 = 0;
      v20 = *(_QWORD *)(v11 + 32);
      v88 = (_QWORD *)v87;
      if ( v74 )
      {
        while ( 1 )
        {
          sub_409C10(&v95, v19, *(_QWORD *)(v20 + 8));
          sub_409C30(&v95, &v94, *(_QWORD *)(v20 + 8) - a7);
          v19 = *(_BYTE **)(v20 + 8);
          v38 = sub_439010(v20, 0);
          v39 = -1;
          if ( v38 )
            v39 = v95;
          *(_DWORD *)(v85 + 4LL * v79) = v39;
          if ( *(_DWORD *)v78 == 4 )
            *(_DWORD *)(a1 + 324) |= 2u;
          v24 = sub_47F6A0(a1, (int)v20 + 24, *(_DWORD *)(v20 + 20), 0, v95, (_DWORD)v94, a7);
          *(_DWORD *)(a1 + 324) = 0;
          if ( v24 )
            goto LABEL_75;
          v36 = sub_48B5D0(a1);
          ++*(_DWORD *)v36;
          v29 = *(_DWORD *)v20 == 256;
          *(_QWORD *)(v87 + 8LL * v79) = v36;
          if ( v29 )
          {
            if ( *(_UNKNOWN ***)(v36 + 24) == &off_655E20 )
            {
              v93 = *(_DWORD *)(*(_QWORD *)(v36 + 32) + 8LL);
            }
            else
            {
              v24 = sub_46FB10(a1, v36, &v93);
              if ( v24 == 1 )
              {
                v65 = sub_48F930((unsigned int)"\n    (expanding word %d)", v79, v44, v45, v46, v47);
                sub_40ABA0(a1, v65, v66, v67, v68, v69);
                v70 = *(int **)(v87 + 8LL * v79);
                v71 = *v70 - 1;
                v29 = *v70 == 1;
                *v70 = v71;
                if ( v71 < 0 || v29 )
                  sub_47B120(v70);
                goto LABEL_75;
              }
            }
            v83 = 1;
            *(_DWORD *)(v86 + 4LL * v79) = 1;
            v48 = v93 + v73;
            if ( !v93 )
              v48 = v73 + 1;
            v73 = v48;
          }
          else
          {
            ++v73;
            *(_DWORD *)(v86 + 4LL * v79) = 0;
          }
          if ( v94 )
          {
            sub_47AD50(*(_QWORD *)(v87 + 8LL * v79++), (unsigned int)((_DWORD)v19 - a7));
            v37 = v74;
            v20 += 24LL * *(int *)(v20 + 20) + 24;
            if ( v79 >= v74 )
            {
LABEL_50:
              if ( v83 )
              {
                v40 = v37;
                v41 = v87;
                v42 = v73 - 1;
                v72 = v85;
                if ( v37 > 0x14 || v73 > 0x14 )
                {
                  v87 = sub_40FB00(8LL * v73);
                  v85 = sub_40FB00(4 * v73);
                }
                v79 = 0;
                while ( --v40 != -1 )
                {
                  while ( !*(_DWORD *)(v86 + 4LL * v40) )
                  {
                    v43 = v42;
                    ++v79;
                    --v42;
                    *(_DWORD *)(v85 + 4 * v43) = *(_DWORD *)(v72 + 4LL * v40);
                    *(_QWORD *)(v87 + 8 * v43) = *(_QWORD *)(v41 + 8LL * v40--);
                    if ( v40 == -1 )
                      goto LABEL_57;
                  }
                  v52 = *(int **)(v41 + 8LL * v40);
                  sub_46FD90(0, v52, &v91, &v92);
                  v79 += v91--;
                  if ( v91 != -1 )
                  {
                    v53 = v92;
                    do
                    {
                      v54 = v42--;
                      *(_DWORD *)(v85 + 4 * v54) = -1;
                      v55 = v91;
                      v56 = v91 - 1;
                      *(_QWORD *)(v87 + 8 * v54) = *(_QWORD *)(v53 + 8LL * v91);
                      ++**(_DWORD **)(v53 + 8 * v55);
                      v91 = v56;
                    }
                    while ( v56 != -1 );
                  }
                  v57 = *v52 - 1;
                  v29 = *v52 == 1;
                  *v52 = v57;
                  if ( v57 < 0 || v29 )
                    sub_47B120(v52);
                }
LABEL_57:
                v88 = (_QWORD *)(v87 + 8LL * v42 + 8);
                if ( v41 != v77 )
                  Tcl_Free(v41);
                if ( v72 != v75 )
                  Tcl_Free(v72);
              }
              break;
            }
          }
          else
          {
            ++v79;
            v37 = v74;
            v20 += 24LL * *(int *)(v20 + 20) + 24;
            if ( v79 >= v74 )
              goto LABEL_50;
          }
        }
      }
      *(_QWORD *)(v78 + 56) = *(_QWORD *)(v11 + 16);
      v21 = *(_DWORD *)(v11 + 24);
      *(_DWORD *)(v78 + 64) = v21;
      if ( *(_QWORD *)(v11 + 80) == *(_QWORD *)(v11 + 16) + *(int *)(v11 + 24) - 1LL )
        *(_DWORD *)(v78 + 64) = v21 - 1;
      *(_DWORD *)(v78 + 16) = v79;
      *(_QWORD *)(v78 + 8) = v85;
      sub_409EE0(a1, (__int64)v88, v79, v78);
      ++*(_DWORD *)(a1 + 152);
      v22 = *(_QWORD *)(v11 + 16);
      v23 = *(_DWORD *)(v11 + 24);
      *(_QWORD *)(a1 + 952) = v78;
      v24 = sub_4093F0(a1, v79, v88, v22, v23, 0);
      v25 = *(_QWORD *)(a1 + 952);
      --*(_DWORD *)(a1 + 152);
      *(_QWORD *)(a1 + 952) = *(_QWORD *)(v25 + 32);
      sub_409FA0(a1, (__int64)v88, v79);
      *(_QWORD *)(v78 + 8) = 0;
      *(_DWORD *)(v78 + 16) = 0;
      if ( v24 )
        goto LABEL_75;
      for ( i = 0; i < v79; ++i )
      {
        v27 = (int *)v88[i];
        v28 = *v27 - 1;
        v29 = *v27 == 1;
        *v27 = v28;
        if ( v28 < 0 || v29 )
          sub_47B120(v27);
      }
      v79 = 0;
      if ( v87 != v77 )
      {
        Tcl_Free(v87);
        v87 = v77;
        Tcl_Free(v85);
        v85 = v75;
      }
      if ( v86 != v76 )
      {
        Tcl_Free(v86);
        v86 = v76;
      }
    }
    v30 = *(_BYTE **)(v11 + 16);
    v31 = (_DWORD)v30 + *(_DWORD *)(v11 + 24) - (_DWORD)v89;
    v89 = &v30[*(int *)(v11 + 24)];
    v84 -= v31;
    sub_409C10(v97, v30, (unsigned __int64)v89);
    sub_47DCE0(v11);
    v80 = 0;
  }
  while ( v84 > 0 );
  v32 = v78;
  v24 = 0;
  v29 = *(_DWORD *)v78 == 4;
  *(_QWORD *)(a1 + 168) = v82;
  if ( v29 )
    goto LABEL_92;
LABEL_33:
  sub_449510(a1, v75);
  sub_449510(a1, v76);
  sub_449510(a1, v77);
  sub_449510(a1, v78);
  sub_449510(a1, v11);
  return v24;
}

