__int64 __fastcall sub_82E940(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  unsigned int v8; // r14d
  _QWORD *v10; // rbp
  __int64 v11; // rdx
  __int64 *v12; // rax
  int v13; // r9d
  __int64 v14; // rax
  bool v15; // zf
  bool v16; // di
  unsigned __int8 v17; // r8
  void *v18; // rdx
  unsigned int v19; // esi
  char v20; // al
  __int64 v21; // rax
  __int64 v22; // rbp
  __int64 v23; // rax
  __int64 *v24; // r15
  __int64 *v25; // r14
  int v26; // eax
  void **v27; // r14
  int v28; // r15d
  void **v29; // rdi
  void **v30; // rbp
  char v31; // r15
  char v32; // bl
  __int64 v33; // r14
  __int64 v34; // rbp
  __int64 v35; // r13
  void *v36; // r12
  __int64 v37; // r12
  __int64 v38; // rbp
  bool v39; // al
  const void *v40; // r8
  __int64 v41; // rdx
  signed __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // r14
  __int64 v45; // rdx
  char v46; // r9
  char v47; // r14
  int v48; // edx
  __int64 v49; // rax
  __int64 v50; // rdx
  int v51; // eax
  int v52; // [rsp+0h] [rbp-298h]
  int v53; // [rsp+0h] [rbp-298h]
  signed __int64 v54; // [rsp+0h] [rbp-298h]
  __int64 v55; // [rsp+8h] [rbp-290h]
  __int64 v56; // [rsp+8h] [rbp-290h]
  const void *v57; // [rsp+8h] [rbp-290h]
  unsigned __int8 v60; // [rsp+20h] [rbp-278h]
  unsigned __int8 v61; // [rsp+20h] [rbp-278h]
  unsigned __int8 v62; // [rsp+20h] [rbp-278h]
  bool v64; // [rsp+4Fh] [rbp-249h] BYREF
  _QWORD v65[2]; // [rsp+50h] [rbp-248h] BYREF
  __int64 v66; // [rsp+60h] [rbp-238h] BYREF
  __int64 v67; // [rsp+68h] [rbp-230h]
  __int64 v68; // [rsp+70h] [rbp-228h] BYREF
  int v69; // [rsp+78h] [rbp-220h]
  void *v70; // [rsp+80h] [rbp-218h]
  void *v71; // [rsp+88h] [rbp-210h]
  void *v72; // [rsp+90h] [rbp-208h] BYREF
  __int64 v73; // [rsp+98h] [rbp-200h]
  _BYTE v74[64]; // [rsp+A0h] [rbp-1F8h] BYREF
  char v75; // [rsp+E0h] [rbp-1B8h]
  char v76; // [rsp+E1h] [rbp-1B7h]
  __int64 v77; // [rsp+F0h] [rbp-1A8h] BYREF
  void *v78[2]; // [rsp+F8h] [rbp-1A0h] BYREF
  void *ptr; // [rsp+108h] [rbp-190h] BYREF
  __int64 v80; // [rsp+110h] [rbp-188h]
  _QWORD v81[16]; // [rsp+118h] [rbp-180h] BYREF
  void *v82; // [rsp+198h] [rbp-100h]
  __int64 v83; // [rsp+1A0h] [rbp-F8h]
  int v84; // [rsp+1A8h] [rbp-F0h]
  char v85; // [rsp+1ACh] [rbp-ECh]
  char v86; // [rsp+1B0h] [rbp-E8h] BYREF
  __int64 v87; // [rsp+1D0h] [rbp-C8h]
  void *v88; // [rsp+1D8h] [rbp-C0h]
  __int64 v89; // [rsp+1E0h] [rbp-B8h]
  _BYTE v90[96]; // [rsp+1E8h] [rbp-B0h] BYREF
  int v91; // [rsp+248h] [rbp-50h]
  __int64 v92; // [rsp+250h] [rbp-48h]
  __int16 v93; // [rsp+258h] [rbp-40h]
  char v94; // [rsp+25Ah] [rbp-3Eh]

  v8 = sub_6A3540(a3);
  if ( (_BYTE)v8 )
    return v8;
  LOBYTE(v69) = v69 | 1;
  v66 = 0;
  v10 = *(_QWORD **)(a1 + 16);
  v68 = 0;
  v71 = nullptr;
  v72 = v74;
  v73 = 0x800000000LL;
  v76 = 0;
  v66 = sub_6A34D0(a3);
  v67 = v11;
  v12 = (__int64 *)sub_6A34F0(a3);
  v13 = 1;
  v14 = *v12;
  v75 &= ~2u;
  v15 = *(_DWORD *)a3 == 7;
  v68 = v14;
  if ( v15 )
    v13 = !sub_6A3500(a3);
  LODWORD(v77) = v13;
  ptr = v81;
  v80 = 0x800000000LL;
  *(_OWORD *)v78 = 0;
  if ( (v13 & 1) != 0 )
  {
    v16 = 0;
    v17 = 0;
    v18 = nullptr;
    v19 = 0;
  }
  else
  {
    v39 = sub_6A34E0(a3);
    LOBYTE(v77) = (2 * v39) | v77 & 0xFD;
    v40 = (const void *)sub_6A3510(a3);
    v42 = 8 * v41;
    v43 = (unsigned int)v80;
    v44 = v42 >> 3;
    if ( HIDWORD(v80) < (unsigned __int64)(unsigned int)v80 + (v42 >> 3) )
    {
      v57 = v40;
      v54 = v42;
      sub_25D6060(&ptr, v81, (unsigned int)v80 + (v42 >> 3), 8);
      v43 = (unsigned int)v80;
      v40 = v57;
      v42 = v54;
    }
    if ( v42 )
    {
      memcpy((char *)ptr + 8 * v43, v40, v42);
      LODWORD(v43) = v80;
    }
    LODWORD(v80) = v44 + v43;
    v65[0] = sub_6A34D0(a3);
    v65[1] = v45;
    if ( sub_69F610(v65) )
    {
      v64 = 0;
      LOBYTE(v65[0]) = 0;
      v56 = sub_6A3510(a3);
      v53 = v48;
      v49 = sub_6A34D0(a3);
      v51 = sub_824B30(v10, v49, v50, v56, v53, v78, (__int64 *)&v78[1], &v64, v65);
      v16 = v64;
      v17 = v65[0];
      v19 = v51 & 0xFFFFFFF;
      LODWORD(v77) = (16 * v51) | v77 & 0xF;
      v46 = (4 * (v65[0] & 1)) | (8 * v64) | v77 & 0xF3;
      LOBYTE(v77) = v46;
    }
    else
    {
      v46 = v77;
      v19 = (unsigned int)v77 >> 4;
      v17 = (v77 & 4) != 0;
      v16 = (v77 & 8) != 0;
    }
    v47 = v46;
    v18 = v78[0];
    v13 = v46 & 1;
    LOBYTE(v8) = (v47 & 2) != 0;
  }
  v70 = v18;
  v69 = (16 * v19) | (8 * v16) | (4 * v17) | v13 | (2 * (unsigned __int8)v8);
  v71 = v78[1];
  sub_820970((__int64)&v72, (__int64)&ptr);
  if ( ptr != v81 )
    free(ptr);
  v20 = sub_6A3540(a3);
  v75 = v20 & 1 | v75 & 0xFE;
  v76 = *(_BYTE *)(a3 + 4) & 1;
  v55 = sub_B0E440(*(_QWORD *)(*a4 & 0xFFFFFFFFFFFFFFF0LL));
  v21 = 1;
  if ( a5 != 1 )
  {
    v52 = 1;
    while ( 1 )
    {
      v22 = v55;
      v23 = sub_B0E440(*(_QWORD *)(a4[v21] & 0xFFFFFFFFFFFFFFF0LL));
      v55 = v23;
      if ( v23 != v22 )
      {
        v82 = &v86;
        v77 = 0;
        v83 = 4;
        v88 = v90;
        v78[1] = v78;
        v89 = 0x400000000LL;
        v78[0] = v78;
        ptr = nullptr;
        v80 = 1;
        v81[0] = 0;
        v81[2] = 0;
        v81[4] = 0;
        v81[6] = 0;
        v81[8] = 0;
        v81[10] = 0;
        v81[12] = 0;
        v81[14] = 0;
        v84 = 0;
        v85 = 1;
        v87 = 0;
        v91 = 0;
        v92 = 0;
        v93 = 256;
        v94 = 0;
        sub_777820(v22, v23, &v77);
        v24 = *((__int64 **)v78[0] + 2);
        v25 = &v24[3 * *((unsigned int *)v78[0] + 6)];
        if ( v24 == v25 )
        {
LABEL_38:
          v26 = 1;
        }
        else
        {
          while ( 1 )
          {
            v26 = sub_82D840(a1, a2, (__int64)&v66, v24[1], *v24);
            if ( !(_BYTE)v26 )
              break;
            v24 += 3;
            if ( v25 == v24 )
              goto LABEL_38;
          }
        }
        if ( v88 != v90 )
        {
          v60 = v26;
          free(v88);
          v26 = v60;
        }
        if ( !v85 )
        {
          v62 = v26;
          free(v82);
          v26 = v62;
        }
        if ( (v80 & 1) == 0 )
        {
          v61 = v26;
          operator delete();
          v26 = v61;
        }
        v27 = (void **)v78[0];
        v28 = v26;
        if ( v78[0] != v78 )
        {
          while ( 1 )
          {
            v29 = (void **)v27[2];
            v30 = (void **)*v27;
            if ( v29 != v27 + 4 )
              free(v29);
            operator delete(v27, 0x90u);
            if ( v30 == v78 )
              break;
            v27 = v30;
          }
          v26 = v28;
        }
        if ( !(_BYTE)v26 )
          break;
      }
      v21 = (unsigned int)++v52;
      if ( v52 == a5 )
        goto LABEL_31;
    }
    v8 = v26;
    goto LABEL_36;
  }
LABEL_31:
  v31 = v69;
  v32 = v75 & 1;
  if ( (v69 & 1) != 0 )
  {
    v37 = v66;
    LODWORD(v77) = 0;
    v38 = v67;
    BYTE4(v77) &= ~1u;
    sub_6A37F0((__int64)&v77);
    sub_6A3550((__int64)&v77, v37, v38, &v68, v32);
    sub_6A01B0(a3, (__int64)&v77);
    if ( (unsigned int)v77 <= 1 )
      goto LABEL_33;
LABEL_40:
    sub_69F740((__int64)&v77);
    goto LABEL_33;
  }
  LODWORD(v77) = 0;
  BYTE4(v77) &= ~1u;
  v33 = v66;
  v34 = v67;
  v35 = (unsigned int)v73;
  v36 = v72;
  sub_6A37F0((__int64)&v77);
  sub_6A3690((__int64)&v77, v33, v34, &v68, v36, v35, (v31 & 2) != 0, v32);
  sub_6A01B0(a3, (__int64)&v77);
  if ( (unsigned int)v77 > 1 )
    goto LABEL_40;
LABEL_33:
  if ( v76 )
    *(_BYTE *)(a3 + 4) |= 1u;
  v8 = 1;
LABEL_36:
  if ( v72 != v74 )
    free(v72);
  return v8;
}

