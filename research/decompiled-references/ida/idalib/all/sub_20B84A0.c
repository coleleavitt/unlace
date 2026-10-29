__int64 __fastcall sub_20B84A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r13
  __int64 v4; // r12
  unsigned int v5; // eax
  int v6; // r10d
  int v7; // r13d
  __int64 v8; // rax
  __int64 *v9; // rsi
  unsigned int v10; // r11d
  __int64 v11; // rdx
  unsigned __int8 v12; // cl
  int v13; // r8d
  char v14; // bl
  unsigned __int8 v15; // r9
  __int64 v16; // r9
  _QWORD *v17; // r14
  __int64 v18; // r9
  unsigned int v19; // r15d
  __int64 v20; // r9
  __int64 *v21; // r13
  _QWORD *v22; // r9
  __int64 result; // rax
  __int64 v24; // r9
  _QWORD *v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // rcx
  bool v30; // zf
  __int64 v31; // rdx
  __int64 v32; // r15
  __int64 v33; // rcx
  unsigned int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // rdi
  __int64 v37; // rdi
  __int64 v38; // rdi
  __int64 v39; // rax
  int v40; // esi
  __int64 v41; // [rsp+0h] [rbp-F8h]
  __int64 v42; // [rsp+8h] [rbp-F0h]
  __int64 v43; // [rsp+10h] [rbp-E8h]
  __int64 v44; // [rsp+18h] [rbp-E0h] BYREF
  __m128 v45; // [rsp+20h] [rbp-D8h] BYREF
  __m128 v46; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v47; // [rsp+40h] [rbp-B8h]
  __int64 v48; // [rsp+48h] [rbp-B0h]
  int v49; // [rsp+50h] [rbp-A8h]
  int v50; // [rsp+54h] [rbp-A4h]
  __int64 v51; // [rsp+58h] [rbp-A0h]
  __int64 v52; // [rsp+60h] [rbp-98h]
  int v53; // [rsp+68h] [rbp-90h]
  int v54; // [rsp+6Ch] [rbp-8Ch]
  int v55; // [rsp+70h] [rbp-88h]
  int v56; // [rsp+74h] [rbp-84h]
  __int64 v57; // [rsp+78h] [rbp-80h]
  __int64 v58; // [rsp+80h] [rbp-78h]
  __int64 v59; // [rsp+88h] [rbp-70h]
  __int64 v60; // [rsp+90h] [rbp-68h]
  __int64 v61; // [rsp+98h] [rbp-60h]
  __int64 v62; // [rsp+A0h] [rbp-58h]
  __int64 v63; // [rsp+A8h] [rbp-50h]
  char v64; // [rsp+B0h] [rbp-48h]

  v2 = a2;
  v44 = a1;
  sub_209FDF0((__int64)&v46, a1);
  v3 = *(unsigned int *)(a2 + 16);
  v4 = *(_QWORD *)a2;
  if ( !(_DWORD)v3 )
    goto LABEL_29;
  v5 = sub_2075CC0((__int64)&v46);
  v6 = v3 - 1;
  v7 = 1;
  v8 = v6 & v5;
  v9 = (__int64 *)(v4 + 8 * v8);
  v10 = v8;
  v11 = *v9;
  if ( *v9 == -4096 )
    goto LABEL_28;
  v41 = v2;
  while ( 1 )
  {
    if ( v11 == -8192 )
      goto LABEL_25;
    v12 = *(_BYTE *)(v11 - 16);
    v42 = v11;
    v13 = v56;
    v43 = v58;
    v14 = v12 & 2;
    if ( v47 == 0 || v46.m128_u64[0] == 0 || (v56 & 8) != 0 || *(_BYTE *)v46.m128_u64[0] != 14 )
      goto LABEL_21;
    v15 = *(_BYTE *)(v46.m128_u64[0] - 16);
    v16 = (v15 & 2) != 0 ? *(_QWORD *)(v46.m128_u64[0] - 32) : v46.m128_u64[0] + -16 - 8LL * ((v15 >> 2) & 0xF);
    if ( !*(_QWORD *)(v16 + 72) || (*(_BYTE *)(v11 + 36) & 8) != 0 )
      goto LABEL_21;
    if ( !v14 )
    {
      v17 = (_QWORD *)(v11 + -16 - 8LL * ((v12 >> 2) & 0xF));
      if ( v46.m128_u64[0] != v17[1] )
        goto LABEL_25;
      v18 = v17[3];
      if ( v18 && v47 == v18 )
      {
        v19 = (*(_WORD *)(v11 - 16) >> 6) & 0xF;
        goto LABEL_17;
      }
      goto LABEL_40;
    }
    v17 = *(_QWORD **)(v11 - 32);
    v22 = v17;
    if ( v46.m128_u64[0] != v17[1] )
      goto LABEL_25;
    v32 = v17[3];
    if ( v32 && v47 == v32 )
    {
      v19 = *(_DWORD *)(v11 - 24);
LABEL_17:
      v20 = 0;
      if ( v19 > 9 )
        v20 = v17[9];
      if ( v58 == v20 )
      {
LABEL_20:
        v2 = v41;
        sub_2082040(&v45, v9, (_QWORD *)(*(_QWORD *)v41 + 8LL * *(unsigned int *)(v41 + 16)), v41, 1);
        v21 = (__int64 *)v45.m128_u64[0];
        goto LABEL_30;
      }
LABEL_21:
      if ( v14 )
      {
        v22 = *(_QWORD **)(v11 - 32);
        goto LABEL_23;
      }
LABEL_40:
      v22 = (_QWORD *)(v11 + -16 - 8LL * ((v12 >> 2) & 0xF));
    }
LABEL_23:
    if ( v46.m128_u64[0] == v22[1] && v22[2] == v46.m128_u64[1] && v47 == v22[3] )
    {
      v33 = v48;
      if ( *(_BYTE *)v11 != 16 )
        v42 = sub_209E6C0(v11);
      if ( v33 == v42 && v49 == *(_DWORD *)(v11 + 16) && v51 == v22[4] && v50 == *(_DWORD *)(v11 + 20) )
      {
        v34 = v14 ? *(_DWORD *)(v11 - 24) : (*(_WORD *)(v11 - 16) >> 6) & 0xF;
        v35 = v34 <= 8 ? 0LL : v22[8];
        if ( v52 == v35
          && v53 == *(_DWORD *)(v11 + 24)
          && v54 == *(_DWORD *)(v11 + 28)
          && v55 == *(_DWORD *)(v11 + 32)
          && v13 == *(_DWORD *)(v11 + 36)
          && v57 == v22[5] )
        {
          v36 = v34 <= 9 ? 0LL : v22[9];
          if ( v43 == v36 && v59 == v22[6] && v60 == v22[7] )
          {
            v37 = v34 <= 0xA ? 0LL : v22[10];
            if ( v61 == v37 )
            {
              v38 = v34 <= 0xB ? 0LL : v22[11];
              if ( v62 == v38 )
              {
                v39 = v34 <= 0xC ? 0LL : v22[12];
                if ( v63 == v39 && v64 == (unsigned __int8)BYTE1(*(_QWORD *)v11) >> 7 )
                  goto LABEL_20;
              }
            }
          }
        }
      }
    }
LABEL_25:
    v10 = v6 & (v7 + v10);
    v9 = (__int64 *)(v4 + 8LL * v10);
    v11 = *v9;
    if ( *v9 == -4096 )
      break;
    ++v7;
  }
  v2 = v41;
LABEL_28:
  v4 = *(_QWORD *)v2;
  v3 = *(unsigned int *)(v2 + 16);
LABEL_29:
  sub_2082040(&v45, (_QWORD *)(v4 + 8 * v3), (_QWORD *)(v4 + 8 * v3), v2, 1);
  v21 = (__int64 *)v45.m128_u64[0];
LABEL_30:
  sub_2082040(
    &v45,
    (_QWORD *)(*(_QWORD *)v2 + 8LL * *(unsigned int *)(v2 + 16)),
    (_QWORD *)(*(_QWORD *)v2 + 8LL * *(unsigned int *)(v2 + 16)),
    v2,
    1);
  if ( (__int64 *)v45.m128_u64[0] == v21 || (result = *v21) == 0 )
  {
    if ( (unsigned __int8)sub_207FBB0((__int64 *)v2, &v44, &v45) )
    {
      sub_2082040(&v46, v45.m128_u64[0], (_QWORD *)(*(_QWORD *)v2 + 8LL * *(unsigned int *)(v2 + 16)), v2, 1);
    }
    else
    {
      v25 = (_QWORD *)v45.m128_u64[0];
      v26 = (unsigned int)(*(_DWORD *)(v2 + 8) + 1);
      v27 = *(unsigned int *)(v2 + 16);
      v46.m128_u64[0] = v45.m128_u64[0];
      v28 = (unsigned int)(4 * v26);
      v29 = (unsigned int)(2 * v27);
      if ( (unsigned int)v28 >= 3 * (int)v27 )
      {
        v40 = 2 * v27;
      }
      else
      {
        v29 = (unsigned int)(v27 - *(_DWORD *)(v2 + 12) - v26);
        if ( (unsigned int)v29 > (unsigned int)v27 >> 3 )
          goto LABEL_35;
        v40 = v27;
      }
      sub_2086980(v2, v40, v26, v29, v28, v24);
      sub_207FBB0((__int64 *)v2, &v44, &v46);
      v27 = *(unsigned int *)(v2 + 16);
      v25 = (_QWORD *)v46.m128_u64[0];
      LODWORD(v26) = *(_DWORD *)(v2 + 8) + 1;
LABEL_35:
      v30 = *v25 == -4096;
      *(_DWORD *)(v2 + 8) = v26;
      if ( !v30 )
        --*(_DWORD *)(v2 + 12);
      *v25 = v44;
      v31 = *(_QWORD *)v2;
      v45.m128_u64[0] = (unsigned __int64)v25;
      sub_2082040(&v46, v25, (_QWORD *)(v31 + 8 * v27), v2, 1);
    }
    return v44;
  }
  return result;
}
