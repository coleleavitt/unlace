void __fastcall sub_1881DB0(__int64 *a1, int a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbx
  char v8; // al
  __int64 v9; // r8
  int v10; // edi
  int v11; // edx
  unsigned int v12; // ecx
  _DWORD *v13; // r13
  int v14; // esi
  _QWORD *v15; // r13
  __int64 v16; // r8
  int v17; // esi
  unsigned int v18; // ecx
  _DWORD *v19; // rdx
  int v20; // edi
  __int64 **v21; // r14
  bool v22; // al
  int v23; // ecx
  __int64 v24; // rax
  __int64 v25; // r15
  __int64 v26; // rbp
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // r15
  __int64 *v33; // rbp
  __int64 v34; // r13
  __int64 v35; // r15
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  _QWORD *v41; // rax
  __int64 *v42; // rbp
  __int64 v43; // r13
  __int64 v44; // r15
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // r14
  __int64 v50; // rax
  _QWORD *v51; // rax
  int v52; // eax
  int v53; // edx
  int v54; // eax
  unsigned int v55; // esi
  __int64 v56; // rcx
  __int64 v57; // rdx
  _DWORD *v58; // r13
  _DWORD *v59; // rax
  int v60; // eax
  unsigned int v61; // esi
  __int64 v62; // rcx
  __int64 v63; // rdx
  _DWORD *v64; // r14
  __int64 *v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rax
  _QWORD *v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rax
  _QWORD *v77; // rax
  int v78; // r10d
  int v79; // r10d
  __int64 v80; // [rsp+8h] [rbp-F0h]
  __int64 v81; // [rsp+8h] [rbp-F0h]
  __int64 v82; // [rsp+10h] [rbp-E8h]
  int v83; // [rsp+18h] [rbp-E0h] BYREF
  int v84; // [rsp+1Ch] [rbp-DCh] BYREF
  unsigned __int64 v85; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v86; // [rsp+28h] [rbp-D0h] BYREF
  _QWORD v87[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v88; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v89[11]; // [rsp+50h] [rbp-A8h] BYREF
  char v90; // [rsp+A8h] [rbp-50h]
  unsigned int v91; // [rsp+B0h] [rbp-48h]
  char v92; // [rsp+B4h] [rbp-44h]

  v7 = a1[1];
  v84 = a2;
  v83 = a3;
  v8 = *(_BYTE *)v7 & 1;
  if ( v8 )
  {
    v9 = v7 + 8;
    v10 = 3;
    v11 = a2;
  }
  else
  {
    v53 = *(_DWORD *)(v7 + 16);
    v9 = *(_QWORD *)(v7 + 8);
    if ( !v53 )
    {
      v13 = nullptr;
      goto LABEL_40;
    }
    v10 = v53 - 1;
    v11 = a2;
  }
  v12 = v10 & (37 * v11);
  v13 = (_DWORD *)(v9 + 40LL * v12);
  v14 = *v13;
  if ( v11 == *v13 )
  {
LABEL_4:
    v15 = v13 + 2;
    goto LABEL_5;
  }
  v79 = 1;
  a6 = 0;
  if ( v14 != 0x7FFFFFFF )
  {
    while ( 1 )
    {
      if ( v14 == 0x80000000 && !a6 )
        a6 = (__int64)v13;
      v12 = v10 & (v79 + v12);
      v13 = (_DWORD *)(v9 + 40LL * v12);
      v14 = *v13;
      if ( v11 == *v13 )
        goto LABEL_4;
      if ( v14 == 0x7FFFFFFF )
      {
        if ( a6 )
          v13 = (_DWORD *)a6;
        break;
      }
      ++v79;
    }
  }
LABEL_40:
  v87[0] = v13;
  v54 = (*(_DWORD *)v7 >> 1) + 1;
  if ( (*(_BYTE *)v7 & 1) != 0 )
  {
    v56 = 12;
    v55 = 4;
  }
  else
  {
    v55 = *(_DWORD *)(v7 + 16);
    v56 = 3 * v55;
  }
  v57 = (unsigned int)(4 * v54);
  if ( (unsigned int)v57 >= (unsigned int)v56 )
  {
    v55 *= 2;
    goto LABEL_68;
  }
  v56 = v55 - (v54 + *(_DWORD *)(v7 + 4));
  v57 = v55 >> 3;
  if ( (unsigned int)v56 <= (unsigned int)v57 )
  {
LABEL_68:
    sub_18816B0(v7, v55, v57, v56, v9, a6);
    sub_1840030(v7, &v84, v87);
    v54 = (*(_DWORD *)v7 >> 1) + 1;
  }
  *(_DWORD *)v7 = *(_DWORD *)v7 & 1 | (2 * v54);
  v58 = (_DWORD *)v87[0];
  if ( *(_DWORD *)v87[0] != 0x7FFFFFFF )
    --*(_DWORD *)(v7 + 4);
  v7 = a1[1];
  *v58 = v84;
  v59 = v58 + 6;
  v15 = v58 + 2;
  *v15 = v59;
  v15[1] = 0x200000000LL;
  v8 = *(_BYTE *)v7 & 1;
LABEL_5:
  if ( v8 )
  {
    v16 = v7 + 8;
    v17 = 3;
  }
  else
  {
    v52 = *(_DWORD *)(v7 + 16);
    v16 = *(_QWORD *)(v7 + 8);
    if ( !v52 )
    {
      v19 = nullptr;
      goto LABEL_48;
    }
    v17 = v52 - 1;
  }
  v18 = v17 & (37 * v83);
  v19 = (_DWORD *)(v16 + 40LL * v18);
  v20 = *v19;
  if ( v83 == *v19 )
  {
LABEL_8:
    v21 = (__int64 **)(v19 + 2);
    v22 = v19[4] == 0;
    goto LABEL_9;
  }
  v78 = 1;
  a6 = 0;
  if ( v20 != 0x7FFFFFFF )
  {
    while ( 1 )
    {
      if ( !a6 && v20 == 0x80000000 )
        a6 = (__int64)v19;
      v18 = v17 & (v78 + v18);
      v19 = (_DWORD *)(v16 + 40LL * v18);
      v20 = *v19;
      if ( v83 == *v19 )
        goto LABEL_8;
      if ( v20 == 0x7FFFFFFF )
      {
        if ( a6 )
          v19 = (_DWORD *)a6;
        break;
      }
      ++v78;
    }
  }
LABEL_48:
  v87[0] = v19;
  v60 = (*(_DWORD *)v7 >> 1) + 1;
  if ( (*(_BYTE *)v7 & 1) != 0 )
  {
    v62 = 12;
    v61 = 4;
  }
  else
  {
    v61 = *(_DWORD *)(v7 + 16);
    v62 = 3 * v61;
  }
  v63 = (unsigned int)(4 * v60);
  if ( (unsigned int)v63 >= (unsigned int)v62 )
  {
    v61 *= 2;
    goto LABEL_66;
  }
  v62 = v61 - (v60 + *(_DWORD *)(v7 + 4));
  v63 = v61 >> 3;
  if ( (unsigned int)v62 <= (unsigned int)v63 )
  {
LABEL_66:
    sub_18816B0(v7, v61, v63, v62, v16, a6);
    sub_1840030(v7, &v83, v87);
    v60 = (*(_DWORD *)v7 >> 1) + 1;
  }
  *(_DWORD *)v7 = *(_DWORD *)v7 & 1 | (2 * v60);
  v64 = (_DWORD *)v87[0];
  if ( *(_DWORD *)v87[0] != 0x7FFFFFFF )
    --*(_DWORD *)(v7 + 4);
  *v64 = v83;
  v65 = (__int64 *)(v64 + 6);
  v21 = (__int64 **)(v64 + 2);
  *v21 = v65;
  v21[1] = (__int64 *)0x200000000LL;
  v22 = 1;
LABEL_9:
  v23 = *((_DWORD *)v15 + 2);
  if ( (v23 == 0) != v22 )
  {
    v24 = *(_QWORD *)(*a1 + 248) + 17536LL;
    v25 = (v24 + 16LL * v84 + 56) | 6;
    v26 = (v24 + 16LL * v83 + 56) | 6;
    if ( !v23 )
    {
      v25 = (v24 + 16LL * v83 + 56) | 6;
      v26 = (v24 + 16LL * v84 + 56) | 6;
    }
    sub_168B9F0((__int64)v87, (__int64 *)(*a1 + 8), *(_DWORD *)(a1[2] + 24), 0x1447u, 0);
    if ( v90 )
    {
      sub_AE9DF0(v89, v25, 9u);
    }
    else if ( v92 )
    {
      v72 = sub_168B9E0(v87);
      v76 = v88;
      if ( v88 )
      {
        v81 = v72;
        v76 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v88 + 32LL))(v88);
        v72 = v81;
      }
      v86 = v76;
      v77 = sub_1587BC0(v72, &v86, v72, v73, v74, v75);
      sub_AE9DF0((unsigned __int8 **)(*v77 + 32LL * v91 + 8), v25, 9u);
    }
    v85 = sub_A7A9D0(*(_QWORD *)(*a1 + 248), a1[2], v27, v28, v29, v30);
    v31 = sub_162B6D0((__int64)v87, (__int64 *)&v85);
    v32 = v31;
    if ( *(_BYTE *)(v31 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v31 + 32), v26, 9u);
    }
    else if ( *(_BYTE *)(v31 + 132) )
    {
      v66 = sub_168B9E0((_QWORD *)v31);
      v70 = *(_QWORD *)(v32 + 16);
      if ( v70 )
      {
        v80 = v66;
        v70 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v70 + 32LL))(v70);
        v66 = v80;
      }
      v86 = v70;
      v71 = sub_1587BC0(v66, &v86, v66, v67, v68, v69);
      sub_AE9DF0((unsigned __int8 **)(*v71 + 32LL * *(unsigned int *)(v32 + 128) + 8), v26, 9u);
    }
    sub_15F7200(v87);
    v33 = (__int64 *)*v15;
    v34 = *v15 + 8LL * *((unsigned int *)v15 + 2);
    while ( (__int64 *)v34 != v33 )
    {
      v35 = *v33;
      sub_168B9F0((__int64)v87, (__int64 *)(*a1 + 8), *(_DWORD *)(*v33 + 24), 0x1925u, 0);
      if ( v90 )
      {
        sub_AE9DF0(v89, v35, 0xAu);
      }
      else if ( v92 )
      {
        v36 = sub_168B9E0(v87);
        v40 = v88;
        if ( v88 )
        {
          v82 = v36;
          v40 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v88 + 32LL))(v88);
          v36 = v82;
        }
        v86 = v40;
        v41 = sub_1587BC0(v36, &v86, v36, v37, v38, v39);
        sub_AE9DF0((unsigned __int8 **)(*v41 + 32LL * v91 + 8), v35, 0xAu);
      }
      ++v33;
      sub_15F7200(v87);
    }
    v42 = *v21;
    v43 = (__int64)&(*v21)[*((unsigned int *)v21 + 2)];
    if ( *v21 != (__int64 *)v43 )
    {
      do
      {
        v44 = *v42;
        sub_168B9F0((__int64)v87, (__int64 *)(*a1 + 8), *(_DWORD *)(*v42 + 24), 0x1925u, 0);
        if ( v90 )
        {
          sub_AE9DF0(v89, v44, 0xAu);
        }
        else if ( v92 )
        {
          v49 = sub_168B9E0(v87);
          v50 = v88;
          if ( v88 )
            v50 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v88 + 32LL))(v88);
          v86 = v50;
          v51 = sub_1587BC0(v49, &v86, v45, v46, v47, v48);
          sub_AE9DF0((unsigned __int8 **)(*v51 + 32LL * v91 + 8), v44, 0xAu);
        }
        ++v42;
        sub_15F7200(v87);
      }
      while ( (__int64 *)v43 != v42 );
    }
  }
}
