__int64 __fastcall sub_210D940(__int64 a1, __int64 *a2, _BYTE *a3, unsigned __int8 a4)
{
  unsigned int v8; // ebp
  unsigned int v10; // r13d
  __int64 v11; // rdi
  char *v12; // rax
  char *v13; // rdi
  char *v14; // rsi
  int v15; // edx
  __int64 (*v16)(); // rdx
  __int64 v17; // rax
  __int64 v18; // r15
  char v19; // dl
  char v20; // cl
  int v21; // ebx
  __int64 v22; // rdi
  int v23; // eax
  __m128i v24; // xmm1
  int v25; // eax
  __int64 v26; // rdi
  __int64 v27; // rcx
  int v28; // esi
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // rdi
  __int64 *v32; // rax
  __int64 v33; // rdx
  _QWORD *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rsi
  __int64 v37; // r8
  __int64 v38; // r9
  _QWORD *v39; // rax
  __int64 v40; // rdx
  unsigned __int64 v41; // rsi
  unsigned __int8 v42; // cl
  __int64 v43; // r12
  __int64 v44; // rdx
  void *v45; // rax
  __int64 v46; // rdx
  __m128 v47; // xmm0
  __int64 v48; // rax
  bool v49; // zf
  __int64 (*v50)(); // rdx
  __m128i v51; // xmm2
  int v52; // eax
  __int64 v53; // rdi
  __m128i v54; // xmm3
  int v55; // eax
  __int64 v56; // rdi
  __int64 v57; // rax
  __m128i *v58; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v59; // [rsp+8h] [rbp-A0h]
  __m128i v60; // [rsp+10h] [rbp-98h] BYREF
  __int64 v61; // [rsp+20h] [rbp-88h]
  __int64 v62; // [rsp+28h] [rbp-80h]
  __int16 v63; // [rsp+30h] [rbp-78h]
  __m128i v64; // [rsp+40h] [rbp-68h] BYREF
  __int64 v65; // [rsp+50h] [rbp-58h]
  int v66; // [rsp+58h] [rbp-50h]
  __int16 v67; // [rsp+60h] [rbp-48h]

  switch ( *(_BYTE *)a1 )
  {
    case 0:
      v10 = a4;
      v11 = *(_QWORD *)(a1 + 16);
      v61 = 0;
      v60 = 0;
      LODWORD(v62) = 0;
      v64 = 0;
      v65 = 0;
      v66 = 0;
      if ( !(unsigned __int8)sub_210D940(v11, &v60, a3, a4)
        || (v26 = *(_QWORD *)(a1 + 24), v58 = &v64, v8 = sub_210D940(v26, &v64, a3, v10), !(_BYTE)v8) )
      {
        v12 = *(char **)(a1 + 16);
        if ( *v12 != 5 )
          return 0;
        v13 = v12 - 8;
        if ( v12 == byte_8 )
          return 0;
        v14 = *(char **)(a1 + 24);
        if ( *v14 != 5 || v14 == byte_8 )
          return 0;
        v15 = *(_DWORD *)a1 >> 8;
        if ( v15 == 3 )
        {
          v50 = *(__int64 (**)())(*((_QWORD *)v12 - 1) + 40LL);
          v17 = 0;
          if ( v50 != sub_210D6F0 )
            v17 = -(__int64)((unsigned __int8 (__fastcall *)(char *))v50)(v13);
        }
        else
        {
          if ( v15 != 12 )
            return 0;
          v16 = *(__int64 (**)())(*((_QWORD *)v12 - 1) + 40LL);
          v17 = -1;
          if ( v16 != sub_210D6F0 )
            v17 = -(__int64)(((unsigned __int8 (__fastcall *)(char *))v16)(v13) ^ 1u);
        }
        goto LABEL_16;
      }
      v27 = v65;
      v28 = *(_DWORD *)a1 >> 8;
      if ( !v60.m128i_i64[0] && __PAIR128__(v60.m128i_u64[1], 0) == v64.m128i_u64[0] && !v64.m128i_i64[1] )
      {
        switch ( v28 )
        {
          case 0:
            v56 = v61 + v65;
            goto LABEL_103;
          case 1:
            v56 = v65 & v61;
            goto LABEL_103;
          case 2:
          case 10:
            if ( !v65 )
              return 0;
            v57 = v61 / v65;
            if ( v28 == 2 )
              goto LABEL_108;
            v56 = v61 % v65;
            if ( ((1LL << v28) & 0x1338) == 0 )
              goto LABEL_103;
LABEL_114:
            *((_DWORD *)a2 + 6) = 0;
            *(_OWORD *)a2 = 0;
            a2[2] = -(__int64)(v56 != 0);
            break;
          case 3:
            v56 = v61 == v65;
            goto LABEL_114;
          case 4:
            v56 = v61 > v65;
            goto LABEL_114;
          case 5:
            v56 = v61 >= v65;
            goto LABEL_114;
          case 6:
            v56 = (v65 != 0) & (unsigned __int8)(v61 != 0);
            goto LABEL_103;
          case 7:
            v56 = (v65 | v61) != 0;
            goto LABEL_103;
          case 8:
            v56 = v61 < v65;
            goto LABEL_114;
          case 9:
            v56 = v61 <= v65;
            goto LABEL_114;
          case 11:
            v56 = v65 * v61;
            goto LABEL_103;
          case 12:
            v56 = v61 != v65;
            goto LABEL_114;
          case 13:
            v56 = v65 | v61;
            goto LABEL_103;
          case 14:
            v56 = v61 | ~v65;
            goto LABEL_103;
          case 15:
            v56 = v61 << v65;
            goto LABEL_103;
          case 16:
            v56 = v61 >> v65;
            goto LABEL_103;
          case 17:
            v57 = (unsigned __int64)v61 >> v65;
LABEL_108:
            v56 = v57;
            goto LABEL_103;
          case 18:
            v56 = v61 - v65;
            goto LABEL_103;
          case 19:
            v56 = v65 ^ v61;
            goto LABEL_103;
          default:
            v56 = 0;
LABEL_103:
            a2[2] = v56;
            *(_OWORD *)a2 = 0;
            *((_DWORD *)a2 + 6) = 0;
            break;
        }
        return v8;
      }
      if ( v28 && v28 != 18 )
        return 0;
      v29 = v64.m128i_i64[0];
      if ( v28 == 18 )
      {
        v30 = v64.m128i_i64[1];
        v27 = -v65;
        v64.m128i_i64[1] = v64.m128i_i64[0];
        v65 = -v65;
        v64.m128i_i64[0] = v30;
        v29 = v30;
      }
      if ( !v29 && !v64.m128i_i64[1] )
      {
        v51 = _mm_load_si128(&v60);
        a2[2] = v27 + v61;
        v52 = v62;
        *(__m128i *)a2 = v51;
        *((_DWORD *)a2 + 6) = v52;
        return v8;
      }
      if ( v60.m128i_i64[0] )
      {
        if ( !v60.m128i_i64[1] )
          goto LABEL_38;
      }
      else if ( !v60.m128i_i64[1] )
      {
        v54 = _mm_load_si128(&v64);
        a2[2] = v27 + v61;
        v55 = v66;
        *(__m128i *)a2 = v54;
        *((_DWORD *)a2 + 6) = v55;
        return v8;
      }
      if ( (_DWORD)v62 )
        return 0;
LABEL_38:
      if ( v64.m128i_i64[1] && v66 )
        return 0;
      return (unsigned int)sub_210E860(a3, v10, &v60, v58, a2);
    case 1:
      v17 = *(_QWORD *)(a1 + 16);
LABEL_16:
      a2[2] = v17;
      v8 = 1;
      *(_OWORD *)a2 = 0;
      *((_DWORD *)a2 + 6) = 0;
      return v8;
    case 2:
      v18 = *(_QWORD *)(a1 + 16);
      v19 = *(_BYTE *)(v18 + 9) & 8;
      if ( !a3 )
      {
        v8 = 0;
        v20 = 0;
        if ( v19 )
          return v8;
        goto LABEL_19;
      }
      v20 = a3[32];
      if ( !v19 )
      {
LABEL_19:
        v21 = *(_DWORD *)a1 >> 8;
        if ( (*(_BYTE *)(v18 + 9) & 0x70) != 0x20 || (_WORD)v21 && !v20 || (*(_BYTE *)(v18 + 8) & 0x40) != 0 )
          goto LABEL_20;
        *(_BYTE *)(v18 + 9) |= 8u;
        if ( a3 )
        {
          LOBYTE(v58) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)a3 + 152LL) + 18LL);
          v42 = a4 | (unsigned __int8)v58;
        }
        else
        {
          v42 = a4;
          LOBYTE(v58) = 0;
        }
        v8 = sub_210D940(*(_QWORD *)(v18 + 24), a2, a3, v42);
        if ( !(_BYTE)v8 )
          goto LABEL_84;
        v43 = *a2;
        v44 = a2[1];
        if ( !a4 && v43 && !v44 )
        {
          v45 = *(void **)v43;
          if ( *(_QWORD *)v43 )
            goto LABEL_60;
          if ( (*(_BYTE *)(v43 + 9) & 0x70) != 0x20 || (*(_BYTE *)(v43 + 8) & 0x40) != 0 )
          {
            if ( !(_WORD)v21 )
              goto LABEL_90;
            if ( *((_DWORD *)a2 + 6) )
              goto LABEL_84;
LABEL_88:
            if ( a2[2] )
              goto LABEL_84;
            *((_DWORD *)a2 + 6) = (unsigned __int16)v21;
LABEL_90:
            if ( (_BYTE)v58 )
            {
              if ( v44 | v43 )
              {
                if ( a2[2] )
                  goto LABEL_61;
                LOBYTE(v8) = v44 == 0 || v43 == 0;
                if ( !(_BYTE)v8 )
                  goto LABEL_61;
              }
              else
              {
                v8 = (unsigned __int8)v58;
              }
            }
LABEL_85:
            *(_BYTE *)(v18 + 9) &= ~8u;
            return v8;
          }
          v53 = *(_QWORD *)(v43 + 24);
          v59 = a2[1];
          v45 = sub_210D700(v53);
          v44 = v59;
          *(_QWORD *)v43 = v45;
          if ( v45 )
          {
LABEL_60:
            if ( off_2C8EF40 != v45 )
            {
LABEL_61:
              *(_BYTE *)(v18 + 9) &= ~8u;
LABEL_20:
              *a2 = v18;
              v8 = 1;
              a2[1] = 0;
              a2[2] = 0;
              *((_DWORD *)a2 + 6) = (unsigned __int16)v21;
              return v8;
            }
          }
        }
        if ( !(_WORD)v21 )
          goto LABEL_90;
        if ( !*a2 )
        {
          if ( !a2[1] )
          {
            *a2 = v18;
            a2[2] = 0;
            *((_DWORD *)a2 + 6) = (unsigned __int16)v21;
            goto LABEL_85;
          }
          goto LABEL_84;
        }
        if ( *((_DWORD *)a2 + 6) || a2[1] )
        {
LABEL_84:
          v8 = 0;
          goto LABEL_85;
        }
        goto LABEL_88;
      }
      v8 = (unsigned __int8)a3[33];
      if ( (_BYTE)v8 )
      {
        v31 = *(_QWORD *)a3;
        if ( (*(_BYTE *)(v18 + 8) & 1) != 0 )
        {
          v32 = *(__int64 **)(v18 - 8);
          v33 = *v32;
          v34 = v32 + 3;
        }
        else
        {
          v33 = 0;
          v34 = nullptr;
        }
        v61 = (__int64)v34;
        v64.m128i_i64[0] = (__int64)&v60;
        v65 = (__int64)"'";
        v35 = *(_QWORD *)(v18 + 24);
        v63 = 1283;
        v36 = *(_QWORD *)(v35 + 8);
        v62 = v33;
        v60.m128i_i64[0] = (__int64)"cyclic dependency detected for symbol '";
        v67 = 770;
        sub_2100A30(v31, v36, (__int64)&v64);
        v39 = *(_QWORD **)a3;
        v40 = *(_QWORD *)(*(_QWORD *)a3 + 192LL);
        v39[34] += 24LL;
        v41 = (v40 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v39[25] >= v41 + 24 && v40 )
          v39[24] = v41 + 24;
        else
          v41 = sub_986170((__int64)(v39 + 24), 24, 24, 3, v37, v38);
        *(_DWORD *)v41 = 1;
        v8 = 0;
        *(_QWORD *)(v41 + 8) = 0;
        *(_QWORD *)(v41 + 16) = 0;
        sub_21233E0(v18);
      }
      return v8;
    case 3:
      v22 = *(_QWORD *)(a1 + 16);
      v64 = 0;
      v65 = 0;
      v66 = 0;
      v8 = sub_210D940(v22, &v64, a3, a4);
      if ( !(_BYTE)v8 )
        return v8;
      v23 = *(_DWORD *)a1 >> 8;
      switch ( v23 )
      {
        case 1:
          if ( !v64.m128i_i64[0] || v64.m128i_i64[1] )
          {
            v58 = (__m128i *)v64.m128i_i64[0];
            v46 = v65;
            *((_DWORD *)a2 + 6) = 0;
            v47 = _mm_loadh_ps((const double *)&v58);
            a2[2] = -v46;
            *(__m128 *)a2 = v47;
            return v8;
          }
          return 0;
        case 0:
          if ( *(_OWORD *)&v64 == 0 )
          {
            v49 = v65 == 0;
            *(_OWORD *)a2 = 0;
            *((_DWORD *)a2 + 6) = 0;
            a2[2] = v49;
            return v8;
          }
          return 0;
        case 2:
          if ( *(_OWORD *)&v64 == 0 )
          {
            v48 = v65;
            *(_OWORD *)a2 = 0;
            *((_DWORD *)a2 + 6) = 0;
            a2[2] = ~v48;
            return v8;
          }
          return 0;
        case 3:
          v24 = _mm_load_si128(&v64);
          a2[2] = v65;
          v25 = v66;
          *(__m128i *)a2 = v24;
          *((_DWORD *)a2 + 6) = v25;
          break;
      }
      return v8;
    case 4:
      v8 = 0;
      if ( a3 )
        return (*(unsigned int (__fastcall **)(_QWORD, __int64, __int64 *, _BYTE *))(**(_QWORD **)(*(_QWORD *)a3 + 152LL)
                                                                                   + 104LL))(
                 *(_QWORD *)(*(_QWORD *)a3 + 152LL),
                 a1,
                 a2,
                 a3);
      return v8;
    case 5:
      return (*(unsigned int (__fastcall **)(__int64, __int64 *, _BYTE *))(*(_QWORD *)(a1 - 8) + 32LL))(a1 - 8, a2, a3);
  }
}
