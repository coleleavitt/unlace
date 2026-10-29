__int64 __fastcall sub_17BBCE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // rbx
  unsigned __int8 v22; // al
  void *v23; // rdi
  __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // rax
  int v29; // eax
  __int64 v30; // r15
  __int64 *v31; // r13
  __int64 v32; // rax
  __int64 v33; // r12
  __int64 v34; // rsi
  _QWORD *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rax
  _QWORD *v49; // rax
  _QWORD *v50; // rdx
  __int64 v51; // rax
  _QWORD *v52; // rcx
  __int64 v53; // [rsp+0h] [rbp-E8h]
  unsigned __int8 v54[12]; // [rsp+Ch] [rbp-DCh] BYREF
  __int64 v55; // [rsp+18h] [rbp-D0h] BYREF
  _QWORD v56[25]; // [rsp+20h] [rbp-C8h] BYREF

  v9 = *(_QWORD *)(a1 + 248);
  v10 = *(_QWORD *)(a2 + 40);
  v54[0] = a3;
  v11 = sub_A7A420(v9, a2, a3, a4, a5, a6);
  v16 = sub_B94670(v11 + 40, v10, v12, v13, v14, v15);
  v21 = v16 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v16 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    if ( (v16 & 4) != 0 )
      v21 = *(_QWORD *)v21;
    v22 = v54[0];
    if ( v21 )
    {
      if ( v54[0] && !(unsigned __int8)sub_179DDB0(a1, a2) )
        goto LABEL_12;
      v23 = *(void **)(a4 + 88);
      *(_DWORD *)a4 = 0;
      *(_DWORD *)(a4 + 16) = 0;
      if ( v23 )
      {
        sub_1A39780(v23);
        v24 = *(unsigned int *)(a4 + 16);
        v25 = v24 + 1;
      }
      else
      {
        v25 = 1;
        v24 = 0;
      }
      *(_BYTE *)(a4 + 166) = 0;
      *(_OWORD *)(a4 + 88) = 0;
      v26 = (*(_BYTE *)(v21 + 29) >> 5) & 3 | v21;
      v27 = *(unsigned int *)(a4 + 20);
      v56[0] = v26;
      if ( v27 < v25 )
      {
        sub_2237220(a4 + 8, a4 + 24, v25, 8);
        v24 = *(unsigned int *)(a4 + 16);
      }
      *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8 * v24) = v26;
      ++*(_DWORD *)(a4 + 16);
      *(_DWORD *)a4 = 2;
      return 1;
    }
  }
  else
  {
    v22 = v54[0];
  }
  if ( v22 )
  {
    if ( !(unsigned __int8)sub_179DDB0(a1, a2) )
      return 0;
    if ( v54[0] )
    {
      v50 = *(_QWORD **)(a4 + 8);
      v51 = *(unsigned int *)(a4 + 16);
      v54[0] = 0;
      v52 = &v50[v51];
      if ( v50 != v52 )
      {
        v21 = *v50 & 0xFFFFFFFFFFFFFFF8LL;
        v29 = *(_BYTE *)(v21 + 28) & 0x7F;
        if ( (unsigned int)(v29 - 40) <= 6 )
          goto LABEL_13;
        while ( 1 )
        {
          if ( v52 == ++v50 )
            return 0;
          v21 = *v50 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_BYTE *)(v21 + 28) & 0x7Fu) - 40 <= 6 )
            goto LABEL_34;
        }
      }
      return 0;
    }
  }
  v34 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 2264LL) + 80LL);
  v35 = sub_704780((__int64 *)(v34 + 72), v34, v17, v18, v19, v20);
  v40 = sub_B94670((unsigned __int64)(v35 + 5), *(_QWORD *)(a2 + 40), v36, v37, v38, v39);
  if ( !v40 )
    return 0;
  v41 = v40 & 0xFFFFFFFFFFFFFFF8LL;
  v21 = v40 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v40 & 4) != 0 )
  {
    while ( 1 )
    {
      v42 = 0;
      if ( v41 )
        v42 = *(_QWORD *)v41;
      if ( (*(_BYTE *)(v42 + 28) & 0x7Fu) - 40 <= 6 )
        break;
      if ( !v41 )
        return 0;
      v43 = *(_QWORD *)(v41 + 8);
      if ( !v43 )
        return 0;
      v41 = v43 & 0xFFFFFFFFFFFFFFF8LL;
      v21 = v43 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v43 & 4) == 0 )
        goto LABEL_29;
    }
    if ( v41 )
    {
      v21 = *(_QWORD *)v41;
      goto LABEL_30;
    }
    return 0;
  }
LABEL_29:
  if ( (*(_BYTE *)(v41 + 28) & 0x7Fu) - 40 > 6 )
    return 0;
LABEL_30:
  if ( v21 )
  {
LABEL_12:
    v29 = *(_BYTE *)(v21 + 28) & 0x7F;
LABEL_13:
    if ( (unsigned int)(v29 - 34) > 5 )
LABEL_34:
      v30 = *(_QWORD *)(v21 + 80);
    else
      v30 = *(_QWORD *)(v21 + 112);
    v31 = (__int64 *)(a1 + 8);
    sub_168B9F0((__int64)v56, v31, *(_DWORD *)(a2 + 24), 0xED9u, 0);
    v32 = sub_15890D0((__int64)v56, v54);
    v33 = v32;
    if ( *(_BYTE *)(v32 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v32 + 32), a2, 0xAu);
    }
    else if ( *(_BYTE *)(v32 + 132) )
    {
      v44 = sub_168B9E0((_QWORD *)v32);
      v48 = *(_QWORD *)(v33 + 16);
      if ( v48 )
      {
        v53 = v44;
        v48 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v48 + 32LL))(v48);
        v44 = v53;
      }
      v55 = v48;
      v49 = sub_1587BC0(v44, &v55, v44, v45, v46, v47);
      sub_AE9DF0((unsigned __int8 **)(*v49 + 32LL * *(unsigned int *)(v33 + 128) + 8), a2, 0xAu);
    }
    sub_15F7200(v56);
    sub_168B9F0((__int64)v56, v31, *(_DWORD *)(v30 + 24), 0x175Bu, 0);
    sub_15890D0((__int64)v56, v54);
    sub_15F7200(v56);
    return 0;
  }
  return 0;
}
