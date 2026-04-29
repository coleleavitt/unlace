__int64 __fastcall sub_16E4A0(__int64 a1)
{
  unsigned int v2; // ebp
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // r13
  __int64 v8; // r12
  unsigned int v9; // eax
  __int64 v10; // r14
  __int64 *v11; // r11
  __int64 v12; // rsi
  unsigned __int64 v13; // rcx
  __int64 v14; // r9
  _QWORD *v15; // rdx
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // r12
  __int64 *v19; // rbp
  _QWORD *v20; // r14
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r13
  _QWORD *v23; // rdi
  char *v24; // r13
  int v25; // eax
  int v26; // eax
  int v27; // eax
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // r10
  __int64 v31; // r8
  __int64 v32; // rdx
  _QWORD *v33; // rax
  __int64 v34; // r12
  unsigned __int64 v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // rdi
  int v38; // eax
  unsigned __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // [rsp+0h] [rbp-A8h]
  __int64 v43; // [rsp+8h] [rbp-A0h]
  _QWORD *v44; // [rsp+8h] [rbp-A0h]
  __int64 *v45; // [rsp+8h] [rbp-A0h]
  char *v46; // [rsp+10h] [rbp-98h]
  __int64 v47; // [rsp+20h] [rbp-88h]
  __int64 *v48; // [rsp+20h] [rbp-88h]
  __int64 *v49; // [rsp+20h] [rbp-88h]
  __int64 *v50; // [rsp+20h] [rbp-88h]
  __int64 v51; // [rsp+28h] [rbp-80h]
  __int64 v52; // [rsp+30h] [rbp-78h]
  unsigned __int8 v53; // [rsp+3Fh] [rbp-69h]
  _QWORD v54[2]; // [rsp+48h] [rbp-60h] BYREF
  __int128 v55; // [rsp+58h] [rbp-50h]
  unsigned __int64 v56; // [rsp+68h] [rbp-40h]

  v56 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 76) != 5 || **(_DWORD **)(a1 + 48) != 53 || *(_DWORD *)(a1 + 352) != 1 )
    return 0;
  v4 = *(_QWORD *)(a1 + 64);
  v5 = **(unsigned int **)(a1 + 344);
  if ( (unsigned int)v5 >= *(_DWORD *)(v4 + 64) )
    sub_167530(a1);
  v6 = *(_QWORD *)(*(_QWORD *)(v4 + 528) + 8 * v5);
  if ( *(_DWORD *)(v6 + 76) != 4 )
    return 0;
  v7 = *(_QWORD *)(v6 + 56);
  v8 = v7 + 48;
  if ( !(unsigned __int8)sub_11F7C0((char *)(v7 + 48), v54, 0) )
    return 0;
  if ( *(_DWORD *)v7 == 48 )
  {
    ++v54[0];
  }
  else if ( *(_DWORD *)v7 != 46 )
  {
    return 0;
  }
  if ( *(_BYTE *)(v7 + 64) != 7 )
    return 0;
  if ( *(_DWORD *)(a1 + 72) != *(_DWORD *)(v7 + 72) )
    return 0;
  v46 = (char *)(v7 + 32);
  v42 = *(_QWORD *)(a1 + 48);
  LOBYTE(v9) = sub_1255A0((unsigned __int8 *)(v42 + 32), v7 + 32, 0);
  v2 = v9;
  if ( !(_BYTE)v9 )
    return 0;
  v10 = *(_QWORD *)(v6 + 8);
  v11 = *(__int64 **)(v42 + 56);
  v12 = *v11;
  v13 = v11[1];
  v14 = *v11;
  if ( !v13 )
  {
    if ( !v54[0] )
      goto LABEL_59;
    return 0;
  }
  v15 = (_QWORD *)(v12 + 8);
  v16 = 0;
  while ( *v15 )
  {
    ++v16;
    v15 += 3;
    if ( v13 == v16 )
      goto LABEL_40;
  }
  v17 = *(_DWORD *)(v11[3] + 4 * v16);
  if ( v17 != -1 )
  {
    if ( *(_DWORD *)(v10 + 72) != v17 )
      return 0;
    goto LABEL_20;
  }
LABEL_40:
  v30 = v12 + 24 * v13;
  if ( v30 == v12 )
  {
    v32 = 0;
  }
  else
  {
    v31 = *v11;
    v32 = 0;
    do
    {
      v33 = *(_QWORD **)v31;
      v34 = *(_QWORD *)v31 + 8LL * *(_QWORD *)(v31 + 8);
      if ( v34 != *(_QWORD *)v31 )
      {
        do
          v32 += *v33++ < v54[0];
        while ( (_QWORD *)v34 != v33 );
      }
      v31 += 24;
    }
    while ( v30 != v31 );
    v8 = v7 + 48;
  }
  if ( v32 != v54[0] )
    return 0;
  v35 = 0;
  while ( *(_DWORD *)(v11[3] + 4 * v35) != *(_DWORD *)(v10 + 72) )
  {
    if ( v13 == ++v35 )
      goto LABEL_59;
  }
  if ( v35 < v13 )
  {
    v36 = (_QWORD *)(v12 + 24 * v35);
    v37 = *v36;
    if ( !*v36 )
    {
LABEL_20:
      v43 = v10 + 344;
      goto LABEL_21;
    }
    v48 = *(__int64 **)(v42 + 56);
    v36[1] = 0;
    v44 = v36;
    qfree(v37);
    v11 = v48;
    *v44 = 0;
    v44[2] = 0;
    v43 = v10 + 344;
    goto LABEL_53;
  }
LABEL_59:
  v39 = v11[2];
  v54[1] = 0;
  v55 = 0;
  if ( v39 < v13 + 1 )
  {
    v45 = v11;
    v41 = qvector_reserve(v11, v12, v13 + 1, 24);
    v11 = v45;
    v14 = v41;
    *v45 = v41;
    v13 = v45[1];
  }
  v40 = v14 + 24 * v13;
  *(_QWORD *)v40 = 0;
  *(_OWORD *)(v40 + 8) = 0;
  ++v11[1];
  v50 = v11;
  sub_167780(v11 + 3, *(_DWORD *)(v10 + 72));
  sub_167780((__int64 *)(a1 + 368), *(_DWORD *)(v10 + 72));
  v43 = v10 + 344;
  sub_167780((__int64 *)(v10 + 344), *(_DWORD *)(a1 + 72));
  v11 = v50;
LABEL_53:
  if ( v11[1] )
  {
    v12 = *v11;
LABEL_21:
    v47 = v8;
    v53 = v2;
    v18 = 0;
    v19 = v11;
    v51 = v7;
    v52 = v10;
    while ( 1 )
    {
      v20 = (_QWORD *)(v12 + 24 * v18);
      v21 = v20[1];
      if ( v21 )
      {
        v22 = 0;
        do
        {
          v23 = (_QWORD *)(*v20 + 8 * v22);
          if ( *v23 < v54[0] )
          {
            v21 = v20[1];
            ++v22;
          }
          else
          {
            memmove(v23, v23 + 1, 8 * (v21 - v22) - 8);
            v21 = v20[1] - 1LL;
            v20[1] = v21;
          }
        }
        while ( v22 < v21 );
        if ( !v21 )
          sub_121E80(v19, a1, v18);
      }
      if ( ++v18 >= (unsigned __int64)v19[1] )
        break;
      v12 = *v19;
    }
    v11 = v19;
    v8 = v47;
    v7 = v51;
    v10 = v52;
    v2 = v53;
  }
  if ( v11[4] == 1 && !*(_QWORD *)(*v11 + 8) )
  {
    v49 = v11;
    sub_159580(v42, *(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL), a1, v42, 0);
    *(_DWORD *)v42 = 55;
    LODWORD(v49) = *(_DWORD *)v49[3];
    sub_11C7E0(v42 + 32);
    *(_BYTE *)(v42 + 32) = 7;
    *(_DWORD *)(v42 + 40) = (_DWORD)v49;
    sub_11C7E0(v42 + 48);
    v38 = *(_DWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 76) = 3;
    BYTE1(v38) &= ~2u;
    LOBYTE(v38) = v38 | 0x80;
    *(_DWORD *)(a1 + 24) = v38;
  }
  *(_DWORD *)v7 = 55;
  v24 = (char *)(v7 + 64);
  sub_11C450(v46, v24);
  sub_11C7E0(v8);
  sub_11C7E0((__int64)v24);
  sub_167720(v6 + 368, *(_DWORD *)(v10 + 72));
  sub_167720(v43, *(_DWORD *)(v6 + 72));
  *(_DWORD *)(v6 + 76) = 3;
  v25 = *(_DWORD *)(a1 + 24);
  BYTE1(v25) &= ~2u;
  LOBYTE(v25) = v25 | 0x80;
  *(_DWORD *)(a1 + 24) = v25;
  v26 = *(_DWORD *)(v6 + 24);
  BYTE1(v26) &= ~2u;
  LOBYTE(v26) = v26 | 0x80;
  *(_DWORD *)(v6 + 24) = v26;
  if ( *(_DWORD *)(v10 + 76) != 1 )
  {
    v27 = *(_DWORD *)(v10 + 24);
    BYTE1(v27) &= ~2u;
    LOBYTE(v27) = v27 | 0x80;
    *(_DWORD *)(v10 + 24) = v27;
  }
  **(_DWORD **)(a1 + 64) |= 0x400u;
  v28 = *(_QWORD *)(a1 + 64);
  v29 = *(_QWORD *)(v28 + 784);
  if ( v29 )
  {
    *(_DWORD *)(v29 + 48) = 63;
    v28 = *(_QWORD *)(a1 + 64);
  }
  sub_669A0(v28, 1u, (__int64)"simplified jtbl %d", *(_DWORD *)(a1 + 72));
  return v2;
}
