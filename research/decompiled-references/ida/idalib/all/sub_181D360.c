void __fastcall sub_181D360(__int64 a1, __int64 a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r12
  int v9; // eax
  __int64 v10; // rdx
  _QWORD *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rbp
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // r13
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 *v35; // r15
  unsigned __int64 v36; // rax
  __m128i *v37; // rbp
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 v43; // rdi
  __int64 v44; // rsi
  __int64 v45; // r14
  bool v46; // r12
  unsigned int v47; // eax
  __int64 *v48; // rbx
  unsigned int v49; // edx
  unsigned int v50; // eax
  unsigned int v51; // edx
  unsigned int v52; // edx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rbx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rax
  _QWORD *v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rax
  _QWORD *v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rax
  _QWORD *v71; // rax
  __int64 v72; // [rsp+8h] [rbp-100h]
  unsigned int v73; // [rsp+14h] [rbp-F4h]
  __int64 v74; // [rsp+18h] [rbp-F0h]
  __int64 v75; // [rsp+18h] [rbp-F0h]
  unsigned int v76; // [rsp+28h] [rbp-E0h] BYREF
  unsigned int v77; // [rsp+2Ch] [rbp-DCh] BYREF
  __int64 v78; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v79; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v80[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v81; // [rsp+50h] [rbp-B8h]
  unsigned __int8 *v82[11]; // [rsp+60h] [rbp-A8h] BYREF
  char v83; // [rsp+B8h] [rbp-50h]
  unsigned int v84; // [rsp+C0h] [rbp-48h]
  char v85; // [rsp+C4h] [rbp-44h]

  v7 = a2;
  v9 = *(_BYTE *)(a2 + 28) & 0x7F;
  v10 = (unsigned int)(v9 - 64);
  if ( (unsigned int)v10 <= 2 )
  {
    v11 = (_QWORD *)(*(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a2 + 80) & 4) != 0 )
    {
      if ( !sub_F61420(*(_QWORD *)(v11[1] & 0xFFFFFFFFFFFFFFF0LL), a2, (__int64)v11, a4, a5, a6) )
        goto LABEL_4;
    }
    else if ( !sub_F61420(*(_QWORD *)(*v11 & 0xFFFFFFFFFFFFFFF0LL), a2, (__int64)v11, a4, a5, a6) )
    {
LABEL_4:
      v9 = *(_BYTE *)(a2 + 28) & 0x7F;
      goto LABEL_5;
    }
    v14 = (__int64 *)(*(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a2 + 80) & 4) != 0 )
      v15 = v14[1];
    else
      v15 = *v14;
    v16 = sub_F63600(*(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL), a2, (__int64)v14, a4, a5, a6);
    v21 = sub_F60F10(v16, a2, v17, v18, v19, v20);
    v7 = (__int64)v21;
    if ( !v21 || *((_BYTE *)v21 + 73) >> 5 != 2 )
      goto LABEL_7;
    goto LABEL_9;
  }
LABEL_5:
  if ( (unsigned int)(v9 - 58) > 3 || *(_BYTE *)(a2 + 73) >> 5 != 2 )
  {
LABEL_7:
    sub_168B9F0((__int64)v80, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0x19C6u, 0);
    v12 = sub_15DD120((__int64)v80, (__int64)a3);
    LOBYTE(v78) = (a3[2].m128i_i8[3] & 2) != 0;
    v13 = sub_1588420(v12, (unsigned __int8 *)&v78);
    LODWORD(v79) = 1;
    sub_180E4C0(v13, (int *)&v79);
    sub_15F7200(v80);
    return;
  }
LABEL_9:
  if ( (*(_QWORD *)(v7 + 72) & 0x10000LL) == 0 )
  {
    if ( (*(_QWORD *)(v7 + 72) & 0x20000LL) == 0 )
    {
      sub_168B9F0((__int64)v80, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0x1D18u, 0);
      sub_15F7200(v80);
    }
    return;
  }
  v22 = sub_B7E900(v7, a2, v10, a4, a5, a6);
  v23 = v22;
  if ( !v22 )
  {
    sub_168B9F0((__int64)v80, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0x1D19u, 0);
    sub_15F7200(v80);
    return;
  }
  v78 = *(_QWORD *)(v22 + 48);
  if ( sub_F580C0(*(_QWORD *)(v78 & 0xFFFFFFFFFFFFFFF0LL))
    || (v28 = *(_QWORD *)(v78 & 0xFFFFFFFFFFFFFFF0LL),
        (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v28 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57 <= 1) )
  {
    sub_168B9F0((__int64)v80, (__int64 *)(a1 + 8), *(_DWORD *)(v23 + 24), 0x1D17u, 0);
    LOBYTE(v79) = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v78 & 0xFFFFFFFFFFFFFFF0LL)
                                                                           + 8LL)
                                                               & 0xFFFFFFFFFFFFFFF0LL)
                                                   + 16LL)
                - 57 <= 1;
    v29 = sub_1588420((__int64)v80, (unsigned __int8 *)&v79);
    sub_1605D30(v29, &v78);
    sub_15F7200(v80);
    return;
  }
  if ( !sub_F62670(v28, nullptr, v24, v25, v26, v27) )
  {
    v30 = v23;
    v72 = sub_A97D20(*(_QWORD *)(a1 + 248), *(_QWORD *)(v78 & 0xFFFFFFFFFFFFFFF0LL));
    sub_A97D20(*(_QWORD *)(a1 + 248), *(_QWORD *)(v78 & 0xFFFFFFFFFFFFFFF0LL));
    v73 = v31;
LABEL_25:
    v35 = (__int64 *)(*(_QWORD *)(v30 + 48) & 0xFFFFFFFFFFFFFFF0LL);
    if ( !sub_F62670(*v35, nullptr, v31, v32, v33, v34) )
    {
      if ( v72 != sub_A97D20(*(_QWORD *)(a1 + 248), *v35)
        || (sub_A97D20(*(_QWORD *)(a1 + 248), *v35), v73 < (unsigned int)v31) )
      {
        v42 = sub_A97D20(*(_QWORD *)(a1 + 248), *v35);
        v43 = *(_QWORD *)(a1 + 248);
        v44 = *v35;
        v45 = v42;
        v46 = v72 != v42;
        if ( v72 == v42 )
        {
          sub_A97D20(v43, v44);
          v47 = v52;
        }
        else
        {
          v47 = sub_A97D20(v43, v44);
        }
        v48 = (__int64 *)(a1 + 8);
        v49 = *(_DWORD *)(v30 + 24);
        v76 = v47;
        sub_168B9F0((__int64)v80, v48, v49, 0x1D16u, 0);
        if ( v83 )
        {
          sub_AE9DF0(v82, v46, 2u);
        }
        else
        {
          if ( !v85 )
          {
LABEL_37:
            sub_1588370((__int64)v80, &v76);
            sub_15F7200(v80);
            v50 = v72;
            v51 = *(_DWORD *)(v23 + 24);
            if ( v72 == v45 )
              v50 = v73;
            v77 = v50;
            sub_168B9F0((__int64)v80, v48, v51, 0x1914u, 0);
            if ( v83 )
            {
              sub_AE9DF0(v82, v46, 2u);
            }
            else if ( v85 )
            {
              v55 = sub_168B9E0(v80);
              v58 = v81;
              if ( v81 )
                v58 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v81 + 32LL))(v81);
              v79 = v58;
              v59 = sub_1587BC0(v55, &v79, v53, v54, v56, v57);
              sub_AE9DF0((unsigned __int8 **)(*v59 + 32LL * v84 + 8), v46, 2u);
            }
            sub_1588370((__int64)v80, &v77);
            sub_15F7200(v80);
            return;
          }
          v74 = sub_168B9E0(v80);
          v64 = v81;
          if ( v81 )
            v64 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v81 + 32LL))(v81);
          v79 = v64;
          v65 = sub_1587BC0(v74, &v79, v60, v61, v62, v63);
          sub_AE9DF0((unsigned __int8 **)(*v65 + 32LL * v84 + 8), v46, 2u);
        }
        if ( v83 )
        {
          sub_AE9DF0(v82, v30, 0xAu);
        }
        else if ( v85 )
        {
          v75 = sub_168B9E0(v80);
          v70 = v81;
          if ( v81 )
            v70 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v81 + 32LL))(v81);
          v79 = v70;
          v71 = sub_1587BC0(v75, &v79, v66, v67, v68, v69);
          sub_AE9DF0((unsigned __int8 **)(*v71 + 32LL * v84 + 8), v30, 0xAu);
        }
        goto LABEL_37;
      }
      while ( 1 )
      {
        v36 = *(_QWORD *)(v30 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v30 = v36;
        if ( !v36 )
          break;
        if ( (*(_BYTE *)(v36 + 28) & 0x7Fu) - 49 <= 2 )
          goto LABEL_25;
      }
      v37 = (__m128i *)sub_1806F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 40, 3u);
      sub_B19E50(v37, *(_QWORD *)(a1 + 248), a3);
      sub_B8CC60(v7, (__int64)v37, v38, v39, v40, v41);
    }
  }
}
