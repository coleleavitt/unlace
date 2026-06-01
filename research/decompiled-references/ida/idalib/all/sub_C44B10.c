__int64 __fastcall sub_C44B10(__int64 *a1, _QWORD *a2)
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
  __int64 v16; // r13
  int v17; // eax
  int v18; // esi
  char *v19; // rax
  __int64 v20; // rdi
  char v21; // cl
  char v22; // dl
  unsigned int v23; // eax
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rsi
  __int64 v28; // r13
  char *v29; // rsi
  char v30; // cl
  char v31; // dl
  __int64 v32; // rdi
  __int64 v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rax
  bool v36; // zf
  __int64 v37; // [rsp+0h] [rbp-1F8h]
  char v38; // [rsp+Ah] [rbp-1EEh]
  char v39; // [rsp+Ah] [rbp-1EEh]
  char v40; // [rsp+Bh] [rbp-1EDh]
  char v41; // [rsp+Bh] [rbp-1EDh]
  int v42; // [rsp+Ch] [rbp-1ECh]
  int v43; // [rsp+Ch] [rbp-1ECh]
  char v44; // [rsp+1Fh] [rbp-1D9h] BYREF
  _QWORD v45[3]; // [rsp+20h] [rbp-1D8h] BYREF
  char v46; // [rsp+38h] [rbp-1C0h]
  __int64 v47; // [rsp+48h] [rbp-1B0h]
  void *ptr; // [rsp+50h] [rbp-1A8h]
  __int64 v49; // [rsp+58h] [rbp-1A0h]
  _BYTE v50[80]; // [rsp+60h] [rbp-198h] BYREF
  __int64 *v51; // [rsp+B0h] [rbp-148h] BYREF
  __int64 v52; // [rsp+B8h] [rbp-140h]
  __int64 v53; // [rsp+C0h] [rbp-138h] BYREF

  v4 = a2[3];
  v5 = *a1;
  v6 = a2[7];
  v47 = 0;
  v46 |= 1u;
  ptr = v50;
  v49 = 0x800000000LL;
  v50[65] = 0;
  v7 = *(_QWORD *)(v5 + 32);
  memset(v45, 0, sizeof(v45));
  if ( (*(_BYTE *)(v6 + 1) & 6) != 0 )
  {
    v25 = sub_A73030(*(_QWORD *)(v5 + 16), *(_QWORD *)(v6 + 8), 1u);
    v6 = a2[7];
    v8 = v25;
  }
  else
  {
    v8 = *(_QWORD *)(v6 + 8);
  }
  v9 = sub_C2C1C0(v7, v6, v8, (__int64)v45);
  v14 = sub_C39A10(v9, v5, v4, v10, v11);
  if ( (_BYTE)v14 )
  {
    v14 = sub_C3FB70(a2[4], &v44, *a1, v12, v13);
    if ( (_BYTE)v14 )
    {
      if ( v44 )
        v26 = a2[5];
      else
        v26 = a2[6];
      v14 = sub_C44E70(a1, v26);
      goto LABEL_4;
    }
    v16 = *a1;
    v17 = *(_DWORD *)(*a1 + 48);
    if ( *(_BYTE *)(*a1 + 914) )
    {
      if ( !v17 )
        goto LABEL_4;
      **(_BYTE **)(v16 + 24) = 1;
      v18 = *(_DWORD *)(v16 + 900);
      v51 = &v53;
      v52 = 0x800000000LL;
      v19 = *(char **)(v16 + 24);
      v42 = v18;
      v20 = *((_QWORD *)v19 + 1);
      v21 = *v19;
      *((_QWORD *)v19 + 1) = &v51;
      v22 = v19[1];
      v38 = v21;
      *(_DWORD *)(v16 + 900) = *(_DWORD *)(v16 + 40) + 1;
      v40 = v22;
      sub_C44E70(a1, a2[6]);
      v23 = v52;
      if ( (_DWORD)v52 )
      {
        v27 = *(_QWORD *)(v16 + 24);
        *(_BYTE *)v27 = v38;
        *(_BYTE *)(v27 + 1) = v40;
        *(_QWORD *)(v27 + 8) = v20;
        *(_DWORD *)(v16 + 900) = v42;
        v28 = *a1;
        v29 = *(char **)(*a1 + 24);
        v30 = *v29;
        v31 = v29[1];
        v43 = *(_DWORD *)(*a1 + 900);
        v32 = *((_QWORD *)v29 + 1);
        *((_QWORD *)v29 + 1) = &v51;
        v39 = v30;
        v37 = v32;
        v33 = (__int64)v51;
        v41 = v31;
        *(_DWORD *)(v28 + 900) = *(_DWORD *)(v28 + 40) + 1;
        sub_C239B0(v33, v33 + 32LL * v23);
        v34 = a2[5];
        LODWORD(v52) = 0;
        sub_C44E70(a1, v34);
        v35 = *(_QWORD *)(v28 + 24);
        v36 = (_DWORD)v52 == 0;
        *(_BYTE *)v35 = v39;
        if ( !v36 )
        {
          *(_BYTE *)(v35 + 1) = v41;
          *(_QWORD *)(v35 + 8) = v37;
          *(_DWORD *)(v28 + 900) = v43;
          sub_C14610(*a1, (__int64)a2, 2396);
          sub_C23820((__int64)&v51);
          goto LABEL_4;
        }
        *(_BYTE *)(v35 + 1) = v41;
        *(_QWORD *)(v35 + 8) = v37;
        *(_DWORD *)(v28 + 900) = v43;
      }
      else
      {
        v24 = *(_QWORD *)(v16 + 24);
        *(_BYTE *)v24 = v38;
        *(_BYTE *)(v24 + 1) = v40;
        *(_QWORD *)(v24 + 8) = v20;
        *(_DWORD *)(v16 + 900) = v18;
      }
      sub_C23820((__int64)&v51);
      goto LABEL_4;
    }
    if ( v17 )
    {
      v14 = *(unsigned __int8 *)(v16 + 915);
      if ( (_BYTE)v14 )
      {
        v14 = 0;
        **(_BYTE **)(v16 + 24) = 1;
        sub_C44E70(a1, a2[5]);
        sub_C44E70(a1, a2[6]);
      }
    }
  }
LABEL_4:
  if ( ptr != v50 )
    free(ptr);
  return v14;
}
