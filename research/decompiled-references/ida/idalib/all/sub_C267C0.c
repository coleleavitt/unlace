__int64 __fastcall sub_C267C0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  unsigned int i; // r13d
  __int64 *v6; // r13
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r12
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // rax
  int v19; // r14d
  int v20; // esi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdi
  __int64 v30; // r14
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdi
  __int64 v36; // r13
  __int64 v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // r15
  __int64 v43; // rdx
  __int64 v44; // rdi
  __int64 v45; // rax
  __int64 v46; // rcx
  unsigned __int64 v47; // rbp
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // r12
  __int64 v51; // rdx
  unsigned __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rbp
  int v55; // eax
  _QWORD *v56; // rdx
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // [rsp+8h] [rbp-C0h]
  unsigned int v60; // [rsp+10h] [rbp-B8h] BYREF
  char v61; // [rsp+14h] [rbp-B4h]
  unsigned int v62; // [rsp+50h] [rbp-78h] BYREF
  char v63; // [rsp+54h] [rbp-74h]
  _QWORD v64[14]; // [rsp+58h] [rbp-70h] BYREF

  v2 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 )
    return 1;
  v6 = (__int64 *)(a1 & 0xFFFFFFFFFFFFFFF0LL);
  v7 = sub_F63270(*(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL));
  v12 = v7;
  if ( !v7 )
  {
    v54 = *v6;
    v55 = *(unsigned __int8 *)(*v6 + 16);
    if ( (unsigned __int8)(v55 - 2) > 4u )
    {
      if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v54 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u
        || (v58 = sub_F63050(*v6, a2, (unsigned int)(v55 - 2), v9), (v54 = v58) == 0) )
      {
LABEL_56:
        v63 &= ~1u;
        v62 = 1;
        sub_A4FD20(a2, (__int64)&v62);
        if ( v62 > 1 )
          sub_A4F8E0((int *)&v62);
        return 1;
      }
      v55 = *(unsigned __int8 *)(v58 + 16);
    }
    if ( (unsigned int)(v55 - 2) <= 1 )
    {
      v56 = *(_QWORD **)(v54 + 40);
      if ( (*(_BYTE *)(v54 + 19) & 2) != 0 )
      {
        if ( *((_DWORD *)v56 + 2) <= 0x40u )
          v56 = (_QWORD *)*v56;
        else
          v56 = *(_QWORD **)*v56;
      }
      v63 &= ~1u;
      v62 = 0;
      sub_A51400((__int64)&v62, 0, (int)v56);
      sub_A4FD20(a2, (__int64)&v62);
      if ( v62 > 1 )
        sub_A4F8E0((int *)&v62);
      v57 = *(unsigned int *)(a2 + 16);
      if ( (_DWORD)v57 != *(_DWORD *)(a2 + 20) )
        return (unsigned int)sub_C267C0(*(_QWORD *)(v54 + 32), *(_QWORD *)(a2 + 8) + 56 * v57);
      return 1;
    }
    goto LABEL_56;
  }
  if ( *(char *)(v7 + 28) < 0 )
  {
    v63 &= ~1u;
    v62 = 0;
    sub_A4FD20(a2, (__int64)&v62);
    if ( v62 > 1 )
      sub_A4F8E0((int *)&v62);
    return 0;
  }
  else
  {
    if ( *(_BYTE *)(v7 + 73) >> 5 == 2 )
    {
      v61 &= ~1u;
      v63 &= ~1u;
      v60 = 0;
      sub_A4F870(v64);
      v62 = 11;
      sub_A54D90((__int64)&v62, 0, (int *)&v60);
      sub_A4FD20(a2, (__int64)&v62);
      if ( v62 > 1 )
        sub_A4F8E0((int *)&v62);
      if ( v60 > 1 )
        sub_A4F8E0((int *)&v60);
      return 1;
    }
    v13 = sub_B7E900(v7, a2, v8, v9, v10, v11);
    if ( v13 )
    {
      v15 = 0;
      v14 = *(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v14 )
      {
        while ( (*(_BYTE *)(v14 + 28) & 0x7Fu) - 49 <= 2 )
        {
LABEL_34:
          ++v15;
          v14 = *(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( !v14 )
            goto LABEL_13;
        }
        while ( 1 )
        {
          v18 = *(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v14 = v18;
          if ( !v18 )
            break;
          if ( (*(_BYTE *)(v18 + 28) & 0x7Fu) - 49 <= 2 )
            goto LABEL_34;
        }
      }
LABEL_13:
      v19 = v15 + 1;
    }
    else
    {
      v19 = 0;
    }
    sub_7052B0((__int64 *)(*(_QWORD *)(v12 + 104) + 96LL), *(_QWORD *)(v12 + 104), v14, v15, v16, v17);
    v20 = *(_DWORD *)(*(_QWORD *)(v12 + 128) + 16LL);
    v63 &= ~1u;
    sub_A4F800((__int64)v64, v20, v19);
    v62 = 10;
    sub_A4FD20(a2, (__int64)&v62);
    if ( v62 > 1 )
      sub_A4F8E0((int *)&v62);
    sub_7052B0((__int64 *)(*(_QWORD *)(v12 + 104) + 96LL), *(_QWORD *)(v12 + 104), v21, v22, v23, v24);
    v29 = *(_QWORD *)(v12 + 128);
    if ( (*(_BYTE *)(v29 + 24) & 1) != 0 )
      v30 = sub_B96980(v29);
    else
      v30 = *(_QWORD *)(v29 + 24);
    sub_7052B0((__int64 *)(*(_QWORD *)(v12 + 104) + 96LL), *(_QWORD *)(v12 + 104), v25, v26, v27, v28);
    v35 = *(_QWORD *)(v12 + 128);
    if ( (*(_BYTE *)(v35 + 24) & 1) != 0 )
      v36 = sub_B96980(v35);
    else
      v36 = *(_QWORD *)(v35 + 24);
    v37 = *(_QWORD *)(v12 + 104);
    sub_7052B0((__int64 *)(v37 + 96), v37, v31, v32, v33, v34);
    v42 = v36 + 24LL * *(unsigned int *)(*(_QWORD *)(v12 + 128) + 16LL);
    for ( i = 1; v30 != v42; i &= sub_C267C0(v53 & 0xFFFFFFFFFFFFFFF0LL, v59) )
    {
      while ( 1 )
      {
        v43 = *(_QWORD *)(a2 + 8);
        v37 = v43 + 56LL * v2;
        v44 = **(_QWORD **)(v30 + 16);
        v45 = *(_QWORD *)(v44 & 0xFFFFFFFFFFFFFFF0LL);
        if ( (*(_BYTE *)(v45 + 8) & 0xF) != 0 )
          break;
        v30 += 24;
        ++v2;
        i &= sub_C267C0(v45 & 0xFFFFFFFFFFFFFFF0LL, v37);
        if ( v42 == v30 )
          goto LABEL_23;
      }
      v59 = v43 + 56LL * v2;
      v30 += 24;
      ++v2;
      v53 = sub_F64F00(v44);
      v37 = v59;
    }
LABEL_23:
    v47 = sub_B7E900(v12, v37, v38, v39, v40, v41);
    if ( v47 )
    {
LABEL_24:
      if ( (*(_BYTE *)(v47 + 68) & 1) == 0 || *(_QWORD *)(v47 + 40) )
      {
        v50 = v47;
        if ( *(char *)(v47 + 29) < 0 )
          v50 = sub_B72720(v47);
        v51 = *(unsigned int *)(v50 + 68);
        if ( (v51 & 0xFFFFFFF0) == 0 )
        {
          sub_B7EAB0(v50, v37, v51, v46, v48, v49);
          LODWORD(v51) = *(_DWORD *)(v50 + 68);
        }
        v37 = *(_QWORD *)(a2 + 8) + 56LL * (((unsigned int)v51 >> 4) + *(_DWORD *)(a2 + 16) - 1);
        i &= sub_C267C0(*(_QWORD *)(v47 + 48), v37);
      }
      while ( 1 )
      {
        v52 = *(_QWORD *)(v47 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v47 = v52;
        if ( !v52 )
          break;
        if ( (*(_BYTE *)(v52 + 28) & 0x7Fu) - 49 <= 2 )
          goto LABEL_24;
      }
    }
  }
  return i;
}
