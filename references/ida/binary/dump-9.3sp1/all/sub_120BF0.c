__int64 __fastcall sub_120BF0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 *a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r15
  _BYTE *v15; // rax
  _BYTE *v16; // rdx
  __int64 v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rcx
  _BYTE *v21; // rax
  _BYTE *v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // r13
  unsigned __int8 v34; // al
  char v35; // dl
  char v36; // al
  __int16 v37; // dx
  __int16 v38; // ax
  __int64 v39; // rax
  __int64 v40; // r13
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rdx
  int v44; // r8d
  __int64 (*v45)(); // rax
  int v46; // ecx
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // r13
  __int64 v50; // rdx
  unsigned __int8 v51; // al
  char v52; // cl
  char v53; // al
  __int16 v54; // cx
  __int16 v55; // ax
  int v56; // ecx
  int v57; // eax
  __int64 v58; // rcx
  __int64 v59; // rax
  int v60; // eax
  unsigned __int64 v61; // rsi
  char v62; // cl
  char v63; // al
  __int16 v64; // cx
  __int16 v65; // ax
  int v66; // ecx
  int v67; // eax
  __int64 v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // r8
  unsigned int v73; // [rsp+0h] [rbp-A8h]
  __int64 name_base_ea; // [rsp+8h] [rbp-A0h]
  __int64 v75; // [rsp+8h] [rbp-A0h]
  __int64 v76; // [rsp+18h] [rbp-90h]
  int v77; // [rsp+28h] [rbp-80h] BYREF
  unsigned int v78; // [rsp+2Ch] [rbp-7Ch] BYREF
  __int64 v79; // [rsp+30h] [rbp-78h]
  __int64 v80; // [rsp+38h] [rbp-70h]
  char v81[16]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v82; // [rsp+50h] [rbp-58h]
  char v83; // [rsp+58h] [rbp-50h]
  char v84; // [rsp+59h] [rbp-4Fh]
  unsigned __int64 v85; // [rsp+68h] [rbp-40h]
  __int64 v86; // [rsp+B8h] [rbp+10h]

  v11 = a5;
  v12 = a3;
  v13 = *(_QWORD *)(a2 + 112);
  if ( a8 != -1 )
    v12 = a8;
  v85 = __readfsqword(0x28u);
  v86 = v12;
  if ( a6 == 8 && a5 > 0 && (int)a5 != a5 && *(_DWORD *)(v13 + 84) == 8 )
  {
    v25 = getinf();
    v11 = a5;
    if ( a5 == v25 )
    {
      *(_BYTE *)a1 = 6;
      v26 = (unsigned int)(8 * *(_DWORD *)(v13 + 84));
      if ( (unsigned __int64)(int)v26 <= 0x3F )
        v11 = ~(-1LL << (8 * *(_BYTE *)(v13 + 84))) & a5;
      *(_QWORD *)(a1 + 8) = v11;
      sub_11C950((unsigned __int8 *)a1, v13, v11, v26);
      return 1;
    }
  }
  sub_120A10(a1, v13, v11, a6, a3, *a4);
  if ( (unsigned __int8)get_item_refinfo() )
  {
    if ( (a7 & 1) != 0 )
    {
      v15 = *(_BYTE **)(v13 + 304);
      v16 = &v15[*(_QWORD *)(v13 + 312)];
      if ( v16 != v15 )
      {
        while ( *v15 != (v83 & 0x4F) )
        {
          if ( v16 == ++v15 )
            goto LABEL_18;
        }
        if ( v15 != v16 )
        {
          v17 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
          sub_11CDA0(a1);
          *(_BYTE *)a1 = 6;
          v19 = (unsigned int)(8 * *(_DWORD *)(v13 + 84));
          if ( (unsigned __int64)(int)v19 <= 0x3F )
            v17 &= ~(-1LL << (8 * *(_BYTE *)(v13 + 84)));
          *(_QWORD *)(a1 + 8) = v17;
          sub_11C950((unsigned __int8 *)a1, v13, v18, v19);
          sub_1207E0((char *)a1, v13, 9, a3, a6);
          return 1;
        }
      }
    }
LABEL_18:
    if ( (v83 & 0x10) != 0 )
      goto LABEL_25;
    if ( (a7 & 4) != 0 )
    {
      v21 = *(_BYTE **)(v13 + 328);
      v22 = &v21[*(_QWORD *)(v13 + 336)];
      if ( v21 != v22 )
      {
        while ( *v21 != (v83 & 0x4F) )
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
    if ( *(_DWORD *)(v13 + 80) == 8 && *(_DWORD *)(a2 + 152) == 18 && (unsigned __int64)getinf() <= 0x294 )
      v82 = (unsigned int)v82;
    v23 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
    if ( *(_DWORD *)(*(_QWORD *)(a2 + 24) + 24LL) != 8 )
      v23 = (int)v23;
    v76 = v23;
    if ( !(unsigned __int8)calc_reference_data() )
      return 0;
    name_base_ea = get_name_base_ea();
    if ( !(unsigned __int8)is_mapped() )
      return 0;
    v77 = 0;
    v78 = 0;
    v24 = v76;
    switch ( v83 & 0x4F )
    {
      case 1:
        v27 = 2;
        goto LABEL_41;
      case 2:
      case 9:
        v27 = 4;
        goto LABEL_41;
      case 3:
        v78 = 10;
        v77 = 1;
        if ( a6 <= 1 )
          return 0;
        v46 = 8 * a6;
        if ( (a7 & 4) == 0 )
        {
          LOBYTE(v47) = 8;
          if ( (unsigned __int64)v46 <= 0x3F )
            v48 = 1LL << v46;
          else
            v48 = 0;
          goto LABEL_74;
        }
        if ( (unsigned __int64)v46 > 0x3F )
        {
          LOBYTE(v60) = 7;
          v70 = 0;
          goto LABEL_98;
        }
        v61 = 7;
        LOBYTE(v60) = 7;
        goto LABEL_97;
      case 4:
        v78 = 10;
        v77 = 2;
        if ( a6 <= 3 )
          return 0;
        v46 = 8 * a6;
        if ( (a7 & 4) == 0 )
        {
          LOBYTE(v47) = 16;
          if ( (unsigned __int64)v46 > 0x3F )
            v48 = 0;
          else
            v48 = 1LL << v46;
          goto LABEL_74;
        }
        if ( (unsigned __int64)v46 <= 0x3F )
        {
          v61 = 15;
          LOBYTE(v60) = 15;
          goto LABEL_97;
        }
        LOBYTE(v60) = 15;
        v70 = 0;
        goto LABEL_98;
      case 5:
        v78 = 11;
        v77 = 1;
        if ( a6 <= 1 )
          return 0;
        goto LABEL_43;
      case 6:
        v78 = 11;
        v77 = 2;
        if ( a6 <= 3 )
          return 0;
        goto LABEL_43;
      case 0xA:
        v27 = 1;
LABEL_41:
        v77 = v27;
        goto LABEL_42;
      case 0xB:
        v78 = 10;
        v77 = 4;
        if ( a6 <= 7 )
          return 0;
        v46 = 8 * a6;
        if ( (a7 & 4) == 0 )
        {
          LOBYTE(v47) = 32;
          if ( (unsigned __int64)v46 > 0x3F )
            v48 = 0;
          else
            v48 = 1LL << v46;
          goto LABEL_74;
        }
        if ( (unsigned __int64)v46 > 0x3F )
        {
          LOBYTE(v60) = 31;
          v70 = 0;
          goto LABEL_98;
        }
        v61 = 31;
        LOBYTE(v60) = 31;
        goto LABEL_97;
      case 0xC:
        v78 = 11;
        v77 = 4;
        if ( a6 <= 7 )
          return 0;
        goto LABEL_43;
      default:
        v45 = *(__int64 (**)())(*(_QWORD *)v13 + 400LL);
        if ( v45 == sub_11B430
          || !((unsigned __int8 (__fastcall *)(__int64, int *, unsigned int *, char *))v45)(v13, &v77, &v78, v81) )
        {
          return 0;
        }
        v27 = v77;
        v24 = v76;
        if ( !v78 )
        {
LABEL_42:
          if ( a6 < v27 )
            return 0;
          goto LABEL_43;
        }
        if ( a6 < 2 * v77 )
          return 0;
        if ( v78 != 10 )
          goto LABEL_43;
        v46 = 8 * a6;
        v47 = 8 * v77;
        if ( (a7 & 4) == 0 )
        {
          if ( (unsigned __int64)v46 <= 0x3F )
          {
            v48 = 1LL << v46;
            if ( (unsigned __int64)v47 > 0x3F )
            {
LABEL_75:
              if ( (v24 & v48) != 0 )
                return 0;
              goto LABEL_43;
            }
LABEL_74:
            v48 -= 1LL << v47;
            goto LABEL_75;
          }
          if ( (unsigned __int64)v47 <= 0x3F )
          {
            v48 = 0;
            goto LABEL_74;
          }
LABEL_43:
          v73 = 9;
          goto LABEL_44;
        }
        v60 = v47 - 1;
        v61 = v60;
        if ( (unsigned __int64)v46 <= 0x3F )
        {
LABEL_97:
          v70 = 1LL << v46;
          if ( v61 > 0x3F )
          {
LABEL_99:
            v71 = v70 & v24;
            if ( v71 && v71 != v70 )
              return 0;
LABEL_92:
            v73 = 8;
LABEL_44:
            sub_11CDA0(a1);
            *(_BYTE *)a1 = 6;
            v28 = (unsigned int)(8 * *(_DWORD *)(v13 + 84));
            v29 = name_base_ea;
            if ( (unsigned __int64)(int)v28 <= 0x3F )
              v29 = name_base_ea & ~(-1LL << (8 * *(_BYTE *)(v13 + 84)));
            *(_QWORD *)(a1 + 8) = v29;
            sub_11C950((unsigned __int8 *)a1, v13, (int)v28, v28);
            if ( (unsigned __int8)get_fixup() && *(_BYTE *)a1 == 10 && **(_BYTE **)(a1 + 8) == 6 )
              *(_BYTE *)(a1 + 1) |= 8u;
            v30 = v13;
            sub_1207E0((char *)a1, v13, 9, a3, a6);
            v31 = name_base_ea;
            if ( v79 + v82 != name_base_ea )
            {
              v32 = *(_QWORD *)(a2 + 24);
              v75 = *(_QWORD *)(v32 + 16) & (v79 + v82 - name_base_ea);
              v33 = j__qalloc_or_throw(80, v13, v32, v31);
              *(_QWORD *)(v33 + 32) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v33 + 40) = 0;
              *(_QWORD *)(v33 + 48) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v33 + 56) = 0;
              *(_QWORD *)(v33 + 64) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v33 + 72) = 0;
              sub_330970(v33, v86);
              v30 = v13;
              sub_120A10(v33 + 48, v13, v75, a6, a3, *a4);
              v34 = *(_BYTE *)a1;
              *(_BYTE *)a1 = *(_BYTE *)(v33 + 32);
              v35 = *(_BYTE *)(v33 + 33);
              *(_BYTE *)(v33 + 32) = v34;
              v36 = *(_BYTE *)(a1 + 1);
              *(_BYTE *)(a1 + 1) = v35;
              v37 = *(_WORD *)(v33 + 34);
              *(_BYTE *)(v33 + 33) = v36;
              v38 = *(_WORD *)(a1 + 2);
              *(_WORD *)(a1 + 2) = v37;
              *(_WORD *)(v33 + 34) = v38;
              *(_DWORD *)(v33 + 36) = *(_DWORD *)(a1 + 4);
              v39 = *(_QWORD *)(a1 + 8);
              *(_DWORD *)v33 = 12;
              *(_QWORD *)(v33 + 40) = v39;
              *(_DWORD *)(v33 + 68) = a6;
              *(_BYTE *)a1 = 4;
              *(_QWORD *)(a1 + 8) = v33;
              *(_DWORD *)(a1 + 4) = a6;
            }
            v40 = v80;
            getseg();
            if ( v40 != get_segm_base() )
            {
              v49 = j__qalloc_or_throw(80, v30, v41, v42);
              *(_QWORD *)(v49 + 32) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v49 + 40) = 0;
              *(_QWORD *)(v49 + 48) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v49 + 56) = 0;
              *(_QWORD *)(v49 + 64) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v49 + 72) = 0;
              sub_330970(v49, v86);
              *(_DWORD *)v49 = 13;
              v50 = v80;
              v51 = *(_BYTE *)a1;
              if ( (v84 & 1) != 0 )
              {
                *(_BYTE *)a1 = *(_BYTE *)(v49 + 48);
                v52 = *(_BYTE *)(v49 + 49);
                *(_BYTE *)(v49 + 48) = v51;
                v53 = *(_BYTE *)(a1 + 1);
                *(_BYTE *)(a1 + 1) = v52;
                v54 = *(_WORD *)(v49 + 50);
                *(_BYTE *)(v49 + 49) = v53;
                v55 = *(_WORD *)(a1 + 2);
                *(_WORD *)(a1 + 2) = v54;
                v56 = *(_DWORD *)(v49 + 52);
                *(_WORD *)(v49 + 50) = v55;
                v57 = *(_DWORD *)(a1 + 4);
                *(_DWORD *)(a1 + 4) = v56;
                v58 = *(_QWORD *)(v49 + 56);
                *(_DWORD *)(v49 + 52) = v57;
                v59 = *(_QWORD *)(a1 + 8);
                *(_QWORD *)(a1 + 8) = v58;
                *(_QWORD *)(v49 + 56) = v59;
                sub_120A10(v49 + 32, v13, v50, a6, a3, *a4);
              }
              else
              {
                *(_BYTE *)a1 = *(_BYTE *)(v49 + 32);
                v62 = *(_BYTE *)(v49 + 33);
                *(_BYTE *)(v49 + 32) = v51;
                v63 = *(_BYTE *)(a1 + 1);
                *(_BYTE *)(a1 + 1) = v62;
                v64 = *(_WORD *)(v49 + 34);
                *(_BYTE *)(v49 + 33) = v63;
                v65 = *(_WORD *)(a1 + 2);
                *(_WORD *)(a1 + 2) = v64;
                v66 = *(_DWORD *)(v49 + 36);
                *(_WORD *)(v49 + 34) = v65;
                v67 = *(_DWORD *)(a1 + 4);
                *(_DWORD *)(a1 + 4) = v66;
                v68 = *(_QWORD *)(v49 + 40);
                *(_DWORD *)(v49 + 36) = v67;
                v69 = *(_QWORD *)(a1 + 8);
                *(_QWORD *)(a1 + 8) = v68;
                *(_QWORD *)(v49 + 40) = v69;
                sub_120A10(v49 + 48, v13, v50, a6, a3, *a4);
              }
              *(_DWORD *)(v49 + 68) = a6;
              *(_BYTE *)a1 = 4;
              *(_BYTE *)(a1 + 1) |= 0x20u;
              *(_QWORD *)(a1 + 8) = v49;
              *(_DWORD *)(a1 + 4) = a6;
            }
            v43 = v78;
            if ( v78 )
            {
              v44 = v77;
              if ( 2 * v77 < a6 )
              {
                sub_1207E0((char *)a1, v13, 10, v86, 2 * v77);
                v44 = v77;
                v43 = v78;
              }
              sub_1207E0((char *)a1, v13, v43, v86, v44);
              sub_1207E0((char *)a1, v13, v73, v86, a6);
            }
            return 1;
          }
        }
        else
        {
          if ( (unsigned __int64)v60 > 0x3F )
            goto LABEL_92;
          v70 = 0;
        }
LABEL_98:
        v70 -= 1LL << v60;
        goto LABEL_99;
    }
  }
  return 0;
}
