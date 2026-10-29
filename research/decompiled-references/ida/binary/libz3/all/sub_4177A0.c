__int64 __fastcall sub_4177A0(__int64 *a1, double a2)
{
  __int64 v2; // r13
  __int64 v3; // rax
  unsigned int v4; // r15d
  __int64 v6; // r14
  __int64 *v7; // rax
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // r15
  __int64 v13; // rdi
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // r13
  __int64 v18; // rdx
  unsigned __int64 v19; // rsi
  unsigned int v20; // eax
  __int64 v21; // r15
  __int64 v22; // r13
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 *v25; // rbp
  __int64 v26; // rax
  __int64 v27; // r12
  __int64 v28; // rdx
  __int64 *v29; // r14
  unsigned int v30; // eax
  __int64 v31; // rbp
  __int64 v32; // rax
  __int64 v33; // r12
  int v34; // eax
  int v35; // r8d
  int v36; // r9d
  __int64 v37; // rax
  __int64 v38; // r14
  __int64 v39; // rdx
  unsigned int v40; // ecx
  int v41; // [rsp+0h] [rbp-E8h]
  __int64 v42; // [rsp+8h] [rbp-E0h]
  __int64 *v43; // [rsp+10h] [rbp-D8h]
  __int64 v44; // [rsp+18h] [rbp-D0h]
  __int64 *v45; // [rsp+20h] [rbp-C8h]
  char v46; // [rsp+28h] [rbp-C0h]
  int *v47; // [rsp+28h] [rbp-C0h]
  int *v48; // [rsp+30h] [rbp-B8h]
  __int64 v49; // [rsp+38h] [rbp-B0h]
  int v50[2]; // [rsp+40h] [rbp-A8h] BYREF
  int v51[2]; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v52; // [rsp+50h] [rbp-98h] BYREF
  int v53[2]; // [rsp+58h] [rbp-90h] BYREF
  int v54[2]; // [rsp+60h] [rbp-88h] BYREF
  __int64 v55; // [rsp+68h] [rbp-80h]
  __int64 v56; // [rsp+70h] [rbp-78h] BYREF
  int v57[2]; // [rsp+78h] [rbp-70h] BYREF
  int v58[2]; // [rsp+80h] [rbp-68h] BYREF
  int v59[2]; // [rsp+88h] [rbp-60h]
  int v60[2]; // [rsp+90h] [rbp-58h] BYREF
  int v61[2]; // [rsp+98h] [rbp-50h] BYREF
  int v62[2]; // [rsp+A0h] [rbp-48h] BYREF
  __int64 v63; // [rsp+A8h] [rbp-40h]

  v2 = a1[2];
  v3 = *((unsigned int *)a1 + 6);
  if ( v2 )
  {
    v4 = v3 + 1;
    if ( (unsigned int)(v3 + 1) >= *(_DWORD *)(v2 - 4) )
      return 0;
    *(_QWORD *)v53 = 0;
    v6 = *(_QWORD *)(v2 + 56 * v3);
    v7 = *(__int64 **)(*a1 + 16);
    v8 = *v7;
    v43 = &v56;
    v42 = v7[1];
    v52 = v42;
    do
    {
      v9 = *(_QWORD *)(v2 + 56LL * v4 + 16);
      v56 = v9;
      if ( v9 )
        ++*(_DWORD *)(v9 + 8);
      sub_407600((unsigned int **)v53, &v56);
      v2 = a1[2];
      ++v4;
    }
    while ( v2 && v4 < *(_DWORD *)(v2 - 4) );
    v10 = *((unsigned int *)a1 + 6);
    v11 = a1[4];
    v44 = v8 + 8;
    v55 = v42;
    *(_QWORD *)v54 = 0;
    sub_43D1D0(v8 + 8, v11, (unsigned int)(*(_DWORD *)(v2 + 56 * v10 + 8) + 1), 0, v54, 0);
    *(_QWORD *)v60 = *(_QWORD *)v54;
    if ( *(_QWORD *)v54 )
      ++*(_DWORD *)(*(_QWORD *)v54 + 8LL);
    v48 = v60;
    sub_407600((unsigned int **)v53, v60);
    *(_QWORD *)v50 = 0;
    v45 = &v52;
    sub_41C800(v62, &v52);
    v12 = v63;
    v13 = *(_QWORD *)v62;
    v46 = sub_3FED10(v6, *(__int64 *)v62, v50);
    v2 = 0;
    sub_3FCDF0(v13, v12);
    if ( !v46 )
      goto LABEL_11;
    sub_1360B80(*(_QWORD *)v50 + 128LL, 0);
    v15 = sub_3FEF00(v6, *(__int64 *)v50, 1);
    *(_QWORD *)v57 = 0;
    v16 = v15;
    v17 = *(_QWORD *)(v15 + 8);
    v56 = v42;
    if ( v17 )
      ++*(_DWORD *)(v17 + 8);
    sub_23A6F0((unsigned int **)v57);
    v18 = *(_QWORD *)v57;
    v19 = *(_QWORD *)v50;
    v20 = *(_DWORD *)(*(_QWORD *)v57 - 4LL);
    *(_QWORD *)(*(_QWORD *)v57 + 8LL * v20) = v17;
    *(_DWORD *)(v18 - 4) = v20 + 1;
    sub_3D6CD0(v62, v19, &v56);
    sub_41C800(v58, v62);
    v49 = *(_QWORD *)v59;
    sub_2334C0((__int64 *)v62);
    v21 = *(_QWORD *)v58;
    sub_404CE0(a1[2] + 56LL * *((unsigned int *)a1 + 6), *(__int64 *)v58, 1, (__int64 *)(v16 + 24));
    v22 = *(_QWORD *)(a1[2] + 56LL * *((unsigned int *)a1 + 6));
    *(_QWORD *)v61 = 0;
    *(_QWORD *)v60 = v42;
    sub_2FCDE0(&v52);
    *(_QWORD *)v51 = v21;
    if ( v21 )
      ++*(_DWORD *)(v21 + 8);
    sub_407600((unsigned int **)v53, v51);
    *(_QWORD *)v62 = *(_QWORD *)v54;
    if ( *(_QWORD *)v54 )
      ++*(_DWORD *)(*(_QWORD *)v54 + 8LL);
    sub_407600((unsigned int **)v53, v62);
    sub_41C800(v62, &v52);
    v23 = a1[4];
    v24 = v63;
    a1[4] = *(_QWORD *)v62;
    sub_3FCDF0(v23, v24);
    v25 = *(__int64 **)(v16 + 24);
    if ( v25 )
    {
      v26 = *((unsigned int *)v25 - 1);
      if ( (_DWORD)v26 )
      {
        v27 = *v25;
        v28 = *(_QWORD *)v61;
        v29 = &v25[v26];
        if ( *v25 )
          ++*(_DWORD *)(v27 + 8);
        if ( v28 )
          goto LABEL_28;
LABEL_24:
        sub_3A6B20((unsigned int **)v61);
        v28 = *(_QWORD *)v61;
        v30 = *(_DWORD *)(*(_QWORD *)v61 - 4LL);
        while ( 1 )
        {
          ++v25;
          *(_QWORD *)(v28 + 8LL * v30) = v27;
          *(_DWORD *)(v28 - 4) = v30 + 1;
          if ( v29 == v25 )
            break;
          v27 = *v25;
          if ( *v25 )
            ++*(_DWORD *)(v27 + 8);
LABEL_28:
          v30 = *(_DWORD *)(v28 - 4);
          if ( v30 == *(_DWORD *)(v28 - 8) )
            goto LABEL_24;
        }
      }
    }
    v31 = 0;
    v47 = v61;
    v32 = *(unsigned int *)(*(_QWORD *)(v22 + 24) + 32LL);
    v33 = 8 * v32;
    if ( (_DWORD)v32 )
    {
      do
      {
        v34 = sub_439010(v44, *(_QWORD *)(*(_QWORD *)(v22 + 48) + v31), 1, 0);
        v37 = sub_15DC610(
                v42,
                v34,
                0,
                0,
                v35,
                v36,
                v41,
                v42,
                (int)v43,
                v44,
                (int)v45,
                (char)v47,
                (int)v48,
                v49,
                v50[0],
                *(void **)v51);
        v38 = v37;
        if ( v37 )
          ++*(_DWORD *)(v37 + 8);
        v39 = *(_QWORD *)v61;
        if ( !*(_QWORD *)v61 || (v40 = *(_DWORD *)(*(_QWORD *)v61 - 4LL), v40 == *(_DWORD *)(*(_QWORD *)v61 - 8LL)) )
        {
          sub_3A6B20((unsigned int **)v47);
          v39 = *(_QWORD *)v61;
          v40 = *(_DWORD *)(*(_QWORD *)v61 - 4LL);
        }
        v31 += 8;
        *(_QWORD *)(v39 + 8LL * v40) = v38;
        *(_DWORD *)(v39 - 4) = v40 + 1;
      }
      while ( v31 != v33 );
    }
    else
    {
      v39 = *(_QWORD *)v61;
      if ( !*(_QWORD *)v61 )
      {
LABEL_41:
        sub_2B4F40((__int64 *)v48);
        ++*((_DWORD *)a1 + 6);
        v2 = sub_416440(a1, *(char **)v50, a2);
        sub_3FCDF0(v21, v49);
        sub_2334C0(v43);
LABEL_11:
        sub_3FCDA0(*(void (****)(void))v50);
        sub_3FCDF0(*(__int64 *)v54, v55);
        sub_2334C0(v45);
        return v2;
      }
    }
    if ( *(_DWORD *)(v39 - 4) )
    {
      sub_3EE030((__int64)v48, (__int64)(a1 + 6));
      sub_41D160(a1 + 6);
      sub_3FF2A0(
        *(_QWORD *)(*a1 + 16),
        (__int64 *)v48,
        a1 + 4,
        *(char **)v50,
        1u,
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*a1 + 16) + 16LL) + 662LL));
      sub_3EE030((__int64)(a1 + 6), (__int64)v48);
      sub_41D160(v48);
    }
    goto LABEL_41;
  }
  return v2;
}

