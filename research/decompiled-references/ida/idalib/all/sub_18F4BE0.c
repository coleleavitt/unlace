void __fastcall sub_18F4BE0(__int64 *a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 v3; // r12
  char v4; // al
  unsigned __int8 v5; // cl
  unsigned int v7; // edx
  bool v8; // r15
  unsigned __int8 v9; // al
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbp
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // r15
  __int64 v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // r14
  __int64 v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // [rsp+8h] [rbp-E0h]
  __int64 v49; // [rsp+8h] [rbp-E0h]
  __int64 v50; // [rsp+18h] [rbp-D0h] BYREF
  _QWORD v51[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v52; // [rsp+30h] [rbp-B8h]
  unsigned __int8 *v53[11]; // [rsp+40h] [rbp-A8h] BYREF
  char v54; // [rsp+98h] [rbp-50h]
  unsigned int v55; // [rsp+A0h] [rbp-48h]
  char v56; // [rsp+A4h] [rbp-44h]

  v3 = *(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a3 + 16) & 4) != 0 )
    v3 = *(_QWORD *)v3;
  v4 = *(_BYTE *)(a3 + 28) & 0x7F;
  if ( v4 != 43 || (*(_BYTE *)(v3 + 8) & 0x7F) != 0 )
  {
    if ( (*(_BYTE *)(a1[29] + 1) & 8) == 0 )
    {
      v5 = *(_BYTE *)(a1[68] + 8) & 0x7F;
      if ( v5 > 0x12u )
      {
        if ( ((v5 + 94) & 0x7Fu) > 5 )
          return;
      }
      else if ( ((1LL << v5) & 0x40182) == 0 )
      {
        return;
      }
    }
    v7 = a2;
    v8 = v4 == 52;
    v9 = *(_BYTE *)(v3 + 8) & 0x7F;
    if ( (unsigned int)v9 - 35 <= 3 )
    {
      v11 = sub_B8C1B0(v3);
      v7 = a2;
      v12 = *(_QWORD *)(v11 + 16);
      if ( (v12 & 4) != 0 )
        v13 = *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF8LL);
      else
        v13 = v12 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v13 )
        BUG();
      v14 = *(_QWORD *)(v13 + 64);
      if ( v14 && (v10 = 2, (*(_BYTE *)(v14 + 10) & 0x20) != 0)
        || (v10 = 0, v9 = *(_BYTE *)(v3 + 8) & 0x7F, (unsigned int)v9 - 34 <= 5) )
      {
LABEL_9:
        sub_168B9F0((__int64)v51, a1 + 1, v7, 0x1348u, 0);
        if ( v54 )
        {
          sub_AE9DF0(v53, a3, 0xAu);
          if ( !v54 )
            goto LABEL_39;
        }
        else
        {
          if ( !v56 )
          {
LABEL_11:
            sub_15F7200(v51);
            sub_168B9F0((__int64)v51, a1 + 1, *(_DWORD *)(a3 + 24), 0x172Eu, 0);
            if ( v54 )
            {
              sub_AE9DF0(v53, a3, 0xAu);
            }
            else if ( v56 )
            {
              v17 = sub_168B9E0(v51);
              v20 = v52;
              if ( v52 )
                v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v52 + 32LL))(v52);
              v50 = v20;
              v21 = sub_1587BC0(v17, &v50, v15, v16, v18, v19);
              sub_AE9DF0((unsigned __int8 **)(*v21 + 32LL * v55 + 8), a3, 0xAu);
            }
            sub_15F7200(v51);
            return;
          }
          v22 = sub_168B9E0(v51);
          v26 = v52;
          if ( v52 )
          {
            v48 = v22;
            v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v52 + 32LL))(v52);
            v22 = v48;
          }
          v50 = v26;
          v27 = sub_1587BC0(v22, &v50, v22, v23, v24, v25);
          sub_AE9DF0((unsigned __int8 **)(*v27 + 32LL * v55 + 8), a3, 0xAu);
          if ( !v54 )
          {
LABEL_39:
            if ( !v56 )
              goto LABEL_11;
            v28 = sub_168B9E0(v51);
            v32 = v52;
            if ( v52 )
            {
              v49 = v28;
              v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v52 + 32LL))(v52);
              v28 = v49;
            }
            v50 = v32;
            v33 = sub_1587BC0(v28, &v50, v28, v29, v30, v31);
            sub_AE9DF0((unsigned __int8 **)(*v33 + 32LL * v55 + 8), v8, 3u);
            if ( !v54 )
            {
LABEL_43:
              if ( !v56 )
                goto LABEL_11;
              v38 = sub_168B9E0(v51);
              v39 = v52;
              if ( v52 )
                v39 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v52 + 32LL))(v52);
              v50 = v39;
              v40 = sub_1587BC0(v38, &v50, v34, v35, v36, v37);
              sub_AE9DF0((unsigned __int8 **)(*v40 + 32LL * v55 + 8), v10, 3u);
              if ( !v54 )
              {
LABEL_47:
                if ( v56 )
                {
                  v45 = sub_168B9E0(v51);
                  v46 = v52;
                  if ( v52 )
                    v46 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v52 + 32LL))(v52);
                  v50 = v46;
                  v47 = sub_1587BC0(v45, &v50, v41, v42, v43, v44);
                  sub_AE9DF0((unsigned __int8 **)(*v47 + 32LL * v55 + 8), v3, 0xCu);
                }
                goto LABEL_11;
              }
LABEL_26:
              sub_AE9DF0(v53, v3, 0xCu);
              goto LABEL_11;
            }
LABEL_25:
            sub_AE9DF0(v53, v10, 3u);
            if ( !v54 )
              goto LABEL_47;
            goto LABEL_26;
          }
        }
        sub_AE9DF0(v53, v8, 3u);
        if ( !v54 )
          goto LABEL_43;
        goto LABEL_25;
      }
    }
    else
    {
      v10 = 0;
      if ( (unsigned int)v9 - 34 <= 5 )
        goto LABEL_9;
    }
    v10 = 2LL * (v9 != 8) + 1;
    goto LABEL_9;
  }
}
