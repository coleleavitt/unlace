void __fastcall sub_18261A0(__int64 a1, __int64 a2, const __m128i *a3, _DWORD *a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  unsigned int v14; // r15d
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  char v18; // bp
  __int64 v19; // rax
  __int64 v20; // r12
  __int64 v21; // r12
  unsigned __int8 v22; // al
  unsigned __int64 v23; // rax
  unsigned int v24; // edx
  unsigned __int64 v25; // rax
  int v26; // eax
  void *v27; // rcx
  void **v28; // rdi
  unsigned __int8 v29; // dl
  bool v30; // cl
  _BOOL8 v31; // rax
  unsigned int v32; // edx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // r12
  void *v39; // rax
  _QWORD *v40; // rax
  int v41; // ecx
  __int64 *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rsi
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __m128i *v51; // r14
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  unsigned __int64 v56; // rax
  unsigned int v57; // eax
  __int64 v58; // rdi
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // r12
  __int64 v64; // rax
  _QWORD *v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // r12
  __int64 v71; // rax
  _QWORD *v72; // rax
  __int64 v73; // rsi
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // r12
  __int64 v79; // rax
  _QWORD *v80; // rax
  unsigned int v81; // [rsp+Ch] [rbp-10Ch]
  unsigned int v82; // [rsp+Ch] [rbp-10Ch]
  bool v83; // [rsp+10h] [rbp-108h]
  unsigned __int8 v84; // [rsp+10h] [rbp-108h]
  int v85; // [rsp+14h] [rbp-104h]
  int v86; // [rsp+14h] [rbp-104h]
  __int64 *v87; // [rsp+18h] [rbp-100h]
  unsigned int v88; // [rsp+20h] [rbp-F8h] BYREF
  int v89; // [rsp+24h] [rbp-F4h] BYREF
  __int64 v90; // [rsp+28h] [rbp-F0h] BYREF
  void *v91[2]; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v92; // [rsp+40h] [rbp-D8h]
  void *v93; // [rsp+50h] [rbp-C8h] BYREF
  int v94; // [rsp+58h] [rbp-C0h]
  char v95; // [rsp+5Ch] [rbp-BCh]
  void *v96; // [rsp+60h] [rbp-B8h]
  unsigned __int8 *v97[11]; // [rsp+70h] [rbp-A8h] BYREF
  char v98; // [rsp+C8h] [rbp-50h]
  unsigned int v99; // [rsp+D0h] [rbp-48h]
  char v100; // [rsp+D4h] [rbp-44h]

  v8 = sub_B8DC30(a2, 1);
  if ( v8 )
    v13 = *(_QWORD *)(v8 + 24);
  else
    v13 = *(_QWORD *)(a2 + 80);
  v14 = a3[1].m128i_u32[2];
  if ( !(unsigned __int8)sub_1804940(v13, 1, v9, v10, v11, v12) )
  {
    sub_168B9F0((__int64)&v93, (__int64 *)(a1 + 8), v14, 0x19BBu, 0);
    if ( v98 )
    {
      sub_AE9DF0(v97, (__int64)a3, 0x10u);
    }
    else if ( v100 )
    {
      v38 = sub_168B9E0(&v93);
      v39 = v96;
      if ( v96 )
        v39 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v96 + 32LL))(v96);
      v91[0] = v39;
      v40 = sub_1587BC0(v38, (__int64 *)v91, v34, v35, v36, v37);
      sub_AE9DF0((unsigned __int8 **)(*v40 + 32LL * v99 + 8), (__int64)a3, 0x10u);
    }
    v90 = a3[1].m128i_i64[1];
    v21 = sub_1587DB0((__int64)&v93, &v90);
    v22 = *(_BYTE *)(a2 + 28) & 0x7F;
    if ( (unsigned int)v22 - 34 > 5 )
    {
      if ( v22 == 18 )
      {
        v56 = sub_BA8620(a2);
        v24 = v56;
        v25 = HIDWORD(v56);
      }
      else
      {
        LODWORD(v25) = 0;
        v24 = 0;
      }
    }
    else
    {
      v23 = sub_B77620(a2);
      v24 = v23;
      v25 = HIDWORD(v23);
    }
    v91[0] = (void *)__PAIR64__(v25, v24);
    goto LABEL_17;
  }
  v88 = 1;
  v15 = sub_B8DC30(a2, 1);
  if ( v15 )
  {
    v18 = *(_BYTE *)(v15 + 16);
    if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 35 > 3 )
    {
      v81 = 0;
      v83 = 0;
    }
    else
    {
      v83 = !sub_B979F0((_QWORD *)a2);
      v81 = v83;
    }
    if ( v18 != 26 )
      goto LABEL_8;
LABEL_30:
    sub_B8DC30(a2, 1);
    v33 = sub_B8DC30(a2, 1);
    if ( v33 )
    {
      v81 += *(unsigned __int16 *)(v33 + 22);
    }
    else
    {
      if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 8 )
        v41 = *(_DWORD *)(a2 + 80);
      else
        v41 = *(_DWORD *)(a2 + 104);
      v81 += v41;
    }
    goto LABEL_8;
  }
  v29 = *(_BYTE *)(a2 + 28) & 0x7F;
  v30 = v29 == 18;
  v31 = v29 == 8;
  v32 = v29 - 35;
  v83 = v31 || v30;
  if ( v31 || v30 )
  {
    if ( v32 > 3 )
    {
      v81 = 0;
      v83 = 0;
    }
    else
    {
      v83 = !sub_B979F0((_QWORD *)a2);
      v81 = v83;
    }
    goto LABEL_30;
  }
  v81 = 0;
  if ( v32 <= 3 )
  {
    v83 = !sub_B979F0((_QWORD *)a2);
    v81 = v83;
  }
LABEL_8:
  v92 = 0;
  *(_OWORD *)v91 = 0;
  if ( (*a4 & 0x10000) == 0 )
  {
    sub_C3EB00((__int64)&v93, (unsigned __int64)a4, *(_QWORD *)(a1 + 248), nullptr, v16, v17);
    if ( !(_BYTE)v96 )
    {
      sub_98E4B0((__int64)&v93);
      goto LABEL_9;
    }
    v26 = v94;
    LOBYTE(v92) = 1;
    v94 = 0;
    LODWORD(v91[1]) = v26;
    v91[0] = v93;
    BYTE4(v91[1]) = v95;
    sub_98E4B0((__int64)&v93);
    if ( LODWORD(v91[1]) > 0x40 )
    {
      v85 = (int)v91[1];
      if ( v85 - (unsigned int)sub_2206780(v91) <= 0x40 )
      {
        v27 = *(void **)v91[0];
        if ( *(_QWORD *)v91[0] <= 0xFFFFFFFF )
        {
LABEL_22:
          if ( v27 && v81 >= (unsigned int)v27 )
          {
            if ( (_DWORD)v27 != 1 || !v83 )
            {
              v86 = (unsigned int)v27 & 0x3FFFFFFF;
              v82 = ((unsigned int)v27 & 0x3FFFFFFF) - 1;
              goto LABEL_43;
            }
            v73 = a1 + 8;
            sub_168B9F0((__int64)&v93, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0xC73u, 0);
            if ( v98 )
            {
              v73 = (__int64)a3;
              sub_AE9DF0(v97, (__int64)a3, 0x10u);
            }
            else if ( v100 )
            {
              v78 = sub_168B9E0(&v93);
              v79 = (__int64)v96;
              if ( v96 )
                v79 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v96 + 32LL))(v96);
              v90 = v79;
              v80 = sub_1587BC0(v78, &v90, v74, v75, v76, v77);
              v73 = (__int64)a3;
              sub_AE9DF0((unsigned __int8 **)(*v80 + 32LL * v99 + 8), (__int64)a3, 0x10u);
            }
            v28 = &v93;
            v90 = sub_EEC8C0((unsigned __int64)a4, v73, 0.0);
LABEL_26:
            sub_1587DB0((__int64)v28, &v90);
            sub_15F7200(&v93);
            sub_98E4B0((__int64)v91);
            return;
          }
LABEL_23:
          sub_168B9F0((__int64)&v93, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0xC54u, 0);
          if ( v98 )
          {
            sub_AE9DF0(v97, (__int64)a3, 0x10u);
          }
          else if ( v100 )
          {
            v63 = sub_168B9E0(&v93);
            v64 = (__int64)v96;
            if ( v96 )
              v64 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v96 + 32LL))(v96);
            v90 = v64;
            v65 = sub_1587BC0(v63, &v90, v59, v60, v61, v62);
            sub_AE9DF0((unsigned __int8 **)(*v65 + 32LL * v99 + 8), (__int64)a3, 0x10u);
          }
          v28 = (void **)sub_1588370((__int64)&v93, &v88);
          v90 = sub_EEC8C0((unsigned __int64)a4, (__int64)&v88, 0.0);
          goto LABEL_26;
        }
      }
    }
    else
    {
      v27 = v91[0];
      if ( v91[0] <= (void *)0xFFFFFFFFLL )
        goto LABEL_22;
    }
    if ( v81 == -1 )
    {
      v86 = 0x3FFFFFFF;
      v82 = 1073741822;
LABEL_43:
      v84 = 0;
      if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 34 <= 5 )
      {
        v84 = sub_B72F20(a2);
        v82 -= v84;
      }
      sub_98E4B0((__int64)v91);
      v42 = (__int64 *)(sub_18064C0(a2, v82) & 0xFFFFFFFFFFFFFFF0LL);
      v87 = v42;
      if ( (*(_BYTE *)(*v42 + 17) & 4) != 0
        || (v47 = *(_QWORD *)(a1 + 248), sub_F60F80(*v42, v47, v43, v44, v45, v46))
        || sub_F611E0(*v87, v47, (__int64)v87, v48, v49, v50) )
      {
        v51 = (__m128i *)sub_1806F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 48, 3u);
        sub_B090C0(v51, *(_QWORD *)(a1 + 248), a3, v86 | ((v84 & 1) << 30) | 0x80000000);
        sub_B8CC60(a2, (__int64)v51, v52, v53, v54, v55);
        return;
      }
      v57 = sub_EEB7E0((unsigned __int64)a4, v47, 0.0);
      sub_168B9F0((__int64)&v93, (__int64 *)(a1 + 8), v57, 0xC6Fu, 0);
      v21 = sub_180A660((__int64)&v93, (__int64)a3);
      v58 = *(_QWORD *)(*(_QWORD *)(a2 + 120) + 8LL * v82);
      v91[0] = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
LABEL_17:
      sub_1587DB0(v21, (__int64 *)v91);
      sub_15F7200(&v93);
      return;
    }
    goto LABEL_23;
  }
LABEL_9:
  sub_168B9F0((__int64)&v93, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0xC53u, 0);
  if ( v98 )
  {
    sub_AE9DF0(v97, (__int64)a3, 0x10u);
  }
  else if ( v100 )
  {
    v70 = sub_168B9E0(&v93);
    v71 = (__int64)v96;
    if ( v96 )
      v71 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v96 + 32LL))(v96);
    v90 = v71;
    v72 = sub_1587BC0(v70, &v90, v66, v67, v68, v69);
    sub_AE9DF0((unsigned __int8 **)(*v72 + 32LL * v99 + 8), (__int64)a3, 0x10u);
  }
  v19 = sub_1588370((__int64)&v93, &v88);
  v89 = 1;
  v20 = sub_180A710(v19, &v89);
  v90 = sub_EEC8C0((unsigned __int64)a4, (__int64)&v89, 0.0);
  sub_1587DB0(v20, &v90);
  sub_15F7200(&v93);
  sub_98E4B0((__int64)v91);
}
