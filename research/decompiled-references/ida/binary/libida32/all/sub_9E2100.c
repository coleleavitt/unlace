__int64 __fastcall sub_9E2100(__int64 a1, __int64 a2, __int64 a3, char a4, _QWORD *a5, __int64 a6)
{
  __int64 v9; // r12
  __int64 *v10; // rax
  __int64 v11; // rax
  _BYTE *v12; // r14
  signed __int64 v13; // r13
  _QWORD *v14; // rax
  size_t *v15; // r13
  size_t v16; // r9
  __int64 v17; // r14
  char v18; // r14
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  int v23; // eax
  _QWORD *v24; // r13
  _QWORD *v25; // rbp
  size_t *v26; // r14
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v30; // rcx
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  _QWORD *v35; // rax
  _QWORD *v36; // r9
  char *v37; // rdi
  _QWORD *v38; // rax
  _QWORD *v39; // r9
  size_t *v40; // rbx
  __int64 v41; // rax
  __int64 v42; // r13
  _QWORD *v43; // rsi
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rbx
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rcx
  _QWORD *v50; // rsi
  __int64 v51; // rdx
  _QWORD *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  int v56; // r9d
  _QWORD *v57; // rax
  __int64 v58; // rbp
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v63; // [rsp+0h] [rbp-218h]
  __int64 v64; // [rsp+8h] [rbp-210h]
  size_t *n; // [rsp+20h] [rbp-1F8h]
  size_t nb; // [rsp+20h] [rbp-1F8h]
  size_t nc; // [rsp+20h] [rbp-1F8h]
  size_t na; // [rsp+20h] [rbp-1F8h]
  size_t nd; // [rsp+20h] [rbp-1F8h]
  __int64 v72; // [rsp+30h] [rbp-1E8h]
  __int64 v73; // [rsp+38h] [rbp-1E0h]
  __int64 v74; // [rsp+38h] [rbp-1E0h]
  __int64 v75; // [rsp+40h] [rbp-1D8h]
  size_t v76; // [rsp+48h] [rbp-1D0h]
  size_t *v77; // [rsp+48h] [rbp-1D0h]
  __int64 v78; // [rsp+48h] [rbp-1D0h]
  int v79; // [rsp+48h] [rbp-1D0h]
  __int64 v80; // [rsp+48h] [rbp-1D0h]
  int v81; // [rsp+48h] [rbp-1D0h]
  int v82; // [rsp+50h] [rbp-1C8h]
  int v83; // [rsp+50h] [rbp-1C8h]
  __int64 v84; // [rsp+50h] [rbp-1C8h]
  __int64 v85; // [rsp+58h] [rbp-1C0h]
  _QWORD *v86; // [rsp+60h] [rbp-1B8h]
  __int64 v87; // [rsp+68h] [rbp-1B0h]
  _QWORD v88[2]; // [rsp+70h] [rbp-1A8h] BYREF
  _QWORD v89[4]; // [rsp+80h] [rbp-198h] BYREF
  __int16 v90; // [rsp+A0h] [rbp-178h]
  _QWORD *v91[4]; // [rsp+B0h] [rbp-168h] BYREF
  __int16 v92; // [rsp+D0h] [rbp-148h]
  _QWORD *v93[4]; // [rsp+E0h] [rbp-138h] BYREF
  __int16 v94; // [rsp+100h] [rbp-118h]
  _QWORD *v95; // [rsp+110h] [rbp-108h] BYREF
  char v96; // [rsp+118h] [rbp-100h]
  __int16 v97; // [rsp+130h] [rbp-E8h]
  void *ptr; // [rsp+140h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+148h] [rbp-D0h]
  _BYTE v100[192]; // [rsp+158h] [rbp-C0h] BYREF

  v9 = *(_QWORD *)(*(_QWORD *)a2 + 16LL);
  v10 = (__int64 *)sub_FCB100(a3);
  v72 = v10[1];
  v64 = *v10;
  v11 = sub_FCB100(a3);
  v12 = *(_BYTE **)(v11 + 192);
  v13 = *(_QWORD *)(v11 + 200);
  v86 = v88;
  if ( &v12[v13] && !v12 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)v13 > 0xF )
  {
    if ( v13 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v14 = (_QWORD *)operator new(v13 + 1);
    v88[0] = v13;
    v86 = v14;
    goto LABEL_46;
  }
  if ( v13 != 1 )
  {
    v14 = v88;
    if ( !v13 )
      goto LABEL_6;
LABEL_46:
    memcpy(v14, v12, v13);
    v14 = v86;
    goto LABEL_6;
  }
  LOBYTE(v88[0]) = *v12;
  v14 = v88;
LABEL_6:
  v87 = v13;
  *((_BYTE *)v14 + v13) = 0;
  v75 = a1 + 16;
  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0x200000000LL;
  if ( a4 )
  {
    v15 = *(size_t **)(a3 + 48);
    if ( v15 )
    {
      if ( (*(_BYTE *)(a3 + 904) & 0x10) == 0 )
      {
        v21 = sub_9E1DE0(a2, *(size_t **)(a3 + 48), v64, v72, 1);
        if ( v21 )
        {
          v22 = *(unsigned int *)(a1 + 8);
          if ( v22 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
          {
            na = v21;
            sub_22134E0(a1, v75, v22 + 1, 8);
            v22 = *(unsigned int *)(a1 + 8);
            v21 = na;
          }
          *(_QWORD *)(*(_QWORD *)a1 + 8 * v22) = v21;
          ++*(_DWORD *)(a1 + 8);
        }
        if ( v87 )
        {
          v48 = sub_9E1DE0(a2, v15, (__int64)v86, v87, 1);
          if ( v48 )
          {
            v49 = *(unsigned int *)(a1 + 8);
            if ( v49 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
            {
              nd = v48;
              sub_22134E0(a1, v75, v49 + 1, 8);
              v49 = *(unsigned int *)(a1 + 8);
              v48 = nd;
            }
            *(_QWORD *)(*(_QWORD *)a1 + 8 * v49) = v48;
            ++*(_DWORD *)(a1 + 8);
          }
        }
        if ( (*(_BYTE *)(a3 + 905) & 0x40) == 0 )
        {
          v38 = sub_9E0400(*(_QWORD **)(a3 + 256), *(_QWORD *)(a3 + 264));
          if ( v39 != v38 )
          {
            v40 = *(size_t **)(a3 + 48);
            v41 = sub_9E1DE0(a2, v40, v64, v72, 0);
            v42 = v41;
            if ( v41 )
            {
              v43 = (_QWORD *)v41;
              while ( 1 )
              {
                v44 = v43[1];
                if ( !v44 )
                  break;
                v43 = (_QWORD *)(v44 & 0xFFFFFFFFFFFFFFF8LL);
                if ( (v44 & 4) == 0 || !v43 )
                  goto LABEL_75;
              }
              v43 = nullptr;
LABEL_75:
              sub_9E05F0(*(_QWORD *)(*(_QWORD *)a2 + 8LL), v43, a3);
              v45 = *(unsigned int *)(a1 + 8);
              if ( v45 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
              {
                sub_22134E0(a1, v75, v45 + 1, 8);
                v45 = *(unsigned int *)(a1 + 8);
              }
              *(_QWORD *)(*(_QWORD *)a1 + 8 * v45) = v42;
              ++*(_DWORD *)(a1 + 8);
            }
            if ( v87 )
            {
              v46 = sub_9E1DE0(a2, v40, (__int64)v86, v87, 0);
              if ( v46 )
              {
                v47 = *(unsigned int *)(a1 + 8);
                if ( v47 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
                {
                  sub_22134E0(a1, v75, v47 + 1, 8);
                  v47 = *(unsigned int *)(a1 + 8);
                }
                *(_QWORD *)(*(_QWORD *)a1 + 8 * v47) = v46;
                v23 = *(_DWORD *)(a1 + 8) + 1;
                *(_DWORD *)(a1 + 8) = v23;
LABEL_31:
                if ( v23 )
                  goto LABEL_41;
                goto LABEL_32;
              }
            }
          }
        }
LABEL_30:
        v23 = *(_DWORD *)(a1 + 8);
        goto LABEL_31;
      }
      v16 = *v15;
      ptr = v100;
      si128 = _mm_load_si128((const __m128i *)&xmmword_2384D00);
      if ( v16 > 0x80 )
      {
        nb = v16;
        sub_22130D0(&ptr, v100, v16, 1);
        v16 = nb;
        v37 = (char *)ptr + si128.m128i_i64[0];
      }
      else
      {
        if ( !v16 )
          goto LABEL_11;
        v37 = v100;
      }
      nc = v16;
      memcpy(v37, v15 + 4, v16);
      v16 = si128.m128i_i64[0] + nc;
LABEL_11:
      si128.m128i_i64[0] = v16;
      if ( (*(_BYTE *)(a3 + 905) & 0x40) != 0 )
        goto LABEL_12;
      v97 = 257;
      v89[0] = "Headers";
      v94 = 257;
      v92 = 257;
      v90 = 259;
      v76 = v16;
      sub_2266670(&ptr, v89, v91, v93, &v95);
      sub_FB5700(&v95, v9, ptr, si128.m128i_i64[0], 1);
      if ( (v96 & 1) != 0 )
      {
        v52 = v95;
        v95 = nullptr;
        v91[0] = v52;
        sub_9E1A20(v93, v91);
        v56 = v76;
        if ( v91[0] )
        {
          (*(void (__fastcall **)(_QWORD *, _QWORD **, __int64, __int64, __int64, size_t))(*v91[0] + 8LL))(
            v91[0],
            v91,
            v53,
            v54,
            v55,
            v76);
          v56 = v76;
        }
        v79 = v56;
        sub_9E1030((__int64 *)&v95);
        LODWORD(v31) = v79;
      }
      else
      {
        v82 = v76;
        v77 = v95;
        sub_9E1030((__int64 *)&v95);
        LODWORD(v31) = v82;
        if ( v77 )
        {
          v32 = sub_9E1DE0(a2, v77, v64, v72, 1);
          LODWORD(v31) = v82;
          if ( v32 )
          {
            v33 = *(unsigned int *)(a1 + 8);
            if ( v33 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
            {
              v85 = v32;
              sub_22134E0(a1, v75, v33 + 1, 8);
              v33 = *(unsigned int *)(a1 + 8);
              v32 = v85;
              LODWORD(v31) = v82;
            }
            *(_QWORD *)(*(_QWORD *)a1 + 8 * v33) = v32;
            ++*(_DWORD *)(a1 + 8);
          }
          if ( v87 )
          {
            v83 = v31;
            v60 = sub_9E1DE0(a2, v77, (__int64)v86, v87, 1);
            LODWORD(v31) = v83;
            if ( v60 )
            {
              v61 = *(unsigned int *)(a1 + 8);
              if ( v61 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
              {
                v84 = v60;
                v81 = v31;
                sub_22134E0(a1, v75, v61 + 1, 8);
                v61 = *(unsigned int *)(a1 + 8);
                v60 = v84;
                LODWORD(v31) = v81;
              }
              *(_QWORD *)(*(_QWORD *)a1 + 8 * v61) = v60;
              ++*(_DWORD *)(a1 + 8);
            }
          }
        }
      }
      v34 = si128.m128i_i64[0];
      v31 = (unsigned int)v31;
      if ( si128.m128i_i64[0] != (unsigned int)v31 )
      {
        if ( si128.m128i_i64[0] <= (unsigned __int64)(unsigned int)v31 )
        {
          if ( (unsigned __int64)(unsigned int)v31 > si128.m128i_i64[1] )
          {
            v80 = (unsigned int)v31;
            sub_22130D0(&ptr, v100, (unsigned int)v31, 1);
            v34 = si128.m128i_i64[0];
            v31 = v80;
          }
          if ( (char *)ptr + v34 != (char *)ptr + v31 )
          {
            v78 = v31;
            memset((char *)ptr + v34, 0, v31 - v34);
            v31 = v78;
          }
        }
        si128.m128i_i64[0] = v31;
      }
      if ( (*(_BYTE *)(a3 + 905) & 0x40) != 0
        || (v35 = sub_9E0400(*(_QWORD **)(a3 + 256), *(_QWORD *)(a3 + 264)), v36 != v35) )
      {
LABEL_12:
        v97 = 257;
        v94 = 257;
        v92 = 257;
        v89[0] = "PrivateHeaders";
        v90 = 259;
        sub_2266670(&ptr, v89, v91, v93, &v95);
        sub_FB5700(&v95, v9, ptr, si128.m128i_i64[0], 1);
        if ( (v96 & 1) != 0 )
        {
          v57 = v95;
          v95 = nullptr;
          v91[0] = v57;
          sub_9E1A20(v93, v91);
          if ( v91[0] )
            (*(void (__fastcall **)(_QWORD *))(*v91[0] + 8LL))(v91[0]);
          sub_9E1030((__int64 *)&v95);
        }
        else
        {
          v17 = (__int64)v95;
          n = v95;
          sub_9E1030((__int64 *)&v95);
          if ( v17 )
          {
            v18 = *(_BYTE *)(a3 + 905) & 0x40;
            v19 = sub_9E1DE0(a2, n, v64, v72, v18 != 0);
            if ( v19 )
            {
              if ( !v18 )
              {
                v50 = (_QWORD *)v19;
                while ( 1 )
                {
                  v51 = v50[1];
                  if ( !v51 )
                    break;
                  v50 = (_QWORD *)(v51 & 0xFFFFFFFFFFFFFFF8LL);
                  if ( (v51 & 4) == 0 || !v50 )
                    goto LABEL_91;
                }
                v50 = nullptr;
LABEL_91:
                v73 = v19;
                sub_9E05F0(*(_QWORD *)(*(_QWORD *)a2 + 8LL), v50, a3);
                v19 = v73;
              }
              v20 = *(unsigned int *)(a1 + 8);
              if ( v20 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
              {
                v74 = v19;
                sub_22134E0(a1, v75, v20 + 1, 8);
                v20 = *(unsigned int *)(a1 + 8);
                v19 = v74;
              }
              *(_QWORD *)(*(_QWORD *)a1 + 8 * v20) = v19;
              ++*(_DWORD *)(a1 + 8);
            }
            if ( v87 )
            {
              v58 = sub_9E1DE0(a2, n, (__int64)v86, v87, v18 != 0);
              if ( v58 )
              {
                v59 = *(unsigned int *)(a1 + 8);
                if ( v59 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
                {
                  sub_22134E0(a1, v75, v59 + 1, 8);
                  v59 = *(unsigned int *)(a1 + 8);
                }
                *(_QWORD *)(*(_QWORD *)a1 + 8 * v59) = v58;
                ++*(_DWORD *)(a1 + 8);
              }
            }
          }
        }
      }
      if ( ptr != v100 )
        free(ptr);
      goto LABEL_30;
    }
  }
LABEL_32:
  v24 = a5;
  v25 = &a5[4 * a6];
  if ( a5 != v25 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        sub_FB5700(&ptr, v9, *v24, v24[1], 1);
        if ( (si128.m128i_i8[0] & 1) == 0 )
          break;
        v28 = ptr;
        ptr = nullptr;
        v93[0] = v28;
        sub_9E1A20(&v95, v93);
        if ( v93[0] )
          (*(void (__fastcall **)(_QWORD *))(*v93[0] + 8LL))(v93[0]);
        v24 += 4;
        sub_9E1030((__int64 *)&ptr);
        if ( v25 == v24 )
          goto LABEL_41;
      }
      v26 = (size_t *)ptr;
      sub_9E1030((__int64 *)&ptr);
      if ( v26 )
      {
        v27 = sub_9E1DE0(a2, v26, v64, v72, 1);
        if ( v27 )
          break;
      }
      v24 += 4;
      if ( v25 == v24 )
        goto LABEL_41;
    }
    v30 = *(unsigned int *)(a1 + 8);
    if ( v30 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
    {
      v63 = v27;
      sub_22134E0(a1, v75, v30 + 1, 8);
      v30 = *(unsigned int *)(a1 + 8);
      v27 = v63;
    }
    *(_QWORD *)(*(_QWORD *)a1 + 8 * v30) = v27;
    ++*(_DWORD *)(a1 + 8);
  }
LABEL_41:
  if ( v86 != v88 )
    operator delete(v86);
  return a1;
}

