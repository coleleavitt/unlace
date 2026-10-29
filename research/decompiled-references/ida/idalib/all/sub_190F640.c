__int64 __fastcall sub_190F640(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _WORD *a5, char a6, __m128 a7)
{
  unsigned int v7; // r12d
  __int64 v8; // rbp
  int v10; // eax
  __int16 v12; // ax
  int v13; // eax
  char v14; // al
  __int64 result; // rax
  int v16; // eax
  __int64 v17; // rsi
  int v18; // ecx
  unsigned int v19; // eax
  __int64 v20; // rdx
  char v21; // dl
  _QWORD *v22; // r12
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned int v27; // esi
  __int64 v28; // r8
  unsigned int v29; // edx
  __int64 *v30; // rax
  __int64 v31; // rdi
  int v32; // edx
  __int64 v33; // rdi
  __int64 *v34; // rbx
  unsigned int v35; // eax
  unsigned __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // r12
  __int64 v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // r14
  __int64 v49; // rax
  _QWORD *v50; // rax
  int v51; // r11d
  __int64 *v52; // r10
  int v53; // edi
  bool v54; // zf
  _WORD *v55; // [rsp+8h] [rbp-E0h]
  __int64 v56; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v57; // [rsp+18h] [rbp-D0h] BYREF
  _WORD *v58; // [rsp+28h] [rbp-C0h] BYREF
  _QWORD v59[2]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v60; // [rsp+40h] [rbp-A8h]
  unsigned __int8 *v61[11]; // [rsp+50h] [rbp-98h] BYREF
  char v62; // [rsp+A8h] [rbp-40h]
  unsigned int v63; // [rsp+B0h] [rbp-38h]
  char v64; // [rsp+B4h] [rbp-34h]

  v7 = a2;
  v8 = a4;
  v10 = *(_DWORD *)(a4 + 96);
  v57 = a3;
  v56 = a4;
  if ( (BYTE1(v10) & 6) == 2 )
  {
    v16 = *(_DWORD *)(a1 + 4208);
    v17 = *(_QWORD *)(a1 + 4192);
    if ( v16 )
    {
      v18 = v16 - 1;
      v19 = (v16 - 1) & (((unsigned int)v8 >> 9) ^ ((unsigned int)v8 >> 4));
      v20 = *(_QWORD *)(v17 + 16LL * v19);
      if ( v8 == v20 )
        goto LABEL_10;
      if ( v20 != -4096 )
      {
        v32 = 1;
        while ( 1 )
        {
          v19 = v18 & (v32 + v19);
          v33 = *(_QWORD *)(v17 + 16LL * v19);
          if ( v8 == v33 )
            break;
          ++v32;
          if ( v33 == -4096 )
            goto LABEL_25;
        }
LABEL_10:
        sub_168B9F0((__int64)v59, (__int64 *)(a1 + 8), v7, 0x150Au, 0);
        if ( v62 )
        {
          sub_AE9DF0(v61, v57, 0xAu);
          v21 = v62;
        }
        else
        {
          v21 = v64;
          if ( v64 )
          {
            v41 = sub_168B9E0(v59);
            v42 = v60;
            if ( v60 )
              v42 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v60 + 32LL))(v60);
            v58 = (_WORD *)v42;
            v43 = sub_1587BC0(v41, (__int64 *)&v58, v37, v38, v39, v40);
            sub_AE9DF0((unsigned __int8 **)(*v43 + 32LL * v63 + 8), v57, 0xAu);
            v21 = v62;
          }
        }
        v22 = (_QWORD *)(*(_QWORD *)(v57 + 16) & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*(_QWORD *)(v57 + 16) & 4) != 0 )
          v22 = (_QWORD *)*v22;
        if ( v22 )
          v22 -= 8;
        if ( v21 )
        {
          sub_AE9DF0(v61, (__int64)v22, 0xAu);
        }
        else if ( v64 )
        {
          v48 = sub_168B9E0(v59);
          v49 = v60;
          if ( v60 )
            v49 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v60 + 32LL))(v60);
          v58 = (_WORD *)v49;
          v50 = sub_1587BC0(v48, (__int64 *)&v58, v44, v45, v46, v47);
          sub_AE9DF0((unsigned __int8 **)(*v50 + 32LL * v63 + 8), (__int64)v22, 0xAu);
        }
        sub_15F7200(v59);
        v27 = *(_DWORD *)(a1 + 4208);
        if ( v27 )
        {
          v24 = v56;
          v26 = v27 - 1;
          v28 = *(_QWORD *)(a1 + 4192);
          v29 = v26 & (((unsigned int)v56 >> 9) ^ ((unsigned int)v56 >> 4));
          v30 = (__int64 *)(v28 + 16LL * v29);
          v31 = *v30;
          if ( v56 == *v30 )
          {
LABEL_20:
            sub_168B9F0((__int64)v59, (__int64 *)(a1 + 8), *((_DWORD *)v30 + 2), 0x16F7u, 0);
            sub_15F7200(v59);
            return 1;
          }
          v51 = 1;
          v52 = nullptr;
          if ( v31 != -4096 )
          {
            while ( 1 )
            {
              if ( !v52 && v31 == -8192 )
                v52 = v30;
              v29 = v26 & (v51 + v29);
              v30 = (__int64 *)(v28 + 16LL * v29);
              v31 = *v30;
              if ( v56 == *v30 )
                goto LABEL_20;
              if ( v31 == -4096 )
              {
                if ( v52 )
                  v30 = v52;
                break;
              }
              ++v51;
            }
          }
          v53 = *(_DWORD *)(a1 + 4200);
          v59[0] = v30;
          v23 = (unsigned int)(v53 + 1);
          v25 = (unsigned int)(4 * v23);
          if ( (unsigned int)v25 < 3 * v27 )
          {
            v25 = v27 >> 3;
            if ( v27 - *(_DWORD *)(a1 + 4204) - (unsigned int)v23 > (unsigned int)v25 )
            {
LABEL_40:
              v54 = *v30 == -4096;
              *(_DWORD *)(a1 + 4200) = v23;
              if ( !v54 )
                --*(_DWORD *)(a1 + 4204);
              *v30 = v24;
              *((_DWORD *)v30 + 2) = 0;
              goto LABEL_20;
            }
LABEL_45:
            sub_1847A80((__int64 *)(a1 + 4192), v27, v23, v24, v25, v26);
            sub_183FA40((__int64 *)(a1 + 4192), &v56, v59);
            v24 = v56;
            LODWORD(v23) = *(_DWORD *)(a1 + 4200) + 1;
            v30 = (__int64 *)v59[0];
            goto LABEL_40;
          }
        }
        else
        {
          v59[0] = 0;
        }
        v27 *= 2;
        goto LABEL_45;
      }
    }
LABEL_25:
    v34 = (__int64 *)(a1 + 8);
    v35 = sub_B73090(v8);
    sub_168B9F0((__int64)v59, v34, v35, 0x1322u, 0);
    sub_1795A40((__int64)v59, &v57);
    sub_15F7200(v59);
    sub_168B9F0((__int64)v59, v34, v7, 0x18C1u, 0);
    sub_15F7200(v59);
    sub_B88650(v56, 1);
    return 1;
  }
  if ( (BYTE1(v10) & 6) != 4 )
  {
    if ( a5 )
      goto LABEL_4;
LABEL_28:
    v36 = sub_B73640(v8);
    v8 = v56;
    a5 = (_WORD *)v36;
    goto LABEL_4;
  }
  v55 = a5;
  result = sub_1E04000(a1, a2, v57);
  if ( (_BYTE)result )
    return result;
  a5 = v55;
  v8 = v56;
  if ( !v55 )
    goto LABEL_28;
LABEL_4:
  v12 = *a5;
  v58 = a5;
  if ( (v12 & 0x1FF) == 0x3C )
  {
    v13 = *(_DWORD *)a5;
    *(_BYTE *)(a1 + 4512) = 1;
    *(_BYTE *)(a1 + 4513) |= (v13 & 0x80000) != 0;
  }
  v14 = sub_B7D7F0(v57);
  sub_18C74E0(a1, (v14 == 0) + 5, v8, 4);
  *(_BYTE *)(*(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 41) = a6;
  v59[0] = &v58;
  v59[1] = a1;
  sub_15F0FC0(a1, a2, (__int64 (__fastcall *)(__int64))sub_19123D0, (__int64)v59);
  sub_190D5E0(a1, a7);
  return 0;
}
