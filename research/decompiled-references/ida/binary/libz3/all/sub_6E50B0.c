__int64 __fastcall sub_6E50B0(__int64 *a1, __int64 *a2, _QWORD *a3, __int64 a4, int a5, int a6)
{
  unsigned int *v6; // r15
  __int64 v7; // r14
  unsigned int *v8; // r12
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // eax
  __int64 v13; // rax
  int v14; // edx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  int v23; // r9d
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rbx
  int v28; // eax
  int v29; // eax
  __int64 v30; // r13
  int v31; // ecx
  int v32; // r8d
  int v33; // r9d
  __int64 v34; // rdi
  void *v35; // rbx
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v39; // rax
  int v40; // edx
  int v41; // ebx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rbx
  int v45; // edx
  int v46; // ecx
  int v47; // r8d
  int v48; // r9d
  __int64 v49; // rax
  __int64 v50; // rdx
  int v51; // ecx
  int v52; // r8d
  int v53; // r9d
  __int64 v54; // rax
  __int64 v55; // rbx
  __int64 v56; // rax
  __int64 v57; // [rsp+0h] [rbp-100h]
  __int64 v58; // [rsp+0h] [rbp-100h]
  __int64 v59; // [rsp+8h] [rbp-F8h]
  __int64 v60; // [rsp+8h] [rbp-F8h]
  __int64 v61; // [rsp+8h] [rbp-F8h]
  __int64 v62; // [rsp+8h] [rbp-F8h]
  __int64 v63; // [rsp+8h] [rbp-F8h]
  __int64 v64; // [rsp+8h] [rbp-F8h]
  int v65; // [rsp+10h] [rbp-F0h]
  __int64 v66; // [rsp+10h] [rbp-F0h]
  int v67; // [rsp+18h] [rbp-E8h]
  __int64 v68; // [rsp+18h] [rbp-E8h]
  __int64 v69; // [rsp+18h] [rbp-E8h]
  __int64 v70; // [rsp+18h] [rbp-E8h]
  __int64 v71; // [rsp+18h] [rbp-E8h]
  __int64 v72; // [rsp+18h] [rbp-E8h]
  __int64 v73; // [rsp+18h] [rbp-E8h]
  __int64 v75; // [rsp+28h] [rbp-D8h]
  __int64 v76; // [rsp+30h] [rbp-D0h]
  unsigned int v78; // [rsp+40h] [rbp-C0h]
  void *v79; // [rsp+40h] [rbp-C0h]
  __int64 v81; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int *v82; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v83; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int *v84; // [rsp+68h] [rbp-98h] BYREF
  __int64 (__fastcall **v85)(); // [rsp+70h] [rbp-90h] BYREF
  __int64 *v86; // [rsp+78h] [rbp-88h]
  _QWORD v87[2]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v88[2]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v89[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v90; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v91; // [rsp+B8h] [rbp-48h]
  _QWORD v92[8]; // [rsp+C0h] [rbp-40h] BYREF

  v6 = nullptr;
  v7 = 0;
  v8 = nullptr;
  v76 = *a1;
  v81 = v76;
  v83 = v76;
  v9 = *a2;
  if ( *a2 )
  {
    v78 = 0;
    do
    {
      if ( v78 >= *(_DWORD *)(v9 - 4) )
        break;
      v85 = off_1C53398;
      v86 = a1;
      v10 = 16LL * v78;
      v11 = v9 + v10;
      v12 = *(_DWORD *)(*a3 + 4LL * v78);
      if ( v12 == 2 )
      {
        v49 = sub_6E43D0(a1, v11, v10, v11, a5, a6);
        if ( v49 )
          ++*(_DWORD *)(v49 + 8);
        v72 = v49;
        sub_6DE2A0(v7, v76);
        v7 = v72;
        goto LABEL_18;
      }
      if ( v12 > 2 )
      {
        if ( v12 == 3 )
        {
          v24 = sub_6E43D0(a1, v11, v10, v11, a5, a6);
          v69 = v24;
          if ( v24 )
            ++*(_DWORD *)(v24 + 8);
          sub_6DE2A0(v7, v76);
          v25 = sub_15E1A70(*a1);
          v7 = v25;
          if ( v25 )
            ++*(_DWORD *)(v25 + 8);
          sub_6DE2A0(v69, v76);
        }
        goto LABEL_18;
      }
      if ( !v12 )
      {
        v66 = *a1;
        v39 = *(_QWORD *)(v11 + 8);
        if ( v39 && (v40 = *(_DWORD *)(v39 - 4)) != 0 )
        {
          v41 = v40 - 1;
          v61 = *(_QWORD *)(v39 + 8LL * (unsigned int)(v40 - 1));
          if ( (v40 & 1) == 0 )
          {
            v70 = v11;
            v42 = sub_6E0F30((__int64)a1);
            v43 = sub_6E1010((__int64)a1, v42);
            v11 = v70;
            v71 = v43;
            goto LABEL_38;
          }
          v58 = v11;
          v71 = sub_6E1010((__int64)a1, *(_QWORD *)(v39 + 8LL * (unsigned int)(v40 - 1)));
          v11 = v58;
          if ( v41 )
          {
LABEL_38:
            v57 = v11;
            v44 = sub_6E42F0((__int64)&v85, v11, v41);
            v87[0] = sub_6E15B0((_DWORD)a1, v61, v45, v46, v47, v48);
            v87[1] = v44;
            v88[1] = sub_6E3580(a1, 2, v87);
            v88[0] = v71;
            v71 = sub_6E1880(a1, 2, v88);
            v11 = v57;
          }
        }
        else
        {
          v71 = *(_QWORD *)(v66 + 864);
        }
        if ( v71 )
          ++*(_DWORD *)(v71 + 8);
        v62 = v11;
        sub_6DE2A0(0, v66);
        v54 = sub_6E43D0(v86, v62, v50, v51, v52, v53);
        v55 = v54;
        if ( v54 )
          ++*(_DWORD *)(v54 + 8);
        sub_6DE2A0(0, v66);
        v91 = v55;
        v90 = v71;
        v56 = sub_6E1880(a1, 2, &v90);
        if ( v56 )
          ++*(_DWORD *)(v56 + 8);
        v63 = v56;
        sub_6DE2A0(v7, v76);
        sub_6DE2A0(v55, v66);
        sub_6DE2A0(v71, v66);
        v7 = v63;
        goto LABEL_18;
      }
      v13 = *(_QWORD *)(v11 + 8);
      if ( v13 && (v14 = *(_DWORD *)(v13 - 4)) != 0 )
      {
        v15 = *(_QWORD *)(v13 + 8LL * (unsigned int)(v14 - 1));
        v67 = v14 - 1;
        v65 = v15;
        if ( (v14 & 1) != 0 )
        {
          v64 = v11;
          v19 = sub_6E1010((__int64)a1, v15);
          v18 = v64;
          if ( !v67 )
            goto LABEL_43;
        }
        else
        {
          v59 = v11;
          v16 = sub_6E0F30((__int64)a1);
          v17 = sub_6E1010((__int64)a1, v16);
          v18 = v59;
          v19 = v17;
        }
        v60 = v19;
        v68 = sub_6E42F0((__int64)&v85, v18, v67);
        v89[0] = sub_6E15B0((_DWORD)a1, v65, v20, v21, v22, v23);
        v89[1] = v68;
        v91 = sub_6E3580(a1, 2, v89);
        v90 = v60;
        v19 = sub_6E1880(a1, 2, &v90);
      }
      else
      {
        v19 = *(_QWORD *)(*a1 + 864);
      }
LABEL_43:
      if ( v19 )
        ++*(_DWORD *)(v19 + 8);
      v73 = v19;
      sub_6DE2A0(v7, v76);
      v7 = v73;
LABEL_18:
      v26 = sub_15E1B70(*a1);
      v27 = v26;
      if ( v26 )
        ++*(_DWORD *)(v26 + 8);
      if ( !v6 || (v28 = *(v6 - 1), v28 == *(v6 - 2)) )
      {
        v82 = v6;
        sub_23A6F0(&v82);
        v6 = v82;
        v28 = *(v82 - 1);
      }
      *(_QWORD *)&v6[2 * v28] = v27;
      *(v6 - 1) = v28 + 1;
      if ( v7 )
        ++*(_DWORD *)(v7 + 8);
      if ( !v8 || (v29 = *(v8 - 1), v29 == *(v8 - 2)) )
      {
        v84 = v8;
        sub_23A6F0(&v84);
        v8 = v84;
        v29 = *(v84 - 1);
      }
      ++v78;
      *(_QWORD *)&v8[2 * v29] = v7;
      *(v8 - 1) = v29 + 1;
      v9 = *a2;
    }
    while ( *a2 );
  }
  v91 = 0;
  v92[0] = 1;
  v92[1] = 0;
  v90 = 4294957296LL;
  v30 = a1[4];
  sub_182CBA0(qword_1C7F2C0, v92);
  BYTE4(v92[0]) &= ~1u;
  LODWORD(v92[0]) = 1;
  v34 = a1[2];
  if ( !v34 )
  {
    sub_16669E0(a1 + 1);
    v34 = a1[2];
  }
  v75 = sub_166A700(v34, (unsigned int)&v90, 0, v31, v32, v33);
  v35 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v90);
  sub_182CBA0(v35, v92);
  v79 = *(void **)(*a1 + 856);
  if ( v6 )
    v36 = *(v6 - 1);
  else
    v36 = 0;
  v37 = sub_6E3580(a1, v36, v6);
  v84 = v8;
  sub_6E1200(a4, v37, (__int64)v79, &v83, v75, v30, v30, v30);
  sub_2334C0(&v83);
  v82 = v6;
  sub_2334C0(&v81);
  return sub_6DE2A0(v7, v76);
}

