void __fastcall sub_1868660(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __m128 v9; // xmm0
  __int64 *v10; // rax
  __int64 (__fastcall *v11)(__int64 **, __int64, __int64, __int64, __int64, __int64); // rsi
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 *v15; // rbx
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  _QWORD *v18; // rax
  int *v19; // rdx
  int *v20; // r14
  __int64 v21; // r15
  int v22; // edx
  int v23; // eax
  unsigned int v24; // edx
  __int64 v25; // rax
  void *v26; // rax
  _QWORD **v27; // rbx
  _QWORD **v28; // r12
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // rcx
  _QWORD *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  __int64 v41; // rcx
  _QWORD *v42; // rax
  _QWORD **v43; // rbx
  _QWORD **v44; // r12
  __int64 *v45; // [rsp+0h] [rbp-2D8h] BYREF
  __int64 v46; // [rsp+8h] [rbp-2D0h]
  unsigned int *v47; // [rsp+10h] [rbp-2C8h]
  __int64 v48; // [rsp+18h] [rbp-2C0h]
  __int64 *v49; // [rsp+20h] [rbp-2B8h]
  unsigned __int8 *v50; // [rsp+28h] [rbp-2B0h]
  __int64 *v51; // [rsp+30h] [rbp-2A8h]
  __int64 v52; // [rsp+38h] [rbp-2A0h]
  char v53; // [rsp+44h] [rbp-294h] BYREF
  __int64 v54; // [rsp+48h] [rbp-290h] BYREF
  _QWORD *v55; // [rsp+50h] [rbp-288h] BYREF
  __int64 v56; // [rsp+58h] [rbp-280h] BYREF
  __m128 v57; // [rsp+60h] [rbp-278h] BYREF
  char v58[8]; // [rsp+70h] [rbp-268h] BYREF
  int v59; // [rsp+78h] [rbp-260h] BYREF
  void *v60; // [rsp+80h] [rbp-258h]
  int *v61; // [rsp+88h] [rbp-250h]
  int *v62; // [rsp+90h] [rbp-248h]
  __int64 v63; // [rsp+98h] [rbp-240h]
  _QWORD v64[2]; // [rsp+A0h] [rbp-238h] BYREF
  __int64 *v65; // [rsp+B0h] [rbp-228h]
  unsigned __int8 *v66[11]; // [rsp+C0h] [rbp-218h] BYREF
  char v67; // [rsp+118h] [rbp-1C0h]
  unsigned int v68; // [rsp+120h] [rbp-1B8h]
  char v69; // [rsp+124h] [rbp-1B4h]
  __int64 v70; // [rsp+130h] [rbp-1A8h] BYREF
  _QWORD v71[4]; // [rsp+138h] [rbp-1A0h] BYREF
  __int64 v72; // [rsp+158h] [rbp-180h] BYREF
  _QWORD v73[2]; // [rsp+1D8h] [rbp-100h] BYREF
  int v74; // [rsp+1E8h] [rbp-F0h]
  char v75; // [rsp+1ECh] [rbp-ECh]
  _QWORD v76[7]; // [rsp+1F0h] [rbp-E8h] BYREF
  _DWORD v77[26]; // [rsp+228h] [rbp-B0h] BYREF
  __int64 v78; // [rsp+290h] [rbp-48h]
  __int16 v79; // [rsp+298h] [rbp-40h]
  char v80; // [rsp+29Ah] [rbp-3Eh]

  v48 = a4;
  v6 = *(_QWORD *)(a1 + 264);
  v46 = a1;
  v54 = a3;
  v7 = *(_QWORD *)(v6 + 32);
  v8 = *a2;
  v47 = a2;
  v53 = a5;
  if ( (unsigned __int8)sub_FD3830(v7, 0x1CBFu, v8, v6, a5, a6) != 1 )
  {
    v59 = 0;
    v61 = &v59;
    v62 = &v59;
    v45 = &v54;
    v60 = nullptr;
    v63 = 0;
    v70 = 0;
    v9 = _mm_loadh_ps((const double *)&v45);
    v71[2] = 0;
    v71[3] = 1;
    v71[1] = v71;
    v71[0] = v71;
    v10 = &v72;
    v57 = v9;
    do
    {
      *v10 = 0;
      v10 += 2;
    }
    while ( v10 != v73 );
    v73[0] = v76;
    v76[5] = v77;
    v11 = sub_1847500;
    v79 = 257;
    v73[1] = 4;
    v74 = 0;
    v75 = 1;
    v76[4] = 0;
    v76[6] = 0x400000000LL;
    v77[24] = 0;
    v78 = 0;
    v80 = 1;
    if ( (unsigned __int8)sub_B6EFE0(v48, (__int64 *)sub_1847500, (__int64)&v57, (__int64)&v70, 0) )
    {
      v15 = (__int64 *)v71[0];
      if ( (_QWORD *)v71[0] != v71 )
      {
        v49 = (__int64 *)&v55;
        v50 = (unsigned __int8 *)&v53;
        v51 = &v56;
        while ( 1 )
        {
          v16 = v15[2];
          v17 = *(_QWORD *)(**(_QWORD **)(*(_QWORD *)(v16 + 24LL * *((unsigned int *)v15 + 6) - 24) + 16LL)
                          & 0xFFFFFFFFFFFFFFF0LL);
          if ( (*(_BYTE *)(v17 + 8) & 0xF) != 0 )
            v17 = sub_F64F00(
                    **(_QWORD **)(*(_QWORD *)(v16 + 24LL * *((unsigned int *)v15 + 6) - 24) + 16LL),
                    (__int64)v11,
                    v16,
                    v12,
                    v13);
          v18 = sub_F63270(*(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0LL), (__int64)v11, v16, v12, v13, v14);
          v19 = (int *)v60;
          v55 = v18;
          if ( !v60 )
            goto LABEL_23;
          v20 = &v59;
          do
          {
            while ( *((_QWORD *)v19 + 4) >= (unsigned __int64)v18 )
            {
              v20 = v19;
              v19 = *((int **)v19 + 2);
              if ( !v19 )
                goto LABEL_14;
            }
            v19 = *((int **)v19 + 3);
          }
          while ( v19 );
LABEL_14:
          if ( v20 == &v59 )
            goto LABEL_23;
          if ( *((_QWORD *)v20 + 4) > (unsigned __int64)v18 )
            goto LABEL_23;
          v21 = *((_QWORD *)v20 + 5);
          v22 = *((_DWORD *)v15 + 32);
          v23 = (*(_BYTE *)(v21 + 29) >> 5) & 3;
          if ( v23 == 2 )
            goto LABEL_23;
          if ( v22 <= v23 )
            v22 = (*(_BYTE *)(v21 + 29) >> 5) & 3;
          if ( v22 == 3 )
            goto LABEL_23;
          v24 = *v47;
          v45 = (__int64 *)(v46 + 8);
          sub_168B9F0((__int64)v64, (__int64 *)(v46 + 8), v24, 0x1CBFu, 0);
          if ( v67 )
            break;
          if ( v69 )
          {
            v29 = sub_168B9E0(v64);
            v33 = (__int64)v65;
            if ( v65 )
            {
              v34 = *v65;
              v52 = v29;
              v33 = (*(__int64 (__fastcall **)(__int64 *))(v34 + 32))(v65);
              v29 = v52;
            }
            v56 = v33;
            v35 = sub_1587BC0(v29, v51, v29, v30, v31, v32);
            sub_AE9DF0((unsigned __int8 **)(*v35 + 32LL * v68 + 8), v54, 9u);
            if ( !v67 )
            {
LABEL_32:
              if ( v69 )
              {
                v36 = sub_168B9E0(v64);
                v40 = (__int64)v65;
                if ( v65 )
                {
                  v41 = *v65;
                  v52 = v36;
                  v40 = (*(__int64 (__fastcall **)(__int64 *))(v41 + 32))(v65);
                  v36 = v52;
                }
                v56 = v40;
                v42 = sub_1587BC0(v36, v51, v36, v37, v38, v39);
                sub_AE9DF0((unsigned __int8 **)(*v42 + 32LL * v68 + 8), v48, 0xAu);
              }
              goto LABEL_22;
            }
            goto LABEL_28;
          }
LABEL_22:
          v25 = sub_185AB80((__int64)v64, v49);
          sub_15890D0(v25, v50);
          sub_15F7200(v64);
          sub_168B9F0((__int64)v64, v45, *(_DWORD *)(v21 + 24), 0x18D9u, 0);
          sub_15F7200(v64);
          v11 = (__int64 (__fastcall *)(__int64 **, __int64, __int64, __int64, __int64, __int64))&v59;
          v26 = (void *)std::_Rb_tree_rebalance_for_erase(v20, &v59);
          operator delete(v26);
          --v63;
LABEL_23:
          v15 = (__int64 *)*v15;
          if ( v15 == v71 )
            goto LABEL_24;
        }
        sub_AE9DF0(v66, v54, 9u);
        if ( !v67 )
          goto LABEL_32;
LABEL_28:
        sub_AE9DF0(v66, v48, 0xAu);
        goto LABEL_22;
      }
LABEL_24:
      sub_F7C4A0((__int64)&v70);
      v27 = (_QWORD **)v60;
      if ( v60 )
      {
        do
        {
          sub_183FB40((__int64)v58, v27[3]);
          v28 = (_QWORD **)v27[2];
          operator delete(v27);
          v27 = v28;
        }
        while ( v28 );
      }
    }
    else
    {
      sub_F7C4A0((__int64)&v70);
      v43 = (_QWORD **)v60;
      if ( v60 )
      {
        do
        {
          sub_183FB40((__int64)v58, v43[3]);
          v44 = (_QWORD **)v43[2];
          operator delete(v43);
          v43 = v44;
        }
        while ( v44 );
      }
    }
  }
}
