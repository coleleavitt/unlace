_BOOL8 __fastcall sub_3EE9B0(__int64 a1, __m128 a2)
{
  _BOOL8 result; // rax
  __int64 v4; // rdx
  int v5; // eax
  int v6; // ecx
  int v7; // r12d
  int v8; // r14d
  __int64 v9; // r13
  __int64 v10; // rbp
  int v11; // r12d
  char **v12; // rax
  int v13; // eax
  __int64 v14; // rdi
  __int64 v15; // rsi
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // r10d
  int v22; // ebp
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // r12
  int v26; // ecx
  int v27; // edx
  __int64 v28; // rcx
  __int64 v29; // r9
  int v30; // edx
  __int64 v31; // rcx
  __int64 v32; // r9
  char v33; // al
  int v34; // eax
  int v35; // ecx
  int *v36; // rax
  __int64 v37; // r9
  __int64 v38; // r8
  __int64 v39; // r14
  char v40; // cl
  __int64 v41; // rax
  int v42; // edx
  char v43; // dl
  __int64 v44; // rax
  __int64 v45; // rcx
  int v46; // eax
  __int64 v47; // rbp
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // [rsp+0h] [rbp-68h]
  int v52; // [rsp+0h] [rbp-68h]
  __int64 v53; // [rsp+0h] [rbp-68h]
  __int64 v54; // [rsp+8h] [rbp-60h]
  __int64 v55; // [rsp+8h] [rbp-60h]
  int v56; // [rsp+1Ch] [rbp-4Ch]
  int v57; // [rsp+24h] [rbp-44h] BYREF
  unsigned __int64 v58; // [rsp+28h] [rbp-40h]

  v58 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 384) )
    return 0;
  if ( (unsigned __int8)sub_3E8230(a1, *(double *)a2.m128_u64) )
  {
    if ( *(_WORD *)(a1 + 840) && !*(_BYTE *)(a1 + 145) && (*(_BYTE *)(a1 + 844) & 8) != 0 )
    {
      v13 = *(_DWORD *)(a1 + 136);
      *(__m128i *)(a1 + 144) = _mm_loadu_si128((const __m128i *)(a1 + 104));
      a2 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 120));
      *(_DWORD *)(a1 + 176) = v13;
      *(__m128 *)(a1 + 160) = a2;
    }
  }
  else
  {
    *(_WORD *)(a1 + 840) = 0;
  }
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 800) + 8LL);
  v5 = *(unsigned __int16 *)(a1 + 48);
  v6 = *(_DWORD *)(v4 + 104);
  if ( v6 <= v5 && v5 < *(_DWORD *)(v4 + 108) )
  {
    v8 = *(_DWORD *)(*(_QWORD *)(v4 + 112) + 16LL * (v5 - v6) + 8);
    v7 = v8 & 0x400;
    if ( (v8 & 0x100) != 0 || (v9 = -1, (*(_BYTE *)(a1 + 65) & 0xFD) == 1) )
      v9 = (int)sub_3EC1D0(a1, 0, 0, *(double *)a2.m128_u64);
    if ( (v8 & 0x200) != 0 )
      goto LABEL_9;
LABEL_8:
    if ( (*(_BYTE *)(a1 + 105) & 0xFD) == 1 )
      goto LABEL_9;
    goto LABEL_27;
  }
  if ( (*(_BYTE *)(a1 + 65) & 0xFD) == 1 )
  {
    v7 = 0;
    v8 = 0;
    v9 = (int)sub_3EC1D0(a1, 0, 0, *(double *)a2.m128_u64);
    goto LABEL_8;
  }
  v7 = 0;
  v8 = 0;
  v9 = -1;
  if ( (*(_BYTE *)(a1 + 105) & 0xFD) == 1 )
    goto LABEL_9;
LABEL_27:
  if ( (*(_BYTE *)(a1 + 844) & 6) == 0 )
  {
    v10 = -1;
    goto LABEL_10;
  }
LABEL_9:
  v10 = (int)sub_3EC1D0(a1, 1, 0, *(double *)a2.m128_u64);
LABEL_10:
  if ( v7 || (v11 = -1, (*(_BYTE *)(a1 + 145) & 0xFD) == 1) )
    v11 = sub_3EC1D0(a1, 2, 0, *(double *)a2.m128_u64);
  if ( !*(_WORD *)(a1 + 840) )
    goto LABEL_16;
  v12 = sub_3E7370(a1);
  if ( v12 )
  {
    if ( (unsigned __int8)sub_3E95A0((__int64 *)a1, (__int64)v12, v9, v10, v11) )
      return 0;
LABEL_16:
    sub_3EE680((_QWORD *)a1, v8, v9, v10, v11);
    return 0;
  }
  if ( (unsigned __int8)sub_3E8320(a1) )
    return (*(_BYTE *)(*(_QWORD *)(a1 + 16) + 25LL) & 0x20) != 0;
  v14 = 3015;
  v15 = a1 + 24;
  v16 = sub_CB3B0(0xBC7u, a1 + 24);
  if ( v16 != 6 )
  {
    if ( v16 )
      return 0;
    v21 = v10;
    if ( *(_BYTE *)(a1 + 145) )
      v21 = v11;
    v57 = v21;
    switch ( *(_WORD *)(a1 + 48) )
    {
      case 2:
      case 3:
        v15 = 21;
        v14 = a1;
        sub_3E8420(a1, 0x15u, *(unsigned __int16 *)(a1 + 842), (int)v10, (int)v9, v11, 0);
        goto LABEL_38;
      case 4:
      case 0x15:
      case 0x1F:
      case 0x33:
        if ( *(_BYTE *)(a1 + 65) != 5 )
          goto LABEL_16;
        v15 = (unsigned int)v10;
        v14 = a1;
        sub_3E8990(a1, (unsigned int)v10, *(double *)a2.m128_u64);
        goto LABEL_38;
      case 5:
        v34 = sub_3E6370(*(_QWORD *)(a1 + 832), v15, *(double *)a2.m128_u64);
        v30 = *(unsigned __int16 *)(a1 + 842);
        v31 = (int)v10;
        v32 = v34;
        v57 = v34;
        goto LABEL_66;
      case 7:
        sub_3E8420(a1, 0x23u, *(unsigned __int16 *)(a1 + 842), v9, v10, 0, 0);
        sub_3E8420(a1, 0x1Eu, *(unsigned __int16 *)(a1 + 842), v9, v10, 3, 0);
        v15 = 13;
        v14 = a1;
        sub_3E8420(a1, 0xDu, *(unsigned __int16 *)(a1 + 842), v9, v10, v10, 0);
        goto LABEL_38;
      case 8:
        sub_3E8420(a1, 0x23u, *(unsigned __int16 *)(a1 + 842), v10, v9, 0, 0);
        sub_3E8420(a1, 0x1Eu, *(unsigned __int16 *)(a1 + 842), v10, v9, 3, 0);
        v15 = 13;
        v14 = a1;
        sub_3E8420(a1, 0xDu, *(unsigned __int16 *)(a1 + 842), v10, v9, v10, 0);
        goto LABEL_38;
      case 0x13:
        sub_3E8420(a1, 0x1Cu, *(unsigned __int16 *)(a1 + 842), v10, v9, 0, 0);
        v15 = 23;
        v14 = a1;
        sub_3E8420(a1, 0x17u, *(unsigned __int16 *)(a1 + 842), v10, v9, v11, 0);
        goto LABEL_38;
      case 0x14:
        sub_3E8420(a1, 0x1Bu, *(unsigned __int16 *)(a1 + 842), v10, v9, 0, 0);
        v15 = 22;
        sub_3E8420(a1, 0x16u, *(unsigned __int16 *)(a1 + 842), v10, v9, v11, 0);
        v14 = v51;
        goto LABEL_38;
      case 0x16:
        v15 = (unsigned int)v10;
        v14 = a1;
        sub_3EDAB0(a1, (unsigned int)v10, *(double *)a2.m128_u64);
        goto LABEL_38;
      case 0x1B:
        sub_3E8420(a1, 0x1Cu, *(unsigned __int16 *)(a1 + 842), v10, v9, 0, 0);
        v15 = 24;
        v14 = a1;
        sub_3E8420(a1, 0x18u, *(unsigned __int16 *)(a1 + 842), v10, v9, v11, 0);
        goto LABEL_38;
      case 0x1D:
      case 0x1E:
        v15 = 19;
        v14 = a1;
        sub_3E8420(a1, 0x13u, *(unsigned __int16 *)(a1 + 842), (int)v10, (int)v9, v11, 0);
        goto LABEL_38;
      case 0x20:
        v15 = 7;
        v14 = a1;
        sub_3E8420(a1, 7u, *(unsigned __int16 *)(a1 + 842), (int)v9, 0x3BEA45E214ADDC55LL, (int)v10, 0);
        goto LABEL_38;
      case 0x21:
        goto LABEL_38;
      case 0x22:
      case 0x23:
      case 0x56:
      case 0x57:
        v15 = (unsigned int)v9;
        v14 = a1;
        sub_3ECE80(a1, (unsigned int)v9, v10, v11, *(double *)a2.m128_u64);
        goto LABEL_38;
      case 0x24:
      case 0x25:
        goto LABEL_50;
      case 0x26:
        v27 = *(unsigned __int16 *)(a1 + 842);
        v28 = (int)v9;
        v29 = (int)v10;
        goto LABEL_61;
      case 0x2B:
        goto LABEL_73;
      case 0x2C:
        v43 = is_call_insn(a1 + 24, v15, v17, v18, v19, v20);
        v44 = *(_QWORD *)(a1 + 832);
        v45 = *(int *)(v44 + 64);
        v46 = *(_DWORD *)(v44 + 84);
        if ( v43 )
        {
          v15 = 57;
          v14 = a1;
          sub_3E8420(a1, 0x39u, 0, v45, (int)v9, 0x3BEA45E214ADDC55LL, v46);
        }
        else
        {
          v37 = (int)v9;
          v38 = v45;
          v55 = v10;
          v52 = v46;
LABEL_90:
          v14 = a1;
          sub_3E8420(a1, 0x36u, 0, 0x3BEA45E214ADDC55LL, v38, v37, v52);
          v15 = v55;
        }
        goto LABEL_38;
      case 0x2D:
        v40 = is_call_insn(a1 + 24, v15, v17, v18, v19, v20);
        v41 = *(_QWORD *)(a1 + 832);
        v42 = *(_DWORD *)(v41 + 84);
        if ( v40 )
        {
          if ( *(_BYTE *)(a1 + 65) == 7 )
          {
            v15 = 56;
            v14 = a1;
            sub_3E8420(a1, 0x38u, v42, *(_QWORD *)(a1 + 80), 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, 0);
          }
          else
          {
            v15 = 57;
            sub_3E8420(a1, 0x39u, v42, *(int *)(v41 + 64), (int)v9, 0x3BEA45E214ADDC55LL, v42);
            v14 = v53;
          }
        }
        else
        {
          v15 = 3;
          sub_1D14D0(
            a1,
            3u,
            v42,
            *(_QWORD *)(a1 + 40) + *(unsigned __int16 *)(a1 + 50),
            0x3BEA45E214ADDC55LL,
            (int)v10,
            1);
LABEL_73:
          v14 = a1;
          if ( !(unsigned __int8)sub_1D1380(a1) )
          {
            v15 = 55;
            v14 = a1;
            sub_3E8420(
              a1,
              0x37u,
              *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL),
              *(_QWORD *)(a1 + 80),
              0x3BEA45E214ADDC55LL,
              0x3BEA45E214ADDC55LL,
              0);
          }
        }
        goto LABEL_38;
      case 0x30:
      case 0x58:
      case 0x59:
      case 0x5A:
      case 0x5B:
      case 0x6E:
      case 0x6F:
        v15 = (__int64)&v57;
        v14 = a1;
        sub_3EC9C0(a1, (__int64)&v57, v9, v10, v11, *(double *)a2.m128_u64);
        goto LABEL_38;
      case 0x32:
        v39 = (int)sub_3E6370(*(_QWORD *)(a1 + 832), v15, *(double *)a2.m128_u64);
        sub_3E8420(a1, 0x23u, *(unsigned __int16 *)(a1 + 842), v10, v9, 0, 0);
        sub_3E8420(a1, 0x1Eu, *(unsigned __int16 *)(a1 + 842), v10, v9, 3, 0);
        sub_3E8420(a1, 0x21u, *(unsigned __int16 *)(a1 + 842), v10, v9, 1, 0);
        sub_3E8420(a1, 0xDu, *(unsigned __int16 *)(a1 + 842), v10, v9, v39, 0);
        sub_3E8420(a1, 0x1Du, *(unsigned __int16 *)(a1 + 842), v39, 0x3BEA45E214ADDC55LL, 2, 0);
        v14 = *(_QWORD *)(a1 + 832);
        v15 = (unsigned int)v39;
        sub_3E62F0(v14, v39);
        goto LABEL_38;
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
      case 0x3A:
      case 0x3B:
      case 0x3C:
      case 0x3D:
      case 0x3E:
      case 0x3F:
      case 0x40:
      case 0x41:
      case 0x42:
      case 0x43:
        v14 = a1;
        sub_3EDB30(a1, *(double *)a2.m128_u64);
        goto LABEL_38;
      case 0x44:
      case 0x45:
        v30 = *(unsigned __int16 *)(a1 + 842);
        v31 = (int)v10;
        v32 = v11;
LABEL_66:
        v15 = 20;
        v14 = a1;
        sub_3E8420(a1, 0x14u, v30, v31, (int)v9, v32, 0);
        goto LABEL_38;
      case 0x46:
      case 0x47:
        v54 = 3015;
        sub_3E8420(a1, 0x19u, *(unsigned __int16 *)(a1 + 842), v10, v9, 0, 0);
        sub_3E8420(a1, 0x1Au, *(unsigned __int16 *)(a1 + 842), v10, v9, 3, 0);
LABEL_50:
        v14 = a1;
        sub_3E8420(a1, 0xCu, *(unsigned __int16 *)(a1 + 842), v10, v9, v11, 0);
        v15 = v54;
        goto LABEL_38;
      case 0x49:
      case 0x4B:
        v15 = *(unsigned __int16 *)(a1 + 842);
        v14 = a1;
        sub_3EC660(a1, v15, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL), v9, v9, 0, *(double *)a2.m128_u64);
        goto LABEL_38;
      case 0x4A:
      case 0x4C:
        v14 = a1;
        v15 = *(unsigned __int16 *)(a1 + 842);
        sub_3EC660(a1, v15, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL), v9, v9, 1u, *(double *)a2.m128_u64);
        goto LABEL_38;
      case 0x4D:
      case 0x4E:
        if ( (_DWORD)v10 == -1 )
        {
          v15 = 0;
          v14 = a1;
          sub_3E8E20(a1, 0, a1 + 104, v9, *(double *)a2.m128_u64);
          if ( *(_WORD *)(a1 + 48) == 78 )
          {
            v15 = 54;
            v14 = a1;
            sub_3E8420(
              a1,
              0x36u,
              *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL),
              0x3BEA45E214ADDC55LL,
              *(int *)(*(_QWORD *)(a1 + 832) + 64LL),
              v11,
              *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL));
          }
          goto LABEL_38;
        }
        if ( !under_debugger )
          sub_37CFE0(0xCEDDu, v15, *(double *)a2.m128_u64);
        break;
      case 0x4F:
        if ( *(_BYTE *)(a1 + 65) != 7 )
          goto LABEL_70;
        sub_3E8420(
          a1,
          0x3Du,
          *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL),
          0x3BEA45E214ADDC55LL,
          0x3BEA45E214ADDC55LL,
          *(int *)(*(_QWORD *)(a1 + 832) + 480LL),
          0);
        sub_3E8420(
          a1,
          0x3Du,
          *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL),
          0x3BEA45E214ADDC55LL,
          0x3BEA45E214ADDC55LL,
          *(int *)(*(_QWORD *)(a1 + 832) + 484LL),
          0);
        v15 = 56;
        v14 = a1;
        sub_3E8420(
          a1,
          0x38u,
          *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL),
          *(_QWORD *)(a1 + 80),
          0x3BEA45E214ADDC55LL,
          0x3BEA45E214ADDC55LL,
          0);
        goto LABEL_38;
      case 0x52:
        v36 = *(int **)(a1 + 832);
        v37 = v36[120];
        v38 = v36[16];
        v55 = 3015;
        v52 = v36[21];
        goto LABEL_90;
      case 0x53:
        v15 = (unsigned int)v10;
        v14 = a1;
        sub_3EDC20(a1, (unsigned int)v10, *(double *)a2.m128_u64);
        goto LABEL_38;
      case 0x54:
      case 0x55:
        if ( (_DWORD)v9 == -1 )
        {
          v15 = 1;
          v14 = a1;
          sub_3E8E20(a1, 1, a1 + 64, v10, *(double *)a2.m128_u64);
          if ( *(_WORD *)(a1 + 48) == 84 )
          {
            v27 = *(unsigned __int16 *)(a1 + 842);
            v28 = v11;
            v29 = **(int **)(*(_QWORD *)(a1 + 832) + 552LL);
LABEL_61:
            v15 = 4;
            v14 = a1;
            sub_3E8420(a1, 4u, v27, v28, 0x3BEA45E214ADDC55LL, v29, 0);
          }
          goto LABEL_38;
        }
        if ( !under_debugger )
          sub_37CFE0(0xCEDEu, v15, *(double *)a2.m128_u64);
        break;
      case 0x5F:
        if ( (v8 & 0x800) != 0 || (v35 = -1, (*(_BYTE *)(a1 + 185) & 0xFD) == 1) )
          v35 = sub_3EC1D0(a1, 3, 0, *(double *)a2.m128_u64);
        v15 = (unsigned int)v10;
        v14 = a1;
        sub_3EDD40(a1, (unsigned int)v10, v11, v35, *(double *)a2.m128_u64);
        goto LABEL_38;
      case 0x64:
      case 0x68:
        if ( (v8 & 0x800) != 0 || (v26 = -1, (*(_BYTE *)(a1 + 185) & 0xFD) == 1) )
          v26 = sub_3EC1D0(a1, 3, 0, *(double *)a2.m128_u64);
        v15 = (unsigned int)v10;
        v14 = a1;
        sub_3EE060(a1, (unsigned int)v10, v11, v26, *(double *)a2.m128_u64);
        goto LABEL_38;
      case 0x65:
        v56 = v21;
        sub_3E8420(a1, 4u, *(unsigned __int16 *)(a1 + 842), (int)v9, 0x3BEA45E214ADDC55LL, v10, 0);
        sub_3E8420(a1, 0x21u, 2, v56, **(int **)(*(_QWORD *)(a1 + 832) + 528LL), 0, 0);
        sub_3E8420(a1, 0x21u, 2, v56, **(int **)(*(_QWORD *)(a1 + 832) + 528LL), 1, 0);
        v15 = 29;
        v14 = a1;
        sub_3E8420(a1, 0x1Du, *(unsigned __int16 *)(a1 + 842), v10, 0x3BEA45E214ADDC55LL, 2, 0);
        goto LABEL_38;
      case 0x66:
      case 0x67:
        v15 = (unsigned int)v9;
        v14 = a1;
        v33 = sub_3ED200(a1, (unsigned int)v9, v10, v11, *(double *)a2.m128_u64) ^ 1;
        goto LABEL_69;
      case 0xCC:
        v15 = (unsigned int)v9;
        v14 = a1;
        v33 = sub_3E86B0(a1, (unsigned int)v9, v10, *(double *)a2.m128_u64) ^ 1;
LABEL_69:
        if ( !v33 )
          goto LABEL_38;
LABEL_70:
        sub_3EE680((_QWORD *)a1, v8, v9, v10, v11);
        sub_32B650(*(_QWORD **)(a1 + 8), *(_QWORD *)(a1 + 40), 0x31u);
        return 0;
      case 0xCD:
        if ( *(_WORD *)(a1 + 842) == 4 )
        {
          sub_1D19B0(a1, 0, 2u, v10, v9, v11);
          v47 = (int)sub_3E6370(*(_QWORD *)(a1 + 832), 0, *(double *)a2.m128_u64);
          sub_1D14D0(a1, 3u, 1, 1, 0x3BEA45E214ADDC55LL, v47, 2);
          v15 = 20;
          v14 = a1;
          sub_3E8420(a1, 0x14u, 1, v47, v11, 0, 0);
          goto LABEL_38;
        }
        if ( !under_debugger )
          sub_37CFE0(0xCEDFu, v15, *(double *)a2.m128_u64);
        return result;
      case 0xCE:
        v15 = (unsigned int)v9;
        v14 = a1;
        sub_3E8C70(a1, (unsigned int)v9, *(double *)a2.m128_u64);
        goto LABEL_38;
      case 0xD6:
      case 0xD7:
        v15 = a1 + 64;
        v14 = a1;
        sub_3E9230(a1, a1 + 64, *(double *)a2.m128_u64);
        goto LABEL_38;
      default:
        if ( (*(_BYTE *)(a1 + 844) & 6) != 0 )
        {
          v15 = (unsigned int)v9;
          v14 = a1;
          sub_3EC730(a1, v9, v10, *(double *)a2.m128_u64);
LABEL_38:
          if ( (*(_BYTE *)(a1 + 844) & 0x10) != 0 )
          {
            v22 = v57;
            if ( v57 == -1 )
              goto LABEL_43;
            v23 = *(_QWORD *)(a1 + 832);
            v24 = **(int **)(v23 + 528);
            if ( v57 == (_DWORD)v24 )
            {
              v48 = *(_QWORD *)(v23 + 584);
              if ( !v48 )
                sub_3E4140(*(double *)a2.m128_u64, v14, v15);
              v25 = *(int *)(*(_QWORD *)(v23 + 576) + 4 * v48 - 4);
              v49 = v57;
              *(_QWORD *)(v23 + 584) = v48 - 1;
              v22 = v25;
              sub_1D14D0(a1, 4u, *(unsigned __int16 *)(a1 + 842), v49, 0x3BEA45E214ADDC55LL, v25, 0);
              v50 = *(_QWORD *)(a1 + 832);
              v57 = v25;
              v24 = **(int **)(v50 + 528);
            }
            else
            {
              v25 = v57;
            }
            sub_3E8420(a1, 0x21u, *(unsigned __int16 *)(a1 + 842), v25, v24, 1, 0);
            sub_3E8420(a1, 0x1Du, *(unsigned __int16 *)(a1 + 842), v25, 0x3BEA45E214ADDC55LL, 2, 0);
            sub_3E62F0(*(_QWORD *)(a1 + 832), v22);
            if ( (*(_BYTE *)(a1 + 844) & 0x10) != 0 )
LABEL_43:
              sub_1D14D0(a1, 3u, 1, 0, 0x3BEA45E214ADDC55LL, 3, 4);
          }
          return 0;
        }
        if ( !under_debugger )
          sub_37CFE0(0xCEE0u, v15, *(double *)a2.m128_u64);
        return result;
    }
    BUG();
  }
  sub_3E8420(a1, 0x3Au, 1, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, 0);
  return 1;
}
