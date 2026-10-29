__int64 __fastcall sub_B95C70(__int64 a1, __m128 a2, __m128 a3, __m128 a4)
{
  unsigned int **v5; // r13
  unsigned int **v6; // rcx
  _DWORD **v7; // r12
  _DWORD **v8; // rbx
  _QWORD *v9; // r15
  _DWORD *v10; // rax
  _DWORD **v11; // rax
  _DWORD *v12; // rax
  int *v13; // rax
  unsigned int **v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // r15d
  unsigned int v17; // eax
  __int64 v18; // r12
  unsigned int v19; // ebx
  __int64 v20; // r12
  __int64 v22; // rax
  unsigned int *v23; // r13
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  void *v30; // rbx
  __int64 v31; // r15
  unsigned int *v32; // rbx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned int *v36; // rax
  int v37; // ecx
  int v38; // r8d
  int v39; // r9d
  __int64 v40; // rdi
  unsigned int v41; // eax
  __int64 v42; // rbx
  void *v43; // rbx
  __int64 v44; // [rsp+0h] [rbp-80h]
  __int64 v45; // [rsp+0h] [rbp-80h]
  unsigned int **v46; // [rsp+8h] [rbp-78h]
  _QWORD *v47; // [rsp+8h] [rbp-78h]
  int v48; // [rsp+8h] [rbp-78h]
  unsigned int **v49; // [rsp+10h] [rbp-70h]
  int v50; // [rsp+10h] [rbp-70h]
  __int64 v51; // [rsp+10h] [rbp-70h]
  int v52; // [rsp+10h] [rbp-70h]
  _DWORD **v53; // [rsp+18h] [rbp-68h]
  _QWORD *v54; // [rsp+18h] [rbp-68h]
  __int64 v55; // [rsp+18h] [rbp-68h]
  __int64 v56; // [rsp+18h] [rbp-68h]
  __int64 v57; // [rsp+20h] [rbp-60h]
  __int64 v58; // [rsp+20h] [rbp-60h]
  __int64 v59; // [rsp+28h] [rbp-58h] BYREF
  __int64 v60[2]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v61[64]; // [rsp+40h] [rbp-40h] BYREF

  v5 = *(unsigned int ***)(a1 + 200);
  if ( v5 )
  {
    v6 = &v5[*((unsigned int *)v5 - 1)];
    if ( v5 != v6 )
    {
      while ( 1 )
      {
        v53 = nullptr;
        v7 = *(_DWORD ***)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL) + 8LL * **v5);
        v8 = v7;
        v9 = *((_QWORD **)v7[14] + 1);
        while ( v53 != v7 )
        {
          if ( v7 != v8 && !*((_WORD *)*v8 + 2) )
          {
            v10 = *(_DWORD **)(*((_QWORD *)*v8 + 2) + 24LL);
            if ( v10 )
            {
              if ( *v10 == *(_DWORD *)(a1 + 256) && v10[1] == 66 )
                goto LABEL_18;
            }
          }
LABEL_8:
          v11 = v53;
          if ( !v53 )
            v11 = v8;
          v53 = v11;
LABEL_11:
          v8 = (_DWORD **)v8[2];
        }
        if ( v53 != v8 )
          break;
        if ( v6 == ++v5 )
          goto LABEL_25;
      }
      if ( *((_WORD *)*v8 + 2) )
        goto LABEL_11;
      v12 = *(_DWORD **)(*((_QWORD *)*v8 + 2) + 24LL);
      if ( !v12 || *(_DWORD *)(a1 + 256) != *v12 || v12[1] != 66 )
        goto LABEL_11;
LABEL_18:
      if ( v9 != *((_QWORD **)v8[14] + 1) )
      {
        v49 = v6;
        v13 = *(int **)(*(_QWORD *)(sub_15D1F10(*v9) + 24) + 8LL);
        if ( *((_BYTE *)v13 + 8)
          || (v14 = v49,
              v50 = *v13,
              v46 = v14,
              v15 = *(_QWORD *)(*(_QWORD *)(sub_15D1F10(*(_QWORD *)v8[14]) + 24) + 8LL),
              *(_BYTE *)(v15 + 8)) )
        {
LABEL_37:
          sub_DBF6E(0);
        }
        v6 = v46;
        if ( *(_DWORD *)v15 == v50 )
        {
          v16 = sub_966380(a1, *v7, *v8);
          v17 = sub_966380(a1, *(_DWORD **)v8[14], *(_DWORD **)v7[14]);
          v18 = *(_QWORD *)(a1 + 16);
          v19 = v17;
          (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v18 + 7488) + 48LL))(
            *(_QWORD *)(v18 + 7488),
            *(_QWORD *)(*(_QWORD *)(v18 + 8840) + 8LL * (v16 >> 1)));
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v18 + 7488) + 64LL))(*(_QWORD *)(v18 + 7488));
          v20 = *(_QWORD *)(a1 + 16);
          (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v20 + 7488) + 48LL))(
            *(_QWORD *)(v20 + 7488),
            *(_QWORD *)(*(_QWORD *)(v20 + 8840) + 8LL * (v19 >> 1)));
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v20 + 7488) + 64LL))(*(_QWORD *)(v20 + 7488));
          sub_B6A470(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 8), v16 ^ 1, v19, 0, 0);
          return 1;
        }
      }
      goto LABEL_8;
    }
  }
LABEL_25:
  v22 = *(_QWORD *)(a1 + 208);
  if ( !v22 )
    return 0;
  v47 = (_QWORD *)(v22 + 8LL * *(unsigned int *)(v22 - 4));
  if ( v47 == *(_QWORD **)(a1 + 208) )
    return 0;
  v54 = *(_QWORD **)(a1 + 208);
  v51 = a1 + 256;
  while ( 1 )
  {
    v31 = *v54;
    v32 = (unsigned int *)sub_16747F0(v51, *v54);
    sub_B6F780(
      *(_QWORD **)(a1 + 16),
      (__int64)v32,
      0,
      a2,
      a3,
      a4,
      v33,
      v34,
      v35,
      v44,
      (int)v47,
      v51,
      (__int64)v54,
      v57,
      v59,
      v60[0]);
    v36 = *(unsigned int **)(*(_QWORD *)(sub_15D1F10(v31) + 24) + 8LL);
    if ( *((_BYTE *)v36 + 8) )
      goto LABEL_37;
    sub_17F6290(v60, *v36);
    v40 = *(_QWORD *)(a1 + 288);
    if ( !v40 )
    {
      sub_16669E0(a1 + 280);
      v40 = *(_QWORD *)(a1 + 288);
    }
    sub_166A700(v40, (unsigned int)v60, 1, v37, v38, v39);
    v23 = (unsigned int *)sub_15E1B70(*(_QWORD *)(a1 + 280));
    sub_B6F780(*(_QWORD **)(a1 + 16), (__int64)v23, 0, a2, a3, a4, v24, v25, v26, v45, v48, v52, v56, v58, v59, v60[0]);
    v27 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL);
    v28 = *(_QWORD *)(v27 + 8LL * *v32);
    v29 = *(_QWORD *)(v27 + 8LL * *v23);
    if ( *(_QWORD *)(v29 + 8) != *(_QWORD *)(v28 + 8) )
      break;
    v30 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v60);
    sub_182CBA0(v30, v61);
    v54 = (_QWORD *)(v55 + 8);
    if ( v47 == v54 )
      return 0;
  }
  v41 = sub_966380(a1, *(_DWORD **)v28, *(_DWORD **)v29);
  v42 = *(_QWORD *)(a1 + 16);
  HIDWORD(v59) = v41;
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v42 + 7488) + 48LL))(
    *(_QWORD *)(v42 + 7488),
    *(_QWORD *)(*(_QWORD *)(v42 + 8840) + 8LL * (v41 >> 1)));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v42 + 7488) + 64LL))(*(_QWORD *)(v42 + 7488));
  sub_B69FE0(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 8), 1, (unsigned int *)&v59 + 1, 0, 0, 1u);
  v43 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v60);
  sub_182CBA0(v43, v61);
  return 1;
}

