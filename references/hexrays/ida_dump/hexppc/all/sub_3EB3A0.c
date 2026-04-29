__int64 __fastcall sub_3EB3A0(__int64 a1, __int64 a2, __int16 a3, int a4, unsigned __int8 a5, double a6)
{
  unsigned int v6; // r14d
  __int64 v9; // rdx
  bool v10; // zf
  __int64 v11; // rax
  int v12; // r12d
  __int64 v13; // rdx
  __int64 v14; // rax
  int v15; // ecx
  int dtype_size; // eax
  _QWORD *v17; // r14
  __int64 v18; // rax
  __int64 v19; // rsi
  unsigned int v20; // esi
  _DWORD *v21; // rdi
  __int64 (*v22)(void); // rax
  int v23; // r12d
  int v24; // eax
  int v25; // r14d
  __int64 result; // rax
  char v27; // al
  __int64 v28; // rax
  int v29; // edx
  int v30; // eax
  __int64 v31; // rax
  __int64 v32; // r15
  unsigned int v33; // r12d
  double v34; // xmm0_8
  __int64 v35; // rax
  __int64 v36; // rsi
  int v37; // r15d
  __int64 v38; // rdi
  __int64 (__fastcall *v39)(_DWORD *, unsigned int); // rax
  __int64 v40; // rax
  int v41; // r8d
  char v42; // r12
  int v43; // eax
  __int64 v44; // rax
  int v45; // esi
  __int64 v46; // rax
  int v47; // r12d
  int v48; // eax
  _QWORD *v49; // rbx
  __int64 v50; // rax
  __int64 v51; // rsi
  _QWORD *v52; // r12
  __int64 v53; // rax
  __int64 v54; // rsi
  int v55; // eax
  __int64 v56; // rax
  __int64 v57; // rax
  _DWORD *v58; // rdi
  __int64 (__fastcall *v59)(_DWORD *, unsigned int); // rax
  int v60; // eax
  int v61; // edx
  int v62; // esi
  int v63; // eax
  __int64 v64; // r15
  int v65; // eax
  _DWORD *v66; // rdi
  __int64 v67; // rsi
  __int64 (__fastcall *v68)(_DWORD *, unsigned int); // rax
  int v69; // r15d
  int v70; // eax
  int v71; // eax
  unsigned int v72; // [rsp+8h] [rbp-A8h]
  signed __int8 v73; // [rsp+Eh] [rbp-A2h]
  char v74; // [rsp+Fh] [rbp-A1h]
  int v75; // [rsp+1Ch] [rbp-94h]
  __int64 v76; // [rsp+20h] [rbp-90h]
  __int64 v77; // [rsp+28h] [rbp-88h]
  __int64 v78; // [rsp+30h] [rbp-80h]
  unsigned __int8 v79; // [rsp+38h] [rbp-78h]
  int v80; // [rsp+38h] [rbp-78h]
  int v81; // [rsp+38h] [rbp-78h]
  char v82; // [rsp+40h] [rbp-70h]
  unsigned int v83; // [rsp+40h] [rbp-70h]
  signed int v85; // [rsp+48h] [rbp-68h]
  unsigned __int16 v86; // [rsp+48h] [rbp-68h]
  unsigned __int8 v88[16]; // [rsp+50h] [rbp-60h] BYREF
  _QWORD v89[10]; // [rsp+60h] [rbp-50h] BYREF

  v6 = 7;
  v9 = *(_QWORD *)(a1 + 832);
  v79 = a2;
  v10 = *(_DWORD *)(v9 + 80) == 8;
  v74 = a2;
  v82 = a5;
  v89[3] = __readfsqword(0x28u);
  if ( !v10 )
    v6 = 2;
  v11 = *(_QWORD *)(v9 + 4464);
  if ( !v11
    || (a2 = a1 + 104,
        v12 = *(_DWORD *)(*(_QWORD *)(v9 + 4456) + 4 * v11 - 4),
        *(_QWORD *)(v9 + 4464) = v11 - 1,
        sub_3EB290(a1, a1 + 104, v12),
        v13 = *(_QWORD *)(a1 + 832),
        (v14 = *(_QWORD *)(v13 + 4464)) == 0) )
  {
    sub_3E6800(a6, a1, a2);
  }
  v15 = *(_DWORD *)(*(_QWORD *)(v13 + 4456) + 4 * v14 - 4);
  *(_QWORD *)(v13 + 4464) = v14 - 1;
  v85 = v15;
  if ( (a3 & 4) == 0 )
  {
    if ( ((*(_BYTE *)(a1 + 105) - 2) & 0xFD) == 0 )
    {
      v72 = v6;
      sub_3E9DD0(a1, (unsigned __int8 *)(a1 + 104), v6, *(_QWORD *)(a1 + 120), v15);
      v78 = v85;
      dtype_size = get_dtype_size(v6);
      sub_1D2710(a1, 0xCu, dtype_size, v12, v85, v85, 0);
      goto LABEL_8;
    }
    if ( !under_debugger )
      sub_37EEE0(0xC8D4u, a2, a6);
LABEL_81:
    BUG();
  }
  if ( (a3 & 0x100) != 0 )
  {
    v72 = (unsigned __int8)v6;
    v71 = get_dtype_size((unsigned __int8)v6);
    v78 = v85;
    sub_1D2710(a1, 4u, v71, v12, 0x3BEA45E214ADDC55LL, v85, 0);
  }
  else
  {
    v27 = *(_BYTE *)(a1 + 105);
    if ( v27 != 1 && (!*(_BYTE *)(a1 + 138) || v27 != 5 || *(_QWORD *)(a1 + 112)) || *(_BYTE *)(a1 + 145) != 1 )
    {
      if ( !under_debugger )
        sub_37EEE0(0xC8D3u, a2, a6);
      goto LABEL_81;
    }
    v66 = *(_DWORD **)(a1 + 832);
    v67 = *(unsigned __int16 *)(a1 + 150);
    v68 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v66 + 168LL);
    if ( v68 == sub_3E59C0 )
      v69 = sub_3E59C0(v66, v67);
    else
      v69 = v68(v66, v67);
    v72 = (unsigned __int8)v6;
    v70 = get_dtype_size((unsigned __int8)v6);
    v78 = v85;
    sub_1D2710(a1, 0xCu, v70, v12, v69, v85, 0);
  }
LABEL_8:
  v17 = *(_QWORD **)(a1 + 832);
  v18 = v17[558];
  v19 = v17[557];
  if ( v17[559] < (unsigned __int64)(v18 + 1) )
  {
    v56 = qvector_reserve(v17 + 557, v19, v18 + 1, 4);
    v17[557] = v56;
    v19 = v56;
    v18 = v17[558];
  }
  *(_DWORD *)(v19 + 4 * v18) = v12;
  ++v17[558];
  if ( (a3 & 2) != 0 )
  {
    v20 = *(unsigned __int16 *)(a1 + 110);
    if ( (_WORD)v20 != 1 )
    {
      v21 = *(_DWORD **)(a1 + 832);
      v22 = *(__int64 (**)(void))(*(_QWORD *)v21 + 168LL);
      if ( (char *)v22 == (char *)sub_3E59C0 )
        v23 = sub_3E59C0(v21, v20);
      else
        v23 = v22();
      v24 = get_dtype_size(v72);
      sub_1D2710(a1, 4u, v24, v78, 0x3BEA45E214ADDC55LL, v23, 0);
    }
  }
  if ( (a3 & 0x2000) != 0 )
  {
    v25 = 32 - *(unsigned __int16 *)(a1 + 70);
    v82 = a5 & (v25 > 1);
    goto LABEL_17;
  }
  if ( (a3 & 0x4000) == 0 )
  {
    v25 = 1;
    goto LABEL_31;
  }
  v28 = *(_QWORD *)(a1 + 152);
  v25 = 8;
  if ( !(_DWORD)v28 )
  {
LABEL_17:
    result = 0;
    if ( v82 )
      return result;
    goto LABEL_31;
  }
  v29 = v28 + 2;
  v30 = v28 - 1;
  if ( v30 < 0 )
    v30 = v29;
  v25 = (v30 >> 2) + 1;
  result = 0;
  if ( (a5 & (v25 > 1)) == 0 )
  {
LABEL_31:
    v31 = *(_QWORD *)(a1 + 832);
    *(_QWORD *)v88 = 1;
    v32 = *(_QWORD *)(a1 + 40);
    v89[1] = 0;
    v33 = *(_DWORD *)(v31 + 80);
    v83 = v79;
    v89[0] = 0xFFFFFFFF00000000LL;
    *(_QWORD *)&v34 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v33), _mm_cvtsi32_si128(v85)).m128i_u64[0];
    *(double *)&v88[4] = v34;
    v35 = get_dtype_size(v79);
    v36 = *(_QWORD *)(a1 + 832);
    sub_11CFD0((__int64)v89, v36, v35, v33, v32, 0);
    v73 = 4;
    v86 = *(_WORD *)(a1 + 70);
    if ( a3 >= 0 )
    {
      v73 = 2;
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) == 8 )
        v73 = 7;
    }
    v37 = 0;
    if ( v25 > 0 )
    {
      while ( 1 )
      {
        v38 = *(_QWORD *)(a1 + 832);
        if ( v25 != 1 )
        {
          v36 = v86;
          v39 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v38 + 168LL);
          if ( v39 == sub_3E59C0 )
          {
            a4 = sub_3E59C0((_DWORD *)v38, v86);
          }
          else
          {
            a4 = v39((_DWORD *)v38, v86);
            v38 = *(_QWORD *)(a1 + 832);
          }
        }
        if ( (a3 & 0x1000) != 0 )
        {
          v44 = *(_QWORD *)(v38 + 4464);
          if ( !v44 )
            sub_3E6800(v34, v38, v36);
          v45 = *(_DWORD *)(*(_QWORD *)(v38 + 4456) + 4 * v44 - 4);
          *(_QWORD *)(v38 + 4464) = v44 - 1;
          v46 = *(_QWORD *)(a1 + 832);
          v47 = v45;
          v81 = *(_DWORD *)(v46 + 84);
          v77 = *(int *)(v46 + 64);
          v48 = get_dtype_size(v83);
          sub_1D2710(a1, 2u, v48, v77, v78, v45, v81);
          if ( (a3 & 0x10) != 0 )
          {
            sub_1D2B40(a1, v83, 4u, v45, a4, 67);
          }
          else if ( v73 <= v74 )
          {
            v55 = get_dtype_size(v83);
            sub_1D2710(a1, 4u, v55, v45, 0x3BEA45E214ADDC55LL, a4, 0);
          }
          else
          {
            sub_1D2C40(a1, v83, v73, v45, a4, a3 & 1);
          }
          v49 = *(_QWORD **)(a1 + 832);
          v50 = v49[558];
          v51 = v49[557];
          if ( v49[559] < (unsigned __int64)(v50 + 1) )
          {
            v51 = qvector_reserve(v49 + 557, v51, v50 + 1, 4);
            v49[557] = v51;
            v50 = v49[558];
          }
          *(_DWORD *)(v51 + 4 * v50) = v47;
          ++v49[558];
        }
        else
        {
          if ( (a3 & 0x10) != 0 )
          {
            v40 = *(_QWORD *)(v38 + 4464);
            if ( !v40 )
              sub_3E6800(v34, v38, v36);
            v41 = *(_DWORD *)(*(_QWORD *)(v38 + 4456) + 4 * v40 - 4);
            *(_QWORD *)(v38 + 4464) = v40 - 1;
            v80 = v41;
            sub_1D2B40(a1, 4u, v83, a4, v41, 67);
            v38 = *(_QWORD *)(a1 + 832);
            v42 = 1;
          }
          else
          {
            v42 = 0;
            v80 = a4;
          }
          v75 = *(_DWORD *)(v38 + 84);
          v76 = *(int *)(v38 + 64);
          v43 = get_dtype_size(v83);
          sub_1D2710(a1, 1u, v43, v80, v76, v78, v75);
          if ( v42 )
          {
            v52 = *(_QWORD **)(a1 + 832);
            v53 = v52[558];
            v54 = v52[557];
            if ( v52[559] < (unsigned __int64)(v53 + 1) )
            {
              v57 = qvector_reserve(v52 + 557, v54, v53 + 1, 4);
              v52[557] = v57;
              v54 = v57;
              v53 = v52[558];
            }
            *(_DWORD *)(v54 + 4 * v53) = v80;
            ++v52[558];
          }
        }
        if ( ++v37 == v25 )
          break;
        v36 = 12;
        v86 = ((_BYTE)v86 + 1) & 0x1F;
        sub_1D2850(a1, 12, v88, (unsigned __int8 *)v89, v88);
      }
    }
    if ( (a3 & 2) != 0 && *(_WORD *)(a1 + 110) == 1 )
    {
      v58 = *(_DWORD **)(a1 + 832);
      v59 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v58 + 168LL);
      if ( v59 == sub_3E59C0 )
      {
        v60 = v58[103];
        v61 = v58[88];
        v62 = v58[1102];
        if ( v60 > v61 )
          v63 = v61 + v62;
        else
          v63 = 30 * v62 + v60;
      }
      else
      {
        v63 = v59(v58, 1u);
      }
      v64 = v63;
      v65 = get_dtype_size(v72);
      sub_1D2710(a1, 4u, v65, v78, 0x3BEA45E214ADDC55LL, v64, 0);
    }
    sub_119360((__int64)v89);
    sub_119360((__int64)v88);
    return 1;
  }
  return result;
}
