__int64 __fastcall sub_2148F90(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rbp
  size_t v5; // r12
  _DWORD **v6; // rdi
  unsigned int v7; // r15d
  unsigned __int8 v8; // r10
  const char *v9; // rax
  __int64 v10; // rbp
  unsigned int v11; // r10d
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r13
  void (*v17)(void); // rcx
  __int64 v18; // r9
  int v19; // edi
  __int64 v20; // r8
  int v21; // eax
  int v22; // r15d
  int v23; // esi
  __int64 v24; // rdi
  int v25; // eax
  int v26; // edx
  __int64 v27; // rdi
  _DWORD **v28; // rdi
  __int64 v29; // r15
  _BYTE *v30; // rdx
  char v31; // r8
  unsigned int v32; // ecx
  unsigned int v33; // eax
  unsigned int v34; // r9d
  int v35; // eax
  bool v36; // zf
  int v37; // r10d
  int v38; // edx
  int v39; // ecx
  int v40; // ecx
  int v41; // eax
  unsigned int v42; // eax
  unsigned int v43; // r9d
  int v44; // eax
  unsigned int v45; // r8d
  unsigned int v46; // eax
  const char *v47; // rax
  __int64 v48; // rdi
  int v49; // eax
  void *v50; // r13
  size_t v51; // r14
  __int64 v52; // rax
  __int64 v53; // rbx
  unsigned __int64 v54; // rax
  void (__fastcall *v55)(__int64, unsigned __int64, _QWORD); // [rsp+8h] [rbp-A0h]
  unsigned int v56; // [rsp+10h] [rbp-98h]
  signed int v57; // [rsp+18h] [rbp-90h]
  unsigned __int8 v58; // [rsp+1Fh] [rbp-89h]
  unsigned __int8 v59; // [rsp+27h] [rbp-81h] BYREF
  __int64 v60; // [rsp+28h] [rbp-80h] BYREF
  void *v61; // [rsp+30h] [rbp-78h] BYREF
  size_t v62; // [rsp+38h] [rbp-70h]
  const char *v63; // [rsp+40h] [rbp-68h] BYREF
  __int64 v64; // [rsp+48h] [rbp-60h]
  void *v65[2]; // [rsp+50h] [rbp-58h]
  unsigned int v66; // [rsp+60h] [rbp-48h]

  v2 = *(_QWORD *)(a1 + 8);
  if ( (unsigned int)(**(_DWORD **)(v2 + 48) - 2) > 1 )
  {
    v9 = "expected identifier in directive";
    goto LABEL_15;
  }
  v3 = sub_2153C00(v2);
  if ( *(_DWORD *)v3 == 2 )
  {
    v4 = *(_QWORD *)(v3 + 8);
    v5 = *(_QWORD *)(v3 + 16);
  }
  else
  {
    v10 = *(_QWORD *)(v3 + 16);
    v5 = 0;
    if ( v10 )
    {
      v5 = v10 - 1;
      if ( v10 != 1 )
        v5 = v10 - 2;
      v10 = 1;
    }
    v4 = *(_QWORD *)(v3 + 8) + v10;
  }
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 152LL))(*(_QWORD *)(a1 + 8));
  v6 = *(_DWORD ***)(a1 + 8);
  if ( *v6[6] != 26 )
  {
    v59 = 0;
    v7 = -1073741760;
    v61 = nullptr;
    v62 = 0;
    goto LABEL_6;
  }
  (*((void (__fastcall **)(_DWORD **))*v6 + 19))(v6);
  v2 = *(_QWORD *)(a1 + 8);
  if ( **(_DWORD **)(v2 + 48) != 3 )
  {
    v9 = "expected string in directive";
    goto LABEL_15;
  }
  v13 = sub_2153C00(v2);
  v14 = *(_QWORD *)(a1 + 8);
  v15 = *(_QWORD *)(v13 + 16);
  if ( !v15 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 152LL))(v14);
    goto LABEL_22;
  }
  v16 = v15 - 1;
  v17 = *(void (**)(void))(*(_QWORD *)v14 + 152LL);
  if ( v15 == 1 )
  {
    v17();
LABEL_22:
    v19 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 64;
    v23 = 0;
    goto LABEL_23;
  }
  v29 = *(_QWORD *)(v13 + 8);
  v17();
  if ( v29 + v16 == v29 + 1 )
    goto LABEL_22;
  v30 = (_BYTE *)(v29 + 1);
  v31 = 0;
  v32 = 0;
  while ( 2 )
  {
    switch ( *v30 )
    {
      case 'D':
        BYTE1(v32) |= 1u;
        goto LABEL_49;
      case 'a':
        goto LABEL_49;
      case 'b':
        if ( (v32 & 8) != 0 )
          goto LABEL_102;
        v32 = v32 & 0xFFFFFFFA | 1;
        goto LABEL_49;
      case 'd':
        if ( (v32 & 1) != 0 )
        {
LABEL_102:
          v47 = "conflicting section flags 'b' and 'd'.";
LABEL_81:
          v48 = *(_QWORD *)(a1 + 8);
          LOWORD(v66) = 259;
          v63 = v47;
          v11 = sub_21543E0(v48, &v63, 0, 0);
          if ( !(_BYTE)v11 )
          {
            v7 = -1073741760;
            goto LABEL_32;
          }
          return v11;
        }
        v33 = v32;
        LOBYTE(v33) = v32 & 0x7F;
        v34 = v33;
        v35 = v33 | 0xC;
        v18 = v34 | 8;
        v36 = (v32 & 0x20) == 0;
        v32 = v18;
        if ( v36 )
          v32 = v35;
LABEL_49:
        if ( (_BYTE *)(v29 + v16) != ++v30 )
          continue;
        if ( !v32 )
          goto LABEL_22;
        v22 = v32 & 2;
        if ( (v32 & 2) != 0 )
          v22 = 536870944;
        v37 = v32 & 5;
        v18 = v32 & 0x20;
        v20 = v32 & 0x40;
        v23 = v32 & 0x10;
        v21 = v32 & 0x200;
        v38 = v32 & 0x100;
        v19 = v32 & 0x80;
        if ( (v32 & 8) != 0 )
          v22 |= 0x40u;
        v39 = v22;
        if ( v37 == 1 )
        {
          LOBYTE(v39) = v22 | 0x80;
          v22 = v39;
        }
        v40 = v22;
        if ( (_DWORD)v18 )
        {
          BYTE1(v40) = BYTE1(v22) | 8;
          v22 = v40;
        }
        if ( v38 )
        {
LABEL_60:
          v22 |= 0x2000000u;
          goto LABEL_25;
        }
LABEL_23:
        if ( v5 > 5 && *(_DWORD *)v4 == 1650811950 && *(_WORD *)(v4 + 4) == 26485 )
          goto LABEL_60;
LABEL_25:
        if ( !(_DWORD)v20 )
          v22 |= 0x40000000u;
        if ( !v19 )
          v22 |= 0x80000000;
        if ( v23 )
          v22 |= 0x10000000u;
        v7 = v21 | v22;
LABEL_32:
        v24 = *(_QWORD *)(a1 + 8);
        v25 = **(_DWORD **)(v24 + 48);
        v59 = 0;
        v61 = nullptr;
        v62 = 0;
        if ( v25 != 26 )
          goto LABEL_6;
        LODWORD(v63) = 0;
        v64 = 0;
        v66 = 1;
        *(_OWORD *)v65 = 0;
        sub_2128A20(v24 + 48, (__int64)&v63, (char *)&dword_0 + 1, 1u, v20, v18);
        if ( v65[0] != &byte_6 )
        {
          if ( v66 > 0x40 )
            goto LABEL_38;
          goto LABEL_40;
        }
        if ( *(_DWORD *)v64 != 1902734965 || (v26 = 0, *(_WORD *)(v64 + 4) != 25973) )
          v26 = 1;
        if ( !v26 )
        {
          if ( v66 > 0x40 && v65[1] )
            operator delete[](v65[1]);
          goto LABEL_6;
        }
        if ( v66 > 0x40 )
        {
LABEL_38:
          if ( v65[1] )
            operator delete[](v65[1]);
        }
LABEL_40:
        v27 = *(_QWORD *)(a1 + 8);
        v59 = 2;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 152LL))(v27);
        v28 = *(_DWORD ***)(a1 + 8);
        if ( *v28[6] != 2 )
        {
          v63 = "expected comdat type such as 'discard' or 'largest' after protection bits";
          LOWORD(v66) = 259;
          return (unsigned int)sub_21543E0(v28, &v63, 0, 0);
        }
        if ( (unsigned __int8)sub_2148720(a1, (char *)&v59) )
          return 1;
        v28 = *(_DWORD ***)(a1 + 8);
        if ( *v28[6] != 26 )
        {
          v63 = "expected comma in directive";
          LOWORD(v66) = 259;
          return (unsigned int)sub_21543E0(v28, &v63, 0, 0);
        }
        v7 |= 0x1000u;
        (*((void (__fastcall **)(_DWORD **))*v28 + 19))(v28);
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, void **))(**(_QWORD **)(a1 + 8) + 160LL))(
                *(_QWORD *)(a1 + 8),
                &v61) )
        {
LABEL_6:
          v60 = 0xFFFFFFFFLL;
          v8 = sub_2154910(a1, &v60);
          if ( !v8 )
          {
            v2 = *(_QWORD *)(a1 + 8);
            if ( **(_DWORD **)(v2 + 48) == 9 )
            {
              if ( (v7 & 0x20) != 0 )
              {
                v49 = *(_DWORD *)(*(_QWORD *)(v2 + 16) + 56LL);
                if ( v49 == 1 || v49 == 35 )
                  v7 |= 0x20000u;
              }
              v58 = v8;
              v50 = v61;
              v56 = v60;
              v51 = v62;
              v57 = v59;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 152LL))(v2);
              v52 = *(_QWORD *)(a1 + 8);
              v53 = *(_QWORD *)(v52 + 24);
              v55 = *(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v53 + 176LL);
              v54 = sub_210A9A0(*(_QWORD *)(v52 + 16), (_BYTE *)v4, v5, v7, v50, v51, v57, v56);
              v55(v53, v54, 0);
              return v58;
            }
            v9 = "unexpected token in directive";
LABEL_15:
            v63 = v9;
            LOWORD(v66) = 259;
            return (unsigned int)sub_21543E0(v2, &v63, 0, 0);
          }
          return 1;
        }
        v28 = *(_DWORD ***)(a1 + 8);
        v63 = "expected identifier in directive";
        LOWORD(v66) = 259;
        return (unsigned int)sub_21543E0(v28, &v63, 0, 0);
      case 'i':
        BYTE1(v32) |= 2u;
        goto LABEL_49;
      case 'n':
        v32 = v32 & 0xFFFFFFDB | 0x20;
        goto LABEL_49;
      case 'r':
        v46 = v32;
        v45 = v32;
        LOBYTE(v46) = v32 | 0x80;
        if ( (v32 & 2) == 0 )
        {
          LOBYTE(v45) = v32 | 0x88;
          v46 = v45;
        }
        v31 = 0;
        v32 = v46;
        if ( (v46 & 0x20) == 0 )
          v32 = v46 | 4;
        goto LABEL_49;
      case 's':
        v42 = v32;
        LOBYTE(v42) = v32 & 0x7F;
        v43 = v42;
        v44 = v42 | 0x1C;
        v18 = v43 | 0x18;
        v36 = (v32 & 0x20) == 0;
        v32 = v18;
        if ( v36 )
          v32 = v44;
        goto LABEL_49;
      case 'w':
        LOBYTE(v32) = v32 & 0x7F;
        v31 = 1;
        goto LABEL_49;
      case 'x':
        v41 = v32 | 2;
        v18 = v32 | 6;
        if ( (v32 & 0x20) == 0 )
          v41 = v32 | 6;
        v32 = v41;
        LOBYTE(v41) = v41 | 0x80;
        if ( !v31 )
          v32 = v41;
        goto LABEL_49;
      case 'y':
        LOBYTE(v32) = v32 | 0xC0;
        goto LABEL_49;
      default:
        v47 = "unknown flag";
        goto LABEL_81;
    }
  }
}
