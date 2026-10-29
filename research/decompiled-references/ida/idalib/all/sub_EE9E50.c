__m128 *__fastcall sub_EE9E50(__m128 *a1, __int64 a2)
{
  char v5; // al
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  char v24; // al
  __int16 v25; // dx
  __int64 v26; // rdx
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  double v29; // rax
  __m128 v30; // xmm0
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rax
  unsigned __int64 v36; // rsi
  __int64 v37; // rsi
  unsigned int *v38; // rsi
  __int64 v39; // rdx
  __m128i v40; // xmm1
  __m128i v41; // xmm2
  unsigned __int64 v42; // rax
  unsigned int *v43; // rax
  unsigned __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rsi
  unsigned __int64 v47; // rdx
  int v48; // eax
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rcx
  unsigned __int64 v53; // rdx
  __int16 v54; // ax
  unsigned __int64 v55; // rax
  bool v56; // cf
  __int16 v57; // ax
  __int64 v58; // rax
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // rdi
  __int64 v61; // rdx
  __int64 v62; // rdx
  unsigned __int64 v63; // rdx
  __int64 v64; // rdx
  char v65; // al
  int v66; // edx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rsi
  double v70[9]; // [rsp+8h] [rbp-A0h] BYREF
  __m128i v71; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v72; // [rsp+60h] [rbp-48h]
  __m128i v73; // [rsp+70h] [rbp-38h] BYREF
  unsigned __int64 v74; // [rsp+80h] [rbp-28h]

  switch ( *(_WORD *)a2 & 0x1FF )
  {
    case 0:
    case 0x100:
      v51 = *(unsigned int *)(a2 + 16);
      v52 = *(unsigned int *)(a2 + 20);
      a1->m128_u64[1] = 0;
      v53 = *(_QWORD *)(a2 + 32);
      a1[2].m128_u64[0] = 0;
      a1->m128_u64[0] = v53;
      a1[1].m128_u64[1] = v53 + 8 * (v52 + v51);
      return a1;
    case 1:
      v54 = *(_WORD *)a2;
      a1->m128_u64[1] = 0;
      a1->m128_u64[0] = a2 + 16;
      a1[2].m128_u64[0] = 0;
      a1[1].m128_u64[1] = a2 + 8LL * (((v54 & 0x200) != 0) + 2) + 16;
      return a1;
    case 2:
    case 3:
    case 4:
    case 8:
    case 0xA:
    case 0x1D:
    case 0x23:
    case 0x24:
    case 0x27:
    case 0x2E:
    case 0x32:
    case 0x37:
    case 0x3C:
    case 0x3D:
    case 0x40:
    case 0x4A:
    case 0x4F:
    case 0x50:
    case 0x51:
    case 0x52:
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x63:
    case 0x65:
    case 0x66:
    case 0x69:
    case 0x79:
    case 0x89:
    case 0x9B:
    case 0x9D:
    case 0x9F:
    case 0xA0:
    case 0xF0:
      a1->m128_u64[1] = 0;
      a1->m128_u64[0] = a2 + 16;
      a1[1].m128_u64[1] = a2 + 24;
      a1[2].m128_u64[0] = 0;
      return a1;
    case 5:
      sub_C036D0(a1, a2);
      return a1;
    case 6:
    case 7:
    case 9:
    case 0xB:
    case 0xC:
    case 0xE:
    case 0xF:
    case 0x18:
    case 0x19:
    case 0x1A:
    case 0x1E:
    case 0x1F:
    case 0x25:
    case 0x28:
    case 0x29:
    case 0x2D:
    case 0x34:
    case 0x36:
    case 0x3A:
    case 0x3B:
    case 0x3E:
    case 0x3F:
    case 0x41:
    case 0x42:
    case 0x45:
    case 0x47:
    case 0x4B:
    case 0x4E:
    case 0x62:
    case 0x64:
    case 0x68:
    case 0x6B:
    case 0x6F:
    case 0x70:
    case 0x73:
    case 0x75:
    case 0x7A:
    case 0x7E:
    case 0x7F:
    case 0x88:
    case 0x8D:
    case 0x8E:
    case 0x8F:
    case 0x90:
    case 0x91:
    case 0x92:
    case 0xEE:
    case 0xF2:
    case 0xF8:
    case 0xFE:
      goto LABEL_103;
    case 0xD:
      v20 = *(_QWORD *)(a2 + 24);
      v21 = *(unsigned int *)(a2 + 4);
      a1->m128_u64[1] = 0;
      a1[2].m128_u64[0] = 0;
      a1->m128_u64[0] = v20;
      a1[1].m128_u64[1] = v20 + 8 * v21;
      return a1;
    case 0x10:
      v19 = *(unsigned int *)(a2 + 24);
      a1->m128_u64[1] = 0;
      a1->m128_u64[0] = a2 + 32;
      a1[2].m128_u64[0] = 0;
      a1[1].m128_u64[1] = a2 + 32 + 8 * v19;
      return a1;
    case 0x11:
      v11 = *(unsigned __int16 *)(a2 + 4);
      a1->m128_u64[1] = 0;
      a1->m128_u64[0] = a2 + 16;
      a1[2].m128_u64[0] = 0;
      a1[1].m128_u64[1] = a2 + 16 + 8 * v11;
      return a1;
    case 0x12:
      v10 = *(_QWORD *)a2;
      a1->m128_u64[1] = 0;
      a1->m128_u64[0] = a2 + 16;
      a1[2].m128_u64[0] = 0;
      a1[1].m128_u64[1] = ((SBYTE2(v10) >> 4) & 8) + a2 + 16;
      return a1;
    case 0x13:
      v35 = *(unsigned int *)(a2 + 4);
      a1->m128_u64[1] = 0;
      a1->m128_u64[0] = a2 + 24;
      a1[2].m128_u64[0] = 0;
      a1[1].m128_u64[1] = a2 + 24 + 8 * v35;
      return a1;
    case 0x14:
    case 0x16:
    case 0x22:
      a1->m128_u64[1] = 0;
      a1->m128_u64[0] = a2 + 24;
      a1[1].m128_u64[1] = a2 + 32;
      a1[2].m128_u64[0] = 0;
      return a1;
    case 0x15:
    case 0x1C:
      a1->m128_u64[1] = 0;
      a1->m128_u64[0] = a2 + 24;
      a1[1].m128_u64[1] = a2 + 40;
      a1[2].m128_u64[0] = 0;
      return a1;
    case 0x17:
      if ( (unsigned __int8)sub_C95850(a2) )
        goto LABEL_37;
      a1->m128_u64[1] = 0;
      a1->m128_u64[0] = a2 + 56;
      a1[1].m128_u64[1] = a2 + 64;
      a1[2].m128_u64[0] = 0;
      return a1;
    case 0x1B:
      v7 = *(unsigned int *)(a2 + 32);
      v8 = *(unsigned int *)(a2 + 36);
      a1->m128_u64[1] = 0;
      a1[2].m128_u64[0] = 0;
      v9 = a2 + 16 * v7 + 40;
      a1->m128_u64[0] = v9;
      a1[1].m128_u64[1] = v9 + 8 * v8;
      return a1;
    case 0x20:
      if ( (*(_BYTE *)(a2 + 40) & 6) != 0 )
        goto LABEL_103;
      goto LABEL_63;
    case 0x21:
      sub_C9ADE0(a1, a2);
      return a1;
    case 0x26:
      v18 = *(_DWORD *)(a2 + 16);
      a1->m128_u64[1] = 0;
      a1->m128_u64[0] = a2 + 40;
      a1[2].m128_u64[0] = 0;
      a1[1].m128_u64[1] = a2 + 16LL * v18 + 40;
      return a1;
    case 0x2A:
      v16 = *(unsigned int *)(a2 + 16);
      a1->m128_u64[1] = 0;
      a1->m128_u64[0] = a2 + 40;
      a1[2].m128_u64[0] = 0;
      a1[1].m128_u64[1] = a2 + 8 * v16 + 40;
      return a1;
    case 0x2B:
      v13 = *(unsigned int *)(a2 + 28);
      a1->m128_u64[1] = 0;
      a1[2].m128_u64[0] = 0;
      v14 = v13;
      v15 = a2 + 8 * v13 + 32;
      a1->m128_u64[0] = v15;
      a1[1].m128_u64[1] = v15 + 8LL * (unsigned int)(3 * v14);
      return a1;
    case 0x2C:
      v12 = *(unsigned int *)(a2 + 24);
      a1->m128_u64[1] = 0;
      a1->m128_u64[0] = a2 + 32;
      a1[2].m128_u64[0] = 0;
      a1[1].m128_u64[1] = a2 + 32 + 8 * v12 + 8;
      return a1;
    case 0x2F:
    case 0x38:
    case 0x4D:
      a1->m128_u64[1] = 0;
      a1->m128_u64[0] = a2 + 16;
      a1[1].m128_u64[1] = a2 + 40;
      a1[2].m128_u64[0] = 0;
      return a1;
    case 0x30:
      v58 = *(_QWORD *)(a2 + 16);
      if ( (v58 & 4) == 0 )
        goto LABEL_44;
      v59 = v58 & 0xFFFFFFFFFFFFFFF8LL;
      a1->m128_u64[1] = 0;
      a1[2].m128_u64[0] = 0;
      a1->m128_u64[0] = v59 + 40;
      a1[1].m128_u64[1] = v59 + 48;
      return a1;
    case 0x31:
    case 0x43:
      a1->m128_u64[1] = 0;
      a1->m128_u64[0] = a2 + 16;
      a1[1].m128_u64[1] = a2 + 32;
      a1[2].m128_u64[0] = 0;
      return a1;
    case 0x33:
      sub_C95460(a1, a2);
      return a1;
    case 0x35:
      v28 = *(_QWORD *)(a2 + 16);
      v29 = *(double *)(a2 + 24);
      if ( v28 == *(_QWORD *)&v29 )
      {
        v29 = 0.0;
        v28 = 0;
      }
      v70[0] = v29;
      a1->m128_u64[0] = v28;
      a1->m128_u64[1] = 0;
      v30 = _mm_loadh_ps(v70);
      a1[2].m128_u64[0] = 0;
      a1[1] = v30;
      a1[2].m128_u64[1] = 0;
      return a1;
    case 0x39:
      v24 = *(_BYTE *)(a2 + 19);
      v25 = *(_WORD *)(a2 + 16);
      a1->m128_u64[1] = 0;
      a1->m128_u64[0] = a2 + 32;
      a1[2].m128_u64[0] = 0;
      a1[1].m128_u64[1] = a2 + 32 + 8LL * ((v25 & 0x7FFF) + (unsigned int)((v24 & 0x40) != 0));
      return a1;
    case 0x44:
      v34 = *(unsigned __int16 *)(a2 + 22);
      a1->m128_u64[1] = 0;
      a1->m128_u64[0] = a2 + 32;
      a1[2].m128_u64[0] = 0;
      a1[1].m128_u64[1] = a2 + 32 + 8 * v34;
      return a1;
    case 0x46:
      a1->m128_u64[1] = 0;
      a1->m128_u64[0] = a2 + 24;
      a1[1].m128_u64[1] = a2 + 40;
      a1[2].m128_u64[0] = 0;
      return a1;
    case 0x48:
    case 0x49:
      a1->m128_u64[1] = 0;
      a1->m128_u64[0] = a2 + 24;
      a1[1].m128_u64[1] = a2 + 64;
      a1[2].m128_u64[0] = 0;
      return a1;
    case 0x4C:
      a1->m128_u64[1] = 0;
      a1->m128_u64[0] = a2 + 32;
      a1[1].m128_u64[1] = a2 + 40;
      a1[2].m128_u64[0] = 0;
      return a1;
    case 0x59:
    case 0x5A:
    case 0x5B:
    case 0x5C:
    case 0x5D:
      v5 = *(_BYTE *)(a2 + 2);
      v6 = *(unsigned int *)(a2 + 16);
      a1->m128_u64[1] = 0;
      a1->m128_u64[0] = a2 + 32;
      a1[2].m128_u64[0] = 0;
      a1[1].m128_u64[1] = a2 + 8 * (((v5 & 8) != 0) + v6 + 1) + 32;
      return a1;
    case 0x5E:
      if ( (*(_BYTE *)(a2 + 16) & 4) != 0 )
        goto LABEL_103;
      goto LABEL_44;
    case 0x5F:
      v33 = *(unsigned int *)(a2 + 4);
      a1->m128_u64[1] = 0;
      a1->m128_u64[0] = a2 + 32;
      a1[2].m128_u64[0] = 0;
      a1[1].m128_u64[1] = a2 + 32 + 8 * v33;
      return a1;
    case 0x60:
      if ( (*(_BYTE *)(a2 + 16) & 4) == 0 )
        goto LABEL_44;
      goto LABEL_103;
    case 0x61:
      v32 = a2 + 16;
      if ( *(_QWORD *)(a2 + 16) )
        v32 = a2 + 24;
      a1->m128_u64[0] = a2 + 16;
      a1->m128_u64[1] = 0;
      a1[1].m128_u64[1] = v32;
      a1[2].m128_u64[0] = 0;
      return a1;
    case 0x67:
      v64 = *(unsigned int *)(a2 + 16);
      a1->m128_u64[1] = 0;
      a1->m128_u64[0] = a2 + 48;
      a1[2].m128_u64[0] = 0;
      a1[1].m128_u64[1] = a2 + 48 + 8 * v64;
      return a1;
    case 0x6A:
      v63 = *(_QWORD *)a2;
      a1->m128_u64[1] = 0;
      a1->m128_u64[0] = a2 + 56;
      a1[2].m128_u64[0] = 0;
      a1[1].m128_u64[1] = a2 + 8 * (*(_DWORD *)(a2 + 4) + ((v63 >> 24) & 1) + ((v63 >> 20) & 1)) + 56;
      return a1;
    case 0x6C:
      a1->m128_u64[1] = 0;
      a1->m128_u64[0] = a2 + 32;
      a1[1].m128_u64[1] = a2 + 56;
      a1[2].m128_u64[0] = 0;
      return a1;
    case 0x6D:
      v60 = *(_QWORD *)(a2 + 16);
      if ( v60 && !(unsigned __int8)sub_BFE300(v60) )
      {
LABEL_44:
        a1->m128_u64[1] = 0;
        a1->m128_u64[0] = a2 + 16;
        a1[1].m128_u64[1] = a2 + 24;
        a1[2].m128_u64[0] = 0;
      }
      else
      {
LABEL_37:
        a1->m128_u64[0] = 0;
        a1->m128_u64[1] = 0;
        a1[1].m128_u64[0] = 0;
        a1[1].m128_u64[1] = 0;
        a1[2].m128_u64[0] = 0;
        a1[2].m128_u64[1] = 0;
      }
      return a1;
    case 0x6E:
    case 0x74:
    case 0x84:
      a1->m128_u64[1] = 0;
      a1->m128_u64[0] = a2 + 24;
      a1[1].m128_u64[1] = a2 + 32;
      a1[2].m128_u64[0] = 0;
      return a1;
    case 0x71:
      v62 = *(unsigned int *)(a2 + 32);
      a1->m128_u64[1] = 0;
      a1->m128_u64[0] = a2 + 40;
      a1[2].m128_u64[0] = 0;
      a1[1].m128_u64[1] = a2 + 40 + 8 * v62;
      return a1;
    case 0x72:
      v61 = *(unsigned int *)(a2 + 32);
      a1->m128_u64[1] = 0;
      a1->m128_u64[0] = a2 + 48;
      a1[2].m128_u64[0] = 0;
      a1[1].m128_u64[1] = a2 + 48 + 8 * v61;
      return a1;
    case 0x76:
    case 0x77:
    case 0x7B:
    case 0x7D:
    case 0x87:
    case 0x8A:
    case 0x9E:
    case 0xF7:
      a1->m128_u64[1] = 0;
      a1->m128_u64[0] = a2 + 16;
      a1[1].m128_u64[1] = a2 + 32;
      a1[2].m128_u64[0] = 0;
      return a1;
    case 0x78:
      v50 = *(unsigned int *)(a2 + 72);
      a1->m128_u64[1] = 0;
      a1->m128_u64[0] = a2 + 16;
      a1[2].m128_u64[0] = 0;
      a1[1].m128_u64[1] = a2 + 16 + 8 * v50;
      return a1;
    case 0x7C:
      v56 = *(_DWORD *)(a2 + 16) == 0;
      a1->m128_u64[1] = 0;
      a1->m128_u64[0] = a2 + 24;
      a1[2].m128_u64[0] = 0;
      a1[1].m128_u64[1] = a2 + (v56 ? 8 : 0) + 48;
      return a1;
    case 0x80:
      a1->m128_u64[1] = 0;
      a1->m128_u64[0] = a2 + 24;
      a1[1].m128_u64[1] = a2 + 48;
      a1[2].m128_u64[0] = 0;
      return a1;
    case 0x81:
      a1->m128_u64[1] = 0;
      a1->m128_u64[0] = a2 + 24;
      a1[1].m128_u64[1] = a2 + 56;
      a1[2].m128_u64[0] = 0;
      return a1;
    case 0x82:
    case 0x86:
      a1->m128_u64[1] = 0;
      a1->m128_u64[0] = a2 + 8;
      a1[1].m128_u64[1] = a2 + 16;
      a1[2].m128_u64[0] = 0;
      return a1;
    case 0x83:
      v55 = *(_QWORD *)a2;
      a1->m128_u64[1] = 0;
      a1->m128_u64[0] = a2 + 24;
      a1[2].m128_u64[0] = 0;
      a1[1].m128_u64[1] = a2 + 8LL * (((v55 & 0x200) != 0) + ((v55 & 0x400) != 0) + 2) + 24;
      return a1;
    case 0x85:
      v57 = *(_WORD *)a2;
      a1->m128_u64[1] = 0;
      a1->m128_u64[0] = a2 + 24;
      a1[2].m128_u64[0] = 0;
      a1[1].m128_u64[1] = a2 + 8LL * (((v57 & 0x200) != 0) + 2) + 24;
      return a1;
    case 0x8B:
      if ( !*(_QWORD *)(a2 + 8) )
        goto LABEL_103;
      a1->m128_u64[1] = 0;
      a1->m128_u64[0] = a2 + 8;
      a1[1].m128_u64[1] = a2 + 16;
      a1[2].m128_u64[0] = 0;
      break;
    case 0x8C:
      v26 = *(unsigned int *)(a2 + 52);
      a1->m128_u64[1] = 0;
      a1->m128_u64[0] = a2 + 56;
      a1[2].m128_u64[0] = 0;
      a1[1].m128_u64[1] = a2 + 56 + 8 * v26;
      return a1;
    case 0x93:
      v31 = *(unsigned int *)(a2 + 52);
      a1->m128_u64[1] = 0;
      a1->m128_u64[0] = a2 + 56;
      a1[2].m128_u64[0] = 0;
      a1[1].m128_u64[1] = a2 + 56 + 8 * v31;
      return a1;
    case 0x94:
      if ( !*(_QWORD *)(a2 + 40) )
        goto LABEL_103;
      goto LABEL_63;
    case 0x95:
      if ( *(_QWORD *)(a2 + 40) )
        goto LABEL_63;
      goto LABEL_103;
    case 0x96:
      if ( !*(_QWORD *)(a2 + 40) )
        goto LABEL_103;
      goto LABEL_63;
    case 0x97:
      if ( !*(_QWORD *)(a2 + 40) )
        goto LABEL_103;
      goto LABEL_63;
    case 0x98:
      if ( !*(_QWORD *)(a2 + 40) )
        goto LABEL_103;
      goto LABEL_63;
    case 0x99:
      if ( !*(_QWORD *)(a2 + 40) )
        goto LABEL_103;
LABEL_63:
      a1->m128_u64[1] = 0;
      a1->m128_u64[0] = a2 + 40;
      a1[1].m128_u64[1] = a2 + 48;
      a1[2].m128_u64[0] = 0;
      break;
    case 0x9A:
      a1->m128_u64[1] = 0;
      a1->m128_u64[0] = a2 + 8;
      a1[1].m128_u64[1] = a2 + 32;
      a1[2].m128_u64[0] = 0;
      break;
    case 0x9C:
      v65 = *(_BYTE *)(a2 + 14);
      v66 = *(unsigned __int16 *)(a2 + 12);
      a1->m128_u64[1] = 0;
      a1->m128_u64[0] = a2 + 16;
      a1[2].m128_u64[0] = 0;
      a1[1].m128_u64[1] = a2 + 8LL * (v66 + (v65 & 1) + 1) + 16;
      break;
    case 0xA1:
    case 0xA2:
    case 0xA3:
    case 0xA4:
    case 0xA5:
    case 0xA6:
    case 0xA7:
    case 0xA8:
    case 0xA9:
    case 0xAA:
    case 0xAB:
    case 0xAC:
    case 0xAD:
    case 0xAE:
    case 0xAF:
    case 0xB0:
    case 0xB1:
    case 0xB2:
    case 0xB3:
    case 0xB4:
    case 0xB5:
    case 0xB6:
    case 0xB7:
    case 0xB8:
    case 0xB9:
    case 0xBA:
    case 0xBB:
    case 0xBC:
    case 0xBD:
    case 0xBE:
    case 0xBF:
    case 0xC0:
    case 0xC1:
    case 0xC2:
    case 0xC3:
    case 0xC4:
    case 0xC5:
    case 0xC6:
    case 0xC7:
    case 0xC8:
    case 0xC9:
    case 0xCA:
    case 0xCB:
    case 0xCC:
    case 0xCD:
    case 0xCE:
    case 0xCF:
    case 0xD0:
    case 0xD1:
    case 0xD2:
    case 0xD3:
    case 0xD4:
    case 0xD5:
    case 0xD6:
    case 0xD7:
    case 0xD8:
    case 0xD9:
    case 0xDA:
    case 0xDB:
    case 0xDC:
    case 0xDE:
    case 0xDF:
    case 0xE0:
    case 0xE1:
    case 0xE2:
    case 0xE3:
    case 0xE4:
    case 0xE5:
    case 0xE6:
    case 0xE7:
    case 0xE8:
    case 0xE9:
    case 0xEA:
    case 0xEB:
    case 0xEC:
      sub_EE96A0(a1, a2);
      break;
    case 0xDD:
      v43 = *(unsigned int **)(a2 + 24);
      if ( v43 && *((_BYTE *)v43 + 8) )
      {
        v67 = *v43;
        a1->m128_u64[1] = 0;
        a1[2].m128_u64[0] = 0;
        v68 = 8 * v67 + 16;
        v69 = v43[1];
        a1->m128_u64[0] = (unsigned __int64)&v43[2 * v69] + v68;
        a1[1].m128_u64[1] = (unsigned __int64)&v43[2 * (unsigned int)(v69 + 1)] + v68;
      }
      else
      {
LABEL_103:
        a1->m128_u64[0] = 0;
        a1->m128_u64[1] = 0;
        a1[1].m128_u64[0] = 0;
        a1[1].m128_u64[1] = 0;
        a1[2].m128_u64[0] = 0;
        a1[2].m128_u64[1] = 0;
      }
      break;
    case 0xED:
      a1->m128_u64[1] = 0;
      a1->m128_u64[0] = a2 + 8;
      a1[1].m128_u64[1] = a2 + 40;
      a1[2].m128_u64[0] = 0;
      break;
    case 0xEF:
      a1->m128_u64[1] = 0;
      a1->m128_u64[0] = a2 + 56;
      a1[1].m128_u64[1] = a2 + 64;
      a1[2].m128_u64[0] = 0;
      break;
    case 0xF1:
      v44 = *(_QWORD *)a2;
      v45 = 16;
      v46 = a2
          + 8LL
          * (((*(_QWORD *)a2 & 0x4000) != 0) + ((*(_QWORD *)a2 & 0x1000) != 0) + ((*(_QWORD *)a2 & 0x2000) != 0) + 2)
          + 16;
      if ( ((*(_BYTE *)(a2 + 1) >> 1) & 7u) - 2 <= 1 )
        v45 = 8LL * (((v44 & 0x4000) != 0) + (unsigned int)((v44 & 0x2000) != 0) + 1) + 16;
      a1->m128_u64[1] = 0;
      a1->m128_u64[0] = a2 + v45;
      a1[1].m128_u64[1] = v46;
      a1[2].m128_u64[0] = 0;
      break;
    case 0xF3:
      a1->m128_u64[1] = 0;
      a1->m128_u64[0] = a2 + 8;
      a1[1].m128_u64[1] = a2 + 48;
      a1[2].m128_u64[0] = 0;
      break;
    case 0xF4:
      a1->m128_u64[1] = 0;
      a1->m128_u64[0] = a2 + 8;
      a1[1].m128_u64[1] = a2 + 24;
      a1[2].m128_u64[0] = 0;
      break;
    case 0xF5:
      v36 = *(_QWORD *)(a2 + 8);
      if ( (v36 & 1) != 0 )
      {
        v36 = (v36 & 0xFFFFFFFFFFFFFFFELL) + 8LL * *(unsigned int *)(v36 & 0xFFFFFFFFFFFFFFFELL) + 8;
      }
      else if ( v36 )
      {
        v36 = a2 + 16;
      }
      sub_EF2A10(&v73, v36, v36);
      v37 = *(_QWORD *)(a2 + 8);
      if ( (v37 & 1) != 0 )
      {
        v38 = (unsigned int *)(v37 & 0xFFFFFFFFFFFFFFFELL);
        v39 = (__int64)&v38[2 * *v38 + 2];
        v37 = (__int64)(v38 + 2);
      }
      else
      {
        v39 = 0;
        if ( v37 )
        {
          v39 = a2 + 16;
          v37 = a2 + 8;
        }
      }
      sub_EF2A10(&v71, v37, v39);
      v40 = _mm_load_si128(&v71);
      v41 = _mm_load_si128(&v73);
      a1[1].m128_u64[0] = v72;
      v42 = v74;
      *a1 = (__m128)v40;
      *(__m128i *)((char *)a1 + 24) = v41;
      a1[2].m128_u64[1] = v42;
      break;
    case 0xF6:
      v17 = *(unsigned int *)(a2 + 8);
      a1->m128_u64[1] = 0;
      a1->m128_u64[0] = a2 + 16;
      a1[2].m128_u64[0] = 0;
      a1[1].m128_u64[1] = a2 + 8 * v17 + 112;
      break;
    case 0xF9:
      v27 = *(unsigned int *)(a2 + 4);
      a1->m128_u64[1] = 0;
      a1->m128_u64[0] = a2 + 16;
      a1[2].m128_u64[0] = 0;
      a1[1].m128_u64[1] = a2 + 8 * v27 + 16;
      break;
    case 0xFA:
      v23 = *(unsigned int *)(a2 + 8);
      a1->m128_u64[1] = 0;
      a1->m128_u64[0] = a2 + 32;
      a1[2].m128_u64[0] = 0;
      a1[1].m128_u64[1] = a2 + 8 * v23 + 32;
      break;
    case 0xFB:
      v22 = *(unsigned int *)(a2 + 12);
      a1->m128_u64[1] = 0;
      a1->m128_u64[0] = a2 + 16;
      a1[2].m128_u64[0] = 0;
      a1[1].m128_u64[1] = a2 + 8 * v22 + 24;
      break;
    case 0xFC:
      a1->m128_u64[1] = 0;
      a1->m128_u64[0] = a2 + 8;
      a1[1].m128_u64[1] = a2 + 72;
      a1[2].m128_u64[0] = 0;
      break;
    case 0xFD:
      a1->m128_u64[1] = 0;
      a1->m128_u64[0] = a2 + 24;
      a1[1].m128_u64[1] = a2 + 32;
      a1[2].m128_u64[0] = 0;
      break;
    case 0xFF:
      v47 = *(_QWORD *)(a2 + 32);
      v48 = *(_DWORD *)(a2 + 16);
      a1->m128_u64[1] = 0;
      v49 = (unsigned int)(*(_DWORD *)(a2 + 20) + v48);
      a1[2].m128_u64[0] = 0;
      a1->m128_u64[0] = v47;
      a1[1].m128_u64[1] = v47 + 8 * v49;
      break;
  }
  return a1;
}
