__int64 __fastcall sub_1845050(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _BYTE *a5, unsigned int a6)
{
  __int64 v7; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // r15
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int64 v26; // r10
  __int64 result; // rax
  unsigned __int64 v28; // rax
  bool v29; // zf
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 *v40; // r12
  _QWORD *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  char v46; // al
  unsigned __int64 v47; // [rsp+0h] [rbp-D0h]
  _QWORD *v48; // [rsp+0h] [rbp-D0h]
  _QWORD *v49; // [rsp+0h] [rbp-D0h]
  unsigned __int64 v50; // [rsp+0h] [rbp-D0h]
  _BYTE v51[200]; // [rsp+8h] [rbp-C8h] BYREF

  if ( a6 == 1 && *(char *)(*(_QWORD *)(a1 + 232) + 1LL) < 0
    || *(char *)(a3 + 28) < 0
    || (*(_BYTE *)(a3 + 68) & 1) != 0 && !*(_QWORD *)(a3 + 40) )
  {
    return 1;
  }
  v7 = a2;
  if ( (unsigned __int8)sub_B78060(a3, a2, a3, a4, (__int64)a5) )
  {
    v29 = !sub_F61420(*(_QWORD *)(*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL), a2, v11, v12, v13, v14);
    v34 = *(_QWORD *)(a3 + 48);
    if ( v29 )
    {
      v41 = sub_F63270(*(_QWORD *)(v34 & 0xFFFFFFFFFFFFFFF0LL), a2, v30, v31, v32, v33);
      a2 = v41[13];
      v49 = v41;
      sub_7052B0((__int64 *)(a2 + 96), a2, v42, v43, v44, v45);
      if ( (*(_BYTE *)(v49[16] + 1LL) & 2) != 0 )
        return 1;
    }
    else
    {
      v35 = sub_F63270(*(_QWORD *)(v34 & 0xFFFFFFFFFFFFFFF0LL), a2, v30, v31, v32, v33);
      a2 = v35[13];
      v48 = v35;
      sub_7052B0((__int64 *)(a2 + 96), a2, v36, v37, v38, v39);
      if ( (*(_BYTE *)(v48[16] + 2LL) & 0x10) == 0 )
        return 1;
    }
  }
  if ( *(_BYTE *)(a4 + 20) )
  {
    v15 = *(_QWORD **)a4;
    v16 = *(_QWORD *)a4 + 8LL * *(unsigned int *)(a4 + 12);
    if ( *(_QWORD *)a4 == v16 )
      goto LABEL_25;
    while ( a3 != *v15 )
    {
      if ( (_QWORD *)v16 == ++v15 )
        goto LABEL_25;
    }
    goto LABEL_11;
  }
  a2 = a3;
  if ( sub_2236570(a4, a3) )
  {
LABEL_11:
    if ( (unsigned __int8)sub_B78060(a3, a2, v16, v12, v13) )
    {
      v21 = sub_F60F10(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                        & 0xFFFFFFFFFFFFFFF0LL),
              a2,
              v17,
              v18,
              v19,
              v20);
      v26 = sub_B7E900((__int64)v21, a2, v22, v23, v24, v25);
      if ( v26 )
      {
LABEL_13:
        if ( *((_BYTE *)v21 + 73) >> 5 == 2 && (v50 = v26, v46 = sub_A5F460(a4, v26), v26 = v50, !v46)
          || (v47 = v26, result = sub_1845050(a1, v7, v26, a4, a5, a6), v26 = v47, (_BYTE)result) )
        {
          while ( 1 )
          {
            v28 = *(_QWORD *)(v26 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            v26 = v28;
            if ( !v28 )
              return 1;
            if ( (*(_BYTE *)(v28 + 28) & 0x7Fu) - 49 <= 2 )
              goto LABEL_13;
          }
        }
        return result;
      }
    }
    return 1;
  }
LABEL_25:
  if ( !a6 )
  {
    v40 = (__int64 *)(a1 + 8);
    if ( !*a5 )
    {
      sub_168BB30((__int64)v51, v40, *(_DWORD *)(v7 + 24), 0x10u, 0);
      sub_15F7200(v51);
      *a5 = 1;
    }
    sub_168B9F0((__int64)v51, v40, *(_DWORD *)(a3 + 24), 0x16D4u, 0);
    sub_15F7200(v51);
    return 1;
  }
  return *(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) >> 7;
}
