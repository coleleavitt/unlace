__int64 __fastcall sub_722170(
        __int64 *a1,
        __int64 a2,
        double a3,
        __m128i a4,
        double a5,
        __m128 a6,
        double a7,
        double a8,
        double a9,
        __m128 a10)
{
  __int64 v10; // r12
  __int64 *v11; // rbx
  __int64 result; // rax
  __int64 v13; // rsi
  __int64 *v14; // r12
  __int64 v15; // r13
  __int64 *v16; // rbx
  __int64 v17; // r12
  __int64 *v18; // rbx
  __int64 v19; // r12
  __int64 *v20; // rbx
  __int64 v21; // r12
  __int64 *v22; // rbx
  __int64 v23; // r12
  int v24; // r13d
  unsigned int v25; // r12d
  double v26; // xmm0_8
  double v27; // xmm4_8
  double v28; // xmm5_8
  double v29; // xmm4_8
  double v30; // xmm5_8
  __int64 *v31; // rbx
  __int64 v32; // r12
  __int64 *v33; // rbx
  __int64 v34; // r12
  __int64 *v35; // rbx
  __int64 v36; // r12
  __int64 *v37; // rbx
  __int64 v38; // r12
  __int64 v39; // r12
  __int64 *v40; // rbx
  __int64 *v41; // r12
  __int64 v42; // r13
  __int64 *v43; // rbx
  __int64 v44; // r12
  unsigned int v45; // r13d
  double v46; // xmm4_8
  double v47; // xmm5_8
  __int64 v48; // r12
  __int64 *v49; // rbx
  double v50; // xmm4_8
  double v51; // xmm5_8
  __int64 v52; // r12
  __int64 *v53; // rbx
  __int64 *v54; // rbx
  __int64 v55; // r12
  double v56; // xmm4_8
  double v57; // xmm5_8
  __int64 v58; // r12
  __int64 *v59; // rbx
  __int64 *v60; // rbx
  __int64 v61; // r12
  __int64 *v62; // rbx
  __int64 v63; // r12
  __int64 *v64; // rbx
  __int64 v65; // r12
  __int64 *v66; // rbx
  __int64 v67; // r12
  __int64 v68; // rax
  __int64 *v69; // r12
  __int64 v70; // r13
  __int64 v71; // rax
  __int64 *v72; // rbx
  __int64 *v73; // r12
  __int64 v74[9]; // [rsp+0h] [rbp-48h] BYREF

  v74[3] = __readfsqword(0x28u);
  if ( !a2 )
    return 1;
  switch ( *(_DWORD *)(a2 + 8) )
  {
    case 4:
      v45 = sub_70DBE0(a1, *(_QWORD *)(a2 + 8LL * *(unsigned int *)(a2 + 16) + 24), 0, a3, a4, a5, a6, a7, a8, a9, a10);
      if ( !(_BYTE)v45 )
        return 0;
      v58 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 24;
      v59 = (__int64 *)(a2 + 24);
      if ( v58 == a2 + 24 )
        return v45;
      while ( 1 )
      {
        result = sub_70DBE0(a1, *v59, 0, a3, a4, a5, a6, v56, v57, a9, a10);
        if ( !(_BYTE)result )
          break;
        if ( (__int64 *)v58 == ++v59 )
          return v45;
      }
      return result;
    case 5:
    case 8:
    case 0xF:
    case 0x17:
    case 0x19:
    case 0x2A:
    case 0x3B:
    case 0x4D:
    case 0x4F:
    case 0x59:
    case 0x60:
      goto LABEL_10;
    case 6:
      v45 = sub_70DBE0(a1, *(_QWORD *)(a2 + 8LL * *(unsigned int *)(a2 + 16) + 24), 0, a3, a4, a5, a6, a7, a8, a9, a10);
      if ( !(_BYTE)v45 )
        return 0;
      v52 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 24;
      v53 = (__int64 *)(a2 + 24);
      if ( v52 == a2 + 24 )
        return v45;
      while ( 1 )
      {
        result = sub_70DBE0(a1, *v53, 0, a3, a4, a5, a6, v50, v51, a9, a10);
        if ( !(_BYTE)result )
          break;
        if ( (__int64 *)v52 == ++v53 )
          return v45;
      }
      return result;
    case 7:
      v45 = sub_70DBE0(a1, *(_QWORD *)(a2 + 24), 0, a3, a4, a5, a6, a7, a8, a9, a10);
      if ( !(_BYTE)v45 )
        return 0;
      v48 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 72;
      v49 = (__int64 *)(a2 + 72);
      if ( v48 == a2 + 72 )
        return v45;
      while ( 1 )
      {
        result = sub_70DBE0(a1, *v49, 0, a3, a4, a5, a6, v46, v47, a9, a10);
        if ( !(_BYTE)result )
          break;
        if ( (__int64 *)v48 == ++v49 )
          return v45;
      }
      return result;
    case 0x12:
      return sub_70F660(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
    case 0x13:
      return sub_70F7B0(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
    case 0x16:
      v16 = (__int64 *)(a2 + 40);
      v17 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 40;
      if ( v17 == a2 + 40 )
        return 1;
      while ( 1 )
      {
        result = sub_70DBE0(a1, *v16, 0, a3, a4, a5, a6, a7, a8, a9, a10);
        if ( !(_BYTE)result )
          break;
        if ( (__int64 *)v17 == ++v16 )
          return 1;
      }
      return result;
    case 0x18:
    case 0x6D:
      goto LABEL_19;
    case 0x1A:
    case 0x28:
    case 0x46:
      if ( !(unsigned __int8)sub_70DBE0(a1, *(_QWORD *)(a2 + 16), 0, a3, a4, a5, a6, a7, a8, a9, a10) )
        return 0;
      v13 = *(_QWORD *)(a2 + 40);
      return sub_70DBE0(a1, v13, 0, a3, a4, a5, a6, a7, a8, a9, a10);
    case 0x1C:
      if ( !(unsigned __int8)sub_70DBE0(a1, *(_QWORD *)(a2 + 16), 0, a3, a4, a5, a6, a7, a8, a9, a10) )
        return 0;
      v13 = *(_QWORD *)(a2 + 48);
      return sub_70DBE0(a1, v13, 0, a3, a4, a5, a6, a7, a8, a9, a10);
    case 0x1D:
      v62 = (__int64 *)(a2 + 40);
      v63 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 40;
      if ( v63 == a2 + 40 )
        return 1;
      while ( 1 )
      {
        result = sub_70DBE0(a1, *v62, 0, a3, a4, a5, a6, a7, a8, a9, a10);
        if ( !(_BYTE)result )
          break;
        if ( (__int64 *)v63 == ++v62 )
          return 1;
      }
      return result;
    case 0x20:
      v60 = (__int64 *)(a2 + 24);
      v61 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 24;
      if ( v61 == a2 + 24 )
        return 1;
      while ( 1 )
      {
        result = sub_70DBE0(a1, *v60, 0, a3, a4, a5, a6, a7, a8, a9, a10);
        if ( !(_BYTE)result )
          break;
        if ( (__int64 *)v61 == ++v60 )
          return 1;
      }
      return result;
    case 0x22:
    case 0x23:
    case 0x42:
    case 0x45:
    case 0x48:
    case 0x4B:
      if ( !(unsigned __int8)sub_70DBE0(a1, *(_QWORD *)(a2 + 24), 0, a3, a4, a5, a6, a7, a8, a9, a10) )
        return 0;
LABEL_10:
      v13 = *(_QWORD *)(a2 + 16);
      return sub_70DBE0(a1, v13, 0, a3, a4, a5, a6, a7, a8, a9, a10);
    case 0x24:
      return sub_70F900(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
    case 0x25:
      v66 = (__int64 *)(a2 + 24);
      v67 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 24;
      if ( v67 == a2 + 24 )
        return 1;
      while ( 1 )
      {
        result = sub_70DBE0(a1, *v66, 0, a3, a4, a5, a6, a7, a8, a9, a10);
        if ( !(_BYTE)result )
          break;
        if ( (__int64 *)v67 == ++v66 )
          return 1;
      }
      return result;
    case 0x26:
      v37 = (__int64 *)(a2 + 104);
      v38 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 104;
      if ( v38 == a2 + 104 )
        return 1;
      while ( 1 )
      {
        result = sub_70DBE0(a1, *v37, 0, a3, a4, a5, a6, a7, a8, a9, a10);
        if ( !(_BYTE)result )
          break;
        if ( (__int64 *)v38 == ++v37 )
          return 1;
      }
      return result;
    case 0x29:
      v64 = (__int64 *)(a2 + 80);
      v65 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 80;
      if ( v65 == a2 + 80 )
        return 1;
      while ( 1 )
      {
        result = sub_70DBE0(a1, *v64, 0, a3, a4, a5, a6, a7, a8, a9, a10);
        if ( !(_BYTE)result )
          break;
        if ( (__int64 *)v65 == ++v64 )
          return 1;
      }
      return result;
    case 0x2C:
    case 0x51:
      if ( !(unsigned __int8)sub_70DBE0(a1, *(_QWORD *)(a2 + 16), 0, a3, a4, a5, a6, a7, a8, a9, a10) )
        return 0;
      v13 = *(_QWORD *)(a2 + 32);
      return sub_70DBE0(a1, v13, 0, a3, a4, a5, a6, a7, a8, a9, a10);
    case 0x2D:
      return sub_721F20(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
    case 0x2F:
      v22 = (__int64 *)(a2 + 24);
      v23 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 24;
      if ( v23 == a2 + 24 )
        return 1;
      while ( 1 )
      {
        result = sub_70DBE0(a1, *v22, 0, a3, a4, a5, a6, a7, a8, a9, a10);
        if ( !(_BYTE)result )
          break;
        if ( (__int64 *)v23 == ++v22 )
          return 1;
      }
      return result;
    case 0x31:
      v20 = (__int64 *)(a2 + 32);
      v21 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 32;
      if ( v21 == a2 + 32 )
        return 1;
      while ( 1 )
      {
        result = sub_70DBE0(a1, *v20, 0, a3, a4, a5, a6, a7, a8, a9, a10);
        if ( !(_BYTE)result )
          break;
        if ( (__int64 *)v21 == ++v20 )
          return 1;
      }
      return result;
    case 0x33:
      v18 = (__int64 *)(a2 + 80);
      v19 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 80;
      if ( v19 == a2 + 80 )
        return 1;
      while ( 1 )
      {
        result = sub_70DBE0(a1, *v18, 0, a3, a4, a5, a6, a7, a8, a9, a10);
        if ( !(_BYTE)result )
          break;
        if ( (__int64 *)v19 == ++v18 )
          return 1;
      }
      return result;
    case 0x34:
      return sub_721960(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
    case 0x35:
      return sub_721D20(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
    case 0x37:
      v33 = (__int64 *)(a2 + 152);
      v34 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 152;
      if ( v34 == a2 + 152 )
        return 1;
      while ( 1 )
      {
        result = sub_70DBE0(a1, *v33, 0, a3, a4, a5, a6, a7, a8, a9, a10);
        if ( !(_BYTE)result )
          break;
        if ( (__int64 *)v34 == ++v33 )
          return 1;
      }
      return result;
    case 0x43:
      return sub_70FA10(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
    case 0x47:
      v41 = (__int64 *)(a2 + 40);
      v42 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 40;
      if ( v42 == a2 + 40 )
        goto LABEL_19;
      while ( (unsigned __int8)sub_70DBE0(a1, *v41, 0, a3, a4, a5, a6, a7, a8, a9, a10) )
      {
        if ( (__int64 *)v42 == ++v41 )
          goto LABEL_19;
      }
      return 0;
    case 0x50:
      v39 = a2 + 24 + 8LL * *(unsigned int *)(a2 + 16);
      if ( a2 + 24 == v39 )
        return 1;
      v40 = (__int64 *)(a2 + 24);
      while ( 1 )
      {
        result = sub_70DBE0(a1, *v40, 0, a3, a4, a5, a6, a7, a8, a9, a10);
        if ( !(_BYTE)result )
          break;
        if ( (__int64 *)v39 == ++v40 )
          return 1;
      }
      return result;
    case 0x52:
      v68 = *(unsigned int *)(a2 + 16);
      v69 = (__int64 *)(a2 + 24);
      v70 = a2 + 8 * v68 + 24;
      if ( v70 == a2 + 24 )
        goto LABEL_128;
      do
      {
        if ( !(unsigned __int8)sub_70DBE0(a1, *v69, 0, a3, a4, a5, a6, a7, a8, a9, a10) )
          return 0;
        ++v69;
      }
      while ( (__int64 *)v70 != v69 );
      v68 = *(unsigned int *)(a2 + 16);
LABEL_128:
      v71 = v68;
      v72 = (__int64 *)(a2 + v71 * 8 + 24);
      v73 = &v72[v71];
      if ( v72 == &v72[v71] )
        return 1;
      while ( 1 )
      {
        result = sub_70DBE0(a1, *v72, 0, a3, a4, a5, a6, a7, a8, a9, a10);
        if ( !(_BYTE)result )
          break;
        if ( v73 == ++v72 )
          return 1;
      }
      return result;
    case 0x55:
      return sub_7195B0(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
    case 0x5A:
      if ( !(unsigned __int8)sub_70DBE0(a1, *(_QWORD *)(a2 + 16), 0, a3, a4, a5, a6, a7, a8, a9, a10) )
        return 0;
      v13 = *(_QWORD *)(a2 + 64);
      return sub_70DBE0(a1, v13, 0, a3, a4, a5, a6, a7, a8, a9, a10);
    case 0x5E:
      v43 = (__int64 *)(a2 + 24);
      v44 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 24;
      if ( v44 == a2 + 24 )
        return 1;
      while ( 1 )
      {
        result = sub_70DBE0(a1, *v43, 0, a3, a4, a5, a6, a7, a8, a9, a10);
        if ( !(_BYTE)result )
          break;
        if ( (__int64 *)v44 == ++v43 )
          return 1;
      }
      return result;
    case 0x61:
      v10 = a2 + 24 + 8LL * *(unsigned int *)(a2 + 16);
      if ( a2 + 24 == v10 )
        return 1;
      v11 = (__int64 *)(a2 + 24);
      while ( 1 )
      {
        result = sub_70DBE0(a1, *v11, 0, a3, a4, a5, a6, a7, a8, a9, a10);
        if ( !(_BYTE)result )
          break;
        if ( (__int64 *)v10 == ++v11 )
          return 1;
      }
      return result;
    case 0x62:
      return sub_721B20(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
    case 0x63:
      v14 = (__int64 *)(a2 + 40);
      v15 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 40;
      if ( v15 == a2 + 40 )
        goto LABEL_19;
      while ( (unsigned __int8)sub_70DBE0(a1, *v14, 0, a3, a4, a5, a6, a7, a8, a9, a10) )
      {
        if ( (__int64 *)v15 == ++v14 )
        {
LABEL_19:
          v13 = *(_QWORD *)(a2 + 24);
          return sub_70DBE0(a1, v13, 0, a3, a4, a5, a6, a7, a8, a9, a10);
        }
      }
      return 0;
    case 0x66:
      v31 = (__int64 *)(a2 + 104);
      v32 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 104;
      if ( v32 == a2 + 104 )
        return 1;
      while ( 1 )
      {
        result = sub_70DBE0(a1, *v31, 0, a3, a4, a5, a6, a7, a8, a9, a10);
        if ( !(_BYTE)result )
          break;
        if ( (__int64 *)v32 == ++v31 )
          return 1;
      }
      return result;
    case 0x6E:
      v35 = (__int64 *)(a2 + 80);
      v36 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 80;
      if ( v36 == a2 + 80 )
        return 1;
      while ( 1 )
      {
        result = sub_70DBE0(a1, *v35, 0, a3, a4, a5, a6, a7, a8, a9, a10);
        if ( !(_BYTE)result )
          break;
        if ( (__int64 *)v36 == ++v35 )
          return 1;
      }
      return result;
    case 0x6F:
      v54 = (__int64 *)(a2 + 80);
      v55 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 80;
      if ( v55 == a2 + 80 )
        return 1;
      while ( 1 )
      {
        result = sub_70DBE0(a1, *v54, 0, a3, a4, a5, a6, a7, a8, a9, a10);
        if ( !(_BYTE)result )
          break;
        if ( (__int64 *)v55 == ++v54 )
          return 1;
      }
      return result;
    case 0x70:
      v24 = *(_DWORD *)(a2 + 16);
      v25 = 0;
      if ( !v24 )
        return 1;
      break;
    default:
      return 1;
  }
  while ( 1 )
  {
    v26 = sub_EB5BF0(v74, a2, v25);
    if ( !(unsigned __int8)sub_70DBE0(a1, v74[0], 0, v26, a4, a5, a6, v27, v28, a9, a10) )
      break;
    if ( !(unsigned __int8)sub_70DBE0(a1, v74[1], 0, v26, a4, a5, a6, v29, v30, a9, a10) )
      return 0;
    if ( v24 == ++v25 )
      return 1;
  }
  return 0;
}
