__int64 *__fastcall sub_189D140(__int64 **a1, __m128i a2, double a3)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  bool v13; // r13
  __int64 v14; // rax
  bool v15; // zf
  __int64 *v16; // rax
  __int64 v17; // rdx
  __int64 *result; // rax
  __int64 v19; // rbp
  __int64 v20; // r14
  unsigned __int8 **v21; // rcx
  __int64 v22; // rax
  _QWORD *v23; // rax
  __int64 *v24; // r15
  __int64 v25; // r10
  __int64 v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rax
  __int64 *v29; // rax
  __int64 v30; // rax
  unsigned __int8 v31; // al
  __int64 v32; // rdi
  __int64 *v33; // rax
  __int64 *v34; // r13
  __int64 v35; // rbp
  __int64 v36; // rsi
  _QWORD *v37; // rax
  char *v38; // rdx
  __int64 v39; // rax
  int v40; // edx
  __int64 v41; // r13
  size_t v42; // r14
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // r15
  void *v49; // rax
  _QWORD *v50; // rax
  __int64 v51; // [rsp+8h] [rbp-1B0h]
  __int64 v52; // [rsp+8h] [rbp-1B0h]
  __int64 v53; // [rsp+8h] [rbp-1B0h]
  unsigned int v54; // [rsp+24h] [rbp-194h]
  __int64 v55; // [rsp+30h] [rbp-188h]
  __int64 v56; // [rsp+40h] [rbp-178h] BYREF
  __int64 v57; // [rsp+48h] [rbp-170h] BYREF
  __int64 v58[3]; // [rsp+50h] [rbp-168h] BYREF
  void *v59; // [rsp+68h] [rbp-150h]
  __int64 v60; // [rsp+78h] [rbp-140h] BYREF
  void *ptr; // [rsp+90h] [rbp-128h] BYREF
  __int64 v62; // [rsp+98h] [rbp-120h]
  int v63; // [rsp+A0h] [rbp-118h]
  char v64; // [rsp+A4h] [rbp-114h]
  __int64 v65; // [rsp+A8h] [rbp-110h] BYREF
  _QWORD v66[2]; // [rsp+F0h] [rbp-C8h] BYREF
  void *v67; // [rsp+100h] [rbp-B8h]
  unsigned __int8 *v68[11]; // [rsp+110h] [rbp-A8h] BYREF
  char v69; // [rsp+168h] [rbp-50h]
  unsigned int v70; // [rsp+170h] [rbp-48h]
  char v71; // [rsp+174h] [rbp-44h]

  v4 = sub_1E5F010(*a1[1], 0) & 0xFFFFFFFFFFFFFFF0LL;
  if ( v4
    && ((v8 = *(_QWORD *)v4, v9 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v4 + 16LL) - 35, (unsigned int)v9 <= 1)
     || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 35 <= 1
     && (v8 = sub_F63050(v8, 0, v9, v5)) != 0)
    && (v10 = (__int64 *)sub_9C7D40(v8, 0, v9, v5, v6), (v55 = (__int64)v10) != 0) )
  {
    v13 = 0;
    v14 = sub_BAE550(v10, 0, v11, v12, v6, v7);
    if ( v14 )
    {
      v15 = *(_DWORD *)a1[2] == *(_DWORD *)(v14 + 8);
      v16 = a1[3];
      v13 = v15;
      v17 = *((unsigned int *)v16 + 2);
      if ( !(_DWORD)v17 )
        goto LABEL_6;
      goto LABEL_11;
    }
  }
  else
  {
    v55 = 0;
    v13 = 0;
  }
  v16 = a1[3];
  v17 = *((unsigned int *)v16 + 2);
  if ( !(_DWORD)v17 )
    goto LABEL_6;
LABEL_11:
  v19 = 0;
  v54 = 0;
  v20 = 4LL * (unsigned int)(v17 - 1);
  v21 = v68;
  while ( 1 )
  {
    v24 = (__int64 *)(2 * v19 + *v16);
    v25 = *v24;
    if ( *(_BYTE *)a1[4] )
    {
      v22 = *(_QWORD *)(v25 + 104);
      if ( v22 )
        goto LABEL_13;
    }
    else
    {
      sub_18F5260(**a1, *v24, v19 + *a1[5], 1, 0, 0, 0, 0, 0);
      v25 = *v24;
      v22 = *(_QWORD *)(*v24 + 104);
      if ( v22 )
      {
LABEL_13:
        v23 = (_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF8LL);
        if ( !v23 )
          goto LABEL_15;
LABEL_14:
        if ( *v23 == v25 )
          goto LABEL_15;
        goto LABEL_22;
      }
    }
    v51 = v25;
    sub_A79820((__int64 *)(*(_QWORD *)(v25 + 96) + 88LL), *(_QWORD *)(v25 + 96), v17, (__int64)v21, v6, v7);
    v25 = v51;
    v23 = (_QWORD *)(*(_QWORD *)(v51 + 104) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v23 )
      goto LABEL_14;
LABEL_22:
    v17 = *v24;
    v26 = *(_QWORD *)(*v24 + 104);
    if ( !v26 )
    {
      v52 = *v24;
      sub_A79820((__int64 *)(*(_QWORD *)(v17 + 96) + 88LL), *(_QWORD *)(v17 + 96), v17, (__int64)v21, v6, v7);
      v17 = v52;
      v26 = *(_QWORD *)(v52 + 104);
    }
    v27 = (_QWORD *)(v26 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v27 && *v27 )
    {
      v28 = *(_QWORD *)(*v24 + 104);
      if ( !v28 )
      {
        v53 = *v24;
        sub_A79820((__int64 *)(*(_QWORD *)(*v24 + 96) + 88LL), *(_QWORD *)(*v24 + 96), *v24, (__int64)v21, v6, v7);
        v28 = *(_QWORD *)(v53 + 104);
      }
      v17 = 0;
      v29 = (__int64 *)(v28 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v29 )
        v17 = *v29;
      *v24 = v17;
    }
LABEL_15:
    v58[0] = 0;
    if ( *(_BYTE *)a1[4] && (unsigned __int8)sub_1896AF0(*v24, v58, v17, (__int64)v21, v6, v7) )
    {
      sub_168B9F0((__int64)v66, *a1, *(_DWORD *)(*a1[5] + v19), 0x1D2Du, 0);
      ptr = *(void **)(*v24 + 40);
      sub_15894B0((__int64)v66, (__int64 *)&ptr);
      sub_15F7200(v66);
      sub_168B9F0((__int64)v66, *a1, *(_DWORD *)(v58[0] + 24), 0x18B6u, 0);
      if ( v69 )
      {
        sub_1894370(v68, v58[0]);
        sub_15F7200(v66);
      }
      else if ( v71 )
      {
        v48 = sub_168B9E0(v66);
        v49 = v67;
        if ( v67 )
          v49 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v67 + 32LL))(v67);
        ptr = v49;
        v50 = sub_1587BC0(v48, (__int64 *)&ptr, v44, v45, v46, v47);
        sub_1894370((unsigned __int8 **)(*v50 + 32LL * v70 + 8), v58[0]);
        sub_15F7200(v66);
      }
      else
      {
        sub_15F7200(v66);
      }
    }
    if ( v13 )
      break;
LABEL_17:
    if ( v20 == v19 )
      goto LABEL_34;
LABEL_18:
    v16 = a1[3];
    v19 += 4;
  }
  v30 = sub_1A5B7C0(**a1, *a1[6], *(_QWORD *)(*a1[7] + 2 * v19), *(unsigned int *)(v19 + *a1[5]), 0, 0);
  if ( !v30 )
  {
    v13 = 0;
    goto LABEL_17;
  }
  v31 = *(_BYTE *)(v30 + 28) & 0x7F;
  if ( v31 == 20 )
  {
    v17 = v54;
    if ( !v54 )
      v54 = *(_DWORD *)(*a1[5] + v19);
    goto LABEL_17;
  }
  v13 = (unsigned int)v31 - 58 <= 9;
  if ( v20 != v19 )
    goto LABEL_18;
LABEL_34:
  if ( v54 && v13 )
  {
    v32 = (__int64)a1[8];
    v62 = 8;
    v63 = 0;
    ptr = &v65;
    v64 = 1;
    sub_A798C0(v32, v55, (__int64)&ptr, (__int64)v21, v6, v7);
    v33 = a1[3];
    v34 = (__int64 *)*v33;
    v35 = *v33 + 8LL * *((unsigned int *)v33 + 2);
    if ( *v33 != v35 )
    {
      do
      {
        while ( 1 )
        {
          v36 = *v34;
          if ( !v64 )
            break;
          v37 = ptr;
          v38 = (char *)ptr + 8 * HIDWORD(v62);
          if ( ptr == v38 )
            goto LABEL_6;
          while ( v36 != *v37 )
          {
            if ( v38 == (char *)++v37 )
              goto LABEL_6;
          }
          if ( (__int64 *)v35 == ++v34 )
            goto LABEL_43;
        }
        if ( !sub_2236570(&ptr, v36) )
          goto LABEL_46;
        ++v34;
      }
      while ( (__int64 *)v35 != v34 );
    }
LABEL_43:
    sub_168B9F0((__int64)v66, *a1, v54, 0x1C21u, 0);
    v56 = *(_QWORD *)(v55 + 40);
    v39 = sub_15894B0((__int64)v66, &v56);
    v40 = *(_DWORD *)a1[10];
    LODWORD(v57) = *(_DWORD *)a1[9];
    HIDWORD(v57) = v40;
    v41 = sub_1587DB0(v39, &v57);
    v42 = j__strlen(" *");
    v43 = sub_15F0EF0(**a1, v54, 0, a2, a3);
    sub_9EC740((__int64)v58, v43, " *", v42, 0);
    sub_1589170(v41, v58);
    if ( v59 != &v60 )
      operator delete(v59);
    sub_15F7200(v66);
LABEL_46:
    if ( !v64 )
      free(ptr);
  }
LABEL_6:
  *(_DWORD *)a1[11] = *(_DWORD *)a1[9];
  result = a1[12];
  *(_DWORD *)result = *(_DWORD *)a1[10];
  return result;
}
