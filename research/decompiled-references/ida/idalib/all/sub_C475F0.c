__int64 __fastcall sub_C475F0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  unsigned __int64 v4; // rbp
  __int64 v6; // r15
  __int64 v7; // rdi
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rdi
  unsigned __int64 v14; // r14
  bool v15; // al
  __int64 v16; // rax
  int v17; // r12d
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned int v21; // eax
  __int64 v22; // rdx
  unsigned int v23; // r12d
  __int64 v25; // r14
  _QWORD *v26; // r13
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  int v30; // r9d
  unsigned int v31; // eax
  unsigned __int8 **v32; // rbx
  unsigned __int8 v33; // al
  char v34; // al
  void **v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  int v39; // eax
  char v40; // r13
  int v41; // r12d
  unsigned __int64 v42; // r13
  unsigned int v43; // ebp
  int v44; // r15d
  __int64 v45; // rcx
  unsigned int v46; // eax
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rdx
  void *v50; // rax
  unsigned int v51; // eax
  unsigned int v52; // eax
  void *v53; // r13
  unsigned int v54; // r15d
  unsigned __int64 v55; // rax
  unsigned int v56; // r15d
  __int64 v57; // rdi
  __int64 v58; // rax
  unsigned __int64 v59; // r12
  _QWORD *v60; // rax
  void *v61; // rdx
  __int64 v62; // r14
  __int64 v63; // rdi
  unsigned __int8 **v64; // rax
  unsigned __int8 **v65; // rax
  unsigned __int8 **v66; // rbx
  __int64 v67; // [rsp+8h] [rbp-110h]
  __int64 v68; // [rsp+8h] [rbp-110h]
  __int64 v69; // [rsp+8h] [rbp-110h]
  unsigned int v70; // [rsp+14h] [rbp-104h]
  unsigned __int8 v72; // [rsp+2Bh] [rbp-EDh]
  unsigned __int8 v73; // [rsp+2Bh] [rbp-EDh]
  unsigned int v74; // [rsp+2Ch] [rbp-ECh]
  char v75; // [rsp+2Ch] [rbp-ECh]
  void *v76; // [rsp+40h] [rbp-D8h] BYREF
  unsigned __int8 **v77; // [rsp+48h] [rbp-D0h] BYREF
  void *v78; // [rsp+50h] [rbp-C8h] BYREF
  unsigned int v79; // [rsp+58h] [rbp-C0h]
  char v80; // [rsp+5Ch] [rbp-BCh]
  void *v81; // [rsp+60h] [rbp-B8h] BYREF
  unsigned int v82; // [rsp+68h] [rbp-B0h]
  void *v83; // [rsp+70h] [rbp-A8h] BYREF
  unsigned int v84; // [rsp+78h] [rbp-A0h]
  void *v85; // [rsp+80h] [rbp-98h] BYREF
  unsigned int v86; // [rsp+88h] [rbp-90h]
  void *v87; // [rsp+90h] [rbp-88h] BYREF
  unsigned int v88; // [rsp+98h] [rbp-80h]
  void *v89; // [rsp+A0h] [rbp-78h] BYREF
  unsigned int v90; // [rsp+A8h] [rbp-70h]
  char v91; // [rsp+ACh] [rbp-6Ch]

  v3 = a1 + 56;
  v4 = a2;
  v6 = *(_QWORD *)(a1 + 32);
  if ( a1 + 56 == v6 )
    goto LABEL_17;
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(v6 + 24);
      if ( !v7 )
        goto LABEL_16;
      if ( (*(_BYTE *)(v7 + 28) & 0x7Fu) - 35 > 3 )
        goto LABEL_16;
      v8 = *(_QWORD *)(v7 + 40);
      if ( (v8 & 7) != 0 )
        goto LABEL_16;
      v9 = v8 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v9 )
        goto LABEL_16;
      v10 = *(_QWORD *)(v9 + 16);
      if ( *(_DWORD *)v10 != 8 || *(_QWORD *)(v10 + 16) != 0x657461636F6C6C61LL )
        goto LABEL_16;
      v11 = *(_QWORD *)(sub_B8C1B0(v7 + 72) + 16);
      if ( (v11 & 4) != 0 )
        v12 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF8LL);
      else
        v12 = v11 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v12 )
        BUG();
      if ( (*(_BYTE *)(v12 - 36) & 0x7Fu) - 60 > 1 )
        goto LABEL_16;
      v13 = v12 - 64;
      v70 = *(_DWORD *)(v12 - 24) & 7;
      if ( (*(_QWORD *)(v12 - 24) & 7) == 0 )
        break;
      sub_B8EC80(v13);
      v6 = *(_QWORD *)(v6 + 16);
      if ( v3 == v6 )
        goto LABEL_17;
    }
    v14 = *(_QWORD *)(v12 - 24) & 0xFFFFFFFFFFFFFFF8LL;
    v67 = *(_QWORD *)(v12 + 104);
    v15 = sub_B8EC80(v13);
    if ( v14 )
    {
      if ( v15 )
      {
        v16 = *(_QWORD *)(v14 + 16);
        if ( *(_DWORD *)v16 == 9 )
        {
          a2 = 0x6F7461636F6C6C61LL;
          if ( *(_QWORD *)(v16 + 16) == 0x6F7461636F6C6C61LL
            && *(_BYTE *)(v16 + 24) == 114
            && *(_DWORD *)v67
            && (*(_DWORD *)(v67 + 8) & 0x7FFFFFFF) == 1 )
          {
            break;
          }
        }
      }
    }
LABEL_16:
    v6 = *(_QWORD *)(v6 + 16);
    if ( v3 == v6 )
      goto LABEL_17;
  }
  v25 = *(_QWORD *)(v67 + 16);
  v68 = *(_QWORD *)(v6 + 40);
  if ( !*(_DWORD *)(v6 + 128) )
  {
LABEL_17:
    v17 = *(char *)(sub_E32240(a1) + 1);
    v21 = sub_C00A40(v4, a2, v18, v19, v20);
    v22 = ((v17 >> 31) & 9u) + 2445;
    v23 = 0;
    sub_E33C80(a1, v21, v22, 0);
    return v23;
  }
  v26 = (_QWORD *)(v25 & 0xFFFFFFFFFFFFFFF0LL);
  v23 = sub_F62670(*(_QWORD *)(v25 & 0xFFFFFFFFFFFFFFF0LL), 0);
  if ( (_BYTE)v23
    || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*v26 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 <= 1 )
  {
    v23 = 0;
    v31 = sub_C00A40(v4, 0, v27, v28, v29);
    v32 = (unsigned __int8 **)sub_E33C80(a1, v31, 2450, 0);
    v33 = sub_F62670(*v26, 0);
    if ( v32 )
    {
      sub_C11320(v32, v33 ^ 1u);
      sub_AE9DF0(v32, v25, 8u);
    }
    return v23;
  }
  v34 = *(_BYTE *)(v4 + 2);
  v35 = &v78;
  v79 = 1;
  v78 = nullptr;
  v80 = 0;
  if ( (unsigned __int8)sub_C47260(
                          *(_QWORD *)(v4 + 8 * (((v34 & 8) != 0) + 1LL) + 32),
                          (__int64)&v78,
                          a1,
                          v28,
                          v29,
                          v30) )
  {
    v39 = *(_DWORD *)(v4 + 16);
    v40 = 0;
    if ( v39 != 1 )
    {
      v72 = v23;
      v41 = 0;
      v42 = v4;
      v43 = 1;
      v44 = v39;
      do
      {
        v45 = v43++;
        v35 = *(void ***)(v42 + 8 * (v45 + ((*(_BYTE *)(v42 + 2) & 8) != 0)) + 40);
        sub_C3FAF0(a1, (unsigned __int64)v35, v36, v45, v38);
        v41 |= sub_F632A0(*(_QWORD *)(*(_QWORD *)(v42 + 8) & 0xFFFFFFFFFFFFFFF0LL));
      }
      while ( v44 != v43 );
      v4 = v42;
      v40 = v41;
      v23 = v72;
    }
    v76 = nullptr;
    v46 = sub_C00A40(v4, (__int64)v35, v36, v37, v38);
    v73 = sub_C0FE30(a1, v46, v25, (__int64 *)&v76, 0);
    if ( v73 )
    {
      v82 = 1;
      v81 = nullptr;
      v84 = 1;
      v83 = nullptr;
      v86 = v79;
      if ( v79 > 0x40 )
        sub_2205470(&v85, v76, 0);
      else
        v85 = v76;
      sub_2208490(&v78, &v85, &v81, &v83);
      v49 = v84;
      v74 = v84;
      if ( v84 <= 0x40 )
      {
        v50 = v83;
        goto LABEL_41;
      }
      v49 = v74 - (unsigned int)sub_2206780(&v83);
      if ( (unsigned int)v49 <= 0x40 )
      {
        v50 = *(void **)v83;
LABEL_41:
        if ( !v50 )
        {
          v75 = v40 ^ 1;
          v53 = v81;
          if ( v82 > 0x40 )
            v53 = *(void **)v81;
          v54 = v79;
          if ( v79 > 0x40 )
          {
            v70 = v54 - sub_2206780(&v78);
          }
          else if ( v78 )
          {
            _BitScanReverse64(&v55, (unsigned __int64)v78);
            v70 = 64 - (v55 ^ 0x3F);
          }
          if ( (*(_BYTE *)(v4 + 3) & 1) != 0 )
          {
            v56 = *(_DWORD *)(v4 + 24);
          }
          else if ( *(char *)(v4 + 2) >= 0
                 || (v56 = sub_EEB7E0(*(_QWORD *)(v4 + 8 * (((*(_BYTE *)(v4 + 2) & 8) != 0) + 1LL) + 32))) == 0 )
          {
            v56 = sub_EEB7E0(*(_QWORD *)(v4 + 32));
            if ( !v56 )
            {
              if ( *(_DWORD *)(v4 + 16) )
              {
                v63 = *(_QWORD *)(v4 + 8 * (((*(_BYTE *)(v4 + 2) & 8) != 0) + 1LL) + 32);
                if ( v63 )
                  v56 = sub_EEB7E0(v63);
              }
            }
          }
          if ( (unsigned int)sub_F56FC0(*(_QWORD *)(a1 + 16)) < v70 || (unsigned __int64)v53 > 0xFFFFFFFF )
          {
            if ( v75 )
            {
              v64 = (unsigned __int8 **)sub_E33C80(a1, v56, 2452, 0);
              if ( v64 )
                sub_AE9DF0(v64, (__int64)v53, 3u);
              goto LABEL_55;
            }
            v57 = *(_QWORD *)(a1 + 16);
          }
          else
          {
            v57 = *(_QWORD *)(a1 + 16);
            v58 = *(_QWORD *)(v57 + 2320);
            if ( (unsigned __int64)v53 <= *(unsigned int *)(v58 + 136) )
            {
              v59 = sub_A70F70(v57, v25, (__int64)&v81, nullptr, 0, 0);
              v60 = sub_C25AB0(a1, v68, v59, a3);
              LODWORD(v61) = (_DWORD)v81;
              v62 = (__int64)v60;
              if ( v82 > 0x40 )
                v61 = *(void **)v81;
              BYTE4(v89) &= ~1u;
              LODWORD(v89) = 0;
              sub_A51400((__int64)&v89, 0, (int)v61);
              sub_A4FD20(v62, (__int64)&v89);
              if ( (unsigned int)v89 > 1 )
                sub_A4F8E0((int *)&v89);
              sub_C123F0(a3, a1, v4, *(_QWORD *)(v59 & 0xFFFFFFFFFFFFFFF0LL));
              v23 = v73;
              goto LABEL_55;
            }
            if ( v75 )
            {
              v69 = *(unsigned int *)(v58 + 136);
              v65 = (unsigned __int8 **)sub_E33C80(a1, v56, 2447, 0);
              v66 = v65;
              if ( v65 )
              {
                sub_AE9DF0(v65, (__int64)v53, 3u);
                sub_AE9DF0(v66, v69, 3u);
              }
              goto LABEL_55;
            }
          }
          sub_C243E0(a3, v57, *(_QWORD *)(v4 + 8));
          v23 = v73;
          goto LABEL_55;
        }
      }
      v51 = sub_C00A40(v4, (__int64)&v85, v49, v47, v48);
      v77 = (unsigned __int8 **)sub_E33C80(a1, v51, 2463, 0);
      if ( v77 )
        sub_C1A2B0(&v77, (__int64)&v78);
      v88 = v86;
      if ( v86 > 0x40 )
      {
        sub_2205510(&v87);
        v52 = v88;
        v88 = 0;
        v91 = 1;
        v90 = v52;
        v89 = v87;
        if ( v77 )
        {
LABEL_46:
          sub_C1A2B0(&v77, (__int64)&v89);
          if ( v77 )
            sub_AE9DF0(v77, v25, 8u);
          v52 = v90;
        }
        if ( v52 > 0x40 && v89 )
          operator delete[](v89);
      }
      else
      {
        v90 = v86;
        v88 = 0;
        v87 = v85;
        v89 = v85;
        v91 = 1;
        if ( v77 )
          goto LABEL_46;
      }
      if ( v88 > 0x40 && v87 )
        operator delete[](v87);
LABEL_55:
      if ( v86 > 0x40 && v85 )
        operator delete[](v85);
      if ( v84 > 0x40 && v83 )
        operator delete[](v83);
      if ( v82 > 0x40 && v81 )
        operator delete[](v81);
    }
  }
  if ( v79 > 0x40 && v78 )
    operator delete[](v78);
  return v23;
}
