__int64 __fastcall sub_1A7D1B0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r13
  unsigned __int8 v5; // al
  int v6; // edx
  char v7; // al
  __int64 v8; // r14
  unsigned __int64 v9; // rax
  unsigned __int64 i; // rbx
  unsigned int v12; // eax
  __int64 *v13; // rbp
  bool v14; // bl
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r13
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r15
  __int64 v27; // rax
  __int64 v28; // rdi
  _BOOL8 v29; // r15
  _QWORD *v30; // rax
  __int64 v31; // rdx
  unsigned __int8 *v32; // rbx
  _BYTE *v33; // rdx
  __int64 v34; // rax
  unsigned __int8 *v35; // rbx
  unsigned __int8 *v36; // rdx
  __int64 v37; // rax
  _BOOL8 v38; // r15
  unsigned __int8 *v39; // rbx
  unsigned __int8 *v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rbx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // rbx
  unsigned __int8 *v50; // r15
  _BYTE *v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rdx
  int v54; // eax
  __int64 v55; // rdx
  int v56; // eax
  __int64 v57; // rdx
  int v58; // eax
  __int64 v59; // rsi
  int v60; // eax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rsi
  __int64 v64; // rax
  void *v65; // rdi
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // r15
  __int64 v69; // rax
  void *v70; // rdi
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rsi
  __int64 v74; // rax
  void *v75; // rdi
  __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rax
  __int64 v79; // rdx
  void *v80; // rdi
  char v81; // [rsp+8h] [rbp-F0h]
  __int64 v82; // [rsp+8h] [rbp-F0h]
  __int64 v83; // [rsp+8h] [rbp-F0h]
  __int64 v84; // [rsp+8h] [rbp-F0h]
  __int64 v85; // [rsp+10h] [rbp-E8h]
  __int64 v86; // [rsp+10h] [rbp-E8h]
  __int64 v87; // [rsp+10h] [rbp-E8h]
  __int64 v88; // [rsp+18h] [rbp-E0h]
  __int64 v89; // [rsp+28h] [rbp-D0h] BYREF
  _QWORD v90[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v91; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v92; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v93; // [rsp+58h] [rbp-A0h]
  char v94; // [rsp+A8h] [rbp-50h]
  unsigned int v95; // [rsp+B0h] [rbp-48h]
  char v96; // [rsp+B4h] [rbp-44h]

  v5 = *(_BYTE *)(a2 + 28) & 0x7F;
  v6 = v5;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 89LL) & 1) != 0 )
  {
    LOBYTE(v3) = v5 == 6 || (unsigned int)v5 - 34 <= 5;
    if ( !(_BYTE)v3 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
      sub_168B9F0((__int64)v90, (__int64 *)(a1 + 8), v12, 0xF39u, 0);
      sub_15F7200(v90);
      sub_B88650(a2, 1);
      return (unsigned int)v3;
    }
  }
  if ( (unsigned int)v5 - 18 <= 0x3F && *(_QWORD *)(a2 + 40) )
  {
    if ( (unsigned __int8)sub_B844D0((_BYTE *)a2) == 2 )
    {
      v13 = (__int64 *)(a1 + 8);
      sub_168B9F0((__int64)v90, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 24), 0xECDu, 0);
      if ( v94 )
      {
        sub_AE9DF0(&v92, a2, 0xAu);
      }
      else if ( v96 )
      {
        v19 = sub_168B9E0(v90);
        v20 = v91;
        if ( v91 )
          v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v91 + 32LL))(v91);
        v89 = v20;
        v21 = sub_1587BC0(v19, &v89, v15, v16, v17, v18);
        sub_AE9DF0((unsigned __int8 **)(*v21 + 32LL * v95 + 8), a2, 0xAu);
      }
LABEL_27:
      sub_15F7200(v90);
      if ( a3 )
      {
        LODWORD(v3) = 0;
        sub_168B9F0((__int64)v90, v13, a3, 0x1751u, 0);
        sub_15F7200(v90);
        return (unsigned int)v3;
      }
      goto LABEL_28;
    }
    v6 = *(_BYTE *)(a2 + 28) & 0x7F;
  }
  if ( (unsigned int)(v6 - 53) <= 1 )
  {
    v3 = sub_B72ED0(a2);
    v7 = sub_B844D0((_BYTE *)v3);
    if ( v7 == 2 || v7 == 5 )
    {
      v13 = (__int64 *)(a1 + 8);
      v81 = v7;
      sub_168B9F0((__int64)v90, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 24), 0xED1u, 0);
      v14 = v81 != 2;
      if ( v94 )
      {
        v38 = v14;
        v39 = v92;
        if ( !v92 )
        {
          v55 = v93;
          v56 = *(_DWORD *)(v93 + 14976);
          if ( v56 )
          {
            v61 = (unsigned int)(v56 - 1);
            *(_DWORD *)(v93 + 14976) = v61;
            v39 = *(unsigned __int8 **)(v55 + 8 * v61 + 14848);
            v62 = *((unsigned int *)v39 + 134);
            *v39 = 0;
            v63 = *((_QWORD *)v39 + 66);
            *((_DWORD *)v39 + 106) = 0;
            v64 = v63 + (v62 << 6);
            while ( v63 != v64 )
            {
              while ( 1 )
              {
                v64 -= 64;
                v65 = *(void **)(v64 + 24);
                if ( v65 == (void *)(v64 + 40) )
                  break;
                v85 = v64;
                operator delete(v65);
                v64 = v85;
                if ( v63 == v85 )
                  goto LABEL_65;
              }
            }
LABEL_65:
            *((_DWORD *)v39 + 134) = 0;
          }
          else
          {
            v39 = (unsigned __int8 *)operator new(0x3A0u);
            *v39 = 0;
            *((_QWORD *)v39 + 12) = v39 + 112;
            *((_QWORD *)v39 + 16) = v39 + 144;
            *((_QWORD *)v39 + 20) = v39 + 176;
            *((_QWORD *)v39 + 24) = v39 + 208;
            *((_QWORD *)v39 + 28) = v39 + 240;
            *((_QWORD *)v39 + 32) = v39 + 272;
            *((_QWORD *)v39 + 36) = v39 + 304;
            *((_QWORD *)v39 + 40) = v39 + 336;
            *((_QWORD *)v39 + 44) = v39 + 368;
            *((_QWORD *)v39 + 48) = v39 + 400;
            *((_QWORD *)v39 + 52) = v39 + 432;
            *((_QWORD *)v39 + 13) = 0;
            v39[112] = 0;
            *((_QWORD *)v39 + 17) = 0;
            v39[144] = 0;
            *((_QWORD *)v39 + 21) = 0;
            v39[176] = 0;
            *((_QWORD *)v39 + 25) = 0;
            v39[208] = 0;
            *((_QWORD *)v39 + 29) = 0;
            v39[240] = 0;
            *((_QWORD *)v39 + 33) = 0;
            v39[272] = 0;
            *((_QWORD *)v39 + 37) = 0;
            v39[304] = 0;
            *((_QWORD *)v39 + 41) = 0;
            v39[336] = 0;
            *((_QWORD *)v39 + 45) = 0;
            v39[368] = 0;
            *((_QWORD *)v39 + 49) = 0;
            v39[400] = 0;
            *((_QWORD *)v39 + 53) = 0x800000000LL;
            *((_QWORD *)v39 + 66) = v39 + 544;
            *((_QWORD *)v39 + 67) = 0x600000000LL;
          }
          v92 = v39;
        }
        v39[*v39 + 1] = 2;
        v40 = v92;
        v41 = *v92;
        *v92 = v41 + 1;
        *(_QWORD *)&v40[8 * v41 + 16] = v38;
      }
      else
      {
        if ( !v96 )
        {
LABEL_26:
          sub_15F7200(v90);
          sub_168B9F0((__int64)v90, v13, *(_DWORD *)(v3 + 24), 0x193Au, 0);
          goto LABEL_27;
        }
        v26 = sub_168B9E0(v90);
        v27 = v91;
        if ( v91 )
          v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v91 + 32LL))(v91);
        v28 = v26;
        v89 = v27;
        v29 = v14;
        v30 = sub_1587BC0(v28, &v89, v22, v23, v24, v25);
        v31 = *v30 + 32LL * v95;
        v32 = *(unsigned __int8 **)(v31 + 8);
        if ( !v32 )
        {
          v59 = *(_QWORD *)(v31 + 16);
          v60 = *(_DWORD *)(v59 + 14976);
          if ( v60 )
          {
            v71 = (unsigned int)(v60 - 1);
            *(_DWORD *)(v59 + 14976) = v71;
            v32 = *(unsigned __int8 **)(v59 + 8 * v71 + 14848);
            v72 = *((unsigned int *)v32 + 134);
            *v32 = 0;
            v73 = *((_QWORD *)v32 + 66);
            *((_DWORD *)v32 + 106) = 0;
            v74 = v73 + (v72 << 6);
            while ( v73 != v74 )
            {
              while ( 1 )
              {
                v74 -= 64;
                v75 = *(void **)(v74 + 24);
                if ( v75 == (void *)(v74 + 40) )
                  break;
                v88 = v74;
                v86 = v31;
                operator delete(v75);
                v74 = v88;
                v31 = v86;
                if ( v73 == v88 )
                  goto LABEL_76;
              }
            }
LABEL_76:
            *((_DWORD *)v32 + 134) = 0;
          }
          else
          {
            v82 = v31;
            v32 = (unsigned __int8 *)operator new(0x3A0u);
            *v32 = 0;
            *((_QWORD *)v32 + 12) = v32 + 112;
            *((_QWORD *)v32 + 16) = v32 + 144;
            *((_QWORD *)v32 + 20) = v32 + 176;
            *((_QWORD *)v32 + 24) = v32 + 208;
            *((_QWORD *)v32 + 28) = v32 + 240;
            *((_QWORD *)v32 + 32) = v32 + 272;
            *((_QWORD *)v32 + 36) = v32 + 304;
            *((_QWORD *)v32 + 40) = v32 + 336;
            *((_QWORD *)v32 + 44) = v32 + 368;
            *((_QWORD *)v32 + 48) = v32 + 400;
            *((_QWORD *)v32 + 52) = v32 + 432;
            *((_QWORD *)v32 + 13) = 0;
            v32[112] = 0;
            *((_QWORD *)v32 + 17) = 0;
            v32[144] = 0;
            *((_QWORD *)v32 + 21) = 0;
            v32[176] = 0;
            *((_QWORD *)v32 + 25) = 0;
            v32[208] = 0;
            *((_QWORD *)v32 + 29) = 0;
            v32[240] = 0;
            *((_QWORD *)v32 + 33) = 0;
            v32[272] = 0;
            *((_QWORD *)v32 + 37) = 0;
            v32[304] = 0;
            *((_QWORD *)v32 + 41) = 0;
            v32[336] = 0;
            *((_QWORD *)v32 + 45) = 0;
            v32[368] = 0;
            *((_QWORD *)v32 + 49) = 0;
            v32[400] = 0;
            *((_QWORD *)v32 + 53) = 0x800000000LL;
            v31 = v82;
            *((_QWORD *)v32 + 66) = v32 + 544;
            *((_QWORD *)v32 + 67) = 0x600000000LL;
          }
          *(_QWORD *)(v31 + 8) = v32;
        }
        v32[*v32 + 1] = 2;
        v33 = *(_BYTE **)(v31 + 8);
        v34 = (unsigned __int8)*v33;
        *v33 = v34 + 1;
        *(_QWORD *)&v33[8 * v34 + 16] = v29;
      }
      if ( v94 )
      {
        v35 = v92;
        if ( !v92 )
        {
          v53 = v93;
          v54 = *(_DWORD *)(v93 + 14976);
          if ( v54 )
          {
            v66 = (unsigned int)(v54 - 1);
            *(_DWORD *)(v93 + 14976) = v66;
            v35 = *(unsigned __int8 **)(v53 + 8 * v66 + 14848);
            v67 = *((unsigned int *)v35 + 134);
            *v35 = 0;
            v68 = *((_QWORD *)v35 + 66);
            *((_DWORD *)v35 + 106) = 0;
            v69 = v68 + (v67 << 6);
            while ( v68 != v69 )
            {
              while ( 1 )
              {
                v69 -= 64;
                v70 = *(void **)(v69 + 24);
                if ( v70 == (void *)(v69 + 40) )
                  break;
                v83 = v69;
                operator delete(v70);
                v69 = v83;
                if ( v68 == v83 )
                  goto LABEL_72;
              }
            }
LABEL_72:
            *((_DWORD *)v35 + 134) = 0;
          }
          else
          {
            v35 = (unsigned __int8 *)operator new(0x3A0u);
            *v35 = 0;
            *((_QWORD *)v35 + 12) = v35 + 112;
            *((_QWORD *)v35 + 16) = v35 + 144;
            *((_QWORD *)v35 + 20) = v35 + 176;
            *((_QWORD *)v35 + 24) = v35 + 208;
            *((_QWORD *)v35 + 28) = v35 + 240;
            *((_QWORD *)v35 + 32) = v35 + 272;
            *((_QWORD *)v35 + 36) = v35 + 304;
            *((_QWORD *)v35 + 40) = v35 + 336;
            *((_QWORD *)v35 + 44) = v35 + 368;
            *((_QWORD *)v35 + 48) = v35 + 400;
            *((_QWORD *)v35 + 52) = v35 + 432;
            *((_QWORD *)v35 + 13) = 0;
            v35[112] = 0;
            *((_QWORD *)v35 + 17) = 0;
            v35[144] = 0;
            *((_QWORD *)v35 + 21) = 0;
            v35[176] = 0;
            *((_QWORD *)v35 + 25) = 0;
            v35[208] = 0;
            *((_QWORD *)v35 + 29) = 0;
            v35[240] = 0;
            *((_QWORD *)v35 + 33) = 0;
            v35[272] = 0;
            *((_QWORD *)v35 + 37) = 0;
            v35[304] = 0;
            *((_QWORD *)v35 + 41) = 0;
            v35[336] = 0;
            *((_QWORD *)v35 + 45) = 0;
            v35[368] = 0;
            *((_QWORD *)v35 + 49) = 0;
            v35[400] = 0;
            *((_QWORD *)v35 + 53) = 0x800000000LL;
            *((_QWORD *)v35 + 66) = v35 + 544;
            *((_QWORD *)v35 + 67) = 0x600000000LL;
          }
          v92 = v35;
        }
        v35[*v35 + 1] = 10;
        v36 = v92;
        v37 = *v92;
        *v92 = v37 + 1;
        *(_QWORD *)&v36[8 * v37 + 16] = v3;
      }
      else if ( v96 )
      {
        v44 = sub_168B9E0(v90);
        v47 = v91;
        if ( v91 )
          v47 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v91 + 32LL))(v91);
        v89 = v47;
        v48 = sub_1587BC0(v44, &v89, v42, v43, v45, v46);
        v49 = *v48 + 32LL * v95;
        v50 = *(unsigned __int8 **)(v49 + 8);
        if ( !v50 )
        {
          v57 = *(_QWORD *)(v49 + 16);
          v58 = *(_DWORD *)(v57 + 14976);
          if ( v58 )
          {
            v76 = (unsigned int)(v58 - 1);
            *(_DWORD *)(v57 + 14976) = v76;
            v50 = *(unsigned __int8 **)(v57 + 8 * v76 + 14848);
            v77 = *((unsigned int *)v50 + 134);
            *v50 = 0;
            v78 = *((_QWORD *)v50 + 66);
            *((_DWORD *)v50 + 106) = 0;
            v79 = v78 + (v77 << 6);
            v84 = v78;
            while ( v84 != v79 )
            {
              while ( 1 )
              {
                v79 -= 64;
                v80 = *(void **)(v79 + 24);
                if ( v80 == (void *)(v79 + 40) )
                  break;
                v87 = v79;
                operator delete(v80);
                v79 = v87;
                if ( v84 == v87 )
                  goto LABEL_82;
              }
            }
LABEL_82:
            *((_DWORD *)v50 + 134) = 0;
          }
          else
          {
            v50 = (unsigned __int8 *)operator new(0x3A0u);
            *v50 = 0;
            *((_QWORD *)v50 + 12) = v50 + 112;
            *((_QWORD *)v50 + 16) = v50 + 144;
            *((_QWORD *)v50 + 20) = v50 + 176;
            *((_QWORD *)v50 + 24) = v50 + 208;
            *((_QWORD *)v50 + 28) = v50 + 240;
            *((_QWORD *)v50 + 32) = v50 + 272;
            *((_QWORD *)v50 + 36) = v50 + 304;
            *((_QWORD *)v50 + 40) = v50 + 336;
            *((_QWORD *)v50 + 44) = v50 + 368;
            *((_QWORD *)v50 + 48) = v50 + 400;
            *((_QWORD *)v50 + 52) = v50 + 432;
            *((_QWORD *)v50 + 13) = 0;
            v50[112] = 0;
            *((_QWORD *)v50 + 17) = 0;
            v50[144] = 0;
            *((_QWORD *)v50 + 21) = 0;
            v50[176] = 0;
            *((_QWORD *)v50 + 25) = 0;
            v50[208] = 0;
            *((_QWORD *)v50 + 29) = 0;
            v50[240] = 0;
            *((_QWORD *)v50 + 33) = 0;
            v50[272] = 0;
            *((_QWORD *)v50 + 37) = 0;
            v50[304] = 0;
            *((_QWORD *)v50 + 41) = 0;
            v50[336] = 0;
            *((_QWORD *)v50 + 45) = 0;
            v50[368] = 0;
            *((_QWORD *)v50 + 49) = 0;
            v50[400] = 0;
            *((_QWORD *)v50 + 53) = 0x800000000LL;
            *((_QWORD *)v50 + 66) = v50 + 544;
            *((_QWORD *)v50 + 67) = 0x600000000LL;
          }
          *(_QWORD *)(v49 + 8) = v50;
        }
        v50[*v50 + 1] = 10;
        v51 = *(_BYTE **)(v49 + 8);
        v52 = (unsigned __int8)*v51;
        *v51 = v52 + 1;
        *(_QWORD *)&v51[8 * v52 + 16] = v3;
      }
      goto LABEL_26;
    }
  }
  if ( !sub_B8E0B0(a2) )
    goto LABEL_19;
  v8 = sub_B8D340(a2);
  if ( !v8 || (*(_BYTE *)(a2 + 28) & 0x7F) != 0x18 )
    goto LABEL_19;
  if ( !*(_QWORD *)(a2 + 40) )
  {
    sub_168B9F0((__int64)v90, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 24), 0xECAu, 0);
    sub_15F7200(v90);
    if ( a3 )
    {
      sub_168B9F0((__int64)v90, (__int64 *)(a1 + 8), a3, 0x1751u, 0);
      sub_15F7200(v90);
    }
LABEL_28:
    LODWORD(v3) = 0;
    return (unsigned int)v3;
  }
  if ( !sub_B8E970(v8)
    || (v9 = sub_B8EAA0(v8),
        LOBYTE(v3) = (*(_BYTE *)(v9 + 8) & 0x7F) == 0 || (*(_BYTE *)(v9 + 8) & 0x7F) == 24,
        !(_BYTE)v3) )
  {
LABEL_19:
    LODWORD(v3) = 1;
    return (unsigned int)v3;
  }
  for ( i = sub_B8E970(v8); i; i = *(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF8LL )
    LODWORD(v3) = sub_1A7D1B0(a1, i, a3) & v3;
  return (unsigned int)v3;
}
