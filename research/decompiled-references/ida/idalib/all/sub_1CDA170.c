__int64 __fastcall sub_1CDA170(
        __int64 *a1,
        __int64 *a2,
        int a3,
        unsigned int a4,
        int a5,
        int a6,
        __m128 a7,
        __int64 *a8,
        __int64 *a9,
        unsigned int a10,
        __int64 a11)
{
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v16; // r9
  unsigned __int64 v17; // rcx
  unsigned int v18; // ebp
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  _QWORD *v23; // r15
  unsigned __int64 v24; // rax
  char v25; // al
  __int64 v26; // rax
  __int64 *v27; // r15
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  unsigned __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // r15
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r9
  char v43; // r13
  __int64 v44; // r8
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rax
  _QWORD *v50; // rax
  __int64 v51; // rax
  __int64 v52; // rbp
  _QWORD *v53; // r13
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // r15
  __int64 v59; // rax
  _QWORD *v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rbx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rax
  _QWORD *v67; // rax
  __int64 v68; // [rsp-8h] [rbp-118h]
  __int64 v69; // [rsp+0h] [rbp-110h]
  unsigned __int64 v70; // [rsp+8h] [rbp-108h]
  __int64 v71; // [rsp+10h] [rbp-100h]
  char v72; // [rsp+1Ah] [rbp-F6h] BYREF
  char v73; // [rsp+1Bh] [rbp-F5h] BYREF
  int v74; // [rsp+1Ch] [rbp-F4h] BYREF
  __int64 v75; // [rsp+20h] [rbp-F0h] BYREF
  unsigned __int64 v76; // [rsp+28h] [rbp-E8h] BYREF
  __int64 v77; // [rsp+38h] [rbp-D8h]
  void *ptr[2]; // [rsp+48h] [rbp-C8h] BYREF
  _QWORD v79[2]; // [rsp+58h] [rbp-B8h] BYREF
  unsigned __int8 *v80[11]; // [rsp+68h] [rbp-A8h] BYREF
  char v81; // [rsp+C0h] [rbp-50h]
  unsigned int v82; // [rsp+C8h] [rbp-48h]
  char v83; // [rsp+CCh] [rbp-44h]

  v72 = 0;
  v73 = 0;
  v13 = sub_17D9210(
          (__int64)a1,
          a2,
          a5,
          0,
          a6,
          (__int64)a8,
          a7,
          a9,
          a10,
          a11,
          3,
          0,
          nullptr,
          0,
          &v72,
          &v73,
          0,
          0,
          nullptr,
          0,
          0,
          0,
          0,
          0);
  if ( !v13 )
    return 0;
  v14 = v13;
  if ( *(char *)(v13 + 28) < 0 )
    return 0;
  v70 = sub_B971E0(v13);
  if ( v70 )
  {
    v17 = a8[1];
    if ( v17 )
    {
      while ( 1 )
      {
        v31 = *(_QWORD *)(v17 + 8);
        if ( ((v31 >> 1) & 3) == 2 )
        {
          v30 = *(_QWORD *)(v17 + 16);
          if ( v30 )
          {
            if ( *(_BYTE *)(v30 + 16) == 49 )
              break;
          }
        }
        v17 = v31 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v31 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      sub_168B9F0((__int64)ptr, a1 + 1, a4, 0x15AFu, 0);
      if ( v81 )
      {
        sub_AE9DF0(v80, v14, 0xAu);
      }
      else if ( v83 )
      {
        v46 = sub_168B9E0(ptr);
        v49 = v79[0];
        if ( v79[0] )
        {
          v71 = v46;
          v49 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v79[0] + 32LL))(v79[0]);
          v46 = v71;
        }
        v76 = v49;
        v50 = sub_1587BC0(v46, (__int64 *)&v76, v46, (__int64)&v76, v47, v48);
        sub_AE9DF0((unsigned __int8 **)(*v50 + 32LL * v82 + 8), v14, 0xAu);
      }
      v76 = *a8;
      sub_1587DB0((__int64)ptr, (__int64 *)&v76);
      sub_15F7200(ptr);
    }
    v18 = (a3 == 0) + 3;
    sub_1CD8AB0(a1, (_BYTE *)v14, a10, 1, v18, v16);
    v22 = *(_QWORD *)(v14 + 96);
    if ( (((unsigned __int8)v22 | (unsigned __int8)(v22 >> 1)) & 1) != 0
      || (v23 = sub_7052B0((__int64 *)(v14 + 96), v14, v22, v19, v20, v21)) == nullptr )
    {
      v26 = *(_QWORD *)(v14 + 128);
      if ( !v26 )
      {
        sub_7052B0((__int64 *)(*(_QWORD *)(v14 + 104) + 96LL), *(_QWORD *)(v14 + 104), v22, v19, v20, v21);
        v26 = *(_QWORD *)(v14 + 128);
        if ( !v26 )
        {
LABEL_35:
          sub_7052B0((__int64 *)(*(_QWORD *)(v14 + 104) + 96LL), *(_QWORD *)(v14 + 104), v22, v19, v20, v21);
          v26 = *(_QWORD *)(v14 + 128);
          if ( !v26 )
          {
LABEL_36:
            v38 = *(_QWORD *)(v70 + 128);
            if ( !v38
              && (sub_7052B0((__int64 *)(*(_QWORD *)(v70 + 104) + 96LL), *(_QWORD *)(v70 + 104), v22, v19, v20, v21),
                  (v38 = *(_QWORD *)(v70 + 128)) == 0)
              || (v39 = *(_QWORD *)(v38 + 88)) == 0 )
            {
              sub_168B9F0((__int64)ptr, a1 + 1, a4, 0xEBAu, 0);
              v74 = 0;
              v51 = sub_1587D10((__int64)ptr, &v74);
              v75 = *(_QWORD *)(v14 + 40);
              v52 = sub_15894B0(v51, &v75);
              v53 = (_QWORD *)(*(_QWORD *)(v14 + 16) & 0xFFFFFFFFFFFFFFF8LL);
              if ( (*(_QWORD *)(v14 + 16) & 4) != 0 )
                v53 = (_QWORD *)*v53;
              if ( *(_BYTE *)(v52 + 120) )
              {
                sub_AE9DF0((unsigned __int8 **)(v52 + 32), (__int64)v53, 0xCu);
              }
              else if ( *(_BYTE *)(v52 + 132) )
              {
                v58 = sub_168B9E0((_QWORD *)v52);
                v59 = *(_QWORD *)(v52 + 16);
                if ( v59 )
                  v59 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v59 + 32LL))(*(_QWORD *)(v52 + 16));
                v76 = v59;
                v60 = sub_1587BC0(v58, (__int64 *)&v76, v54, v55, v56, v57);
                sub_AE9DF0((unsigned __int8 **)(*v60 + 32LL * *(unsigned int *)(v52 + 128) + 8), (__int64)v53, 0xCu);
              }
              sub_15F7200(ptr);
              sub_168B9F0((__int64)ptr, a1 + 1, *(_DWORD *)(v70 + 24), 0x6Bu, 0);
              if ( v81 )
              {
                sub_AE9DF0(v80, v70, 0xAu);
              }
              else if ( v83 )
              {
                v63 = sub_168B9E0(ptr);
                v66 = v79[0];
                if ( v79[0] )
                  v66 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v79[0] + 32LL))(v79[0]);
                v76 = v66;
                v67 = sub_1587BC0(v63, (__int64 *)&v76, v61, v62, v64, v65);
                sub_AE9DF0((unsigned __int8 **)(*v67 + 32LL * v82 + 8), v70, 0xAu);
              }
              sub_15F7200(ptr);
              return 0;
            }
            LOBYTE(v77) = 0;
            sub_1DBA4B0((unsigned int)ptr, (_DWORD)a1, v14, 0, 0, 0);
            v43 = sub_1DD54A0((_DWORD)a1, a10, v14, v39, (unsigned int)ptr, v18, 1);
            v44 = v69;
            if ( ptr[0] != v79 )
              free(ptr[0]);
            if ( !v43 )
            {
              v45 = *(_QWORD *)(v14 + 128);
              if ( v45
                || (sub_7052B0((__int64 *)(*(_QWORD *)(v14 + 104) + 96LL), *(_QWORD *)(v14 + 104), v40, v41, v44, v42),
                    (v45 = *(_QWORD *)(v14 + 128)) != 0) )
              {
                v27 = *(__int64 **)(v45 + 88);
                if ( v27 )
                  goto LABEL_15;
              }
            }
            return 0;
          }
LABEL_14:
          v27 = *(__int64 **)(v26 + 88);
          if ( v27 )
          {
LABEL_15:
            LOBYTE(v77) = 0;
            sub_1DBA4B0((unsigned int)ptr, (_DWORD)a1, v14, 0, 0, 0);
            sub_1DDD4A0(a1, a10, v27, ptr, v18);
            if ( ptr[0] != v79 )
              free(ptr[0]);
            if ( v18 == 4 )
              sub_1884910((__int64)a1, a10, v27, 1, v28, v29);
            return v14;
          }
          goto LABEL_36;
        }
      }
      v23 = (_QWORD *)v14;
      if ( !*(_QWORD *)(v26 + 88) )
        goto LABEL_14;
    }
    v24 = sub_B97210((__int64)v23);
    LOBYTE(ptr[0]) = 0;
    v25 = sub_1CBF140(
            (__int64)a1,
            a4,
            v18,
            (__int64)v23,
            ((unsigned int)(*(__int64 *)v24 >> 1) & 3) + 1,
            *(unsigned int *)(v24 + 8),
            ptr);
    v22 = v68;
    v19 = v69;
    if ( v25 )
      return 0;
    if ( LOBYTE(ptr[0]) )
      return v14;
    v26 = *(_QWORD *)(v14 + 128);
    if ( v26 )
      goto LABEL_14;
    goto LABEL_35;
  }
  sub_168B9F0((__int64)ptr, a1 + 1, a4, 0xEB3u, 0);
  v36 = *(_QWORD *)(v14 + 48);
  if ( v36 )
    v37 = v36 & 0xFFFFFFFFFFFFFFF0LL;
  else
    v37 = sub_A7AA70(a1[31], v14, v32, v33, v34, v35);
  v76 = v37;
  sub_162B6D0((__int64)ptr, (__int64 *)&v76);
  sub_15F7200(ptr);
  sub_168B9F0((__int64)ptr, a1 + 1, *(_DWORD *)(v14 + 24), 0x17EFu, 0);
  sub_15F7200(ptr);
  return 0;
}
