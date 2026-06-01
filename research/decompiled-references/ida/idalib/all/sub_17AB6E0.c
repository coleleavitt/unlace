void __fastcall sub_17AB6E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rsi
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r15
  bool v10; // zf
  char v11; // al
  int v12; // eax
  __int64 v13; // rbp
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  int v17; // r12d
  unsigned __int64 v18; // r13
  void *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int64 v28; // rax
  __int64 v29; // rdx
  unsigned __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rdi
  void (*v33)(); // rax
  __int64 *v34; // rax
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  unsigned __int64 v38; // rcx
  __int64 *v39; // rax
  char v40; // al
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rax
  _QWORD *v44; // rbp
  __int64 v45; // rax
  size_t v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // r13
  unsigned __int64 v51; // rax
  __int64 v52; // rax
  size_t v53; // r12
  const char *v54; // rax
  unsigned __int64 v55; // rax
  unsigned int v56; // [rsp+4h] [rbp-D4h]
  __int64 v57; // [rsp+8h] [rbp-D0h] BYREF
  _BYTE v58[200]; // [rsp+10h] [rbp-C8h] BYREF

  v6 = (__int64)&v57;
  v57 = a3;
  sub_1CB44B0(a1, &v57);
  v9 = v57;
  v10 = (*(_BYTE *)(v57 + 74) & 2) == 0;
  v11 = *(_BYTE *)(v57 + 28);
  *(_QWORD *)(v57 + 112) = a4;
  if ( !v10 )
  {
    v12 = v11 & 0x7F;
    if ( (unsigned int)(v12 - 58) > 3 )
      goto LABEL_5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 104LL))(v9);
    v11 = *(_BYTE *)(v9 + 28);
  }
  v12 = v11 & 0x7F;
LABEL_5:
  if ( (unsigned int)(v12 - 59) > 2 )
    goto LABEL_18;
  v13 = *(_QWORD *)(a1 + 3920);
  v14 = *(unsigned int *)(v13 + 280);
  v15 = *(unsigned int *)(v13 + 8);
  v16 = *(_QWORD *)(v13 + 272);
  v17 = *(_DWORD *)(v13 + 280);
  v18 = v15 - *(_QWORD *)(v16 + 8 * v14 - 8);
  if ( v15 != v18 )
  {
    if ( v15 <= v18 )
    {
      if ( v18 > *(unsigned int *)(v13 + 12) )
      {
        v6 = v13 + 16;
        sub_2237220(*(_QWORD *)(a1 + 3920), v13 + 16, v18, 8);
        v15 = *(unsigned int *)(v13 + 8);
        v17 = *(_DWORD *)(v13 + 280);
      }
      v16 = *(_QWORD *)v13;
      v19 = (void *)(*(_QWORD *)v13 + 8 * v15);
      v20 = *(_QWORD *)v13 + 8 * v18;
      if ( v19 != (void *)v20 )
      {
        v6 = 0;
        memset(v19, 0, 8 * ((unsigned __int64)(v20 - 8 - (_QWORD)v19) >> 3) + 8);
      }
    }
    *(_DWORD *)(v13 + 8) = v18;
  }
  *(_DWORD *)(v13 + 280) = v17 - 1;
  if ( (*(_BYTE *)(v9 + 29) & 1) != 0 )
  {
    v34 = sub_B8C3D0(v9, v6, v16, v14, v7, v8);
    v37 = *v34;
    v38 = *v34 + 8LL * *((unsigned int *)v34 + 2);
    if ( *v34 >= v38 )
    {
      if ( v37 == v38 )
        goto LABEL_14;
      while ( *(_WORD *)(*(_QWORD *)v38 + 36LL) != 354 )
      {
        v38 += 8LL;
        if ( v37 == v38 )
          goto LABEL_14;
      }
    }
    else
    {
      v39 = (__int64 *)*v34;
      while ( 1 )
      {
        v37 = *v39;
        if ( *(_WORD *)(*v39 + 36) == 354 )
          break;
        if ( (__int64 *)v38 == ++v39 )
          goto LABEL_14;
      }
      if ( (__int64 *)v38 == v39 )
        goto LABEL_14;
    }
    v44 = *(_QWORD **)(v9 + 128);
    if ( v44
      || (sub_7052B0((__int64 *)(*(_QWORD *)(v9 + 104) + 96LL), *(_QWORD *)(v9 + 104), v37, v38, v35, v36),
          (v44 = *(_QWORD **)(v9 + 128)) != nullptr) )
    {
      v44 = (_QWORD *)v44[11];
    }
    v45 = sub_B8E970((__int64)(v44 + 8));
    v50 = v45;
    if ( v45 )
    {
      if ( (*(_BYTE *)(v45 + 28) & 0x7Fu) - 35 > 3 )
      {
        while ( 1 )
        {
          v51 = *(_QWORD *)(v50 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v50 = v51;
          if ( !v51 )
            break;
          if ( (*(_BYTE *)(v51 + 28) & 0x7Fu) - 35 <= 3 )
            goto LABEL_70;
        }
      }
      else
      {
LABEL_70:
        v56 = 0;
LABEL_71:
        v52 = *(_QWORD *)(v50 + 40);
        if ( (v52 & 7) == 0 && (v52 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        {
          v53 = j__strlen("__init");
          v54 = sub_995750(v50);
          if ( v46 == v53 && (!v46 || !memcmp(v54, "__init", v46)) )
            ++v56;
        }
        while ( 1 )
        {
          v55 = *(_QWORD *)(v50 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v50 = v55;
          if ( !v55 )
            break;
          if ( (*(_BYTE *)(v55 + 28) & 0x7Fu) - 35 <= 3 )
            goto LABEL_71;
        }
        if ( v56 > 1 )
          goto LABEL_65;
      }
    }
    v6 = v44[13];
    sub_7052B0((__int64 *)(v6 + 96), v6, v46, v47, v48, v49);
    if ( (*(_BYTE *)(v44[16] + 2LL) & 0x40) != 0 )
      goto LABEL_14;
LABEL_65:
    v6 = a1 + 8;
    sub_168B9F0((__int64)v58, (__int64 *)(a1 + 8), *(_DWORD *)(v9 + 24), 0x13CAu, 0);
    sub_15F7200(v58);
  }
LABEL_14:
  v21 = *(unsigned int *)(a1 + 10152);
  if ( (_DWORD)v21 )
  {
    v22 = *(_QWORD *)(*(_QWORD *)(a1 + 10144) + 48 * v21 - 40);
    if ( v22 )
    {
      v23 = *(_DWORD *)(v22 + 36);
      if ( v23 == 2 || (unsigned int)(v23 - 4) <= 1 )
      {
        v6 = *(unsigned int *)(v9 + 24);
        sub_1884910(a1, v6, v9, 1);
      }
    }
  }
LABEL_18:
  v24 = *(_QWORD *)(sub_B8C1B0(*(_QWORD *)(a1 + 544)) + 16);
  if ( (v24 & 4) != 0 )
    v28 = *(_QWORD *)((v24 & 0xFFFFFFFFFFFFFFF8LL) + 8);
  else
    v28 = v24 & 0xFFFFFFFFFFFFFFF8LL;
  v29 = *(_QWORD *)(a1 + 3032);
  *(_QWORD *)(a1 + 544) = v28;
  if ( !v29 )
    v29 = v28;
  if ( (*(_BYTE *)(v29 + 8) & 0x7Fu) - 19 <= 4 )
  {
    v30 = *(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    v29 = *(_QWORD *)(v9 + 16) & 4LL;
    if ( (*(_QWORD *)(v9 + 16) & 4) != 0 )
      v30 = *(_QWORD *)v30;
    v31 = *(_BYTE *)(v30 + 8) & 0x7F;
    if ( !v31 || v31 == 24 )
      *(_BYTE *)(v9 + 29) |= 0x10u;
  }
  if ( *(char *)(v9 + 28) >= 0 )
  {
    v32 = *(_QWORD *)(a1 + 256);
    v29 = (__int64)nullsub_150;
    v33 = *(void (**)())(*(_QWORD *)v32 + 56LL);
    if ( v33 != nullsub_150 )
    {
      v6 = v9;
      ((void (__fastcall *)(__int64, __int64))v33)(v32, v9);
    }
  }
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL) + 260LL) == 20 )
  {
    v40 = *(_BYTE *)(a1 + 1237);
    if ( v40 != *(_BYTE *)(a1 + 1233)
      || (v6 = *(unsigned __int8 *)(a1 + 1234), *(_BYTE *)(a1 + 1238) != (_BYTE)v6)
      || (v6 = *(unsigned __int8 *)(a1 + 1232), *(_BYTE *)(a1 + 1236) != (_BYTE)v6)
      || (v6 = *(unsigned __int8 *)(a1 + 1235), *(_BYTE *)(a1 + 1239) != (_BYTE)v6) )
    {
      if ( !*(_BYTE *)(a1 + 1236) && v40 == 2 && (*(_BYTE *)(v9 + 28) & 0x7Fu) - 58 <= 3 )
      {
        v41 = sub_B7E900(v9, v6, v29, v25, v26, v27);
        if ( v41 )
        {
          if ( (*(_BYTE *)(v41 + 68) & 1) != 0 )
          {
LABEL_85:
            sub_168B9F0((__int64)v58, (__int64 *)(a1 + 8), a4, 0x1C5Au, 0);
            sub_15F7200(v58);
          }
          else
          {
            v42 = *(_QWORD *)(v41 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            if ( v42 )
            {
              while ( (*(_BYTE *)(v42 + 28) & 0x7Fu) - 49 <= 2 )
              {
LABEL_50:
                if ( (*(_BYTE *)(v42 + 68) & 1) != 0 )
                  goto LABEL_85;
                v42 = *(_QWORD *)(v42 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                if ( !v42 )
                  return;
              }
              while ( 1 )
              {
                v43 = *(_QWORD *)(v42 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                v42 = v43;
                if ( !v43 )
                  break;
                if ( (*(_BYTE *)(v43 + 28) & 0x7Fu) - 49 <= 2 )
                  goto LABEL_50;
              }
            }
          }
        }
      }
    }
  }
}
