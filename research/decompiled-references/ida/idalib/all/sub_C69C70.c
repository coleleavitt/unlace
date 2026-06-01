__int64 __fastcall sub_C69C70(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r13
  int v8; // eax
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // r9d
  __int64 result; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // r9d
  unsigned __int64 v21; // r14
  char v22; // al
  __int64 v23; // rdx
  int v24; // ecx
  bool v25; // al
  int v26; // eax
  unsigned int v27; // eax
  unsigned __int64 v28; // rdx
  bool v29; // r12
  void *v30; // rdi
  unsigned int v31; // eax
  bool v32; // cl
  void *v33; // rdx
  int v34; // eax
  __int64 v35; // rdi
  __int64 v36; // rax
  unsigned int v37; // r8d
  char v38; // al
  void *v39; // rsi
  __int64 v40; // rdx
  __int64 v41; // rsi
  __int64 v42; // rdx
  unsigned __int64 v43; // rcx
  unsigned __int8 v44; // [rsp+8h] [rbp-160h]
  unsigned __int8 v45; // [rsp+8h] [rbp-160h]
  unsigned __int8 v46; // [rsp+8h] [rbp-160h]
  unsigned int v47; // [rsp+8h] [rbp-160h]
  bool v48; // [rsp+8h] [rbp-160h]
  char v49; // [rsp+10h] [rbp-158h]
  int v50; // [rsp+10h] [rbp-158h]
  int v51; // [rsp+10h] [rbp-158h]
  int v52; // [rsp+10h] [rbp-158h]
  int v53; // [rsp+10h] [rbp-158h]
  bool v54; // [rsp+18h] [rbp-150h]
  int v55; // [rsp+20h] [rbp-148h]
  __int64 *v56; // [rsp+20h] [rbp-148h]
  unsigned int v57; // [rsp+28h] [rbp-140h]
  unsigned int v58; // [rsp+2Ch] [rbp-13Ch]
  char v59; // [rsp+3Ah] [rbp-12Eh] BYREF
  char v60; // [rsp+3Bh] [rbp-12Dh] BYREF
  int v61; // [rsp+3Ch] [rbp-12Ch] BYREF
  void *v62; // [rsp+40h] [rbp-128h] BYREF
  unsigned int v63; // [rsp+48h] [rbp-120h]
  bool v64; // [rsp+4Ch] [rbp-11Ch]
  void *v65; // [rsp+50h] [rbp-118h]
  unsigned int v66; // [rsp+58h] [rbp-110h]
  char v67; // [rsp+5Ch] [rbp-10Ch]
  void *v68; // [rsp+60h] [rbp-108h] BYREF
  unsigned int v69; // [rsp+68h] [rbp-100h]
  char v70; // [rsp+6Ch] [rbp-FCh]
  unsigned int v71; // [rsp+70h] [rbp-F8h]
  void *v72; // [rsp+80h] [rbp-E8h] BYREF
  unsigned int v73; // [rsp+88h] [rbp-E0h]
  char v74; // [rsp+93h] [rbp-D5h]
  void *v75; // [rsp+A0h] [rbp-C8h] BYREF
  unsigned int v76; // [rsp+A8h] [rbp-C0h]
  unsigned int v77; // [rsp+B0h] [rbp-B8h]
  void *v78; // [rsp+C0h] [rbp-A8h] BYREF
  signed __int64 v79; // [rsp+C8h] [rbp-A0h]
  __int64 v80; // [rsp+D0h] [rbp-98h] BYREF
  void *v81; // [rsp+E0h] [rbp-88h] BYREF
  unsigned int v82; // [rsp+E8h] [rbp-80h]
  bool v83; // [rsp+ECh] [rbp-7Ch]
  unsigned int v84; // [rsp+F0h] [rbp-78h]

  v6 = *(_QWORD *)(a2 + 16);
  v7 = *(_QWORD *)(a2 + 24);
  v8 = sub_AAE100(*(_QWORD *)(*a1 + 16), *(_QWORD *)(a2 + 8), a3, a4);
  v9 = *(_QWORD *)(v6 + 8);
  v61 = v8;
  LODWORD(v81) = sub_AAE100(*(_QWORD *)(*a1 + 16), v9, v10, v11);
  sub_C16A40((__int64)&v68, 0, &v81);
  result = sub_C69A80(v6, (__int64)&v68, *a1, v12, v13, v14);
  if ( !(_BYTE)result )
    goto LABEL_2;
  LODWORD(v81) = sub_AAE100(*(_QWORD *)(*a1 + 16), *(_QWORD *)(v7 + 8), v16, v17);
  sub_C16A40((__int64)&v72, 0, &v81);
  result = sub_C69A80(v7, (__int64)&v72, *a1, v18, v19, v20);
  if ( (_BYTE)result )
  {
    v59 = 0;
    v60 = 0;
    LODWORD(v81) = v71;
    sub_C16A40((__int64)&v75, 0, &v81);
    switch ( (*(_WORD *)(a2 + 2) >> 3) & 0x3F )
    {
      case 2:
        sub_21EFB00(&v78, &v68, &v72, &v59);
        goto LABEL_41;
      case 3:
        v31 = v73;
        v32 = (v74 & 0x20) == 0;
        v82 = v73;
        if ( v73 > 0x40 )
        {
          v48 = (v74 & 0x20) == 0;
          sub_2205510(&v81);
          v31 = v82;
          v32 = v48;
          v33 = v81;
        }
        else
        {
          v33 = v72;
        }
        LODWORD(v79) = v31;
        v78 = v33;
        BYTE4(v79) = v32;
        v82 = 64;
        v81 = nullptr;
        v83 = 0;
        v34 = sub_98E2D0((__int64 *)&v78, (__int64 *)&v81);
        if ( v82 > 0x40 && v81 )
        {
          v52 = v34;
          operator delete[](v81);
          v34 = v52;
        }
        if ( (unsigned int)v79 > 0x40 && v78 )
        {
          v53 = v34;
          operator delete[](v78);
          v34 = v53;
        }
        if ( !v34 )
        {
          sub_E33C10(*a1, a2, 2508, 0);
          result = 0;
          goto LABEL_34;
        }
        sub_21F0520(&v78, &v68, &v72, &v59);
LABEL_41:
        sub_21EDE90(&v81, &v78, &v61, &v60);
        sub_C18DB0((__int64)&v75, (__int64)&v81);
        v77 = v84;
        if ( v82 > 0x40 && v81 )
          operator delete[](v81);
        if ( (unsigned int)v79 <= 0x40 )
          goto LABEL_31;
        v30 = v78;
        if ( !v78 )
          goto LABEL_31;
        goto LABEL_30;
      case 5:
        sub_21EF560(&v78, &v68, &v72, &v59);
        goto LABEL_41;
      case 6:
        sub_21EF830(&v78, &v68, &v72, &v59);
        goto LABEL_41;
      case 7:
      case 8:
        v49 = v74 & 0x20;
        v82 = v73;
        if ( v73 > 0x40 )
        {
          v54 = (v74 & 0x20) == 0;
          v47 = v71;
          sub_2205510(&v81);
          v37 = v47;
          v64 = v54;
          v63 = v82;
          v58 = v82;
          v62 = v81;
          v21 = (unsigned __int16)v37 - (v37 >> 31) - 1;
          v56 = (__int64 *)v81;
          v57 = (unsigned __int16)v37 - (v37 >> 31);
          v38 = sub_9EC640((__int64)&v62, v21);
          LODWORD(v23) = v21;
          if ( v38 )
            goto LABEL_10;
          v24 = (int)v56;
          if ( v58 > 0x40 )
          {
            v23 = *v56;
            LODWORD(v21) = *v56;
            goto LABEL_10;
          }
        }
        else
        {
          v64 = (v74 & 0x20) == 0;
          v63 = v73;
          v62 = v72;
          v55 = (int)v72;
          v21 = (unsigned __int16)v71 - (v71 >> 31) - 1;
          v57 = (unsigned __int16)v71 - (v71 >> 31);
          v22 = sub_9EC640((__int64)&v62, v21);
          LODWORD(v23) = v21;
          v24 = v55;
          if ( v22 )
            goto LABEL_10;
        }
        LODWORD(v21) = v24;
        LODWORD(v23) = v24;
LABEL_10:
        if ( v49 && (v50 = v23, v25 = sub_C103B0((__int64 *)&v62), LODWORD(v23) = v50, v25) )
        {
          v81 = (void *)sub_E33C90(*a1, a2, 2444, 0);
          if ( v81 )
            sub_C1A2B0((unsigned __int8 ***)&v81, (__int64)&v62);
        }
        else
        {
          v82 = 64;
          v81 = (void *)(unsigned int)v23;
          v83 = 0;
          v26 = sub_98E2D0((__int64 *)&v62, (__int64 *)&v81);
          if ( v82 > 0x40 && v81 )
          {
            v51 = v26;
            operator delete[](v81);
            v26 = v51;
          }
          if ( v26 )
          {
            v81 = (void *)sub_E33C90(*a1, a2, 2422, 0);
            if ( v81 )
            {
              sub_C1A2B0((unsigned __int8 ***)&v81, (__int64)&v62);
              if ( v81 )
              {
                sub_AE9DF0((unsigned __int8 **)v81, *(_QWORD *)(a2 + 8), 8u);
                if ( v81 )
                  sub_AE9DF0((unsigned __int8 **)v81, v57, 3u);
              }
            }
          }
        }
        if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x3F) == 7 )
        {
          sub_21F11A0(&v81, &v68, (unsigned int)v21, &v59);
          goto LABEL_25;
        }
        v27 = v69;
        v59 = 0;
        v82 = v69;
        if ( v70 )
        {
          if ( v69 > 0x40 )
          {
            sub_2205510(&v81);
            v27 = v82;
            if ( v82 > 0x40 )
            {
              sub_220ABD0(&v81, (unsigned int)v21);
              v28 = (unsigned __int64)v81;
LABEL_22:
              v27 = v82;
              v65 = (void *)v28;
              v67 = 1;
              v66 = v82;
              goto LABEL_23;
            }
          }
          else
          {
            v81 = v68;
          }
          v28 = 0;
          if ( v27 != (_DWORD)v21 )
            v28 = (unsigned __int64)v81 >> v21;
          goto LABEL_22;
        }
        if ( v69 > 0x40 )
        {
          sub_2205510(&v81);
          v27 = v82;
          if ( v82 > 0x40 )
          {
            sub_2206EF0(&v81, (unsigned int)v21);
            v28 = (unsigned __int64)v81;
            v27 = v82;
            goto LABEL_84;
          }
          v39 = v81;
        }
        else
        {
          v39 = v68;
        }
        v40 = 0;
        if ( v27 )
          v40 = (__int64)((_QWORD)v39 << (64 - (unsigned __int8)v27)) >> (64 - (unsigned __int8)v27);
        v41 = v40 >> 63;
        v42 = v40 >> v21;
        if ( v27 == (_DWORD)v21 )
          v42 = v41;
        v43 = 0xFFFFFFFFFFFFFFFFLL >> -(char)v27;
        if ( !v27 )
          v43 = 0;
        v28 = v43 & v42;
LABEL_84:
        v66 = v27;
        v65 = (void *)v28;
        v67 = 0;
LABEL_23:
        LODWORD(v79) = v27;
        v29 = (v71 & 0x20000000) == 0;
        if ( v27 > 0x40 )
        {
          sub_2205510(&v78);
          v83 = v29;
          v82 = v79;
          v81 = v78;
          v84 = v71;
          if ( v66 > 0x40 && v65 )
            operator delete[](v65);
        }
        else
        {
          v82 = v27;
          v81 = (void *)v28;
          v83 = (v71 & 0x20000000) == 0;
          v84 = v71;
        }
LABEL_25:
        sub_C18DB0((__int64)&v75, (__int64)&v81);
        v77 = v84;
        if ( v82 > 0x40 && v81 )
          operator delete[](v81);
        if ( v63 > 0x40 )
        {
          v30 = v62;
          if ( v62 )
LABEL_30:
            operator delete[](v30);
        }
LABEL_31:
        if ( !v59 && !v60 )
          goto LABEL_33;
        v35 = *a1;
        if ( *(_BYTE *)(*a1 + 915) )
        {
          v36 = sub_A62AC0(*(_QWORD *)(v35 + 16));
          sub_FC70B0(&v81, v36, *(unsigned int *)(a2 + 4), 2560);
          sub_C16B30(&v78, (__int64)&v75);
          sub_AEC220((unsigned __int8 **)&v81, v78, v79);
          sub_AE9DF0((unsigned __int8 **)&v81, *(_QWORD *)(a2 + 8), 8u);
          if ( v78 != &v80 )
            operator delete(v78);
          sub_AEA040((__int64)&v81);
          v35 = *a1;
        }
        result = sub_C1AB00(v35, a2, (__int64)&v75, *(_QWORD *)(a2 + 8));
        if ( (_BYTE)result )
LABEL_33:
          result = sub_C103E0(a1 + 1, (__int64)&v75);
LABEL_34:
        if ( v76 > 0x40 && v75 )
        {
          v45 = result;
          operator delete[](v75);
          result = v45;
        }
        break;
      default:
        result = 0;
        goto LABEL_34;
    }
  }
  if ( v73 > 0x40 && v72 )
  {
    v46 = result;
    operator delete[](v72);
    result = v46;
  }
LABEL_2:
  if ( v69 > 0x40 )
  {
    if ( v68 )
    {
      v44 = result;
      operator delete[](v68);
      return v44;
    }
  }
  return result;
}
