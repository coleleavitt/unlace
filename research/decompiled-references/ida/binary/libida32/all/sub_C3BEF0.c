__int64 __fastcall sub_C3BEF0(__int64 *a1, _QWORD *a2)
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
  __int64 v19; // r9
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
  unsigned int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rsi
  __int64 v37; // r13
  char *v38; // rsi
  char v39; // cl
  char v40; // dl
  __int64 v41; // rdi
  __int64 v42; // rdi
  __int64 v43; // rsi
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rax
  bool v49; // zf
  __int64 v50; // [rsp+0h] [rbp-1F8h]
  char v51; // [rsp+Ah] [rbp-1EEh]
  char v52; // [rsp+Ah] [rbp-1EEh]
  char v53; // [rsp+Bh] [rbp-1EDh]
  char v54; // [rsp+Bh] [rbp-1EDh]
  int v55; // [rsp+Ch] [rbp-1ECh]
  int v56; // [rsp+Ch] [rbp-1ECh]
  char v57; // [rsp+1Fh] [rbp-1D9h] BYREF
  _QWORD v58[3]; // [rsp+20h] [rbp-1D8h] BYREF
  char v59; // [rsp+38h] [rbp-1C0h]
  __int64 v60; // [rsp+48h] [rbp-1B0h]
  void *ptr; // [rsp+50h] [rbp-1A8h]
  __int64 v62; // [rsp+58h] [rbp-1A0h]
  _BYTE v63[80]; // [rsp+60h] [rbp-198h] BYREF
  __int64 *v64; // [rsp+B0h] [rbp-148h] BYREF
  __int64 v65; // [rsp+B8h] [rbp-140h]
  __int64 v66; // [rsp+C0h] [rbp-138h] BYREF

  v4 = a2[3];
  v5 = *a1;
  v6 = a2[7];
  v60 = 0;
  v59 |= 1u;
  ptr = v63;
  v62 = 0x800000000LL;
  v63[65] = 0;
  v7 = *(_QWORD *)(v5 + 32);
  memset(v58, 0, sizeof(v58));
  if ( (*(_BYTE *)(v6 + 1) & 6) != 0 )
  {
    v29 = sub_A4F2F0(*(_QWORD *)(v5 + 16), *(_QWORD *)(v6 + 8), 1u);
    v6 = a2[7];
    v8 = v29;
  }
  else
  {
    v8 = *(_QWORD *)(v6 + 8);
  }
  v9 = sub_C08480(v7, v6, v8, (__int64)v58);
  v14 = sub_C15CD0(v9, v5, v4, v10, v11);
  if ( (_BYTE)v14 )
  {
    v14 = sub_C1BE30(a2[4], &v57, *a1, v12, v13);
    if ( (_BYTE)v14 )
    {
      if ( v57 )
        v30 = a2[5];
      else
        v30 = a2[6];
      LOBYTE(v31) = sub_C3A520(a1, v30, v16, v17, v18, v19);
      v14 = v31;
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
      v64 = &v66;
      v65 = 0x800000000LL;
      v23 = *(unsigned __int8 **)(v20 + 24);
      v55 = v22;
      v24 = *((_QWORD *)v23 + 1);
      v25 = *v23;
      *((_QWORD *)v23 + 1) = &v64;
      v26 = v23[1];
      v51 = v25;
      *(_DWORD *)(v20 + 900) = *(_DWORD *)(v20 + 40) + 1;
      v53 = v26;
      sub_C3A520(a1, a2[6], v26, v25, v18, v19);
      v27 = v65;
      if ( (_DWORD)v65 )
      {
        v36 = *(_QWORD *)(v20 + 24);
        *(_BYTE *)v36 = v51;
        *(_BYTE *)(v36 + 1) = v53;
        *(_QWORD *)(v36 + 8) = v24;
        *(_DWORD *)(v20 + 900) = v55;
        v37 = *a1;
        v38 = *(char **)(*a1 + 24);
        v39 = *v38;
        v40 = v38[1];
        v56 = *(_DWORD *)(*a1 + 900);
        v41 = *((_QWORD *)v38 + 1);
        *((_QWORD *)v38 + 1) = &v64;
        v52 = v39;
        v50 = v41;
        v42 = (__int64)v64;
        v54 = v40;
        *(_DWORD *)(v37 + 900) = *(_DWORD *)(v37 + 40) + 1;
        sub_BFFC70(v42, v42 + 32LL * v27);
        v43 = a2[5];
        LODWORD(v65) = 0;
        sub_C3A520(a1, v43, v44, v45, v46, v47);
        v48 = *(_QWORD *)(v37 + 24);
        v49 = (_DWORD)v65 == 0;
        *(_BYTE *)v48 = v52;
        if ( !v49 )
        {
          *(_BYTE *)(v48 + 1) = v54;
          *(_QWORD *)(v48 + 8) = v50;
          *(_DWORD *)(v37 + 900) = v56;
          sub_BF08D0(*a1, (__int64)a2, 2396);
          sub_BFFAE0((__int64)&v64);
          goto LABEL_4;
        }
        *(_BYTE *)(v48 + 1) = v54;
        *(_QWORD *)(v48 + 8) = v50;
        *(_DWORD *)(v37 + 900) = v56;
      }
      else
      {
        v28 = *(_QWORD *)(v20 + 24);
        *(_BYTE *)v28 = v51;
        *(_BYTE *)(v28 + 1) = v53;
        *(_QWORD *)(v28 + 8) = v24;
        *(_DWORD *)(v20 + 900) = v22;
      }
      sub_BFFAE0((__int64)&v64);
      goto LABEL_4;
    }
    if ( v21 )
    {
      v14 = *(unsigned __int8 *)(v20 + 915);
      if ( (_BYTE)v14 )
      {
        v14 = 0;
        **(_BYTE **)(v20 + 24) = 1;
        sub_C3A520(a1, a2[5], v16, v17, v18, v19);
        sub_C3A520(a1, a2[6], v32, v33, v34, v35);
      }
    }
  }
LABEL_4:
  if ( ptr != v63 )
    free(ptr);
  return v14;
}

