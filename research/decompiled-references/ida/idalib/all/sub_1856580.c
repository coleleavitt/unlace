__int64 __fastcall sub_1856580(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, int a5, int a6, double a7)
{
  __int64 v9; // rbx
  __int16 v10; // ax
  int v11; // esi
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 *v18; // r13
  char v19; // r14
  int v20; // esi
  __int64 v21; // rdx
  unsigned int v22; // eax
  void *v23; // rdx
  void *v24; // rcx
  __int64 v25; // rdx
  __int16 v26; // ax
  unsigned int v27; // r15d
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  size_t v38; // rax
  size_t v39; // rax
  __int64 v40; // rax
  int v41; // ecx
  __int64 v42; // r15
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rsi
  __int64 v45; // rax
  __int64 v46; // r9
  __int64 v47; // r8
  char v48; // al
  unsigned int v49; // eax
  unsigned int v50; // eax
  unsigned int *v51; // r14
  unsigned int *v52; // r13
  unsigned int v53; // edx
  __int64 v54; // rcx
  unsigned __int8 v55; // [rsp+18h] [rbp-400h]
  __int64 v56; // [rsp+20h] [rbp-3F8h]
  unsigned __int64 v57; // [rsp+20h] [rbp-3F8h]
  __int64 v58; // [rsp+20h] [rbp-3F8h]
  __int64 v59; // [rsp+28h] [rbp-3F0h]
  __int64 v60; // [rsp+28h] [rbp-3F0h]
  int v61; // [rsp+34h] [rbp-3E4h] BYREF
  unsigned __int64 v62; // [rsp+38h] [rbp-3E0h] BYREF
  unsigned int v63; // [rsp+44h] [rbp-3D4h] BYREF
  _QWORD *v64; // [rsp+48h] [rbp-3D0h] BYREF
  _QWORD v65[4]; // [rsp+50h] [rbp-3C8h] BYREF
  __int64 v66[4]; // [rsp+70h] [rbp-3A8h] BYREF
  __int16 v67; // [rsp+90h] [rbp-388h] BYREF
  unsigned int **v68; // [rsp+98h] [rbp-380h]
  unsigned int v69; // [rsp+A0h] [rbp-378h] BYREF
  char v70; // [rsp+A4h] [rbp-374h]
  int v71[36]; // [rsp+E0h] [rbp-338h] BYREF
  void *v72; // [rsp+170h] [rbp-2A8h] BYREF
  unsigned int v73; // [rsp+178h] [rbp-2A0h]
  char v74; // [rsp+17Ch] [rbp-29Ch]
  unsigned __int8 v75; // [rsp+218h] [rbp-200h]
  void *v76; // [rsp+220h] [rbp-1F8h] BYREF
  unsigned int v77; // [rsp+228h] [rbp-1F0h]
  char v78; // [rsp+22Ch] [rbp-1ECh]
  unsigned __int8 v79; // [rsp+2C8h] [rbp-150h]
  unsigned int *v80; // [rsp+2D0h] [rbp-148h] BYREF
  __int64 v81; // [rsp+2D8h] [rbp-140h]
  unsigned int v82; // [rsp+2E0h] [rbp-138h] BYREF
  char v83; // [rsp+2E4h] [rbp-134h]

  v9 = a1;
  v10 = *(_WORD *)a2;
  v62 = a2;
  v61 = a5;
  if ( (v10 & 0x1FF) != 9 )
  {
    v63 = sub_EEB7E0(a2, a2, a7);
    v80 = *(unsigned int **)(a2 + 8);
    v33 = sub_C1BEF0((__int64)&v80, a2, v31, v32);
    v64 = sub_F63270(*(_QWORD *)(v33 & 0xFFFFFFFFFFFFFFF0LL), a2, v34, v35, v36, v37);
    if ( !v64 )
    {
      v27 = 0;
      sub_168B9F0((__int64)&v80, (__int64 *)(a1 + 8), v63, 0x150Fu, 0);
      sub_18564D0((__int64)&v80, &v61);
      sub_15F7200(&v80);
      return v27;
    }
    v65[0] = a1;
    v65[1] = &v63;
    v65[2] = &v64;
    v38 = j__strlen("size");
    sub_18422B0((__int64)&v72, v65, "size", v38);
    v39 = j__strlen("data");
    sub_18422B0((__int64)&v76, v65, "data", v39);
    if ( v75 && (v55 = v79) != 0 )
    {
      v66[0] = a1;
      v66[2] = (__int64)&v63;
      v66[1] = (__int64)&v62;
      v56 = sub_1837BF0(v66, (__int64)&v72);
      v42 = sub_1837BF0(v66, (__int64)&v76);
      v59 = sub_A63CE0(*(_QWORD **)(a1 + 248));
      v43 = sub_A70010(*(_QWORD *)(a1 + 248), *(_QWORD *)(*(_QWORD *)(a1 + 248) + 18648LL) | 1LL);
      if ( v56 == 1 || (v44 = v56 & 0xFFFFFFFFFFFFFFFELL, v57 = v43, v60 = sub_1C0AE60(a1, v44, v59, 7, 0), v60 == 1) )
      {
        sub_168B9F0((__int64)&v80, (__int64 *)(a1 + 8), v63, 0x1510u, 0);
        v40 = sub_18564D0((__int64)&v80, &v61);
        v71[0] = 0;
      }
      else
      {
        if ( v42 != 1 )
        {
          v45 = sub_1C0AE60(a1, v42 & 0xFFFFFFFFFFFFFFFELL, v57, 8, 0);
          v47 = v45;
          if ( v45 != 1 )
          {
            v27 = a6 ^ 1;
            if ( !(_BYTE)a6
              && (v58 = v45,
                  v48 = sub_FD3830(
                          *(_QWORD *)(*(_QWORD *)(a1 + 264) + 32LL),
                          0x1D78u,
                          v63,
                          *(_QWORD *)(a1 + 264),
                          v45,
                          v46),
                  v47 = v58,
                  v48 == 1) )
            {
              v27 = v55;
            }
            else
            {
              v67 = 0;
              v80 = &v82;
              v70 &= ~1u;
              v69 = 0;
              v81 = 0x800000000LL;
              v68 = &v80;
              v49 = sub_C56300(v62, a3, v60 & 0xFFFFFFFFFFFFFFFELL, v47 & 0xFFFFFFFFFFFFFFFELL, a4, (__int64)&v67);
              if ( !(_BYTE)v49 || (_DWORD)v81 )
              {
                v50 = sub_EEB7E0(v62, a3, a7);
                sub_168B9F0((__int64)v71, (__int64 *)(a1 + 8), v50, (_BYTE)a6 == 0 ? 7544 : 5390, 0);
                sub_18564D0((__int64)v71, &v61);
                sub_15F7200(v71);
                v51 = v80;
                v52 = &v80[8 * (unsigned int)v81];
                if ( v80 != v52 )
                {
                  do
                  {
                    v53 = *v51;
                    v54 = (__int64)(v51 + 2);
                    v51 += 8;
                    sub_168CDE0((__int64)v71, (__int64 *)(a1 + 8), v53, v54, 0);
                    sub_15F7200(v71);
                  }
                  while ( v52 != v51 );
                }
              }
              else
              {
                v27 = v49;
              }
              sub_C23820((__int64)&v80);
              if ( v69 > 1 )
                sub_A4F8E0((int *)&v69);
            }
            goto LABEL_43;
          }
        }
        sub_168B9F0((__int64)&v80, (__int64 *)(a1 + 8), v63, 0x1510u, 0);
        v40 = sub_18564D0((__int64)&v80, &v61);
        v71[0] = 1;
      }
    }
    else
    {
      sub_168B9F0((__int64)&v80, (__int64 *)(a1 + 8), v63, 0x1511u, 0);
      v40 = sub_18564D0((__int64)&v80, &v61);
      if ( v75 || (v41 = 2, v79) )
        v41 = v75;
      v71[0] = v41;
    }
    v27 = 0;
    sub_1587D10(v40, v71);
    sub_15F7200(&v80);
LABEL_43:
    if ( v79 )
      sub_169D230((__int64)&v76);
    if ( v75 )
      sub_169D230((__int64)&v72);
    return v27;
  }
  v11 = *(_DWORD *)(a2 + 16);
  BYTE4(v80) &= ~1u;
  LODWORD(v80) = 0;
  sub_A51400((__int64)&v80, v11, v11);
  sub_A4FD20(a3, (__int64)&v80);
  if ( (unsigned int)v80 > 1 )
LABEL_24:
    sub_A4F8E0((int *)&v80);
  v12 = *(_QWORD *)(a2 + 8);
  v13 = sub_A72040(*(_QWORD **)(v9 + 248), v12);
  if ( !v13 || (v17 = (unsigned int)*(unsigned __int8 *)(v13 + 16) - 2, (unsigned int)v17 > 1) )
    BUG();
  v18 = (__int64 *)(*(_QWORD *)(v13 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  v19 = sub_F65360(*v18, v12, v17, v14, v15, v16);
  v73 = sub_A97D20(*(_QWORD *)(v9 + 248), *v18);
  if ( v73 > 0x40 )
    sub_2205470(&v72, 0, 0);
  else
    v72 = nullptr;
  v20 = *(_DWORD *)(a2 + 16);
  v74 = v19;
  v9 = 0;
  if ( v20 )
  {
    do
    {
      v26 = (*(_WORD *)(a2 + 2) >> 6) & 7;
      if ( ((*(_WORD *)(a2 + 2) >> 6) & 7) == 2 )
      {
        v21 = *(unsigned __int16 *)(a2 + 2LL * (unsigned int)v9 + 4LL * *(unsigned int *)(a2 + 4) + 20);
      }
      else if ( (_BYTE)v26 == 4 )
      {
        v21 = *(unsigned int *)(a2 + 4 * ((unsigned int)v9 + (unsigned __int64)*(unsigned int *)(a2 + 4)) + 20);
      }
      else
      {
        if ( (_BYTE)v26 != 1 )
          goto LABEL_24;
        v21 = *(unsigned __int8 *)((unsigned int)v9 + a2 + 4LL * *(unsigned int *)(a2 + 4) + 20);
      }
      v22 = v73;
      if ( v73 > 0x40 )
      {
        *(_QWORD *)v72 = v21;
        memset((char *)v72 + 8, 0, 8 * ((unsigned int)(((unsigned __int64)v22 + 63) >> 6) + 0x1FFFFFFF));
        v22 = v73;
        v77 = v73;
        if ( v73 > 0x40 )
        {
          sub_2205510(&v76);
          v22 = v77;
          v24 = v76;
          goto LABEL_15;
        }
      }
      else
      {
        v23 = (void *)((0xFFFFFFFFFFFFFFFFLL >> -(char)v73) & v21);
        if ( !v73 )
          v23 = nullptr;
        v72 = v23;
      }
      v24 = v72;
      v76 = v72;
LABEL_15:
      v82 = v22;
      BYTE4(v80) &= ~1u;
      v78 = v74;
      v83 = v74;
      v25 = *(_QWORD *)(a3 + 8);
      LODWORD(v80) = 2;
      v81 = (__int64)v24;
      v77 = 0;
      sub_A4FD20(v25 + 56LL * (unsigned int)v9, (__int64)&v80);
      if ( (unsigned int)v80 > 1 )
        sub_A4F8E0((int *)&v80);
      if ( v77 > 0x40 && v76 )
        operator delete[](v76);
      v9 = (unsigned int)(v9 + 1);
    }
    while ( *(_DWORD *)(a2 + 16) > (unsigned int)v9 );
  }
  if ( v73 > 0x40 && v72 )
    operator delete[](v72);
  return 1;
}
