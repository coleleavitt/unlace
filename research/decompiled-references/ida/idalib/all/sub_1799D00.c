__int64 __fastcall sub_1799D00(__int64 *a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // eax
  __int64 result; // rax
  unsigned __int64 v7; // rax
  _BYTE *v8; // r12
  double v9; // xmm0_8
  int v10; // eax
  int v11; // r13d
  unsigned __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // rax
  _WORD **v20; // rdx
  _WORD *v21; // rcx
  _WORD *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned int v28; // r14d
  __int64 v29; // r9
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  int v33; // esi
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 *v36; // rdx
  unsigned __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 *v40; // rdx
  unsigned __int64 v41; // rcx
  __int64 v42; // rbp
  __int64 v43; // r8
  __int64 v44; // r9
  int v45; // eax
  int v46; // ebp
  unsigned __int8 *v47; // rax
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // r15
  __int64 v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rbp
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rax
  _QWORD *v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rbp
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rax
  _QWORD *v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // r15
  __int64 v75; // rax
  _QWORD *v76; // rax
  __int64 v77; // rdx
  int v78; // eax
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // r15
  __int64 v82; // rdx
  void *v83; // rdi
  _WORD **v84; // rax
  unsigned __int8 *v85; // [rsp+8h] [rbp-F0h]
  __int64 v86; // [rsp+10h] [rbp-E8h]
  __int64 v87; // [rsp+18h] [rbp-E0h] BYREF
  __int64 v88; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v89; // [rsp+28h] [rbp-D0h] BYREF
  __int64 v90; // [rsp+30h] [rbp-C8h] BYREF
  unsigned int v91; // [rsp+38h] [rbp-C0h]
  __int64 v92; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v93; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v94; // [rsp+58h] [rbp-A0h]
  char v95; // [rsp+A8h] [rbp-50h]
  unsigned int v96; // [rsp+B0h] [rbp-48h]
  char v97; // [rsp+B4h] [rbp-44h]

  v87 = a3;
  v3 = *(_DWORD *)(*(_QWORD *)(*a1 + 4616) + 640LL * *(unsigned int *)(*a1 + 4624) - 640);
  if ( v3 <= 1 || v3 - 3 <= 2 )
    return 1;
  v7 = sub_15F1640(*a1, 1);
  v8 = (_BYTE *)v7;
  if ( !v7 )
    return 1;
  v9 = sub_17A6B10(*a1, v7, 0);
  v11 = v10;
  if ( (unsigned int)sub_178F000((__int64)a1, (__int64)v8, v87, v12, v13, v14) > 1 )
  {
    if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 89) & 4) != 0
      && (*(_BYTE *)(sub_168B6E0((__int64)a1) + 89) & 0x40) != 0
      && (*(_BYTE *)(v87 + 29) & 1) != 0 )
    {
      v19 = sub_B8C3D0(v87, (__int64)v8, v15, v16, v17, v18);
      v20 = (_WORD **)*v19;
      v21 = (_WORD *)(*v19 + 8LL * *((unsigned int *)v19 + 2));
      if ( *v19 < (unsigned __int64)v21 )
      {
        v22 = (_WORD *)*v19;
        while ( *(_WORD *)(*(_QWORD *)v22 + 36LL) != 163 )
        {
          v22 += 4;
          if ( v21 == v22 )
            return 1;
        }
        if ( v21 == v22 )
          return 1;
        goto LABEL_14;
      }
      if ( v20 != (_WORD **)v21 )
      {
        if ( *(_WORD *)(*(_QWORD *)v21 + 36LL) != 163 )
        {
          v84 = (_WORD **)(v21 + 4);
          while ( v84 != v20 )
          {
            v21 = *v84++;
            if ( v21[18] == 163 )
              goto LABEL_14;
          }
          return 1;
        }
LABEL_14:
        if ( !(unsigned __int8)sub_B7D390(v87, (__int64)&v90, 0, (__int64)v21) && !sub_B77A30((__int64)v8) )
        {
          v23 = sub_168B6C0((__int64)a1);
          if ( (unsigned int)sub_A7BFC0(v23, v8) == 3 )
          {
            v24 = sub_168B6C0((__int64)a1);
            v90 = v87;
            sub_1795280(v24 + 22776, &v90, v87, v25, v26, v27);
          }
        }
      }
    }
    return 1;
  }
  v28 = 3 - (v11 == 0);
  v90 = (*(__int64 (__fastcall **)(_BYTE *, double))(*(_QWORD *)v8 + 32LL))(v8, v9);
  v91 = a2;
  result = sub_1794090(a1 + 1, &v90, &v88);
  if ( !(_BYTE)result )
  {
    v30 = *((unsigned int *)a1 + 6);
    v31 = v88;
    v32 = (unsigned int)(*((_DWORD *)a1 + 4) + 1);
    v33 = 2 * v30;
    v34 = (unsigned int)(4 * v32);
    v89 = v88;
    if ( (unsigned int)v34 < 3 * (int)v30 )
    {
      if ( (int)v30 - *((_DWORD *)a1 + 5) - (int)v32 > (unsigned int)v30 >> 3 )
      {
LABEL_21:
        *((_DWORD *)a1 + 4) = v32;
        if ( *(_QWORD *)v31 != -4096 || *(_DWORD *)(v31 + 8) )
          --*((_DWORD *)a1 + 5);
        v35 = *a1;
        *(_QWORD *)v31 = v90;
        *(_DWORD *)(v31 + 8) = v91;
        sub_1606AE0((__int64)&v90, v28, a2, 4914, (__int64)v8, v35);
        v42 = (int)sub_178DFB0((__int64)a1, v87, v36, v37, v38, v39);
        if ( v95 )
        {
          v47 = v93;
          if ( !v93 )
          {
            v77 = v94;
            v78 = *(_DWORD *)(v94 + 14976);
            if ( v78 )
            {
              v79 = (unsigned int)(v78 - 1);
              *(_DWORD *)(v94 + 14976) = v79;
              v47 = *(unsigned __int8 **)(v77 + 8 * v79 + 14848);
              v80 = *((unsigned int *)v47 + 134);
              *v47 = 0;
              v81 = *((_QWORD *)v47 + 66);
              *((_DWORD *)v47 + 106) = 0;
              v82 = v81 + (v80 << 6);
              while ( v81 != v82 )
              {
                while ( 1 )
                {
                  v82 -= 64;
                  v83 = *(void **)(v82 + 24);
                  if ( v83 == (void *)(v82 + 40) )
                    break;
                  v86 = v82;
                  v85 = v47;
                  operator delete(v83);
                  v82 = v86;
                  v47 = v85;
                  if ( v81 == v86 )
                    goto LABEL_62;
                }
              }
LABEL_62:
              *((_DWORD *)v47 + 134) = 0;
            }
            else
            {
              v47 = (unsigned __int8 *)operator new(0x3A0u);
              *v47 = 0;
              *((_QWORD *)v47 + 12) = v47 + 112;
              *((_QWORD *)v47 + 16) = v47 + 144;
              *((_QWORD *)v47 + 20) = v47 + 176;
              *((_QWORD *)v47 + 24) = v47 + 208;
              *((_QWORD *)v47 + 28) = v47 + 240;
              *((_QWORD *)v47 + 32) = v47 + 272;
              *((_QWORD *)v47 + 36) = v47 + 304;
              *((_QWORD *)v47 + 40) = v47 + 336;
              *((_QWORD *)v47 + 44) = v47 + 368;
              *((_QWORD *)v47 + 48) = v47 + 400;
              *((_QWORD *)v47 + 52) = v47 + 432;
              *((_QWORD *)v47 + 13) = 0;
              v47[112] = 0;
              *((_QWORD *)v47 + 17) = 0;
              v47[144] = 0;
              *((_QWORD *)v47 + 21) = 0;
              v47[176] = 0;
              *((_QWORD *)v47 + 25) = 0;
              v47[208] = 0;
              *((_QWORD *)v47 + 29) = 0;
              v47[240] = 0;
              *((_QWORD *)v47 + 33) = 0;
              v47[272] = 0;
              *((_QWORD *)v47 + 37) = 0;
              v47[304] = 0;
              *((_QWORD *)v47 + 41) = 0;
              v47[336] = 0;
              *((_QWORD *)v47 + 45) = 0;
              v47[368] = 0;
              *((_QWORD *)v47 + 49) = 0;
              v47[400] = 0;
              *((_QWORD *)v47 + 53) = 0x800000000LL;
              *((_QWORD *)v47 + 66) = v47 + 544;
              *((_QWORD *)v47 + 67) = 0x600000000LL;
            }
            v93 = v47;
          }
          v47[*v47 + 1] = 2;
          v40 = (__int64 *)v93;
          v48 = *v93;
          v41 = (unsigned int)(v48 + 1);
          *v93 = v48 + 1;
          v40[v48 + 2] = v42;
        }
        else
        {
          if ( !v97 )
          {
LABEL_25:
            v45 = sub_178DFB0((__int64)a1, (__int64)v8, v40, v41, v43, v44);
            v46 = v45;
            if ( v95 )
            {
              sub_AE9DF0(&v93, v45, 2u);
            }
            else if ( v97 )
            {
              v53 = sub_168B9E0(&v90);
              v54 = v92;
              if ( v92 )
                v54 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v92 + 32LL))(v92);
              v89 = v54;
              v55 = sub_1587BC0(v53, &v89, v49, v50, v51, v52);
              sub_AE9DF0((unsigned __int8 **)(*v55 + 32LL * v96 + 8), v46, 2u);
            }
            sub_15F7200(&v90);
            if ( !(unsigned int)sub_B75A50(v87, 0) )
            {
              sub_1606AE0((__int64)&v90, v28, *(unsigned int *)(v87 + 24), 6283, (__int64)v8, *a1);
              sub_1795A40((__int64)&v90, &v87);
              sub_15F7200(&v90);
            }
            return v11 != 0;
          }
          v74 = sub_168B9E0(&v90);
          v75 = v92;
          if ( v92 )
            v75 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v92 + 32LL))(v92);
          v89 = v75;
          v76 = sub_1587BC0(v74, &v89, v70, v71, v72, v73);
          sub_AE9DF0((unsigned __int8 **)(*v76 + 32LL * v96 + 8), (int)v42, 2u);
        }
        if ( v95 )
        {
          sub_AE9DF0(&v93, 0, 2u);
        }
        else
        {
          if ( !v97 )
            goto LABEL_25;
          v65 = sub_168B9E0(&v90);
          v68 = v92;
          if ( v92 )
            v68 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v92 + 32LL))(v92);
          v89 = v68;
          v69 = sub_1587BC0(v65, &v89, v63, v64, v66, v67);
          sub_AE9DF0((unsigned __int8 **)(*v69 + 32LL * v96 + 8), 0, 2u);
        }
        if ( v95 )
        {
          sub_AE9DF0(&v93, v87, 0xAu);
        }
        else if ( v97 )
        {
          v58 = sub_168B9E0(&v90);
          v61 = v92;
          if ( v92 )
            v61 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v92 + 32LL))(v92);
          v89 = v61;
          v62 = sub_1587BC0(v58, &v89, v56, v57, v59, v60);
          sub_AE9DF0((unsigned __int8 **)(*v62 + 32LL * v96 + 8), v87, 0xAu);
        }
        goto LABEL_25;
      }
      v33 = v30;
    }
    sub_1799B60((__int64)(a1 + 1), v33, v32, v30, v34, v29);
    sub_1794090(a1 + 1, &v90, &v89);
    LODWORD(v32) = *((_DWORD *)a1 + 4) + 1;
    v31 = v89;
    goto LABEL_21;
  }
  return result;
}
