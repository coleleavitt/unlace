__int64 __fastcall sub_1879720(unsigned __int8 **a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned __int8 *v5; // rax
  _QWORD *v6; // r12
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r15
  unsigned int v12; // ebx
  unsigned __int64 v14; // rax
  __int64 *v15; // r15
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  unsigned int *v20; // rax
  unsigned int v21; // ebx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // r15
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r15
  __int64 v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  _QWORD *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rbx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rax
  _QWORD *v53; // rax
  unsigned __int64 v54; // [rsp+0h] [rbp-E8h]
  __int64 v55; // [rsp+0h] [rbp-E8h]
  __int64 v56; // [rsp+0h] [rbp-E8h]
  __int64 v57; // [rsp+8h] [rbp-E0h] BYREF
  __int64 v58; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v59; // [rsp+18h] [rbp-D0h] BYREF
  _QWORD v60[25]; // [rsp+20h] [rbp-C8h] BYREF

  v5 = *a1;
  v57 = a3;
  v6 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)v5 + 120LL) + 8LL * a2);
  if ( (a3 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
    v7 = a2 + 1;
    sub_168B9F0((__int64)v60, (__int64 *)a1[1] + 1, *(_DWORD *)(*(_QWORD *)v5 + 24LL), *(_DWORD *)a1[2], 0);
    v8 = sub_15890D0((__int64)v60, a1[3]);
    v9 = sub_15890D0(v8, a1[4]);
    v58 = *(_QWORD *)(*(_QWORD *)*a1 + 40LL);
    v10 = sub_15894B0(v9, &v58);
    v11 = v10;
    if ( *(_BYTE *)(v10 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v10 + 32), v7, 3u);
      if ( !*(_BYTE *)(v11 + 120) )
        goto LABEL_28;
    }
    else
    {
      if ( !*(_BYTE *)(v10 + 132) )
      {
LABEL_4:
        v59 = (*(__int64 (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
        v12 = *(unsigned __int8 *)(sub_1587DB0(v11, &v59) + 120);
        sub_15F7200(v60);
        return v12;
      }
      v41 = sub_168B9E0((_QWORD *)v10);
      v45 = *(_QWORD *)(v11 + 16);
      if ( v45 )
      {
        v56 = v41;
        v45 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v45 + 32LL))(v45);
        v41 = v56;
      }
      v59 = v45;
      v46 = sub_1587BC0(v41, &v59, v41, v42, v43, v44);
      sub_AE9DF0((unsigned __int8 **)(*v46 + 32LL * *(unsigned int *)(v11 + 128) + 8), v7, 3u);
      if ( !*(_BYTE *)(v11 + 120) )
      {
LABEL_28:
        if ( *(_BYTE *)(v11 + 132) )
        {
          v49 = sub_168B9E0((_QWORD *)v11);
          v52 = *(_QWORD *)(v11 + 16);
          if ( v52 )
            v52 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v52 + 32LL))(*(_QWORD *)(v11 + 16));
          v59 = v52;
          v53 = sub_1587BC0(v49, &v59, v47, v48, v50, v51);
          sub_AE9DF0((unsigned __int8 **)(*v53 + 32LL * *(unsigned int *)(v11 + 128) + 8), a4, 1u);
        }
        goto LABEL_4;
      }
    }
    sub_AE9DF0((unsigned __int8 **)(v11 + 32), a4, 1u);
    goto LABEL_4;
  }
  v14 = sub_183A700(
          (__int64 *)a1[5],
          *(_QWORD *)&byte_8[v57 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
        | ((unsigned __int8)*(_QWORD *)&byte_8[v57 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v57) & 7,
          *(_QWORD *)&byte_8[v57 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL,
          a3 & 0xFFFFFFFFFFFFFFF0LL);
  v15 = (__int64 *)a1[5];
  v54 = v14;
  v60[0] = v6[6];
  v16 = sub_6D5440(v60);
  v19 = sub_183A700(v15, v16, v17, v18);
  if ( v19 == v54 )
  {
    return 0;
  }
  else
  {
    if ( (*(_BYTE *)(*(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
      v20 = (unsigned int *)a1[6];
    else
      v20 = (unsigned int *)a1[2];
    v21 = a2 + 1;
    sub_168B9F0((__int64)v60, (__int64 *)a1[1] + 1, *(_DWORD *)(*(_QWORD *)*a1 + 24LL), *v20, 0);
    v22 = sub_15890D0((__int64)v60, a1[3]);
    v23 = sub_15890D0(v22, a1[4]);
    v58 = *(_QWORD *)(*(_QWORD *)*a1 + 40LL);
    v24 = sub_15894B0(v23, &v58);
    v25 = v24;
    if ( *(_BYTE *)(v24 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v24 + 32), v21, 3u);
    }
    else if ( *(_BYTE *)(v24 + 132) )
    {
      v35 = sub_168B9E0((_QWORD *)v24);
      v39 = *(_QWORD *)(v25 + 16);
      if ( v39 )
      {
        v55 = v35;
        v39 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v39 + 32LL))(v39);
        v35 = v55;
      }
      v59 = v39;
      v40 = sub_1587BC0(v35, &v59, v35, v36, v37, v38);
      sub_AE9DF0((unsigned __int8 **)(*v40 + 32LL * *(unsigned int *)(v25 + 128) + 8), v21, 3u);
    }
    v26 = sub_1605D30(v25, &v57);
    v27 = v26;
    if ( *(_BYTE *)(v26 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v26 + 32), a4, 1u);
    }
    else if ( *(_BYTE *)(v26 + 132) )
    {
      v32 = sub_168B9E0((_QWORD *)v26);
      v33 = *(_QWORD *)(v27 + 16);
      if ( v33 )
        v33 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v33 + 32LL))(*(_QWORD *)(v27 + 16));
      v59 = v33;
      v34 = sub_1587BC0(v32, &v59, v28, v29, v30, v31);
      sub_AE9DF0((unsigned __int8 **)(*v34 + 32LL * *(unsigned int *)(v27 + 128) + 8), a4, 1u);
    }
    v59 = (*(__int64 (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
    v12 = *(unsigned __int8 *)(sub_1587DB0(v27, &v59) + 120);
    sub_15F7200(v60);
  }
  return v12;
}
