__int64 __fastcall sub_166BBA0(__int64 a1, const void *a2, size_t a3, int a4, unsigned int a5)
{
  __int64 v8; // r12
  unsigned int v9; // eax
  int v10; // eax
  __int64 *v11; // rsi
  __int64 *v12; // r15
  __int64 result; // rax
  int v14; // edx
  __int64 v15; // r13
  unsigned int v16; // eax
  unsigned int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 *v20; // r9
  __int64 *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned int v24; // r10d
  __int64 *v25; // r9
  _QWORD *v26; // rcx
  unsigned int v27; // eax
  __int64 v28; // r13
  __int64 v29; // rbx
  __int64 v30; // r9
  __int64 v31; // r9
  __int64 v32; // rax
  const char *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rbp
  __int64 v41; // rax
  _QWORD *v42; // rax
  __int64 v44; // [rsp+0h] [rbp-F8h]
  __int64 v45; // [rsp+0h] [rbp-F8h]
  __int64 v46; // [rsp+0h] [rbp-F8h]
  __int64 v47; // [rsp+0h] [rbp-F8h]
  unsigned int v48; // [rsp+8h] [rbp-F0h]
  __int64 v49; // [rsp+8h] [rbp-F0h]
  __int64 *v50; // [rsp+10h] [rbp-E8h]
  _QWORD *v51; // [rsp+18h] [rbp-E0h]
  __int64 v52[2]; // [rsp+20h] [rbp-D8h] BYREF
  __int64 *v53[2]; // [rsp+30h] [rbp-C8h] BYREF
  _QWORD *v54; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v55[11]; // [rsp+50h] [rbp-A8h] BYREF
  char v56; // [rsp+A8h] [rbp-50h]
  unsigned int v57; // [rsp+B0h] [rbp-48h]
  char v58; // [rsp+B4h] [rbp-44h]

  v8 = *(_QWORD *)(a1 + 248);
  v9 = sub_2244B30(a2, a3);
  v10 = sub_2244E60(v8 + 23288, a2, a3, v9);
  if ( v10 == -1 )
    v11 = (__int64 *)(*(_QWORD *)(v8 + 23288) + 8LL * *(unsigned int *)(v8 + 23296));
  else
    v11 = (__int64 *)(*(_QWORD *)(v8 + 23288) + 8LL * v10);
  sub_1668730(v53, v11, 1);
  v12 = v53[0];
  sub_1668730(
    v53,
    (__int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 23288LL) + 8LL * *(unsigned int *)(*(_QWORD *)(a1 + 248) + 23296LL)),
    1);
  if ( v53[0] == v12 )
    goto LABEL_6;
  result = 0;
  v14 = *(_DWORD *)(*v12 + 20);
  if ( v14 == a4 )
    return result;
  if ( (v14 & 8) != 0 )
  {
LABEL_6:
    v15 = *(_QWORD *)(a1 + 248);
    v16 = sub_2244B30(a2, a3);
    v17 = sub_2244CB0(v15 + 23288, a2, a3, v16);
    v20 = (__int64 *)(*(_QWORD *)(v15 + 23288) + 8LL * v17);
    if ( *v20 )
    {
      if ( *v20 != -8 )
      {
        sub_1668730(v53, v20, 0);
        v21 = v53[0];
LABEL_9:
        v22 = *v21;
        *(_QWORD *)(v22 + 8) = 0;
        *(_DWORD *)(v22 + 16) = a5;
        *(_DWORD *)(v22 + 20) = a4;
        return 0;
      }
      --*(_DWORD *)(v15 + 23304);
    }
    v50 = v20;
    v48 = v17;
    v23 = sub_22300B0(a3 + 25, 8, v17, v18, v19, v20);
    v24 = v48;
    v25 = v50;
    v26 = (_QWORD *)v23;
    if ( a3 )
    {
      v51 = (_QWORD *)v23;
      memcpy((void *)(v23 + 24), a2, a3);
      v26 = v51;
      v25 = v50;
      v24 = v48;
    }
    *((_BYTE *)v26 + a3 + 24) = 0;
    *v26 = a3;
    v26[1] = 0;
    v26[2] = 0;
    *v25 = (__int64)v26;
    ++*(_DWORD *)(v15 + 23300);
    v27 = sub_22450D0(v15 + 23288, v24);
    sub_1668730(v53, (__int64 *)(*(_QWORD *)(v15 + 23288) + 8LL * v27), 0);
    v21 = v53[0];
    goto LABEL_9;
  }
  v28 = a1 + 8;
  v29 = *v12 + 8;
  v49 = *v12;
  sub_168B9F0(v53, a1 + 8, a5, 4968, 0);
  v30 = v49;
  if ( v56 )
  {
    sub_AE9DF0(v55, (__int64)"this", 1u);
    v30 = v49;
    goto LABEL_23;
  }
  if ( v58 )
  {
    sub_1669EA0((__int64)v53, (__int64)"this");
    v30 = v49;
LABEL_23:
    if ( v56 )
    {
      v45 = v30;
      sub_A68BE0(v55, (__int64 *)v29);
      v30 = v45;
    }
    else if ( v58 )
    {
      v46 = v30;
      v35 = sub_168B9E0(v53);
      v39 = v46;
      v40 = v35;
      v41 = (__int64)v54;
      if ( v54 )
      {
        v41 = (*(__int64 (__fastcall **)(_QWORD *, char *, _QWORD, __int64, __int64, __int64))(*v54 + 32LL))(
                v54,
                "this",
                *v54,
                v37,
                v38,
                v46);
        v39 = v46;
      }
      v47 = v39;
      v52[0] = v41;
      v42 = sub_1587BC0(v40, v52, v36, v37, v38, v39);
      sub_A68BE0((unsigned __int8 **)(*v42 + 32LL * v57 + 8), (__int64 *)v29);
      v30 = v47;
    }
  }
  v44 = v30;
  sub_15F7200(v53);
  v31 = v44;
  v32 = *(_QWORD *)(v44 + 8);
  if ( v32 )
  {
    sub_168B9F0(v53, v28, *(unsigned int *)(v32 + 24), 103, 0);
    v33 = sub_995750(*(_QWORD *)(v44 + 8));
    v52[1] = v34;
    v52[0] = (__int64)v33;
    sub_166BAF0((__int64)v53, (__int64)v52);
    sub_15F7200(v53);
    v31 = v44;
  }
  result = 1;
  if ( *(_DWORD *)(v31 + 16) )
  {
    sub_168B9F0(v53, v28, *(unsigned int *)(v29 + 8), 111, 0);
    sub_15F7200(v53);
    return 1;
  }
  return result;
}
