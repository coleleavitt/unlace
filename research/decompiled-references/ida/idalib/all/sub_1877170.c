void __fastcall sub_1877170(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r13
  unsigned __int64 *v13; // rax
  unsigned __int64 v14; // rax
  __int64 *v15; // rax
  __int64 v16; // rcx
  unsigned __int64 *v17; // rax
  unsigned __int64 v18; // rax
  char v19; // r13
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 *v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rbp
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 *v37; // rbx
  __int64 *v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rbx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // [rsp+8h] [rbp-D0h] BYREF
  __int64 v53; // [rsp+18h] [rbp-C0h] BYREF
  _QWORD v54[2]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v55; // [rsp+30h] [rbp-A8h]
  unsigned __int8 *v56; // [rsp+40h] [rbp-98h] BYREF
  char v57; // [rsp+98h] [rbp-40h]
  unsigned int v58; // [rsp+A0h] [rbp-38h]
  char v59; // [rsp+A4h] [rbp-34h]

  v52 = a4;
  v7 = sub_BBF290(a4);
  v12 = *(_QWORD *)(v7 + 48);
  if ( (*(_BYTE *)(v12 + 29) & 1) == 0 )
    goto LABEL_13;
  v13 = sub_B8C3D0(*(_QWORD *)(v7 + 48), a2, v8, v9, v10, v11);
  v8 = *v13;
  v14 = *v13 + 8LL * *((unsigned int *)v13 + 2);
  if ( v8 >= v14 )
  {
    if ( v8 == v14 )
      goto LABEL_8;
    if ( *(_WORD *)(*(_QWORD *)v14 + 36LL) != 197 )
    {
      v15 = (__int64 *)(v14 + 8);
      while ( 1 )
      {
        v9 = (__int64)v15;
        if ( (__int64 *)v8 == v15 )
          goto LABEL_8;
        v16 = *v15++;
        if ( *(_WORD *)(v16 + 36) == 197 )
          goto LABEL_17;
      }
    }
    do
    {
LABEL_17:
      v24 = *(_QWORD *)v8;
      v25 = (__int64 *)(v8 + 8);
      if ( *(_WORD *)(v24 + 36) == 197 )
        break;
      v26 = *v25;
      v8 = (unsigned __int64)(v25 + 1);
    }
    while ( *(_WORD *)(v26 + 36) != 197 );
    return;
  }
  v9 = v8;
  while ( 1 )
  {
    a2 = *(_QWORD *)v9;
    if ( *(_WORD *)(*(_QWORD *)v9 + 36LL) == 197 )
      break;
    v9 += 8;
    if ( v14 == v9 )
      goto LABEL_8;
  }
  if ( v14 != v9 )
    goto LABEL_17;
LABEL_8:
  if ( (*(_BYTE *)(v12 + 29) & 1) == 0 )
    goto LABEL_13;
  v17 = sub_B8C3D0(v12, a2, v8, v9, v10, v11);
  v8 = *v17;
  v18 = *v17 + 8LL * *((unsigned int *)v17 + 2);
  if ( v8 < v18 )
  {
    v9 = v8;
    while ( 1 )
    {
      a2 = *(_QWORD *)v9;
      if ( *(_WORD *)(*(_QWORD *)v9 + 36LL) == 195 )
        break;
      v9 += 8;
      if ( v18 == v9 )
        goto LABEL_13;
    }
    if ( v18 != v9 )
      goto LABEL_36;
LABEL_13:
    v19 = *(_BYTE *)(v52 + 180) & 7;
    if ( sub_17A23E0(v52, a2, v8, v9, v10, v11) )
      goto LABEL_14;
    if ( !v19 || v19 == 3 )
    {
      v40 = sub_B395B0(a3, *(_QWORD *)(a1 + 248));
      *(_BYTE *)(v40 + 38) |= 1u;
      v28 = v40;
      sub_B8CC60(v52, v40, v41, v42, v43, v44);
      if ( *(_WORD *)(v28 + 36) != 197 )
      {
LABEL_29:
        if ( !v19 )
          return;
        goto LABEL_30;
      }
    }
    else
    {
      if ( v19 != 1 )
      {
LABEL_14:
        if ( !sub_17A23E0(v52, a2, v20, v21, v22, v23) )
        {
          v37 = (__int64 *)(a1 + 8);
          sub_168B9F0((__int64)v54, (__int64 *)(a1 + 8), a5, 0x199Eu, 0);
          LOBYTE(v53) = (*(_BYTE *)(v52 + 180) & 7) == 2;
          sub_1588420((__int64)v54, (unsigned __int8 *)&v53);
          sub_15F7200(v54);
          sub_168B9F0((__int64)v54, (__int64 *)(a1 + 8), *(_DWORD *)(a3 + 24), 0x16A6u, 0);
          sub_15F7200(v54);
          if ( (*(_BYTE *)(v52 + 180) & 7) == 2 )
          {
            sub_168B9F0((__int64)v54, v37, *(_DWORD *)(v52 + 24), 0x18F1u, 0);
            sub_1852C50((__int64)v54, &v52);
            sub_15F7200(v54);
          }
          else
          {
            sub_168B9F0((__int64)v54, v37, *(_DWORD *)(v52 + 176), 0x18F3u, 0);
            if ( v57 )
            {
              sub_AE9DF0(&v56, v52, 0xAu);
            }
            else if ( v59 )
            {
              v47 = sub_168B9E0(v54);
              v50 = v55;
              if ( v55 )
                v50 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v55 + 32LL))(v55);
              v53 = v50;
              v51 = sub_1587BC0(v47, &v53, v45, v46, v48, v49);
              sub_AE9DF0((unsigned __int8 **)(*v51 + 32LL * v58 + 8), v52, 0xAu);
            }
            sub_15F7200(v54);
          }
        }
        return;
      }
      v27 = sub_B395B0(a3, *(_QWORD *)(a1 + 248));
      *(_BYTE *)(v27 + 38) |= 1u;
      v28 = v27;
      sub_B8CC60(v52, v27, v29, v30, v31, v32);
      if ( *(_WORD *)(v28 + 36) != 197 )
      {
LABEL_30:
        sub_1861810(a1, v52, v33, v34, v35, v36);
        return;
      }
    }
    *(_BYTE *)(v28 + 39) = 1;
    goto LABEL_29;
  }
  if ( v8 == v18 )
    goto LABEL_13;
  if ( *(_WORD *)(*(_QWORD *)v18 + 36LL) != 195 )
  {
    v38 = (__int64 *)(v18 + 8);
    do
    {
      v9 = (__int64)v38;
      if ( (__int64 *)v8 == v38 )
        goto LABEL_13;
      v39 = *v38++;
    }
    while ( *(_WORD *)(v39 + 36) != 195 );
  }
LABEL_36:
  while ( *(_WORD *)(*(_QWORD *)v8 + 36LL) != 195 )
    v8 += 8LL;
}
