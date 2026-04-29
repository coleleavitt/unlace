__int64 __fastcall sub_11D1B0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 *a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r15
  _BYTE *v16; // rax
  _BYTE *v17; // rdx
  __int64 v18; // r12
  int v19; // ecx
  _BYTE *v21; // rax
  _BYTE *v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r8
  __int64 v25; // rax
  int v26; // ecx
  int v27; // eax
  int v28; // ecx
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // r13
  char v32; // al
  char v33; // dl
  char v34; // al
  __int16 v35; // dx
  __int16 v36; // ax
  __int64 v37; // rax
  __int64 v38; // r13
  __int64 v39; // rax
  int v40; // edx
  int v41; // r8d
  __int64 (*v42)(); // rax
  int v43; // ecx
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // r13
  __int64 v47; // rdx
  char v48; // al
  char v49; // cl
  char v50; // al
  __int16 v51; // cx
  __int16 v52; // ax
  int v53; // ecx
  int v54; // eax
  __int64 v55; // rcx
  __int64 v56; // rax
  int v57; // eax
  unsigned __int64 v58; // rsi
  char v59; // cl
  char v60; // al
  __int16 v61; // cx
  __int16 v62; // ax
  int v63; // ecx
  int v64; // eax
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // r8
  int v70; // [rsp+0h] [rbp-A8h]
  __int64 v71; // [rsp+8h] [rbp-A0h]
  __int64 name_base_ea; // [rsp+8h] [rbp-A0h]
  __int64 v73; // [rsp+8h] [rbp-A0h]
  __int64 v74; // [rsp+18h] [rbp-90h]
  int v75; // [rsp+28h] [rbp-80h] BYREF
  int v76; // [rsp+2Ch] [rbp-7Ch] BYREF
  __int64 v77; // [rsp+30h] [rbp-78h] BYREF
  __int64 v78; // [rsp+38h] [rbp-70h] BYREF
  _BYTE v79[16]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v80; // [rsp+50h] [rbp-58h]
  char v81; // [rsp+58h] [rbp-50h]
  char v82; // [rsp+59h] [rbp-4Fh]
  unsigned __int64 v83; // [rsp+68h] [rbp-40h]
  __int64 v84; // [rsp+B8h] [rbp+10h]

  v12 = a5;
  v13 = a3;
  v14 = *(_QWORD *)(a2 + 112);
  if ( a8 != -1 )
    v13 = a8;
  v83 = __readfsqword(0x28u);
  v84 = v13;
  if ( a6 == 8 && a5 > 0 && (int)a5 != a5 && *(_DWORD *)(v14 + 84) == 8 )
  {
    v25 = getinf(93);
    v12 = a5;
    if ( a5 == v25 )
    {
      *(_BYTE *)a1 = 6;
      v26 = 8 * *(_DWORD *)(v14 + 84);
      if ( (unsigned __int64)v26 <= 0x3F )
        v12 = ~(-1LL << v26) & a5;
      *(_QWORD *)(a1 + 8) = v12;
      sub_118F10((char *)a1, v14);
      return 1;
    }
  }
  sub_11CFD0(a1, v14, v12, a6, a3, *a4);
  if ( (unsigned __int8)get_item_refinfo(v79, a3, *a4) )
  {
    if ( (a7 & 1) != 0 )
    {
      v16 = *(_BYTE **)(v14 + 304);
      v17 = &v16[*(_QWORD *)(v14 + 312)];
      if ( v17 != v16 )
      {
        while ( *v16 != (v81 & 0x4F) )
        {
          if ( v17 == ++v16 )
            goto LABEL_18;
        }
        if ( v16 != v17 )
        {
          v18 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
          sub_119360(a1);
          *(_BYTE *)a1 = 6;
          v19 = 8 * *(_DWORD *)(v14 + 84);
          if ( (unsigned __int64)v19 <= 0x3F )
            v18 &= ~(-1LL << v19);
          *(_QWORD *)(a1 + 8) = v18;
          sub_118F10((char *)a1, v14);
          sub_11CDA0((char *)a1, v14, 9, a3, a6);
          return 1;
        }
      }
    }
LABEL_18:
    if ( (v81 & 0x10) != 0 )
      goto LABEL_25;
    if ( (a7 & 4) != 0 )
    {
      v21 = *(_BYTE **)(v14 + 328);
      v22 = &v21[*(_QWORD *)(v14 + 336)];
      if ( v21 != v22 )
      {
        while ( *v21 != (v81 & 0x4F) )
        {
          if ( v22 == ++v21 )
            goto LABEL_27;
        }
        if ( v22 != v21 )
        {
LABEL_25:
          *(_BYTE *)(a1 + 1) |= 0x20u;
          return 0;
        }
      }
    }
LABEL_27:
    if ( *(_DWORD *)(v14 + 80) == 8 && *(_DWORD *)(a2 + 152) == 18 && (unsigned __int64)getinf(88) <= 0x294 )
      v80 = (unsigned int)v80;
    v23 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
    if ( *(_DWORD *)(*(_QWORD *)(a2 + 24) + 24LL) != 8 )
      v23 = (int)v23;
    v74 = v23;
    v71 = a3 + (char)a4[2];
    if ( !(unsigned __int8)calc_reference_data(&v77, &v78, v71, v79) )
      return 0;
    name_base_ea = get_name_base_ea(v71, v77);
    if ( !(unsigned __int8)is_mapped(name_base_ea) )
      return 0;
    v75 = 0;
    v76 = 0;
    v24 = v74;
    switch ( v81 & 0x4F )
    {
      case 1:
        v27 = 2;
        goto LABEL_41;
      case 2:
      case 9:
        v27 = 4;
        goto LABEL_41;
      case 3:
        v76 = 10;
        v75 = 1;
        if ( a6 <= 1 )
          return 0;
        v43 = 8 * a6;
        if ( (a7 & 4) == 0 )
        {
          LOBYTE(v44) = 8;
          if ( (unsigned __int64)v43 <= 0x3F )
            v45 = 1LL << v43;
          else
            v45 = 0;
          goto LABEL_74;
        }
        if ( (unsigned __int64)v43 > 0x3F )
        {
          LOBYTE(v57) = 7;
          v67 = 0;
          goto LABEL_98;
        }
        v58 = 7;
        LOBYTE(v57) = 7;
        goto LABEL_97;
      case 4:
        v76 = 10;
        v75 = 2;
        if ( a6 <= 3 )
          return 0;
        v43 = 8 * a6;
        if ( (a7 & 4) == 0 )
        {
          LOBYTE(v44) = 16;
          if ( (unsigned __int64)v43 > 0x3F )
            v45 = 0;
          else
            v45 = 1LL << v43;
          goto LABEL_74;
        }
        if ( (unsigned __int64)v43 <= 0x3F )
        {
          v58 = 15;
          LOBYTE(v57) = 15;
          goto LABEL_97;
        }
        LOBYTE(v57) = 15;
        v67 = 0;
        goto LABEL_98;
      case 5:
        v76 = 11;
        v75 = 1;
        if ( a6 <= 1 )
          return 0;
        goto LABEL_43;
      case 6:
        v76 = 11;
        v75 = 2;
        if ( a6 <= 3 )
          return 0;
        goto LABEL_43;
      case 0xA:
        v27 = 1;
LABEL_41:
        v75 = v27;
        goto LABEL_42;
      case 0xB:
        v76 = 10;
        v75 = 4;
        if ( a6 <= 7 )
          return 0;
        v43 = 8 * a6;
        if ( (a7 & 4) == 0 )
        {
          LOBYTE(v44) = 32;
          if ( (unsigned __int64)v43 > 0x3F )
            v45 = 0;
          else
            v45 = 1LL << v43;
          goto LABEL_74;
        }
        if ( (unsigned __int64)v43 > 0x3F )
        {
          LOBYTE(v57) = 31;
          v67 = 0;
          goto LABEL_98;
        }
        v58 = 31;
        LOBYTE(v57) = 31;
        goto LABEL_97;
      case 0xC:
        v76 = 11;
        v75 = 4;
        if ( a6 <= 7 )
          return 0;
        goto LABEL_43;
      default:
        v42 = *(__int64 (**)())(*(_QWORD *)v14 + 400LL);
        if ( v42 == sub_1179F0
          || !((unsigned __int8 (__fastcall *)(__int64, int *, int *, _BYTE *))v42)(v14, &v75, &v76, v79) )
        {
          return 0;
        }
        v27 = v75;
        v24 = v74;
        if ( !v76 )
        {
LABEL_42:
          if ( a6 < v27 )
            return 0;
          goto LABEL_43;
        }
        if ( a6 < 2 * v75 )
          return 0;
        if ( v76 != 10 )
          goto LABEL_43;
        v43 = 8 * a6;
        v44 = 8 * v75;
        if ( (a7 & 4) == 0 )
        {
          if ( (unsigned __int64)v43 <= 0x3F )
          {
            v45 = 1LL << v43;
            if ( (unsigned __int64)v44 > 0x3F )
            {
LABEL_75:
              if ( (v24 & v45) != 0 )
                return 0;
              goto LABEL_43;
            }
LABEL_74:
            v45 -= 1LL << v44;
            goto LABEL_75;
          }
          if ( (unsigned __int64)v44 <= 0x3F )
          {
            v45 = 0;
            goto LABEL_74;
          }
LABEL_43:
          v70 = 9;
          goto LABEL_44;
        }
        v57 = v44 - 1;
        v58 = v57;
        if ( (unsigned __int64)v43 <= 0x3F )
        {
LABEL_97:
          v67 = 1LL << v43;
          if ( v58 > 0x3F )
          {
LABEL_99:
            v68 = v67 & v24;
            if ( v68 && v68 != v67 )
              return 0;
LABEL_92:
            v70 = 8;
LABEL_44:
            sub_119360(a1);
            *(_BYTE *)a1 = 6;
            v28 = 8 * *(_DWORD *)(v14 + 84);
            v29 = name_base_ea;
            if ( (unsigned __int64)v28 <= 0x3F )
              v29 = name_base_ea & ~(-1LL << v28);
            *(_QWORD *)(a1 + 8) = v29;
            sub_118F10((char *)a1, v14);
            if ( (unsigned __int8)get_fixup(0, a3) && *(_BYTE *)a1 == 10 && **(_BYTE **)(a1 + 8) == 6 )
              *(_BYTE *)(a1 + 1) |= 8u;
            sub_11CDA0((char *)a1, v14, 9, a3, a6);
            v30 = v77;
            if ( v77 + v80 != name_base_ea )
            {
              v73 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL) & (v77 + v80 - name_base_ea);
              v31 = j__qalloc_or_throw(80);
              *(_QWORD *)(v31 + 32) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v31 + 40) = 0;
              *(_QWORD *)(v31 + 48) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v31 + 56) = 0;
              *(_QWORD *)(v31 + 64) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v31 + 72) = 0;
              sub_32C520(v31, v84);
              sub_11CFD0(v31 + 48, v14, v73, a6, a3, *a4);
              v32 = *(_BYTE *)a1;
              *(_BYTE *)a1 = *(_BYTE *)(v31 + 32);
              v33 = *(_BYTE *)(v31 + 33);
              *(_BYTE *)(v31 + 32) = v32;
              v34 = *(_BYTE *)(a1 + 1);
              *(_BYTE *)(a1 + 1) = v33;
              v35 = *(_WORD *)(v31 + 34);
              *(_BYTE *)(v31 + 33) = v34;
              v36 = *(_WORD *)(a1 + 2);
              *(_WORD *)(a1 + 2) = v35;
              *(_WORD *)(v31 + 34) = v36;
              *(_DWORD *)(v31 + 36) = *(_DWORD *)(a1 + 4);
              v37 = *(_QWORD *)(a1 + 8);
              *(_DWORD *)v31 = 12;
              v30 = v77;
              *(_QWORD *)(v31 + 40) = v37;
              *(_DWORD *)(v31 + 68) = a6;
              *(_BYTE *)a1 = 4;
              *(_QWORD *)(a1 + 8) = v31;
              *(_DWORD *)(a1 + 4) = a6;
            }
            v38 = v78;
            v39 = getseg(v30);
            if ( v38 != get_segm_base(v39) )
            {
              v46 = j__qalloc_or_throw(80);
              *(_QWORD *)(v46 + 32) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v46 + 40) = 0;
              *(_QWORD *)(v46 + 48) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v46 + 56) = 0;
              *(_QWORD *)(v46 + 64) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v46 + 72) = 0;
              sub_32C520(v46, v84);
              *(_DWORD *)v46 = 13;
              v47 = v78;
              v48 = *(_BYTE *)a1;
              if ( (v82 & 1) != 0 )
              {
                *(_BYTE *)a1 = *(_BYTE *)(v46 + 48);
                v49 = *(_BYTE *)(v46 + 49);
                *(_BYTE *)(v46 + 48) = v48;
                v50 = *(_BYTE *)(a1 + 1);
                *(_BYTE *)(a1 + 1) = v49;
                v51 = *(_WORD *)(v46 + 50);
                *(_BYTE *)(v46 + 49) = v50;
                v52 = *(_WORD *)(a1 + 2);
                *(_WORD *)(a1 + 2) = v51;
                v53 = *(_DWORD *)(v46 + 52);
                *(_WORD *)(v46 + 50) = v52;
                v54 = *(_DWORD *)(a1 + 4);
                *(_DWORD *)(a1 + 4) = v53;
                v55 = *(_QWORD *)(v46 + 56);
                *(_DWORD *)(v46 + 52) = v54;
                v56 = *(_QWORD *)(a1 + 8);
                *(_QWORD *)(a1 + 8) = v55;
                *(_QWORD *)(v46 + 56) = v56;
                sub_11CFD0(v46 + 32, v14, v47, a6, a3, *a4);
              }
              else
              {
                *(_BYTE *)a1 = *(_BYTE *)(v46 + 32);
                v59 = *(_BYTE *)(v46 + 33);
                *(_BYTE *)(v46 + 32) = v48;
                v60 = *(_BYTE *)(a1 + 1);
                *(_BYTE *)(a1 + 1) = v59;
                v61 = *(_WORD *)(v46 + 34);
                *(_BYTE *)(v46 + 33) = v60;
                v62 = *(_WORD *)(a1 + 2);
                *(_WORD *)(a1 + 2) = v61;
                v63 = *(_DWORD *)(v46 + 36);
                *(_WORD *)(v46 + 34) = v62;
                v64 = *(_DWORD *)(a1 + 4);
                *(_DWORD *)(a1 + 4) = v63;
                v65 = *(_QWORD *)(v46 + 40);
                *(_DWORD *)(v46 + 36) = v64;
                v66 = *(_QWORD *)(a1 + 8);
                *(_QWORD *)(a1 + 8) = v65;
                *(_QWORD *)(v46 + 40) = v66;
                sub_11CFD0(v46 + 48, v14, v47, a6, a3, *a4);
              }
              *(_DWORD *)(v46 + 68) = a6;
              *(_BYTE *)a1 = 4;
              *(_BYTE *)(a1 + 1) |= 0x20u;
              *(_QWORD *)(a1 + 8) = v46;
              *(_DWORD *)(a1 + 4) = a6;
            }
            v40 = v76;
            if ( v76 )
            {
              v41 = v75;
              if ( 2 * v75 < a6 )
              {
                sub_11CDA0((char *)a1, v14, 10, v84, 2 * v75);
                v41 = v75;
                v40 = v76;
              }
              sub_11CDA0((char *)a1, v14, v40, v84, v41);
              sub_11CDA0((char *)a1, v14, v70, v84, a6);
            }
            return 1;
          }
        }
        else
        {
          if ( (unsigned __int64)v57 > 0x3F )
            goto LABEL_92;
          v67 = 0;
        }
LABEL_98:
        v67 -= 1LL << v57;
        goto LABEL_99;
    }
  }
  return 0;
}
