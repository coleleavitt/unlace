void __fastcall sub_1EE42E0(
        __int64 a1,
        __int64 a2,
        unsigned __int8 (__fastcall *a3)(__int64, _QWORD),
        __int64 a4,
        __int64 a5)
{
  __int64 *v7; // r15
  __int64 v8; // rax
  __int64 v9; // r13
  unsigned int *v10; // r14
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  unsigned int v21; // ecx
  _QWORD *v22; // rsi
  __int64 v23; // r8
  __int64 v24; // rcx
  _QWORD *v25; // rdx
  _QWORD *v26; // r13
  _QWORD *v27; // rdx
  __int64 v28; // rax
  unsigned __int8 (__fastcall *v29)(__int64, _QWORD); // r12
  unsigned int *v30; // r15
  __int64 v31; // r13
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  __int64 v39; // rcx
  int v40; // esi
  int v41; // r9d
  __int64 v42; // r8
  __int64 v43; // [rsp+0h] [rbp-98h]
  __int64 v44; // [rsp+0h] [rbp-98h]
  __int64 v46; // [rsp+8h] [rbp-90h]
  __int64 *v48; // [rsp+18h] [rbp-80h]
  __int64 v49; // [rsp+18h] [rbp-80h]
  __int64 v50; // [rsp+20h] [rbp-78h]
  __int64 v51; // [rsp+28h] [rbp-70h]
  __m128 v52; // [rsp+30h] [rbp-68h] BYREF
  __int128 v53; // [rsp+40h] [rbp-58h]
  int v54; // [rsp+50h] [rbp-48h]

  v53 = 0;
  v54 = 0;
  if ( (*(_BYTE *)(a2 + 8) & 0x7F) != 0 )
  {
    v19 = *(unsigned int *)(a1 + 3736);
    v20 = *(_QWORD *)(a1 + 3720);
    if ( (_DWORD)v19 )
    {
      v21 = (v19 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
      v22 = (_QWORD *)(v20 + 32LL * v21);
      v23 = *v22;
      if ( *v22 == a2 )
      {
LABEL_21:
        v24 = a1 + 3720;
        v25 = (_QWORD *)(32 * v19 + v20);
        goto LABEL_22;
      }
      v40 = 1;
      if ( v23 != -4096 )
      {
        do
        {
          v41 = v40 + 1;
          v21 = (v19 - 1) & (v40 + v21);
          v22 = (_QWORD *)(v20 + 32LL * v21);
          v42 = *v22;
          if ( *v22 == a2 )
            goto LABEL_21;
          v40 = v41;
        }
        while ( v42 != -4096 );
      }
    }
    v24 = a1 + 3720;
    v22 = (_QWORD *)(v20 + 32LL * (unsigned int)v19);
    v25 = v22;
LABEL_22:
    sub_1ECCE40(&v52, v22, v25, v24, 1);
    v26 = (_QWORD *)v52.m128_u64[0];
    v27 = (_QWORD *)(*(_QWORD *)(a1 + 3720) + 32LL * *(unsigned int *)(a1 + 3736));
    sub_1ECCE40(&v52, v27, v27, a1 + 3720, 1);
    if ( (_QWORD *)v52.m128_u64[0] == v26 )
      goto LABEL_18;
    v28 = v26[3];
    if ( !(_DWORD)v28 )
      goto LABEL_18;
    v49 = a2;
    v29 = a3;
    v44 = v26[1];
    v30 = (unsigned int *)v26[2];
    v31 = (__int64)&v30[4 * ((unsigned int)(v28 - 2) >> 1) + 4];
    while ( 1 )
    {
      if ( v29(a4, *v30) )
      {
        v32 = *((_QWORD *)v30 + 1);
        if ( v32 > 0x13 )
          goto LABEL_29;
        if ( !*((_BYTE *)&v53 + v32) )
          break;
      }
LABEL_36:
      v30 += 4;
      if ( (unsigned int *)v31 == v30 )
        goto LABEL_18;
    }
    *((_BYTE *)&v53 + v32) = 1;
LABEL_29:
    v33 = sub_1EE1310(a1, v44, v32);
    v38 = sub_1EDB980((_QWORD *)a1, v33, v34, v35, v36, v37);
    if ( v38
      && (*(_QWORD *)(v38 + 8) & 0xFFFFFFFFFFFFFFF8LL) == 0
      && v38 != *(_QWORD *)(v49 + 16)
      && v38 != *(_QWORD *)(v49 + 24) )
    {
      v39 = *(unsigned int *)(a5 + 8);
      if ( v39 + 1 > (unsigned __int64)*(unsigned int *)(a5 + 12) )
      {
        v46 = v38;
        sub_2237220(a5, a5 + 16, v39 + 1, 8);
        v39 = *(unsigned int *)(a5 + 8);
        v38 = v46;
      }
      *(_QWORD *)(*(_QWORD *)a5 + 8 * v39) = v38;
      ++*(_DWORD *)(a5 + 8);
    }
    goto LABEL_36;
  }
  v7 = *(__int64 **)(a1 + 3744);
  v50 = a5 + 16;
  v48 = *(__int64 **)(a1 + 3752);
  if ( v7 != v48 )
  {
    while ( 1 )
    {
      v8 = v7[2];
      v9 = *v7;
      if ( (_DWORD)v8 )
        break;
LABEL_17:
      v7 += 3;
      if ( v48 == v7 )
        goto LABEL_18;
    }
    v10 = (unsigned int *)v7[1];
    v43 = (__int64)&v10[4 * ((unsigned int)(v8 - 2) >> 1) + 4];
    while ( 1 )
    {
      if ( a3(a4, *v10) )
      {
        v11 = *((_QWORD *)v10 + 1);
        if ( v11 > 0x13 )
          goto LABEL_9;
        if ( !*((_BYTE *)&v53 + v11) )
          break;
      }
LABEL_16:
      v10 += 4;
      if ( (unsigned int *)v43 == v10 )
        goto LABEL_17;
    }
    *((_BYTE *)&v53 + v11) = 1;
LABEL_9:
    v12 = sub_1EE1310(a1, v9, v11);
    v17 = sub_1EDB980((_QWORD *)a1, v12, v13, v14, v15, v16);
    if ( v17
      && (*(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF8LL) == 0
      && v17 != *(_QWORD *)(a2 + 16)
      && v17 != *(_QWORD *)(a2 + 24) )
    {
      v18 = *(unsigned int *)(a5 + 8);
      if ( v18 + 1 > (unsigned __int64)*(unsigned int *)(a5 + 12) )
      {
        v51 = v17;
        sub_2237220(a5, v50, v18 + 1, 8);
        v18 = *(unsigned int *)(a5 + 8);
        v17 = v51;
      }
      *(_QWORD *)(*(_QWORD *)a5 + 8 * v18) = v17;
      ++*(_DWORD *)(a5 + 8);
    }
    goto LABEL_16;
  }
LABEL_18:
  ++*(_DWORD *)(a1 + 9364);
}
