__int64 __fastcall sub_C18550(unsigned __int64 a1, __int64 a2, unsigned int *a3, _DWORD *a4)
{
  __int64 v6; // rax
  int v7; // edx
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // r14d
  _QWORD *v13; // r13
  _QWORD *v14; // rbp
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // rax
  __int64 (__fastcall ***v17)(); // rax
  __int64 (__fastcall ***v18)(); // rbx
  __int64 (__fastcall ***v19)(); // rdi
  void *v20; // rdi
  void **v21; // rbx
  __int64 (__fastcall ***v22)(); // rax
  void *v23; // rdi
  __int64 v25; // rdx
  __int64 (__fastcall ***v26)(); // rbp
  __int64 (__fastcall ***v27)(); // [rsp+8h] [rbp-540h] BYREF
  __int16 v28; // [rsp+10h] [rbp-538h] BYREF
  _QWORD *v29; // [rsp+18h] [rbp-530h]
  unsigned int v30; // [rsp+20h] [rbp-528h] BYREF
  char v31; // [rsp+24h] [rbp-524h]
  _DWORD *v32; // [rsp+60h] [rbp-4E8h] BYREF
  __int64 v33; // [rsp+68h] [rbp-4E0h]
  _BYTE v34[256]; // [rsp+70h] [rbp-4D8h] BYREF
  __int64 (__fastcall **v35)(); // [rsp+170h] [rbp-3D8h] BYREF
  char v36; // [rsp+178h] [rbp-3D0h]
  __int64 v37; // [rsp+180h] [rbp-3C8h]
  __int16 *v38; // [rsp+188h] [rbp-3C0h]
  _OWORD *v39; // [rsp+190h] [rbp-3B8h]
  int v40; // [rsp+198h] [rbp-3B0h]
  int v41; // [rsp+19Ch] [rbp-3ACh]
  int v42; // [rsp+1A0h] [rbp-3A8h]
  char v43; // [rsp+1A4h] [rbp-3A4h]
  _OWORD v44[3]; // [rsp+1A8h] [rbp-3A0h] BYREF
  __int64 v45; // [rsp+1D8h] [rbp-370h]
  __int64 v46; // [rsp+1E0h] [rbp-368h]
  __int64 v47; // [rsp+1E8h] [rbp-360h]
  int v48; // [rsp+1F8h] [rbp-350h] BYREF
  __int64 v49; // [rsp+200h] [rbp-348h]
  int *v50; // [rsp+208h] [rbp-340h]
  int *v51; // [rsp+210h] [rbp-338h]
  __int64 v52; // [rsp+218h] [rbp-330h]
  __int64 v53; // [rsp+220h] [rbp-328h]
  int v54; // [rsp+228h] [rbp-320h]
  _DWORD *v55; // [rsp+230h] [rbp-318h]
  __int64 v56; // [rsp+238h] [rbp-310h]
  _DWORD v57[4]; // [rsp+240h] [rbp-308h] BYREF
  __int64 v58; // [rsp+250h] [rbp-2F8h]
  __int64 v59; // [rsp+258h] [rbp-2F0h]
  int v60; // [rsp+260h] [rbp-2E8h]
  __int64 v61; // [rsp+268h] [rbp-2E0h]
  char v62; // [rsp+270h] [rbp-2D8h]
  __int64 (__fastcall ***v63)(); // [rsp+278h] [rbp-2D0h]
  __int64 v64; // [rsp+280h] [rbp-2C8h]
  __int64 v65; // [rsp+288h] [rbp-2C0h] BYREF
  _DWORD v66[6]; // [rsp+488h] [rbp-C0h] BYREF
  __int64 v67; // [rsp+4A0h] [rbp-A8h]
  __int64 v68; // [rsp+4A8h] [rbp-A0h]
  __int64 v69; // [rsp+4B0h] [rbp-98h]
  int v70; // [rsp+4B8h] [rbp-90h]
  int v71; // [rsp+4C8h] [rbp-80h] BYREF
  __int64 v72; // [rsp+4D0h] [rbp-78h]
  int *v73; // [rsp+4D8h] [rbp-70h]
  int *v74; // [rsp+4E0h] [rbp-68h]
  __int64 v75; // [rsp+4E8h] [rbp-60h]
  __int64 v76; // [rsp+4F0h] [rbp-58h]
  __int64 v77; // [rsp+4F8h] [rbp-50h]
  __int64 v78; // [rsp+500h] [rbp-48h]

  v28 = 0;
  v37 = a2;
  v32 = v34;
  v33 = 0x800000000LL;
  v35 = &off_2B214A8;
  v38 = &v28;
  v6 = *(_QWORD *)(a2 + 2320);
  v29 = &v32;
  v7 = *(_DWORD *)(v6 + 136);
  LOBYTE(v6) = *(_BYTE *)(v6 + 140);
  v36 = 0;
  v45 = 0;
  v42 = v7;
  v43 = v6 & 1;
  v27 = &v35;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v44[0] = _mm_loadh_ps((const double *)&v27);
  memset(&v44[1], 0, 32);
  v49 = 0;
  v50 = &v48;
  v51 = &v48;
  v55 = v57;
  v56 = 0x200000001LL;
  v39 = v44;
  v63 = (__int64 (__fastcall ***)())&v65;
  v64 = 0x1000000000LL;
  v41 = 2;
  v52 = 0;
  v53 = 0;
  v54 = 1;
  v57[0] = 1;
  v57[2] = 1;
  v58 = 0;
  v59 = 0;
  v60 = 0;
  v61 = 0;
  v62 = 0;
  v40 = 1;
  sub_A2B560((__int64)v66, 0, 0, 0);
  v31 &= ~1u;
  v66[4] = 0;
  v73 = &v71;
  v74 = &v71;
  if ( !a3 )
    a3 = &v30;
  v67 = 0;
  v68 = 0;
  v69 = 0;
  v70 = 0;
  v71 = 0;
  v72 = 0;
  v75 = 0;
  v76 = 0;
  v77 = -1;
  v78 = 0;
  v30 = 0;
  v8 = sub_C167C0((__int64)&v35, a1, a3);
  if ( !(_BYTE)v8 )
    goto LABEL_4;
  v9 = (__int64)v63;
  v12 = v8;
  v26 = v63;
  v27 = &v63[4 * (unsigned int)v64];
  if ( v63 != v27 )
  {
    while ( 1 )
    {
      if ( (unsigned int)sub_F41CF0(v26[3]) )
      {
        *(_BYTE *)v38 = 1;
        if ( HIDWORD(v78) <= 2 && !WORD1(v78) )
          break;
      }
      v26 += 4;
      if ( v27 == v26 )
        goto LABEL_8;
    }
    LODWORD(v64) = 0;
LABEL_4:
    if ( !(_DWORD)v33 )
      goto LABEL_5;
    goto LABEL_10;
  }
LABEL_8:
  LODWORD(v64) = 0;
  if ( (_BYTE)v28 )
  {
    if ( !(_DWORD)v33 )
    {
LABEL_5:
      if ( a4 )
        *a4 = sub_BDCD00(a1, a1, v9, v10, v11);
      goto LABEL_7;
    }
  }
  else if ( !(_DWORD)v33 )
  {
    goto LABEL_12;
  }
LABEL_10:
  if ( !a4 )
  {
LABEL_7:
    v12 = 0;
    goto LABEL_12;
  }
  v12 = 0;
  *a4 = *v32;
LABEL_12:
  if ( v30 > 1 )
    sub_A2BBA0((int *)&v30);
  sub_C00040((__int64)&v35, a1);
  v13 = v32;
  v14 = &v32[8 * (unsigned int)v33];
  if ( v32 != (_DWORD *)v14 )
  {
    do
    {
      v14 -= 4;
      v15 = v14[1];
      if ( v15 )
      {
        v16 = v14[2];
        if ( v16 )
        {
          if ( v15 < v16 || v15 > v16 + 14848 )
          {
            v17 = *(__int64 (__fastcall ****)())(v15 + 528);
            v18 = &v17[8 * (unsigned __int64)*(unsigned int *)(v15 + 536)];
            if ( v17 != v18 )
            {
              do
              {
                while ( 1 )
                {
                  v18 -= 8;
                  v19 = (__int64 (__fastcall ***)())v18[3];
                  if ( v19 == v18 + 5 )
                    break;
                  v27 = v17;
                  operator delete(v19);
                  v17 = v27;
                  if ( v27 == v18 )
                    goto LABEL_21;
                }
              }
              while ( v17 != v18 );
LABEL_21:
              v18 = *(__int64 (__fastcall ****)())(v15 + 528);
            }
            if ( v18 != (__int64 (__fastcall ***)())(v15 + 544) )
              free(v18);
            v20 = *(void **)(v15 + 416);
            v21 = (void **)(v15 + 416);
            if ( v20 != (void *)(v15 + 432) )
              free(v20);
            v22 = (__int64 (__fastcall ***)())(v15 + 96);
            do
            {
              while ( 1 )
              {
                v21 -= 4;
                v23 = *v21;
                if ( *v21 == v21 + 2 )
                  break;
                v27 = v22;
                operator delete(v23);
                v22 = v27;
                if ( v21 == (void **)v27 )
                  goto LABEL_29;
              }
            }
            while ( v21 != (void **)v22 );
LABEL_29:
            operator delete((void *)v15, 0x3A0u);
          }
          else
          {
            v25 = *(unsigned int *)(v16 + 14976);
            *(_DWORD *)(v16 + 14976) = v25 + 1;
            *(_QWORD *)(v16 + 8 * v25 + 14848) = v15;
          }
        }
      }
    }
    while ( v13 != v14 );
    v14 = v32;
  }
  if ( v14 != (_QWORD *)v34 )
    free(v14);
  return v12;
}

