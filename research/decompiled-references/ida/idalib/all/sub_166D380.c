__int64 __fastcall sub_166D380(__int64 a1, const void *a2, size_t a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // r13d
  __int64 **v9; // rax
  __int64 *v10; // rdx
  unsigned __int64 v11; // rax
  __int64 *v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // r15d
  __int64 v15; // r14
  unsigned int v16; // eax
  unsigned int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 *v20; // r9
  __int64 v21; // r12
  __int64 result; // rax
  int v23; // edx
  __int64 v24; // r14
  __int64 v25; // rax
  char *v26; // rax
  signed __int64 v27; // rdx
  signed __int64 v28; // rbp
  __int64 v29; // rax
  unsigned int v30; // r10d
  __int64 *v31; // r9
  __int64 v32; // rcx
  unsigned int v33; // eax
  __int64 *v34; // rcx
  __int64 v35; // rax
  __int64 *v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rbp
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rax
  _QWORD *v49; // rax
  __int64 v50; // rax
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rax
  _QWORD *v56; // rax
  unsigned int v57; // [rsp+8h] [rbp-F0h]
  __int64 v58; // [rsp+8h] [rbp-F0h]
  char *v59; // [rsp+8h] [rbp-F0h]
  __int64 v60; // [rsp+8h] [rbp-F0h]
  _BYTE *v61; // [rsp+8h] [rbp-F0h]
  __int64 *v62; // [rsp+10h] [rbp-E8h]
  __int64 v63; // [rsp+10h] [rbp-E8h]
  __int64 v64; // [rsp+18h] [rbp-E0h]
  __int64 v65; // [rsp+28h] [rbp-D0h] BYREF
  __int64 *v66[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v67; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v68[11]; // [rsp+50h] [rbp-A8h] BYREF
  char v69; // [rsp+A8h] [rbp-50h]
  unsigned int v70; // [rsp+B0h] [rbp-48h]
  char v71; // [rsp+B4h] [rbp-44h]

  v6 = a4;
  if ( (*(_BYTE *)(a5 + 29) & 1) == 0 )
    goto LABEL_8;
  v9 = (__int64 **)sub_B8C3D0(a5, (__int64)a2, a3, a4, a5, a6);
  v10 = *v9;
  v11 = (unsigned __int64)&(*v9)[*((unsigned int *)v9 + 2)];
  if ( (unsigned __int64)v10 < v11 )
  {
    v34 = v10;
    while ( *(_WORD *)(*v34 + 36) != 356 )
    {
      if ( (__int64 *)v11 == ++v34 )
        goto LABEL_8;
    }
    if ( (__int64 *)v11 != v34 )
      goto LABEL_32;
LABEL_8:
    v14 = 0;
    goto LABEL_9;
  }
  if ( v10 == (__int64 *)v11 )
    goto LABEL_8;
  if ( *(_WORD *)(*(_QWORD *)v11 + 36LL) != 356 )
  {
    v12 = (__int64 *)(v11 + 8);
    while ( v10 != v12 )
    {
      v13 = *v12++;
      if ( *(_WORD *)(v13 + 36) == 356 )
        goto LABEL_32;
    }
    goto LABEL_8;
  }
LABEL_32:
  v35 = *v10;
  if ( *(_WORD *)(*v10 + 36) != 356 )
  {
    v36 = v10 + 1;
    do
      v35 = *v36++;
    while ( *(_WORD *)(v35 + 36) != 356 );
  }
  if ( (*(_BYTE *)(v35 + 38) & 4) == 0 )
    goto LABEL_8;
  v14 = *(_DWORD *)(v35 + 24);
LABEL_9:
  v15 = *(_QWORD *)(a1 + 248);
  v16 = sub_2244B30(a2, a3);
  v17 = sub_2244CB0(v15 + 23288, a2, a3, v16);
  v20 = (__int64 *)(*(_QWORD *)(v15 + 23288) + 8LL * v17);
  if ( *v20 )
  {
    if ( *v20 != -8 )
    {
      sub_1668730(v66, v20, 0);
      v21 = *v66[0];
      result = 0;
      v23 = *(_DWORD *)(*v66[0] + 20);
      if ( v23 == v6 || (v6 & 8) != 0 && (v23 & 8) == 0 )
        return result;
      v24 = a1 + 8;
      sub_168B9F0(v66, a1 + 8, *(unsigned int *)(a5 + 24), 4968, 0);
      if ( v69 )
      {
        sub_AE9DF0(v68, a5, 0xAu);
      }
      else
      {
        if ( !v71 )
        {
LABEL_16:
          sub_15F7200(v66);
          v25 = *(_QWORD *)(v21 + 8);
          if ( v25 )
          {
            sub_168B9F0(v66, v24, *(unsigned int *)(v25 + 24), 103, 0);
            v26 = (char *)sub_995750(*(_QWORD *)(v21 + 8));
            v28 = v27;
            if ( v69 )
            {
              sub_AEC220(v68, v26, v27);
            }
            else if ( v71 )
            {
              v59 = v26;
              v50 = sub_168B9E0(v66);
              v53 = (__int64)v59;
              v54 = v50;
              v55 = v67;
              if ( v67 )
              {
                v63 = (__int64)v59;
                v60 = v54;
                v55 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v67 + 32LL))(v67);
                v53 = v63;
                v54 = v60;
              }
              v61 = (_BYTE *)v53;
              v65 = v55;
              v56 = sub_1587BC0(v54, &v65, v54, v53, v51, v52);
              sub_AEC220((unsigned __int8 **)(*v56 + 32LL * v70 + 8), v61, v28);
            }
            sub_15F7200(v66);
          }
          if ( v14 )
          {
            sub_168B9F0(v66, v24, v14, 111, 0);
            sub_15F7200(v66);
          }
          result = 1;
          if ( *(_DWORD *)(v21 + 16) )
          {
            sub_168B9F0(v66, v24, *(unsigned int *)(v21 + 16), 111, 0);
            sub_15F7200(v66);
            return 1;
          }
          return result;
        }
        v37 = sub_168B9E0(v66);
        v41 = v67;
        if ( v67 )
        {
          v58 = v37;
          v41 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v67 + 32LL))(v67);
          v37 = v58;
        }
        v65 = v41;
        v42 = sub_1587BC0(v37, &v65, v37, v38, v39, v40);
        sub_AE9DF0((unsigned __int8 **)(*v42 + 32LL * v70 + 8), a5, 0xAu);
      }
      if ( v69 )
      {
        sub_A68BE0(v68, (__int64 *)(v21 + 8));
      }
      else if ( v71 )
      {
        v45 = sub_168B9E0(v66);
        v48 = v67;
        if ( v67 )
          v48 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v67 + 32LL))(v67);
        v65 = v48;
        v49 = sub_1587BC0(v45, &v65, v43, v44, v46, v47);
        sub_A68BE0((unsigned __int8 **)(*v49 + 32LL * v70 + 8), (__int64 *)(v21 + 8));
      }
      goto LABEL_16;
    }
    --*(_DWORD *)(v15 + 23304);
  }
  v62 = v20;
  v57 = v17;
  v29 = sub_22300B0(a3 + 25, 8, v17, v18, v19, v20);
  v30 = v57;
  v31 = v62;
  v32 = v29;
  if ( a3 )
  {
    v64 = v29;
    memcpy((void *)(v29 + 24), a2, a3);
    v32 = v64;
    v31 = v62;
    v30 = v57;
  }
  *(_BYTE *)(v32 + a3 + 24) = 0;
  *(_QWORD *)v32 = a3;
  *(_QWORD *)(v32 + 8) = a5;
  *(_DWORD *)(v32 + 16) = v14;
  *(_DWORD *)(v32 + 20) = v6;
  *v31 = v32;
  ++*(_DWORD *)(v15 + 23300);
  v33 = sub_22450D0(v15 + 23288, v30);
  sub_1668730(v66, (__int64 *)(*(_QWORD *)(v15 + 23288) + 8LL * v33), 0);
  return 0;
}
