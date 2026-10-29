__int64 __fastcall sub_C86710(__int64 *a1, _QWORD *a2)
{
  unsigned __int64 v4; // r13
  __int64 v5; // r12
  unsigned __int64 v6; // rsi
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // r12d
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // r9d
  __int64 v20; // r13
  int v21; // eax
  int v22; // esi
  unsigned __int8 *v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rcx
  __int64 v26; // rdx
  unsigned int v27; // eax
  __int64 v28; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  int v34; // r9d
  __int64 v35; // rsi
  __int64 v36; // r13
  char *v37; // rsi
  char v38; // cl
  char v39; // dl
  __int64 v40; // rdi
  __int64 v41; // rdi
  __int64 v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  int v46; // r9d
  __int64 v47; // rax
  bool v48; // zf
  __int64 v49; // [rsp+0h] [rbp-1F8h]
  char v50; // [rsp+Ah] [rbp-1EEh]
  char v51; // [rsp+Ah] [rbp-1EEh]
  char v52; // [rsp+Bh] [rbp-1EDh]
  char v53; // [rsp+Bh] [rbp-1EDh]
  int v54; // [rsp+Ch] [rbp-1ECh]
  int v55; // [rsp+Ch] [rbp-1ECh]
  char v56; // [rsp+1Fh] [rbp-1D9h] BYREF
  _QWORD v57[3]; // [rsp+20h] [rbp-1D8h] BYREF
  char v58; // [rsp+38h] [rbp-1C0h]
  __int64 v59; // [rsp+48h] [rbp-1B0h]
  void *ptr; // [rsp+50h] [rbp-1A8h]
  __int64 v61; // [rsp+58h] [rbp-1A0h]
  _BYTE v62[80]; // [rsp+60h] [rbp-198h] BYREF
  __int64 *v63; // [rsp+B0h] [rbp-148h] BYREF
  __int64 v64; // [rsp+B8h] [rbp-140h]
  __int64 v65; // [rsp+C0h] [rbp-138h] BYREF

  v4 = a2[3];
  v5 = *a1;
  v6 = a2[7];
  v59 = 0;
  v58 |= 1u;
  ptr = v62;
  v61 = 0x800000000LL;
  v62[65] = 0;
  v7 = *(_QWORD *)(v5 + 32);
  memset(v57, 0, sizeof(v57));
  if ( (*(_BYTE *)(v6 + 1) & 6) != 0 )
  {
    v29 = sub_A73030(*(_QWORD *)(v5 + 16), *(_QWORD *)(v6 + 8), 1u);
    v6 = a2[7];
    v8 = v29;
  }
  else
  {
    v8 = *(_QWORD *)(v6 + 8);
  }
  v9 = sub_C2C1C0(v7, v6, v8, (__int64)v57);
  v14 = sub_C39A10(v9, v5, v4, v10, v11);
  if ( (_BYTE)v14 )
  {
    v14 = sub_C3FB70(a2[4], &v56, *a1, v12, v13);
    if ( (_BYTE)v14 )
    {
      if ( v56 )
        v30 = a2[5];
      else
        v30 = a2[6];
      v14 = sub_C846B0((__int64 **)a1, v30, v16, v17, v18, v19);
      goto LABEL_4;
    }
    v20 = *a1;
    v21 = *(_DWORD *)(*a1 + 48);
    if ( *(_BYTE *)(*a1 + 914) )
    {
      if ( !v21 )
        goto LABEL_4;
      **(_BYTE **)(v20 + 24) = 1;
      v22 = *(_DWORD *)(v20 + 900);
      v63 = &v65;
      v64 = 0x800000000LL;
      v23 = *(unsigned __int8 **)(v20 + 24);
      v54 = v22;
      v24 = *((_QWORD *)v23 + 1);
      v25 = *v23;
      *((_QWORD *)v23 + 1) = &v63;
      v26 = v23[1];
      v50 = v25;
      *(_DWORD *)(v20 + 900) = *(_DWORD *)(v20 + 40) + 1;
      v52 = v26;
      sub_C846B0((__int64 **)a1, a2[6], v26, v25, v18, v19);
      v27 = v64;
      if ( (_DWORD)v64 )
      {
        v35 = *(_QWORD *)(v20 + 24);
        *(_BYTE *)v35 = v50;
        *(_BYTE *)(v35 + 1) = v52;
        *(_QWORD *)(v35 + 8) = v24;
        *(_DWORD *)(v20 + 900) = v54;
        v36 = *a1;
        v37 = *(char **)(*a1 + 24);
        v38 = *v37;
        v39 = v37[1];
        v55 = *(_DWORD *)(*a1 + 900);
        v40 = *((_QWORD *)v37 + 1);
        *((_QWORD *)v37 + 1) = &v63;
        v51 = v38;
        v49 = v40;
        v41 = (__int64)v63;
        v53 = v39;
        *(_DWORD *)(v36 + 900) = *(_DWORD *)(v36 + 40) + 1;
        sub_C239B0(v41, v41 + 32LL * v27);
        v42 = a2[5];
        LODWORD(v64) = 0;
        sub_C846B0((__int64 **)a1, v42, v43, v44, v45, v46);
        v47 = *(_QWORD *)(v36 + 24);
        v48 = (_DWORD)v64 == 0;
        *(_BYTE *)v47 = v51;
        if ( !v48 )
        {
          *(_BYTE *)(v47 + 1) = v53;
          *(_QWORD *)(v47 + 8) = v49;
          *(_DWORD *)(v36 + 900) = v55;
          sub_C14610(*a1, (__int64)a2, 2396);
          sub_C23820((__int64)&v63);
          goto LABEL_4;
        }
        *(_BYTE *)(v47 + 1) = v53;
        *(_QWORD *)(v47 + 8) = v49;
        *(_DWORD *)(v36 + 900) = v55;
      }
      else
      {
        v28 = *(_QWORD *)(v20 + 24);
        *(_BYTE *)v28 = v50;
        *(_BYTE *)(v28 + 1) = v52;
        *(_QWORD *)(v28 + 8) = v24;
        *(_DWORD *)(v20 + 900) = v22;
      }
      sub_C23820((__int64)&v63);
      goto LABEL_4;
    }
    if ( v21 )
    {
      v14 = *(unsigned __int8 *)(v20 + 915);
      if ( (_BYTE)v14 )
      {
        v14 = 0;
        **(_BYTE **)(v20 + 24) = 1;
        sub_C846B0((__int64 **)a1, a2[5], v16, v17, v18, v19);
        sub_C846B0((__int64 **)a1, a2[6], v31, v32, v33, v34);
      }
    }
  }
LABEL_4:
  if ( ptr != v62 )
    free(ptr);
  return v14;
}
