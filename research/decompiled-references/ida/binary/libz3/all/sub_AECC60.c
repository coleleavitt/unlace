void __fastcall sub_AECC60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  unsigned __int8 v9; // cl
  __int64 *v10; // rax
  __int64 v11; // rdi
  unsigned int v12; // r15d
  __int64 v13; // r13
  __int64 v14; // r14
  bool v15; // zf
  __int64 *v16; // rax
  __int64 v17; // r13
  int v18; // eax
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // r13
  __int64 v24; // r15
  int v25; // eax
  int v26; // r8d
  int v27; // r9d
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // r13
  __int64 v31; // r15
  int v32; // eax
  int v33; // r8d
  int v34; // r9d
  __int64 v35; // rax
  __int64 v36; // rsi
  __int64 v37; // rsi
  __int64 v38; // r14
  __int64 v39; // rsi
  __int64 v40; // r14
  __int64 v41; // rsi
  __int64 v42; // r14
  int v43; // [rsp-8h] [rbp-58h]
  int v44; // [rsp+0h] [rbp-50h]
  int v45[2]; // [rsp+0h] [rbp-50h]
  int v46; // [rsp+8h] [rbp-48h]
  int v47; // [rsp+10h] [rbp-40h] BYREF
  int v48; // [rsp+18h] [rbp-38h]
  char v49; // [rsp+20h] [rbp-30h]
  int v50; // [rsp+28h] [rbp-28h]
  int v51; // [rsp+30h] [rbp-20h]
  int v52; // [rsp+38h] [rbp-18h]
  void *v53; // [rsp+40h] [rbp-10h]

  if ( !*(_BYTE *)(a1 + 40) )
    return;
  v9 = *(_BYTE *)(a2 + 7) & 3;
  if ( (*(_BYTE *)(a2 + 7) & 0x40) == 0 )
  {
    if ( v9 == 2 )
      goto LABEL_20;
    if ( v9 != 3 )
    {
      v12 = 3;
      if ( !v9 )
        goto LABEL_26;
      goto LABEL_34;
    }
    goto LABEL_37;
  }
  if ( (unsigned int)v9 - 2 > 1 )
  {
    v10 = (__int64 *)((a2 + 4LL * (*(_DWORD *)(a2 + 4) & 0xFFFFFF) + 15) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_BYTE *)(a2 + 7) & 0x20) != 0 )
    {
      v11 = v10[1];
      if ( v9 )
        goto LABEL_6;
    }
    else
    {
      v11 = *v10;
      if ( v9 )
      {
LABEL_6:
        v12 = 3;
        if ( v11 )
          goto LABEL_7;
LABEL_34:
        v13 = *(_QWORD *)(a1 + 848);
        if ( v13 )
        {
          v14 = *(_QWORD *)(a1 + 856);
          goto LABEL_9;
        }
        v17 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)v45 = *(_QWORD *)(v17 + 848);
        sub_180C5A0(&v47, "smt");
        v18 = sub_15E3510(v17, &v47, 0, 0, *(_QWORD *)v45, 0);
        v21 = sub_15DC610(v17, v18, 0, 0, v19, v20, v43, v45[0], v46, v47, v48, v49, v50, v51, v52, v53);
        v13 = v21;
        if ( v21 )
        {
          v22 = *(_QWORD *)(a1 + 848);
          ++*(_DWORD *)(v21 + 8);
          v14 = *(_QWORD *)(a1 + 856);
          if ( v22 )
          {
            v15 = (*(_DWORD *)(v22 + 8))-- == 1;
            if ( v15 )
            {
              sub_15D7BC0(v14, v22);
              v14 = *(_QWORD *)(a1 + 856);
            }
          }
          *(_QWORD *)(a1 + 848) = v13;
          goto LABEL_9;
        }
        v41 = *(_QWORD *)(a1 + 848);
        v42 = *(_QWORD *)(a1 + 856);
        if ( v41 )
        {
          v15 = (*(_DWORD *)(v41 + 8))-- == 1;
          if ( v15 )
            sub_15D7BC0(v42, v41);
        }
        *(_QWORD *)(a1 + 848) = 0;
        goto LABEL_36;
      }
    }
    if ( !v11 )
      goto LABEL_26;
    v12 = 1;
    goto LABEL_7;
  }
  v16 = (__int64 *)((a2 + 4LL * (*(_DWORD *)(a2 + 4) & 0xFFFFFF) + 19) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_BYTE *)(a2 + 7) & 0x20) != 0 )
    ++v16;
  v11 = *v16;
  if ( v9 != 2 )
  {
    if ( v11 )
    {
      v12 = 2;
LABEL_7:
      v13 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 48LL))(
              v11,
              *(_QWORD *)(*(_QWORD *)a1 + 9000LL));
      if ( v13 )
      {
        v14 = *(_QWORD *)(a1 + 8);
LABEL_9:
        ++*(_DWORD *)(v13 + 8);
        sub_AEC890((_QWORD *)a1, (unsigned int *)a2, v12, v13, a3, a6);
        goto LABEL_10;
      }
      if ( !*(_BYTE *)(a1 + 40) )
      {
LABEL_36:
        sub_AEC890((_QWORD *)a1, (unsigned int *)a2, v12, 0, a3, a6);
        return;
      }
      if ( v12 != 1 )
      {
        if ( v12 - 2 <= 1 )
          goto LABEL_34;
        goto LABEL_20;
      }
LABEL_26:
      v13 = *(_QWORD *)(a1 + 800);
      if ( v13 )
      {
        v14 = *(_QWORD *)(a1 + 808);
      }
      else
      {
        v23 = *(_QWORD *)(a1 + 8);
        v24 = *(_QWORD *)(v23 + 848);
        sub_180C5A0(&v47, "assumption");
        v25 = sub_15E3510(v23, &v47, 0, 0, v24, 0);
        v28 = sub_15DC610(v23, v25, 0, 0, v26, v27, v43, v44, v46, v47, v48, v49, v50, v51, v52, v53);
        v13 = v28;
        if ( !v28 )
        {
          v39 = *(_QWORD *)(a1 + 800);
          v40 = *(_QWORD *)(a1 + 808);
          if ( v39 )
          {
            v15 = (*(_DWORD *)(v39 + 8))-- == 1;
            if ( v15 )
              sub_15D7BC0(v40, v39);
          }
          *(_QWORD *)(a1 + 800) = 0;
          sub_AEC890((_QWORD *)a1, (unsigned int *)a2, 1u, 0, a3, a6);
          return;
        }
        v29 = *(_QWORD *)(a1 + 800);
        ++*(_DWORD *)(v28 + 8);
        v14 = *(_QWORD *)(a1 + 808);
        if ( v29 )
        {
          v15 = (*(_DWORD *)(v29 + 8))-- == 1;
          if ( v15 )
          {
            sub_15D7BC0(v14, v29);
            v14 = *(_QWORD *)(a1 + 808);
          }
        }
        *(_QWORD *)(a1 + 800) = v13;
      }
      ++*(_DWORD *)(v13 + 8);
      sub_AEC890((_QWORD *)a1, (unsigned int *)a2, 1u, v13, a3, a6);
LABEL_10:
      v15 = (*(_DWORD *)(v13 + 8))-- == 1;
      if ( v15 )
        sub_15D7BC0(v14, v13);
      return;
    }
LABEL_37:
    v12 = 2;
    goto LABEL_34;
  }
  v12 = 0;
  if ( v11 )
    goto LABEL_7;
LABEL_20:
  v13 = *(_QWORD *)(a1 + 816);
  if ( v13 )
  {
    v14 = *(_QWORD *)(a1 + 824);
LABEL_22:
    ++*(_DWORD *)(v13 + 8);
    sub_AEC890((_QWORD *)a1, (unsigned int *)a2, 0, v13, a3, a6);
    goto LABEL_10;
  }
  v30 = *(_QWORD *)(a1 + 8);
  v31 = *(_QWORD *)(v30 + 848);
  sub_180C5A0(&v47, "rup");
  v32 = sub_15E3510(v30, &v47, 0, 0, v31, 0);
  v35 = sub_15DC610(v30, v32, 0, 0, v33, v34, v43, v44, v46, v47, v48, v49, v50, v51, v52, v53);
  v13 = v35;
  if ( v35 )
  {
    v36 = *(_QWORD *)(a1 + 816);
    ++*(_DWORD *)(v35 + 8);
    v14 = *(_QWORD *)(a1 + 824);
    if ( v36 )
    {
      v15 = (*(_DWORD *)(v36 + 8))-- == 1;
      if ( v15 )
      {
        sub_15D7BC0(v14, v36);
        v14 = *(_QWORD *)(a1 + 824);
      }
    }
    *(_QWORD *)(a1 + 816) = v13;
    goto LABEL_22;
  }
  v37 = *(_QWORD *)(a1 + 816);
  v38 = *(_QWORD *)(a1 + 824);
  if ( v37 )
  {
    v15 = (*(_DWORD *)(v37 + 8))-- == 1;
    if ( v15 )
      sub_15D7BC0(v38, v37);
  }
  *(_QWORD *)(a1 + 816) = 0;
  sub_AEC890((_QWORD *)a1, (unsigned int *)a2, 0, 0, a3, a6);
}

