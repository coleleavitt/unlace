void __fastcall sub_1AAABD0(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rdi
  int v4; // eax
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r12
  __int64 v12; // r13
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r15
  __int64 *v19; // rax
  __int64 v20; // r14
  __int64 *v21; // rax
  unsigned int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // rdx
  _QWORD *v34; // rsi
  int v35; // eax
  int v36; // eax
  __int64 v37; // rdx
  unsigned int v38; // edi
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rax
  _QWORD *v43; // [rsp+8h] [rbp-E0h] BYREF
  __int64 v44; // [rsp+10h] [rbp-D8h] BYREF
  int v45; // [rsp+18h] [rbp-D0h]
  __m128 v46; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v47; // [rsp+30h] [rbp-B8h]
  unsigned __int8 *v48; // [rsp+40h] [rbp-A8h] BYREF
  char v49; // [rsp+98h] [rbp-50h]
  unsigned int v50; // [rsp+A0h] [rbp-48h]
  char v51; // [rsp+A4h] [rbp-44h]

  if ( (*(_BYTE *)(sub_168B6E0(a1) + 97) & 4) != 0
    && *(char *)(a2 + 28) >= 0
    && ((*(_BYTE *)(a2 + 96) & 7) == 2 || (*(_BYTE *)(a2 + 96) & 7) == 0 && ((*(_BYTE *)(a2 + 96) >> 3) & 3) == 2) )
  {
    if ( ((*(_BYTE *)(a2 + 28) + 85) & 0x7D) == 0 )
      goto LABEL_16;
    v3 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
      v3 = *(_QWORD *)(v3 + 8);
    v4 = *(_BYTE *)(sub_B8EAA0(v3) + 8) & 0x7F;
    if ( v4 && v4 != 24 )
    {
      if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x2B )
        goto LABEL_16;
      v5 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
        v5 = *(_QWORD *)v5;
      if ( ((*(_BYTE *)(v5 + 8) + 70) & 0x7Fu) > 3 )
      {
LABEL_16:
        v6 = sub_168B6F0(a1);
        v11 = v6;
        if ( !v6 )
          BUG();
        v12 = v6 - 72;
        if ( (*(_BYTE *)(v6 - 43) & 1) != 0 )
        {
          v13 = sub_B8C3D0(v6 - 72, a2, v7, v8, v9, v10);
          v17 = *((unsigned int *)v13 + 2);
          v18 = *v13 + 8 * v17;
          v19 = (*(_BYTE *)(v11 - 43) & 1) != 0 ? (__int64 *)*sub_B8C3D0(v12, a2, v17, v14, v15, v16) : nullptr;
          if ( (__int64 *)v18 != v19 )
          {
            v20 = *v19;
            v21 = v19 + 1;
            if ( (unsigned __int16)(*(_WORD *)(v20 + 36) - 318) <= 1u )
            {
LABEL_22:
              v22 = sub_B73090(a2);
              sub_168B9F0((__int64)&v46, (__int64 *)a1, v22, 0xB65u, 0);
              sub_15F7200(&v46);
              sub_168B9F0((__int64)&v46, (__int64 *)a1, *(_DWORD *)(v20 + 24), 0x1672u, 0);
              if ( v49 )
              {
                sub_1AA2FB0(&v48, 19);
              }
              else if ( v51 )
              {
                v25 = sub_168B9E0(&v46);
                v28 = v47;
                if ( v47 )
                  v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v47 + 32LL))(v47);
                v44 = v28;
                v29 = sub_1587BC0(v25, &v44, v23, v24, v26, v27);
                sub_1AA2FB0((unsigned __int8 **)(*v29 + 32LL * v50 + 8), 19);
              }
              sub_15F7200(&v46);
              return;
            }
            while ( (__int64 *)v18 != v21 )
            {
              v20 = *v21++;
              if ( (unsigned __int16)(*(_WORD *)(v20 + 36) - 318) <= 1u )
                goto LABEL_22;
            }
          }
        }
        v44 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v11 - 72) + 32LL))(v12);
        v45 = sub_B73090(a2);
        if ( (unsigned __int8)sub_1AA39F0(a1 + 192, &v44, &v43) )
        {
          if ( (*(_BYTE *)(a1 + 192) & 1) != 0 )
          {
            v32 = a1 + 200;
            v33 = 64;
          }
          else
          {
            v32 = *(_QWORD *)(a1 + 200);
            v33 = 16LL * *(unsigned int *)(a1 + 208);
          }
          sub_1AA3AC0(&v46, v43, (_QWORD *)(v32 + v33), a1 + 192, 1);
          return;
        }
        v34 = v43;
        v35 = *(_DWORD *)(a1 + 192) >> 1;
        v46.m128_u64[0] = (unsigned __int64)v43;
        v36 = v35 + 1;
        if ( (*(_BYTE *)(a1 + 192) & 1) != 0 )
        {
          v38 = 12;
          v37 = 4;
        }
        else
        {
          v37 = *(unsigned int *)(a1 + 208);
          v38 = 3 * v37;
        }
        v39 = (unsigned int)(4 * v36);
        if ( v38 <= (unsigned int)v39 )
        {
          sub_1AAA6D0(a1 + 192, 2 * v37, v37, v39, v30, v31);
        }
        else
        {
          v40 = (unsigned int)v37 >> 3;
          if ( (int)v37 - (v36 + *(_DWORD *)(a1 + 196)) > (unsigned int)v40 )
          {
LABEL_41:
            *(_DWORD *)(a1 + 192) = *(_DWORD *)(a1 + 192) & 1 | (2 * v36);
            if ( *v34 != -4096 )
              --*(_DWORD *)(a1 + 196);
            *v34 = v44;
            v43 = v34;
            *((_DWORD *)v34 + 2) = v45;
            if ( (*(_BYTE *)(a1 + 192) & 1) != 0 )
            {
              v41 = a1 + 200;
              v42 = 64;
            }
            else
            {
              v41 = *(_QWORD *)(a1 + 200);
              v42 = 16LL * *(unsigned int *)(a1 + 208);
            }
            sub_1AA3AC0(&v46, v34, (_QWORD *)(v42 + v41), a1 + 192, 1);
            return;
          }
          sub_1AAA6D0(a1 + 192, v37, v37, v40, v30, v31);
        }
        sub_1AA39F0(a1 + 192, &v44, &v46);
        v34 = (_QWORD *)v46.m128_u64[0];
        v36 = (*(_DWORD *)(a1 + 192) >> 1) + 1;
        goto LABEL_41;
      }
    }
  }
}
