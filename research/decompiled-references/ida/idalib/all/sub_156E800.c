__int64 __fastcall sub_156E800(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4,
        __m128i a5,
        __m128 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v10; // rdx
  __int16 v11; // bp
  int v12; // r12d
  __int64 v13; // rax
  __int64 result; // rax
  unsigned int v15; // ecx
  unsigned __int16 v16; // si
  __int64 v17; // rdx
  bool v18; // zf
  __int64 *v20; // rdi
  __int64 v21; // rax
  char v22; // al
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 *v27; // rdi
  __int64 v28; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // r14
  __int64 *v33; // rdi
  unsigned int v34; // r14d
  __int64 v35; // r13
  unsigned __int64 v36; // r13
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // r8
  size_t v41; // rdx
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rax
  size_t v44; // rax
  __int64 v45; // rax
  unsigned __int64 v46; // rax
  __int64 v47; // rax
  __int16 v48; // ax
  unsigned __int64 v49; // rax
  __int64 v50; // rax
  size_t v51; // rax
  size_t v52; // rax
  __int64 *v53; // rdi
  int v54; // r14d
  __int64 *v55; // rdi
  int v56; // ecx
  __int64 v57; // [rsp+8h] [rbp-B0h]
  __int64 v58; // [rsp+8h] [rbp-B0h]
  size_t v59; // [rsp+8h] [rbp-B0h]
  unsigned __int64 v60; // [rsp+8h] [rbp-B0h]
  __int64 v61; // [rsp+8h] [rbp-B0h]
  __int64 v62; // [rsp+8h] [rbp-B0h]
  __int64 v63; // [rsp+8h] [rbp-B0h]
  int v64; // [rsp+8h] [rbp-B0h]
  __int64 v65; // [rsp+8h] [rbp-B0h]
  unsigned int v66; // [rsp+1Ch] [rbp-9Ch] BYREF
  unsigned __int64 v67; // [rsp+20h] [rbp-98h] BYREF
  unsigned __int64 v68; // [rsp+28h] [rbp-90h]
  unsigned __int8 *v69; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int64 v70; // [rsp+38h] [rbp-80h]

  v10 = *(_QWORD *)(a1 + 8);
  v11 = *(_WORD *)(a1 + 92);
  v12 = *(_DWORD *)(a1 + 88);
  if ( *(_BYTE *)(v10 + 968) )
  {
    if ( *(_QWORD *)(v10 + 760) )
    {
      v13 = *(_QWORD *)(v10 + 48);
      *(_BYTE *)(v10 + 968) = 1;
      *(_BYTE *)(v13 + 6) = 1;
    }
    result = 0;
    *(_WORD *)(a1 + 32) = 1;
  }
  else
  {
    v20 = *(__int64 **)(a1 + 8);
    switch ( *(_WORD *)(a1 + 32) )
    {
      case 1:
        sub_FC70B0((__int64)&v69, *(_QWORD *)(a1 + 104), *(_DWORD *)(a1 + 16), 1615);
        sub_AEA040((__int64)&v69);
        result = 0;
        break;
      case 3:
        if ( *(_QWORD *)(v10 + 760) )
        {
          v23 = *(_QWORD *)(v10 + 48);
          *(_BYTE *)(v10 + 968) = 1;
          *(_BYTE *)(v23 + 6) = 1;
        }
        v24 = *(_QWORD *)(a1 + 96);
        v18 = *(_QWORD *)(a1 + 2072) == 0;
        *(_WORD *)(a1 + 32) = 1;
        v25 = *(_QWORD *)(v24 + 656);
        if ( v18
          || (sub_1730EB0(v25, *(_QWORD *)(v24 + 608), 0, 0),
              v24 = *(_QWORD *)(a1 + 96),
              v25 = *(_QWORD *)(v24 + 656),
              !*(_QWORD *)(a1 + 2072)) )
        {
          v26 = *(_BYTE *)(*(_QWORD *)(a1 + 8) + 744LL) != 0 ? 0xF : 0;
        }
        else
        {
          v26 = 3;
        }
        sub_172A9A0(v25, *(_QWORD *)(v24 + 608), v26);
        result = 0;
        break;
      case 0x19:
        sub_FC70B0((__int64)&v69, *(_QWORD *)(a1 + 104), *(_DWORD *)(a1 + 16), 1668);
        sub_AEA040((__int64)&v69);
        sub_1478A90(a1);
        result = 0;
        break;
      case 0x21:
      case 0x24:
        if ( (*(_BYTE *)(*(_QWORD *)(v10 + 56) + 2LL) & 4) == 0 )
        {
          sub_FC70B0((__int64)&v69, *(_QWORD *)(a1 + 104), *(_DWORD *)(a1 + 16), 1615);
          sub_AEA040((__int64)&v69);
          v27 = *(__int64 **)(a1 + 8);
          *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
          sub_14634E0(v27, (int *)(a1 + 16));
          goto LABEL_53;
        }
        v28 = sub_15013F0(a1, a5, a6);
        goto LABEL_56;
      case 0x3F:
        v28 = sub_183E390(
                *(_QWORD *)(a1 + 96),
                *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL),
                a2,
                *(unsigned int *)(a1 + 16));
        if ( *(_WORD *)(a1 + 32) == 63 )
        {
          v61 = v28;
          sub_156DFB0(a1, 0, 0);
          v28 = v61;
        }
        goto LABEL_56;
      case 0x49:
        result = sub_1503160((const __m128i *)a1, (__int64)a2, (__int64)a3, a5, a6);
        break;
      case 0x57:
        if ( (*(_BYTE *)(*(_QWORD *)(v10 + 56) + 1LL) & 8) == 0 )
          goto LABEL_22;
        v49 = *(_QWORD *)(v10 + 2944);
        if ( v49 >= *(unsigned int *)(v10 + 2912) )
        {
          v65 = a4;
          v50 = sub_14180A0((__int64)v20, 1u);
          a4 = v65;
        }
        else
        {
          v50 = *(_QWORD *)(v10 + 2904) + 24 * v49;
        }
        if ( *(_WORD *)(v50 + 16) != 146 )
        {
          v20 = *(__int64 **)(a1 + 8);
          goto LABEL_22;
        }
        sub_1481E50(a1, (__int64)a2, 0);
        sub_1481E50(a1, (__int64)a3, 0);
        v53 = *(__int64 **)(a1 + 8);
        *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
        sub_14634E0(v53, (int *)(a1 + 16));
        v54 = *(_DWORD *)(a1 + 40);
        v55 = *(__int64 **)(a1 + 8);
        *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
        sub_14634E0(v55, (int *)(a1 + 16));
        v64 = *(_DWORD *)(a1 + 40);
        v56 = -((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) & 0x10) == 0);
        LOBYTE(v56) = v56 & 0x77;
        sub_FC70B0((__int64)&v69, *(_QWORD *)(a1 + 104), v54, v56 + 2116);
        v67 = __PAIR64__(v64, v54);
        LOBYTE(v68) = 1;
        sub_AEC610((__int64 *)&v69, (__int64 *)&v67);
        sub_AEA040((__int64)&v69);
        LODWORD(v69) = 0;
        result = sub_154F090((__m128i *)a1, 0, v54, v64, (__int32 *)&v69, a2, a5, a6, 3u);
        break;
      case 0x66:
        if ( (*(_BYTE *)(*(_QWORD *)(v10 + 56) + 1LL) & 8) == 0 )
          goto LABEL_22;
        v29 = *(_QWORD *)(v10 + 2944);
        if ( v29 >= *(unsigned int *)(v10 + 2912) )
        {
          v62 = a4;
          v30 = sub_14180A0((__int64)v20, 1u);
          v10 = *(_QWORD *)(a1 + 8);
          a4 = v62;
        }
        else
        {
          v30 = *(_QWORD *)(v10 + 2904) + 24 * v29;
        }
        v20 = (__int64 *)v10;
        if ( *(_WORD *)(v30 + 16) != 146 )
          goto LABEL_22;
        *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
        sub_14634E0((__int64 *)v10, (int *)(a1 + 16));
        sub_FC70B0((__int64)&v69, *(_QWORD *)(a1 + 104), *(_DWORD *)(a1 + 40), 2225);
        v31 = 0;
        goto LABEL_63;
      case 0x69:
      case 0x77:
      case 0x8A:
      case 0x92:
      case 0x99:
      case 0xA6:
        goto LABEL_20;
      case 0x7E:
        sub_1481E50(a1, (__int64)a2, 0);
        v34 = *(_DWORD *)(a1 + 16);
        v66 = 0;
        v35 = sub_156E540(a1, 0, &v66, a5, a6);
        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 15LL) & 4) != 0 )
        {
          v51 = j__strlen("top-level asm block");
          sub_1569A00(a1, 0x3Fu, 15, "top-level asm block", v51, a5, *(double *)a6.m128_u64);
          if ( v35 == 1 )
          {
LABEL_53:
            result = 0;
            break;
          }
          v36 = v35 & 0xFFFFFFFFFFFFFFFELL;
        }
        else
        {
          if ( v35 == 1 )
          {
            v52 = j__strlen("top-level asm block");
            sub_1569A00(a1, 0x3Fu, 15, "top-level asm block", v52, a5, *(double *)a6.m128_u64);
            result = 0;
            break;
          }
          v36 = v35 & 0xFFFFFFFFFFFFFFFELL;
          v37 = *(_DWORD *)(v36 + 16) * ((*(_WORD *)(v36 + 2) >> 6) & 7u);
          v67 = v36 + 4LL * *(unsigned int *)(v36 + 4) + 20;
          v68 = v37;
          v59 = j__strlen(asc_22E1692);
          v38 = sub_2246FB0(&v67, asc_22E1692, v59, 0);
          v39 = v68;
          v40 = 0;
          if ( v38 < v68 )
          {
            v40 = v68 - v38;
            v39 = v38;
          }
          v70 = v40;
          v69 = (unsigned __int8 *)(v67 + v39);
          v41 = v59;
          v60 = v40;
          v42 = sub_2247130(&v69, asc_22E1692, v41, -1) + 1;
          if ( v42 > v70 )
            v42 = v70;
          v43 = v70 - v60 + v42;
          if ( v43 > v70 )
            v43 = v70;
          if ( v43 )
          {
            sub_FC70B0((__int64)&v69, *(_QWORD *)(a1 + 104), v34, 1687);
            sub_AEA040((__int64)&v69);
          }
          v44 = j__strlen("top-level asm block");
          sub_1569A00(a1, 0x3Fu, 15, "top-level asm block", v44, a5, *(double *)a6.m128_u64);
        }
        v28 = sub_17A69D0(*(_QWORD *)(a1 + 96), v36, v34, v66);
LABEL_56:
        result = sub_17A2530(*(_QWORD *)(a1 + 96), v28, 0);
        break;
      case 0x86:
        v45 = *(_QWORD *)(v10 + 56);
        if ( (*(_BYTE *)(v45 + 21) & 4) == 0 && (*(_BYTE *)(v45 + 89) & 1) == 0 )
          goto LABEL_20;
        sub_1481E50(a1, (__int64)a2, 0);
        v28 = sub_14AD6A0(a1, a5, a6);
        goto LABEL_56;
      case 0x9D:
        if ( (*(_BYTE *)(*(_QWORD *)(v10 + 56) + 1LL) & 8) == 0 )
          goto LABEL_22;
        v46 = *(_QWORD *)(v10 + 2944);
        if ( v46 >= *(unsigned int *)(v10 + 2912) )
        {
          v63 = a4;
          v47 = sub_14180A0((__int64)v20, 1u);
          a4 = v63;
        }
        else
        {
          v47 = *(_QWORD *)(v10 + 2904) + 24 * v46;
        }
        v48 = *(_WORD *)(v47 + 16);
        if ( v48 == 138 )
        {
LABEL_20:
          LODWORD(v69) = 0;
          result = sub_14977F0(a1, 0, &v69, (__int64)a2, a3, nullptr, a5, a6);
        }
        else
        {
          v20 = *(__int64 **)(a1 + 8);
          if ( v48 == 146 )
          {
            *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
            sub_14634E0(v20, (int *)(a1 + 16));
            sub_FC70B0((__int64)&v69, *(_QWORD *)(a1 + 104), *(_DWORD *)(a1 + 40), 2225);
            v31 = 1;
LABEL_63:
            sub_AE9DF0(&v69, v31, 2u);
            sub_AEA040((__int64)&v69);
            LODWORD(v69) = 0;
            result = sub_14977F0(a1, 0, &v69, (__int64)a2, a3, nullptr, a5, a6);
          }
          else
          {
LABEL_22:
            if ( (*(_BYTE *)(a1 + 35) & 4) != 0 )
            {
              *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
              sub_14634E0(v20, (int *)(a1 + 16));
              result = 0;
            }
            else
            {
              v21 = v20[7];
              if ( (*(_BYTE *)(v21 + 200) & 1) != 0
                && ((v58 = a4, (*(_BYTE *)(v21 + 1) & 8) == 0)
                  ? (v22 = sub_147EA80(a1, 0, 1))
                  : (v22 = sub_1562A00((const __m128i *)a1, 1)),
                    a4 = v58,
                    !v22) )
              {
                result = sub_147E1E0(a1);
              }
              else
              {
                result = sub_1567B60((__m128i *)a1, (__int64)a2, (int *)a3, a4, 3, a8, a5, a6);
              }
            }
          }
        }
        break;
      case 0xAB:
        sub_FC70B0((__int64)&v69, *(_QWORD *)(a1 + 104), *(_DWORD *)(a1 + 16), 1911);
        sub_AEA040((__int64)&v69);
        LOWORD(v69) = 63;
        sub_1566E40(a1, &v69, 1, 0);
        result = 0;
        break;
      case 0xAC:
        LODWORD(v69) = 6;
        v28 = sub_156D770((const __m128i *)a1, 0, &v69, a5, a6);
        goto LABEL_56;
      case 0xC9:
        v32 = *(_QWORD *)(a1 + 104);
        ++*(_BYTE *)(v32 + 4);
        v33 = *(__int64 **)(a1 + 8);
        *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
        sub_14634E0(v33, (int *)(a1 + 16));
        result = sub_156E800(a1, a2, a3, 0);
        --*(_BYTE *)(v32 + 4);
        break;
      case 0x164:
      case 0x165:
        if ( (*(_BYTE *)(*(_QWORD *)(v10 + 56) + 89LL) & 1) == 0 )
          goto LABEL_22;
        goto LABEL_20;
      case 0x18B:
      case 0x18C:
        sub_156F2E0(a1);
        result = 0;
        break;
      case 0x1AB:
        sub_1526F20(a1);
        result = 0;
        break;
      case 0x1AC:
        sub_1526F60(a1);
        result = 0;
        break;
      case 0x1AF:
        sub_1527030(a1, a5);
        result = 0;
        break;
      case 0x1B0:
        sub_1526FD0(a1);
        result = 0;
        break;
      case 0x1B1:
        sub_1527000(a1);
        result = 0;
        break;
      case 0x1B2:
        sub_1527550(a1);
        result = 0;
        break;
      case 0x1B3:
        sub_15275C0(a1);
        result = 0;
        break;
      case 0x1B4:
        sub_15276A0(a1);
        result = 0;
        break;
      case 0x1B5:
        sub_1527780(a1);
        result = 0;
        break;
      case 0x1B6:
      case 0x1B7:
        sub_1527850(a1);
        result = 0;
        break;
      case 0x1B8:
        sub_15278A0(a1);
        result = 0;
        break;
      case 0x1B9:
        sub_15278E0(a1);
        result = 0;
        break;
      case 0x1BA:
        sub_15277F0(a1);
        result = 0;
        break;
      case 0x1BB:
        sub_1527CF0(a1);
        result = 0;
        break;
      case 0x1BC:
        sub_1527D30(a1);
        result = 0;
        break;
      case 0x1BD:
        sub_1527D90(a1);
        result = 0;
        break;
      case 0x1BE:
        sub_1527A60(a1);
        result = 0;
        break;
      case 0x1BF:
      case 0x1C0:
        LODWORD(v69) = 3;
        result = sub_151C490((__m128i *)a1, (unsigned int *)&v69, (unsigned int *)a2, 0, 0, 0, a5, a6);
        break;
      case 0x1C2:
        LODWORD(v69) = 3;
        result = sub_157D480(a1, &v69, a2, 0, 0);
        break;
      case 0x1C5:
        sub_1528120(a1);
        v28 = 0;
        goto LABEL_56;
      case 0x1C6:
        sub_1531FC0(a1, a5, a6);
        result = 0;
        break;
      default:
        goto LABEL_22;
    }
  }
  v15 = *(_DWORD *)(a1 + 2792);
  if ( v15 )
  {
    v16 = *(_WORD *)(a1 + 88);
    v17 = *(_QWORD *)(a1 + 2784) + 24LL * v15 - 24;
    do
    {
      if ( v16 == *(_WORD *)(v17 + 14) )
      {
        if ( *(_DWORD *)(v17 + 16) == *(_DWORD *)(a1 + 90) )
          goto LABEL_8;
      }
      else if ( v16 > *(_WORD *)(v17 + 14) )
      {
        goto LABEL_8;
      }
      if ( *(_WORD *)(a1 + 90) <= *(_WORD *)(v17 + 16) && *(_WORD *)(a1 + 92) <= *(_WORD *)(v17 + 18) )
        break;
LABEL_8:
      --v15;
      v17 -= 24;
      *(_DWORD *)(a1 + 2792) = v15;
    }
    while ( v15 );
  }
  v18 = *(_BYTE *)(a1 + 2696) == 0;
  *(_DWORD *)(a1 + 88) = v12;
  *(_WORD *)(a1 + 92) = v11;
  if ( v18
    && *(_DWORD *)(a1 + 2560)
    && (*(_WORD *)(a1 + 32) == 1
     || *(__int64 (__fastcall **)(__int64, __int64, __m128i, double))(*(_QWORD *)(a1 + 8) + 1152LL) == sub_1436060) )
  {
    v57 = result;
    sub_15650B0(a1);
    return v57;
  }
  return result;
}
