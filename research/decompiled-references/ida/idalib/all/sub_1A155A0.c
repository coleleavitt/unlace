__int64 __fastcall sub_1A155A0(
        __int64 a1,
        __int64 a2,
        char *a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        double a8,
        __int64 a9,
        __int64 a10,
        char a11,
        unsigned __int8 a12)
{
  __int64 v12; // r15
  __int64 v16; // r14
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  unsigned __int64 v22; // rax
  __int64 v23; // rdi
  _QWORD *v24; // rax
  __int64 v25; // r11
  __int64 v26; // rax
  __int64 result; // rax
  __int64 v28; // rsi
  __int64 v29; // rcx
  __int64 *v30; // rdx
  __int64 v31; // r15
  bool v32; // r9
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r12
  __int64 v36; // rax
  __int64 v37; // rdx
  int v38; // eax
  unsigned __int8 v39; // al
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rbp
  __int64 v44; // r8
  unsigned __int64 v45; // rbp
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  char v49; // al
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // rax
  unsigned __int64 v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  unsigned int v59; // eax
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rax
  char v70; // al
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // [rsp+0h] [rbp-138h]
  bool v75; // [rsp+0h] [rbp-138h]
  bool v76; // [rsp+0h] [rbp-138h]
  bool v77; // [rsp+0h] [rbp-138h]
  bool v78; // [rsp+0h] [rbp-138h]
  unsigned __int8 v79; // [rsp+0h] [rbp-138h]
  unsigned __int64 v82; // [rsp+18h] [rbp-120h]
  __int64 v84; // [rsp+28h] [rbp-110h]
  char v85; // [rsp+34h] [rbp-104h]
  int v86; // [rsp+38h] [rbp-100h]
  char v87; // [rsp+3Dh] [rbp-FBh]
  char v88; // [rsp+3Fh] [rbp-F9h]
  __int64 v89; // [rsp+40h] [rbp-F8h]
  __int64 v90; // [rsp+40h] [rbp-F8h]
  int v91; // [rsp+5Ch] [rbp-DCh] BYREF
  _QWORD *v92; // [rsp+60h] [rbp-D8h] BYREF
  __int64 *v93; // [rsp+68h] [rbp-D0h] BYREF
  __m128i v94; // [rsp+70h] [rbp-C8h] BYREF
  bool v95; // [rsp+80h] [rbp-B8h]
  __int64 v96; // [rsp+88h] [rbp-B0h]
  __int64 v97; // [rsp+90h] [rbp-A8h]

  v12 = (__int64)a4;
  if ( a12 | (unsigned __int8)a11 && (v16 = *a4) != 0 )
  {
    v12 = *(_QWORD *)(v16 + 16);
    v74 = (unsigned int)((*(_QWORD *)(v16 + 24) - v12) >> 3);
  }
  else
  {
    v16 = 0;
    v74 = a5;
  }
  v17 = *((unsigned int *)a3 + 1);
  v87 = sub_1E63330(a1, v17, a6, 1, 0);
  if ( v87 )
  {
    *(_QWORD *)(a10 + 8056) = a6;
    *(_DWORD *)a10 = 0;
    *(_DWORD *)(a10 + 184) = 33;
    return a10;
  }
  v21 = (unsigned int)(*(_DWORD *)a2 - 10);
  LOBYTE(v21) = *(_DWORD *)a2 == 14 || (unsigned int)v21 <= 1;
  if ( (_BYTE)v21 )
  {
    v88 = 0;
    v22 = a6 & 0xFFFFFFFFFFFFFFF0LL;
    v86 = 1;
    v82 = a6 & 0xFFFFFFFFFFFFFFF0LL;
    goto LABEL_6;
  }
  LOBYTE(v21) = v74 == 1;
  v88 = (v74 == 1) & (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) >> 6);
  if ( !v88 )
    goto LABEL_38;
  if ( (*(_BYTE *)(*(_QWORD *)v12 + 1LL) & 6) != 0 )
  {
    v88 = 0;
    v22 = a6 & 0xFFFFFFFFFFFFFFF0LL;
    v86 = 0;
    v82 = a6 & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    v17 = a6;
    v88 = sub_1A0A350(*(_QWORD *)(*(_QWORD *)v12 + 8LL), a6);
    if ( !v88 )
    {
LABEL_38:
      v86 = 0;
      v22 = a6 & 0xFFFFFFFFFFFFFFF0LL;
      v82 = a6 & 0xFFFFFFFFFFFFFFF0LL;
      goto LABEL_6;
    }
    if ( !v16 )
    {
      v94.m128i_i64[1] = a6;
      v94.m128i_i32[0] = 9;
      return (__int64)sub_1A0C040(a10 + 8, &v94);
    }
    v82 = a6 & 0xFFFFFFFFFFFFFFF0LL;
    if ( sub_F61BB0(*(_QWORD *)(a6 & 0xFFFFFFFFFFFFFFF0LL), a6, v21, v18, v19, v20) )
    {
      v94.m128i_i64[1] = a6;
      v94.m128i_i32[0] = 9;
      sub_1A0C040(a10 + 8, &v94);
      return (__int64)sub_1A0D750(a10, a6, v16);
    }
    v86 = 0;
    v22 = a6 & 0xFFFFFFFFFFFFFFF0LL;
  }
LABEL_6:
  v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v22 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v23 + 16) != 48 )
    v23 = 0;
  v24 = sub_F60F10(v23, v17, v21, v18, v19, v20);
  v92 = v24;
  v84 = a10 + 192;
  if ( *a3 == 2 )
  {
    if ( !a11 )
    {
      v85 = 1;
      v25 = sub_1A3D890(a1, v24);
      LODWORD(result) = 0;
      goto LABEL_13;
    }
    v85 = 1;
    v25 = sub_1A3D890(a1, v24);
  }
  else
  {
    v85 = 0;
    v25 = sub_1A3D890(a1, v24);
    if ( !a11 )
    {
      LODWORD(result) = 1;
      goto LABEL_13;
    }
  }
  if ( !v74 )
  {
    v89 = v25;
    v26 = sub_1A69F50(a1, v92);
    v25 = v89;
    if ( v26 )
    {
      LODWORD(result) = 1;
      if ( !v88 )
        goto LABEL_13;
      goto LABEL_23;
    }
  }
  v28 = *((unsigned int *)a3 + 1);
  v90 = v25;
  result = sub_1A0AAD0(a1, v28, (__int64)a4, a5, v84, a6, v25, (__int64)&v93, v85, 1, 1, 1, v86, 0);
  v25 = v90;
  if ( (_DWORD)result == 1 && v88 )
  {
LABEL_23:
    v94.m128i_i64[1] = a6;
    v94.m128i_i32[0] = 9;
    result = (__int64)sub_1A0C040(a10 + 8, &v94);
    if ( !v16 )
      return result;
    return (__int64)sub_1A0D750(a10, a6, v16);
  }
  if ( (_DWORD)result == 1 )
  {
LABEL_13:
    v28 = *((unsigned int *)a3 + 1);
    result = sub_1A0AAD0(a1, v28, v12, v74, v84, a6, v25, (__int64)&v93, v85, result, 0, a11, v86, 0);
    if ( !(_DWORD)result )
      goto LABEL_14;
LABEL_27:
    v28 = a10;
    *(_DWORD *)a10 = 0;
    *(_DWORD *)(a10 + 184) = (a11 != 0) + 30;
    *(_DWORD *)(a10 + 188) = result;
    if ( (_DWORD)result != 3 )
      return result;
    v30 = v93;
    v31 = *v93;
    v32 = *(unsigned int *)(a10 + 200) + (unsigned __int64)(*(_DWORD *)(a10 + 3056) & 0x3FFFFFFF) > 1;
    result = *(_BYTE *)(*v93 + 28) & 0x7F;
    if ( (_BYTE)result == 37 )
      goto LABEL_15;
    if ( *a3 != 2 )
      return result;
LABEL_30:
    v37 = v30[1];
    v38 = 19;
    if ( !(a12 | (unsigned __int8)a11) )
    {
LABEL_31:
      v94.m128i_i32[0] = v38;
      v95 = v32;
      v94.m128i_i64[1] = a9;
      v96 = v31;
      v97 = v37;
      return (__int64)sub_1A0C040(a10 + 8, &v94);
    }
LABEL_58:
    v38 = v87 == 0 ? 20 : 34;
    goto LABEL_31;
  }
  v87 = 1;
  if ( (_DWORD)result )
    goto LABEL_27;
LABEL_14:
  v30 = v93;
  v31 = *v93;
  v32 = *(unsigned int *)(a10 + 200) + (unsigned __int64)(*(_DWORD *)(a10 + 3056) & 0x3FFFFFFF) > 1;
  if ( (*(_BYTE *)(*v93 + 28) & 0x7F) == 0x25 )
  {
LABEL_15:
    v33 = *(_QWORD *)(*(_QWORD *)(v31 + 48) & 0xFFFFFFFFFFFFFFF0LL);
    v34 = (unsigned int)*(unsigned __int8 *)(v33 + 16) - 25;
    if ( (unsigned int)v34 > 1 )
    {
      v75 = v32;
      v33 = sub_F63050(*(_QWORD *)(*(_QWORD *)(v31 + 48) & 0xFFFFFFFFFFFFFFF0LL), v28, v30, v34);
      v30 = v93;
      v32 = v75;
    }
    v35 = *(_QWORD *)(v33 + 24);
    v36 = v30[1];
    v96 = v31;
    v94.m128i_i32[0] = 8;
    v97 = v36;
    v94.m128i_i64[1] = v35;
    v95 = v32;
    sub_1A0C040(a10 + 8, &v94);
    result = *(_QWORD *)(v82 + 8) & 0xFFFFFFFFFFFFFFF8LL
           | ((unsigned __int8)a6 | (unsigned __int8)*(_QWORD *)(v82 + 8)) & 7;
    if ( (*(_QWORD *)&byte_8[v35 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
        | ((unsigned __int8)*(_QWORD *)&byte_8[v35 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v35) & 7) != result )
    {
      v94.m128i_i64[1] = a6;
      v94.m128i_i32[0] = 9;
      result = (__int64)sub_1A0C040(a10 + 8, &v94);
    }
    if ( a11 )
      return (__int64)sub_1A0D750(a10, *(_QWORD *)(a2 + 16), v16);
    return result;
  }
  v39 = *a3;
  if ( a11 )
  {
    if ( v39 != 3 )
      goto LABEL_56;
  }
  else
  {
    if ( !v39 || v39 == 3 )
    {
      v77 = *(unsigned int *)(a10 + 200) + (unsigned __int64)(*(_DWORD *)(a10 + 3056) & 0x3FFFFFFF) > 1;
      v49 = sub_B990E0(*v93, &v94, v39, v29);
      v32 = v77;
      if ( v49 && (*(_BYTE *)(v31 + 29) & 2) != 0
        || (sub_7052B0((__int64 *)(v92[13] + 96LL), v92[13], v50, v51, v52, v77), v32 = v77, *(char *)v92[16] >= 0)
        || (*((_BYTE *)v92 + 76) & 4) == 0
        || (v59 = *(_DWORD *)(*(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 640), v59 == 3)
        || v59 <= 1 )
      {
        v39 = *a3;
      }
      else
      {
        sub_168B9F0((__int64)&v94, (__int64 *)(a1 + 8), *((_DWORD *)a3 + 1), 0x1AEDu, 0);
        v91 = 1;
        v60 = sub_1587D10((__int64)&v94, &v91);
        sub_185AB80(v60, (__int64 *)&v92);
        sub_15F7200(&v94);
        sub_1A0F360(a1, (__int64)v92, v61, v62, v63, v64);
        v39 = *a3;
        v32 = v77;
      }
    }
    if ( v39 != 3 )
      goto LABEL_43;
  }
  v40 = *(_QWORD *)(a2 + 16);
  if ( (v40 & 1) == 0 && (byte_8[v40 & 0xFFFFFFFFFFFFFFF0LL] & 1) == 0 )
    goto LABEL_54;
  v76 = v32;
  v43 = *(_QWORD *)(sub_B8C1B0(v31 + 72) + 16);
  if ( (v43 & 4) != 0 )
    v45 = *(_QWORD *)(v43 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v45 = v43 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v45 )
    BUG();
  sub_7052B0((__int64 *)(*(_QWORD *)(v45 + 40) + 96LL), *(_QWORD *)(v45 + 40), v41, v42, v44, v76);
  v32 = v76;
  if ( (*(_BYTE *)(*(_QWORD *)(v45 + 64) + 3LL) & 2) == 0
    || (sub_7052B0((__int64 *)(*(_QWORD *)(v45 + 40) + 96LL), *(_QWORD *)(v45 + 40), v46, v47, v48, v76),
        (*(_BYTE *)(*(_QWORD *)(v45 + 64) + 8LL) & 2) == 0)
    && ((sub_7052B0((__int64 *)(*(_QWORD *)(v45 + 40) + 96LL), *(_QWORD *)(v45 + 40), v56, v57, v58, v76),
         v68 = v76,
         (**(_BYTE **)(v45 + 64) & 1) != 0)
     || (sub_7052B0((__int64 *)(*(_QWORD *)(v45 + 40) + 96LL), *(_QWORD *)(v45 + 40), v65, v66, v67, v76),
         v69 = *(_QWORD *)(v45 + 64),
         v68 = v76,
         (*(_BYTE *)(v69 + 9) & 1) != 0)
     || (*(_BYTE *)(v69 + 10) & 0x20) != 0 && (v70 = sub_B96D80(v45 - 64), v68 = v76, !v70))
    && ((v79 = v68,
         sub_7052B0((__int64 *)(*(_QWORD *)(v45 + 40) + 96LL), *(_QWORD *)(v45 + 40), v65, v66, v67, v68),
         v32 = v79,
         (*(_BYTE *)(*(_QWORD *)(v45 + 64) + 3LL) & 8) == 0)
     || (sub_7052B0((__int64 *)(*(_QWORD *)(v45 + 40) + 96LL), *(_QWORD *)(v45 + 40), v71, v72, v73, v79),
         v32 = v79,
         (*(_BYTE *)(*(_QWORD *)(v45 + 64) + 9LL) & 1) != 0)) )
  {
LABEL_54:
    if ( !a11 )
    {
LABEL_43:
      v30 = v93;
      goto LABEL_30;
    }
    v39 = *a3;
LABEL_56:
    if ( v39 == 2 )
    {
      v78 = v32;
      v53 = sub_B709C0(v31);
      v32 = v78;
      v54 = *(char *)(v53 + 87);
      v55 = (v54 & 0x40) != 0 ? *(_QWORD *)(v53 + 16LL * ((v54 & 0x20) != 0) + 176) : v54 >> 63;
      if ( (v55 & 3) == 1 )
      {
        *(_DWORD *)a10 = 0;
        *(_DWORD *)(a10 + 184) = 38;
        return a10;
      }
    }
    v37 = v93[1];
    goto LABEL_58;
  }
  if ( *(_DWORD *)a2 || (result = sub_1A0DC20(a1, a10, a2, a7, a8), !(_BYTE)result) )
  {
    *(_DWORD *)a10 = 0;
    *(_DWORD *)(a10 + 184) = 32;
    return a10;
  }
  return result;
}
