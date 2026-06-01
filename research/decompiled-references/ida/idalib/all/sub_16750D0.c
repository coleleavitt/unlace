__int64 __fastcall sub_16750D0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r14
  __int64 v7; // rax
  unsigned int v8; // edx
  __int64 v10; // r13
  __int64 v11; // rax
  bool v12; // zf
  __int64 v13; // r9
  __int64 *v14; // rax
  __int64 v15; // rax
  __int64 v16; // r13
  unsigned __int8 *v17; // rbx
  _BYTE *v18; // rdx
  __int64 v19; // rax
  unsigned __int8 *v20; // rbx
  unsigned __int8 *v21; // rdx
  __int64 v22; // rax
  unsigned __int8 *v23; // rbx
  unsigned __int8 *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // r12
  __int64 v27; // rax
  __int64 v28; // r9
  __int64 *v29; // rax
  __int64 v30; // rax
  __int64 v31; // r12
  unsigned __int8 *v32; // rbx
  _BYTE *v33; // rdx
  __int64 v34; // rax
  int v35; // ecx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  int v39; // esi
  __int64 v40; // rdx
  int v41; // ecx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  int v45; // esi
  __int64 v46; // rdx
  __int64 v47; // rdx
  int v48; // eax
  __int64 v49; // rdx
  int v50; // eax
  __int64 v51; // rdx
  int v52; // eax
  __int64 v53; // rdx
  int v54; // eax
  __int64 v55; // rax
  __int64 v56; // r13
  __int64 v57; // r15
  __int64 v58; // r13
  void *v59; // rdi
  __int64 v60; // rax
  __int64 v61; // r12
  __int64 v62; // r13
  __int64 v63; // r12
  void *v64; // rdi
  __int64 v65; // rax
  __int64 v66; // r13
  __int64 v67; // r15
  __int64 v68; // r13
  void *v69; // rdi
  __int64 v70; // rax
  __int64 v71; // r15
  __int64 v72; // rdx
  __int64 v73; // r15
  void *v74; // rdi
  __int64 v75; // [rsp+8h] [rbp-F0h]
  __int64 v76; // [rsp+18h] [rbp-E0h] BYREF
  __int64 *v77; // [rsp+20h] [rbp-D8h] BYREF
  __int64 *v78; // [rsp+28h] [rbp-D0h] BYREF
  _BYTE v79[16]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v80; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v81; // [rsp+50h] [rbp-A8h]
  __int64 v82; // [rsp+58h] [rbp-A0h]
  char v83; // [rsp+A8h] [rbp-50h]
  unsigned int v84; // [rsp+B0h] [rbp-48h]
  char v85; // [rsp+B4h] [rbp-44h]

  v6 = sub_A97D20(*(_QWORD *)(a1 + 248), *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL));
  v7 = sub_A97D20(*(_QWORD *)(a1 + 248), *(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL));
  v8 = 0;
  if ( v6 == v7 )
    return v8;
  sub_168B9F0(v79, a1 + 8, a2, 3958, 0);
  if ( !v83 )
  {
    if ( !v85 )
    {
LABEL_5:
      sub_15F7200(v79);
      return 1;
    }
    v10 = sub_168B9E0(v79);
    v11 = v80;
    if ( v80 )
      v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v80 + 32LL))(v80);
    v76 = v11;
    v12 = (unsigned __int8)sub_15823C0((__int64 *)v10, &v76, &v77) == 0;
    v14 = v77;
    if ( !v12 )
    {
      v15 = v77[1];
LABEL_10:
      v16 = v15 + 32LL * v84;
      v17 = *(unsigned __int8 **)(v16 + 8);
      if ( !v17 )
      {
        v53 = *(_QWORD *)(v16 + 16);
        v54 = *(_DWORD *)(v53 + 14976);
        if ( v54 )
        {
          v70 = (unsigned int)(v54 - 1);
          *(_DWORD *)(v53 + 14976) = v70;
          v17 = *(unsigned __int8 **)(v53 + 8 * v70 + 14848);
          v71 = *((unsigned int *)v17 + 134);
          *v17 = 0;
          v72 = *((_QWORD *)v17 + 66);
          *((_DWORD *)v17 + 106) = 0;
          v73 = v72 + (v71 << 6);
          while ( v72 != v73 )
          {
            while ( 1 )
            {
              v73 -= 64;
              v74 = *(void **)(v73 + 24);
              if ( v74 == (void *)(v73 + 40) )
                break;
              v75 = v72;
              operator delete(v74);
              v72 = v75;
              if ( v75 == v73 )
                goto LABEL_69;
            }
          }
LABEL_69:
          *((_DWORD *)v17 + 134) = 0;
        }
        else
        {
          v17 = (unsigned __int8 *)operator new(0x3A0u);
          *v17 = 0;
          *((_QWORD *)v17 + 12) = v17 + 112;
          *((_QWORD *)v17 + 16) = v17 + 144;
          *((_QWORD *)v17 + 20) = v17 + 176;
          *((_QWORD *)v17 + 24) = v17 + 208;
          *((_QWORD *)v17 + 28) = v17 + 240;
          *((_QWORD *)v17 + 32) = v17 + 272;
          *((_QWORD *)v17 + 36) = v17 + 304;
          *((_QWORD *)v17 + 40) = v17 + 336;
          *((_QWORD *)v17 + 44) = v17 + 368;
          *((_QWORD *)v17 + 48) = v17 + 400;
          *((_QWORD *)v17 + 52) = v17 + 432;
          *((_QWORD *)v17 + 13) = 0;
          v17[112] = 0;
          *((_QWORD *)v17 + 17) = 0;
          v17[144] = 0;
          *((_QWORD *)v17 + 21) = 0;
          v17[176] = 0;
          *((_QWORD *)v17 + 25) = 0;
          v17[208] = 0;
          *((_QWORD *)v17 + 29) = 0;
          v17[240] = 0;
          *((_QWORD *)v17 + 33) = 0;
          v17[272] = 0;
          *((_QWORD *)v17 + 37) = 0;
          v17[304] = 0;
          *((_QWORD *)v17 + 41) = 0;
          v17[336] = 0;
          *((_QWORD *)v17 + 45) = 0;
          v17[368] = 0;
          *((_QWORD *)v17 + 49) = 0;
          v17[400] = 0;
          *((_QWORD *)v17 + 53) = 0x800000000LL;
          *((_QWORD *)v17 + 66) = v17 + 544;
          *((_QWORD *)v17 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v16 + 8) = v17;
      }
      v17[*v17 + 1] = 8;
      v18 = *(_BYTE **)(v16 + 8);
      v19 = (unsigned __int8)*v18;
      *v18 = v19 + 1;
      *(_QWORD *)&v18[8 * v19 + 16] = a4;
      goto LABEL_14;
    }
    v35 = *(_DWORD *)(v10 + 8);
    v78 = v77;
    v36 = (unsigned int)(v35 + 1);
    v37 = *(unsigned int *)(v10 + 16);
    v38 = (unsigned int)(4 * v36);
    v39 = 2 * v37;
    if ( (unsigned int)v38 < 3 * (int)v37 )
    {
      if ( (int)v37 - *(_DWORD *)(v10 + 12) - (int)v36 > (unsigned int)v37 >> 3 )
      {
LABEL_26:
        v12 = *v14 == -4096;
        *(_DWORD *)(v10 + 8) = v36;
        if ( !v12 )
          --*(_DWORD *)(v10 + 12);
        v40 = v76;
        v14[1] = 0;
        v14[2] = 0;
        *v14 = v40;
        v14[3] = 0;
        v15 = 0;
        goto LABEL_10;
      }
      v39 = *(_DWORD *)(v10 + 16);
    }
    sub_1587800(v10, v39, v36, v37, v38, v13);
    sub_15823C0((__int64 *)v10, &v76, &v78);
    LODWORD(v36) = *(_DWORD *)(v10 + 8) + 1;
    v14 = v78;
    goto LABEL_26;
  }
  v20 = v81;
  if ( !v81 )
  {
    v49 = v82;
    v50 = *(_DWORD *)(v82 + 14976);
    if ( v50 )
    {
      v55 = (unsigned int)(v50 - 1);
      *(_DWORD *)(v82 + 14976) = v55;
      v20 = *(unsigned __int8 **)(v49 + 8 * v55 + 14848);
      v56 = *((unsigned int *)v20 + 134);
      *v20 = 0;
      v57 = *((_QWORD *)v20 + 66);
      *((_DWORD *)v20 + 106) = 0;
      v58 = v57 + (v56 << 6);
      while ( v57 != v58 )
      {
        while ( 1 )
        {
          v58 -= 64;
          v59 = *(void **)(v58 + 24);
          if ( v59 == (void *)(v58 + 40) )
            break;
          operator delete(v59);
          if ( v57 == v58 )
            goto LABEL_50;
        }
      }
LABEL_50:
      *((_DWORD *)v20 + 134) = 0;
    }
    else
    {
      v20 = (unsigned __int8 *)operator new(0x3A0u);
      *v20 = 0;
      *((_QWORD *)v20 + 12) = v20 + 112;
      *((_QWORD *)v20 + 16) = v20 + 144;
      *((_QWORD *)v20 + 20) = v20 + 176;
      *((_QWORD *)v20 + 24) = v20 + 208;
      *((_QWORD *)v20 + 28) = v20 + 240;
      *((_QWORD *)v20 + 32) = v20 + 272;
      *((_QWORD *)v20 + 36) = v20 + 304;
      *((_QWORD *)v20 + 40) = v20 + 336;
      *((_QWORD *)v20 + 44) = v20 + 368;
      *((_QWORD *)v20 + 48) = v20 + 400;
      *((_QWORD *)v20 + 52) = v20 + 432;
      *((_QWORD *)v20 + 13) = 0;
      v20[112] = 0;
      *((_QWORD *)v20 + 17) = 0;
      v20[144] = 0;
      *((_QWORD *)v20 + 21) = 0;
      v20[176] = 0;
      *((_QWORD *)v20 + 25) = 0;
      v20[208] = 0;
      *((_QWORD *)v20 + 29) = 0;
      v20[240] = 0;
      *((_QWORD *)v20 + 33) = 0;
      v20[272] = 0;
      *((_QWORD *)v20 + 37) = 0;
      v20[304] = 0;
      *((_QWORD *)v20 + 41) = 0;
      v20[336] = 0;
      *((_QWORD *)v20 + 45) = 0;
      v20[368] = 0;
      *((_QWORD *)v20 + 49) = 0;
      v20[400] = 0;
      *((_QWORD *)v20 + 53) = 0x800000000LL;
      *((_QWORD *)v20 + 66) = v20 + 544;
      *((_QWORD *)v20 + 67) = 0x600000000LL;
    }
    v81 = v20;
  }
  v20[*v20 + 1] = 8;
  v21 = v81;
  v22 = *v81;
  *v81 = v22 + 1;
  *(_QWORD *)&v21[8 * v22 + 16] = a4;
LABEL_14:
  if ( !v83 )
  {
    if ( !v85 )
      goto LABEL_5;
    v26 = sub_168B9E0(v79);
    v27 = v80;
    if ( v80 )
      v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v80 + 32LL))(v80);
    v76 = v27;
    v12 = (unsigned __int8)sub_15823C0((__int64 *)v26, &v76, &v77) == 0;
    v29 = v77;
    if ( !v12 )
    {
      v30 = v77[1];
LABEL_22:
      v31 = v30 + 32LL * v84;
      v32 = *(unsigned __int8 **)(v31 + 8);
      if ( !v32 )
      {
        v51 = *(_QWORD *)(v31 + 16);
        v52 = *(_DWORD *)(v51 + 14976);
        if ( v52 )
        {
          v65 = (unsigned int)(v52 - 1);
          *(_DWORD *)(v51 + 14976) = v65;
          v32 = *(unsigned __int8 **)(v51 + 8 * v65 + 14848);
          v66 = *((unsigned int *)v32 + 134);
          *v32 = 0;
          v67 = *((_QWORD *)v32 + 66);
          *((_DWORD *)v32 + 106) = 0;
          v68 = v67 + (v66 << 6);
          while ( v67 != v68 )
          {
            while ( 1 )
            {
              v68 -= 64;
              v69 = *(void **)(v68 + 24);
              if ( v69 == (void *)(v68 + 40) )
                break;
              operator delete(v69);
              if ( v67 == v68 )
                goto LABEL_64;
            }
          }
LABEL_64:
          *((_DWORD *)v32 + 134) = 0;
        }
        else
        {
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
          *((_QWORD *)v32 + 66) = v32 + 544;
          *((_QWORD *)v32 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v31 + 8) = v32;
      }
      v32[*v32 + 1] = 8;
      v33 = *(_BYTE **)(v31 + 8);
      v34 = (unsigned __int8)*v33;
      *v33 = v34 + 1;
      *(_QWORD *)&v33[8 * v34 + 16] = a3;
      goto LABEL_5;
    }
    v41 = *(_DWORD *)(v26 + 8);
    v78 = v77;
    v42 = (unsigned int)(v41 + 1);
    v43 = *(unsigned int *)(v26 + 16);
    v44 = (unsigned int)(4 * v42);
    v45 = 2 * v43;
    if ( (unsigned int)v44 < 3 * (int)v43 )
    {
      if ( (int)v43 - *(_DWORD *)(v26 + 12) - (int)v42 > (unsigned int)v43 >> 3 )
      {
LABEL_31:
        v12 = *v29 == -4096;
        *(_DWORD *)(v26 + 8) = v42;
        if ( !v12 )
          --*(_DWORD *)(v26 + 12);
        v46 = v76;
        v29[1] = 0;
        v29[2] = 0;
        *v29 = v46;
        v29[3] = 0;
        v30 = 0;
        goto LABEL_22;
      }
      v45 = *(_DWORD *)(v26 + 16);
    }
    sub_1587800(v26, v45, v42, v43, v44, v28);
    sub_15823C0((__int64 *)v26, &v76, &v78);
    LODWORD(v42) = *(_DWORD *)(v26 + 8) + 1;
    v29 = v78;
    goto LABEL_31;
  }
  v23 = v81;
  if ( !v81 )
  {
    v47 = v82;
    v48 = *(_DWORD *)(v82 + 14976);
    if ( v48 )
    {
      v60 = (unsigned int)(v48 - 1);
      *(_DWORD *)(v82 + 14976) = v60;
      v23 = *(unsigned __int8 **)(v47 + 8 * v60 + 14848);
      v61 = *((unsigned int *)v23 + 134);
      *v23 = 0;
      v62 = *((_QWORD *)v23 + 66);
      *((_DWORD *)v23 + 106) = 0;
      v63 = v62 + (v61 << 6);
      while ( v62 != v63 )
      {
        while ( 1 )
        {
          v63 -= 64;
          v64 = *(void **)(v63 + 24);
          if ( v64 == (void *)(v63 + 40) )
            break;
          operator delete(v64);
          if ( v62 == v63 )
            goto LABEL_55;
        }
      }
LABEL_55:
      *((_DWORD *)v23 + 134) = 0;
    }
    else
    {
      v23 = (unsigned __int8 *)operator new(0x3A0u);
      *v23 = 0;
      *((_QWORD *)v23 + 12) = v23 + 112;
      *((_QWORD *)v23 + 16) = v23 + 144;
      *((_QWORD *)v23 + 20) = v23 + 176;
      *((_QWORD *)v23 + 24) = v23 + 208;
      *((_QWORD *)v23 + 28) = v23 + 240;
      *((_QWORD *)v23 + 32) = v23 + 272;
      *((_QWORD *)v23 + 36) = v23 + 304;
      *((_QWORD *)v23 + 40) = v23 + 336;
      *((_QWORD *)v23 + 44) = v23 + 368;
      *((_QWORD *)v23 + 48) = v23 + 400;
      *((_QWORD *)v23 + 52) = v23 + 432;
      *((_QWORD *)v23 + 13) = 0;
      v23[112] = 0;
      *((_QWORD *)v23 + 17) = 0;
      v23[144] = 0;
      *((_QWORD *)v23 + 21) = 0;
      v23[176] = 0;
      *((_QWORD *)v23 + 25) = 0;
      v23[208] = 0;
      *((_QWORD *)v23 + 29) = 0;
      v23[240] = 0;
      *((_QWORD *)v23 + 33) = 0;
      v23[272] = 0;
      *((_QWORD *)v23 + 37) = 0;
      v23[304] = 0;
      *((_QWORD *)v23 + 41) = 0;
      v23[336] = 0;
      *((_QWORD *)v23 + 45) = 0;
      v23[368] = 0;
      *((_QWORD *)v23 + 49) = 0;
      v23[400] = 0;
      *((_QWORD *)v23 + 53) = 0x800000000LL;
      *((_QWORD *)v23 + 66) = v23 + 544;
      *((_QWORD *)v23 + 67) = 0x600000000LL;
    }
    v81 = v23;
  }
  v23[*v23 + 1] = 8;
  v24 = v81;
  v25 = *v81;
  *v81 = v25 + 1;
  *(_QWORD *)&v24[8 * v25 + 16] = a3;
  sub_15F7200(v79);
  return 1;
}
