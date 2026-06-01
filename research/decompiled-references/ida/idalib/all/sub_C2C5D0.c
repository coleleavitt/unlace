__int64 __fastcall sub_C2C5D0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // rdx
  __int64 v7; // rbp
  __int64 *v8; // rbx
  __int64 v9; // r13
  unsigned int v11; // r13d
  __int64 v12; // r14
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // rax
  int v19; // ecx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  int v22; // edx
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 *v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  char v28; // al
  __int64 v29; // r13
  __int64 v30; // r10
  unsigned int v31; // ecx
  __int64 *v32; // rdx
  __int64 v33; // rdi
  __int64 v34; // r15
  unsigned __int64 v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rbx
  unsigned __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // r15
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // r15
  unsigned int v47; // esi
  bool v48; // zf
  __int64 v49; // rdx
  unsigned __int64 v50; // rax
  _QWORD *v51; // rcx
  unsigned __int64 v52; // r15
  unsigned int v53; // r14d
  unsigned __int64 v54; // rbp
  __int64 v55; // r15
  unsigned __int64 v56; // r12
  unsigned __int64 v57; // rax
  __int64 v58; // rdx
  unsigned __int64 v59; // rax
  __int64 v60; // r12
  unsigned int v61; // eax
  int v62; // ecx
  __int64 v63; // rax
  __int64 v64; // [rsp+0h] [rbp-108h]
  __int64 v65; // [rsp+0h] [rbp-108h]
  __int64 *v66; // [rsp+8h] [rbp-100h]
  __int64 v67; // [rsp+8h] [rbp-100h]
  __int64 v68; // [rsp+10h] [rbp-F8h]
  int v70; // [rsp+30h] [rbp-D8h]
  __int64 v71; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v72; // [rsp+50h] [rbp-B8h] BYREF
  char v73; // [rsp+54h] [rbp-B4h]
  __int64 v74; // [rsp+58h] [rbp-B0h] BYREF
  int v75; // [rsp+60h] [rbp-A8h]
  int v76[14]; // [rsp+90h] [rbp-78h] BYREF
  char v77; // [rsp+C8h] [rbp-40h]

  v5 = a3 & 0xFFFFFFFFFFFFFFF0LL;
  v7 = a1;
  v8 = a2;
  v9 = *(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  switch ( *(_BYTE *)(v9 + 16) )
  {
    case 0:
    case 1:
    case 4:
    case 8:
    case 9:
    case 0xC:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x1D:
    case 0x1E:
    case 0x20:
    case 0x25:
    case 0x26:
    case 0x28:
    case 0x2D:
    case 0x2E:
    case 0x32:
    case 0x35:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3A:
      sub_C2D630(a1, a2, *(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL));
      return v7;
    case 2:
    case 3:
      sub_C2CF20(a1, a2, *(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL));
      return v7;
    case 5:
    case 6:
    case 7:
    case 0xA:
    case 0xB:
    case 0xF:
    case 0x10:
    case 0x11:
    case 0x19:
    case 0x1A:
    case 0x1B:
    case 0x1C:
    case 0x1F:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x27:
    case 0x29:
    case 0x2A:
    case 0x2B:
    case 0x2C:
    case 0x31:
    case 0x33:
    case 0x34:
    case 0x36:
      sub_C13C30(*a2, a2[2], v9 & 0xFFFFFFFFFFFFFFF0LL);
      *(_BYTE *)(a1 + 56) = 0;
      return v7;
    case 0xD:
      sub_C209D0(a1, a2, *(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL), a4, 0);
      return v7;
    case 0xE:
      sub_C2D0C0(a1, a2, *(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL));
      return v7;
    case 0x2F:
      v49 = *(_QWORD *)(sub_F60F10(*(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, v5, a4, a5) + 128);
      v50 = 0;
      v51 = (_QWORD *)(v49 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v49 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
        if ( (v49 & 4) != 0 )
        {
          v63 = *(_QWORD *)(*v51 & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_QWORD *)(v63 + 8) & 7LL | (*(__int64 *)(v63 + 8) >> 3) & 1 )
            v63 = sub_F64F00(*v51);
          v50 = v63 & 0xFFFFFFFFFFFFFFF0LL;
        }
        else
        {
          v50 = v49 & 0xFFFFFFFFFFFFFFF0LL;
        }
      }
      sub_C209D0(
        a1,
        a2,
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v50 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
        a4,
        v9);
      return v7;
    case 0x30:
      v11 = 0;
      v12 = sub_F63240(*(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, v5, a4, a5);
      v13 = v12;
      v64 = sub_EDE580(*(_QWORD *)(*v8 + 16), v12);
      if ( (*(_BYTE *)(v12 + 28) & 0x7Fu) - 59 <= 2 )
      {
        v13 = *(_QWORD *)(v12 + 104);
        sub_7052B0((__int64 *)(v13 + 96), v13, v14, v15, v16, v17);
        v11 = *(_DWORD *)(*(_QWORD *)(v12 + 128) + 16LL);
      }
      v18 = sub_B7E900(v12, v13, v14, v15, v16, v17);
      if ( v18 )
      {
        v19 = 0;
        v20 = *(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v20 )
        {
          while ( (*(_BYTE *)(v20 + 28) & 0x7Fu) - 49 <= 2 )
          {
LABEL_42:
            ++v19;
            v20 = *(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            if ( !v20 )
              goto LABEL_14;
          }
          while ( 1 )
          {
            v21 = *(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            v20 = v21;
            if ( !v21 )
              break;
            if ( (*(_BYTE *)(v21 + 28) & 0x7Fu) - 49 <= 2 )
              goto LABEL_42;
          }
        }
LABEL_14:
        v22 = v19 + 1;
        goto LABEL_15;
      }
      v22 = 0;
LABEL_15:
      v23 = v11;
      v72 = 0;
      v73 &= ~1u;
      sub_A4F800((__int64)&v74, v11, v22);
      v28 = *(_BYTE *)(v12 + 28);
      v72 = 10;
      if ( (v28 & 0x7Fu) - 59 <= 2 )
      {
        v23 = *(_QWORD *)(v12 + 104);
        sub_7052B0((__int64 *)(v23 + 96), v23, v24, (__int64)v25, v26, v27);
        v68 = *(unsigned int *)(*(_QWORD *)(v12 + 128) + 16LL);
        if ( *(_DWORD *)(*(_QWORD *)(v12 + 128) + 16LL) )
        {
          v25 = &v71;
          v29 = 0;
          v66 = v8;
          while ( 1 )
          {
            sub_7052B0((__int64 *)(*(_QWORD *)(v12 + 104) + 96LL), *(_QWORD *)(v12 + 104), v24, (__int64)v25, v26, v27);
            v36 = *(_QWORD *)(v12 + 128);
            if ( (*(_BYTE *)(v36 + 24) & 1) != 0 )
              v37 = sub_B96980(v36);
            else
              v37 = *(_QWORD *)(v36 + 24);
            v38 = v37 + 24 * v29;
            v39 = sub_C11A50(*(__int64 **)(v38 + 16));
            v43 = sub_F63270(*(_QWORD *)(v39 & 0xFFFFFFFFFFFFFFF0LL));
            v71 = v43;
            v44 = *(_QWORD *)(v43 + 128);
            if ( v44
              || (sub_7052B0(
                    (__int64 *)(*(_QWORD *)(v43 + 104) + 96LL),
                    *(_QWORD *)(v43 + 104),
                    (__int64)v32,
                    v40,
                    v41,
                    v42),
                  (v44 = *(_QWORD *)(v43 + 128)) != 0) )
            {
              v44 = *(_QWORD *)(v44 + 88);
            }
            v45 = v64;
            v71 = v44;
            v46 = *(_QWORD *)(v64 + 72);
            v47 = *(_DWORD *)(v46 + 80);
            if ( v47 )
            {
              v30 = *(_QWORD *)(v46 + 64);
              v31 = (v47 - 1) & (((unsigned int)v44 >> 9) ^ ((unsigned int)v44 >> 4));
              v32 = (__int64 *)(v30 + 16LL * v31);
              v33 = *v32;
              if ( v44 == *v32 )
                goto LABEL_19;
              if ( v33 != -4096 )
              {
                v70 = 1;
                v41 = 0;
                while ( 1 )
                {
                  if ( !v41 && v33 == -8192 )
                    v41 = (__int64)v32;
                  v31 = (v47 - 1) & (v70 + v31);
                  v32 = (__int64 *)(v30 + 16LL * v31);
                  v33 = *v32;
                  if ( v44 == *v32 )
                    break;
                  if ( v33 == -4096 )
                  {
                    if ( v41 )
                      v32 = (__int64 *)v41;
                    goto LABEL_65;
                  }
                  ++v70;
                }
LABEL_19:
                v34 = a4 + v32[1];
                goto LABEL_20;
              }
LABEL_65:
              v62 = *(_DWORD *)(v46 + 72);
              *(_QWORD *)v76 = v32;
              v45 = (unsigned int)(v62 + 1);
              if ( 4 * (int)v45 < 3 * v47 )
              {
                if ( v47 - *(_DWORD *)(v46 + 76) - (unsigned int)v45 > v47 >> 3 )
                  goto LABEL_33;
                goto LABEL_32;
              }
            }
            else
            {
              *(_QWORD *)v76 = 0;
            }
            v47 *= 2;
LABEL_32:
            sub_7055A0(v46 + 64, v47, (__int64)v32, v45, v41, v46 + 64);
            sub_A6DD20((__int64 *)(v46 + 64), &v71, v76);
            v44 = v71;
            v32 = *(__int64 **)v76;
            LODWORD(v45) = *(_DWORD *)(v46 + 72) + 1;
LABEL_33:
            v48 = *v32 == -4096;
            *(_DWORD *)(v46 + 72) = v45;
            if ( !v48 )
              --*(_DWORD *)(v46 + 76);
            *v32 = v44;
            v34 = a4;
            v32[1] = 0;
LABEL_20:
            v35 = sub_C11A50(*(__int64 **)(v38 + 16));
            sub_C2C5D0(v76, v66, v35, v34);
            if ( !v77 )
            {
              v7 = a1;
              *(_BYTE *)(a1 + 56) = 0;
              goto LABEL_59;
            }
            v23 = (__int64)v76;
            sub_A54D20(v74 + 56LL * (unsigned int)v29, v76);
            if ( v77 && v76[0] > 1u )
              sub_A4F8E0(v76);
            if ( v68 == ++v29 )
            {
              v7 = a1;
              v8 = v66;
              break;
            }
          }
        }
      }
      v52 = sub_B7E900(v12, v23, v24, (__int64)v25, v26, v27);
      if ( v52 )
      {
        v53 = 0;
        if ( (*(_BYTE *)(v52 + 68) & 1) != 0 )
        {
LABEL_63:
          v60 = *v8;
          v61 = sub_EEB7E0(v8[2]);
          sub_E33C80(v60, v61, 2390, 0);
          *(_BYTE *)(v7 + 56) = 0;
        }
        else
        {
          v67 = v7;
          v54 = v52;
          v55 = v64;
          v65 = a4;
          while ( 1 )
          {
            v56 = *(_QWORD *)(*(_QWORD *)(v55 + 48) + 8LL * v53);
            v57 = sub_A97D20(
                    *(_QWORD *)(*v8 + 16),
                    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v8 + 16) + 18648LL) & 0xFFFFFFFFFFFFFFF0LL));
            sub_C2C5D0(v76, v8, *(_QWORD *)(v54 + 48), v56 / v57 + v65);
            if ( !v77 )
              break;
            v58 = v75 + v53++;
            sub_A54D20(v74 + 56 * v58, v76);
            if ( v77 && v76[0] > 1u )
              sub_A4F8E0(v76);
            do
            {
              v59 = *(_QWORD *)(v54 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              v54 = v59;
              if ( !v59 )
              {
                v7 = v67;
                goto LABEL_58;
              }
            }
            while ( (*(_BYTE *)(v59 + 28) & 0x7Fu) - 49 > 2 );
            if ( (*(_BYTE *)(v59 + 68) & 1) != 0 )
            {
              v7 = v67;
              goto LABEL_63;
            }
          }
          v7 = v67;
          *(_BYTE *)(v67 + 56) = 0;
        }
      }
      else
      {
LABEL_58:
        sub_A4F8A0(v7, (__int64)&v72);
        *(_BYTE *)(v7 + 56) = 1;
      }
LABEL_59:
      if ( v72 > 1 )
        sub_A4F8E0((int *)&v72);
      return v7;
  }
}
