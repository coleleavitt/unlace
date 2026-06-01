__int64 __fastcall sub_1BDAA60(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5,
        char a6,
        double a7,
        char a8)
{
  __int64 *v9; // rbp
  __int64 v10; // r15
  char v11; // bl
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r15
  unsigned __int64 v15; // r10
  __int64 v16; // rax
  unsigned int v17; // eax
  __int64 result; // rax
  int v19; // eax
  bool v20; // al
  __int64 v21; // rdx
  unsigned int v22; // eax
  unsigned int v23; // eax
  __int64 v24; // rax
  __int64 v25; // r12
  __int64 *v26; // r15
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rsi
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  unsigned int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  unsigned int v47; // eax
  __int64 v48; // rax
  __int64 v50; // [rsp+8h] [rbp-110h]
  __int64 v51; // [rsp+8h] [rbp-110h]
  __int64 v52; // [rsp+10h] [rbp-108h]
  char v53; // [rsp+10h] [rbp-108h]
  char v54; // [rsp+10h] [rbp-108h]
  __int64 v55; // [rsp+10h] [rbp-108h]
  char v56; // [rsp+18h] [rbp-100h]
  __int64 v57; // [rsp+18h] [rbp-100h]
  char v58; // [rsp+18h] [rbp-100h]
  unsigned __int64 v59; // [rsp+20h] [rbp-F8h]
  __int64 v60; // [rsp+28h] [rbp-F0h]
  __int64 v61; // [rsp+38h] [rbp-E0h] BYREF
  __int64 v62; // [rsp+44h] [rbp-D4h] BYREF
  char v63; // [rsp+4Ch] [rbp-CCh]
  unsigned __int8 *v64; // [rsp+50h] [rbp-C8h] BYREF
  unsigned __int64 v65; // [rsp+58h] [rbp-C0h]

  v9 = a2;
  v10 = a2[1];
  v61 = a3;
  *a4 = 1;
  v11 = a8 & (a6 ^ 1);
  if ( v11 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                   + 16LL)
        & 0xF7) != 0x22 )
    {
      a2 = *(__int64 **)(a1 + 248);
      v53 = a6;
      v19 = sub_BFE6E0((__int64)v9, (unsigned __int64)a2, 2, a7);
      a6 = v53;
      if ( v19 == 1 )
      {
        a2 = *(__int64 **)(*(_QWORD *)(a1 + 248) + 18640LL);
        v20 = sub_1BC70C0(v9[1], (__int64)a2);
        a6 = v53;
        if ( v20 )
        {
          sub_168B9B0((__int64)&v64, a1 + 8, 6984);
          sub_AE9DF0(&v64, v61, 8u);
          v63 = 1;
          v62 = sub_EEC8C0((unsigned __int64)v9, v61, a7);
          sub_AEC610((__int64 *)&v64, &v62);
          v47 = sub_C00A40((unsigned __int64)v9, (__int64)&v62, v44, v45, v46);
          sub_18CAED0(a1, v47, v9, (__int64)&v64);
          a2 = (__int64 *)v64;
          a6 = v53;
          if ( v64 && v65 )
          {
            sub_1580C40(v65, (unsigned __int64)v64);
            a6 = v53;
          }
        }
        else
        {
          v22 = *(_DWORD *)(*(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 640);
          if ( v22 != 3 && v22 > 1 )
          {
            v23 = sub_C00A40((unsigned __int64)v9, (__int64)a2, v21, (__int64)a4, a5);
            sub_168B9F0((__int64)&v64, (__int64 *)(a1 + 8), v23, 0x1BE5u, 0);
            v57 = sub_1605D30((__int64)&v64, &v61);
            a2 = &v62;
            v62 = sub_EEC8C0((unsigned __int64)v9, (__int64)&v61, a7);
            sub_1587DB0(v57, &v62);
            sub_15F7200(&v64);
            a6 = v53;
          }
        }
      }
    }
  }
  v12 = *(_QWORD *)(v61 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v12 + 16) != 42 )
  {
    v54 = a6;
    v24 = sub_1BC7590(*(_QWORD *)(v61 & 0xFFFFFFFFFFFFFFF0LL), (__int64)a2, v12, (__int64)a4);
    a6 = v54;
    v12 = v24;
    if ( !v24 )
    {
      v25 = *(_QWORD *)(v61 & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v25 + 16) != 34 )
      {
        v25 = sub_1BC7620(*(_QWORD *)(v61 & 0xFFFFFFFFFFFFFFF0LL), (__int64)a2, 0, (__int64)a4);
        if ( !v25 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v61 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                        + 16LL) == 11
            && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                        + 16LL) != 11 )
          {
            *a4 = 42;
          }
          goto LABEL_12;
        }
      }
      v26 = (__int64 *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
      v27 = *v26;
      v28 = *v26;
      v29 = *v26;
      if ( *(_BYTE *)(*v26 + 16) == 34 )
        goto LABEL_24;
      v28 = sub_1BC7620(*v26, (__int64)a2, v29, (__int64)a4);
      v27 = v28;
      if ( v28 )
      {
        v29 = v28;
        if ( *(_BYTE *)(v28 + 16) != 34 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v28 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 34 )
          {
LABEL_58:
            v51 = v29;
            v48 = sub_1BC7620(v27, (__int64)a2, v29, v32);
            v37 = v51;
            if ( !v48 )
              goto LABEL_36;
            v29 = v48;
LABEL_30:
            v34 = *(_QWORD *)(*(_QWORD *)(v29 + 32) & 0xFFFFFFFFFFFFFFF0LL);
            v35 = (unsigned int)*(unsigned __int8 *)(v34 + 16) - 35;
            if ( (unsigned int)v35 > 1 )
              v34 = sub_F63050(v34, a2, v35, v32);
            if ( !(*(_BYTE *)(v34 + 19) >> 2) )
            {
              v36 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v34 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                              & 0xFFFFFFFFFFFFFFF0LL);
              if ( *(_BYTE *)(v36 + 16) == 13 && ((*(_WORD *)(v36 + 18) >> 3) & 0x1FF) == 0x1EA )
                return 0;
            }
            v37 = v27;
LABEL_36:
            if ( *(_BYTE *)(v27 + 16) == 42 || (v37 = sub_1BC7590(v27, (__int64)a2, v37, v32)) != 0 )
            {
              v38 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v37 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                              & 0xFFFFFFFFFFFFFFF0LL);
              if ( *(_BYTE *)(v38 + 16) == 13 && ((*(_WORD *)(v38 + 18) >> 3) & 0x1FF) == 0x1EB )
                return 0;
            }
            if ( sub_1BCC270(v25, (__int64)a2, v37, v32) )
              return 0;
            goto LABEL_12;
          }
          v28 = sub_F63050(v28, a2, v28, v32);
          v29 = v27;
          if ( !v28 )
          {
LABEL_29:
            if ( *(_BYTE *)(v27 + 16) == 34 )
              goto LABEL_30;
            goto LABEL_58;
          }
        }
LABEL_24:
        v30 = *(_QWORD *)(*(_QWORD *)(v28 + 32) & 0xFFFFFFFFFFFFFFF0LL);
        v31 = (unsigned int)*(unsigned __int8 *)(v30 + 16) - 35;
        if ( (unsigned int)v31 > 1 )
        {
          v50 = v29;
          v30 = sub_F63050(v30, a2, v29, v31);
          v29 = v50;
        }
        v32 = *(unsigned __int8 *)(v30 + 19);
        LOBYTE(v32) = (unsigned __int8)v32 >> 2;
        if ( !(_BYTE)v32 )
        {
          v33 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v30 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                          & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v33 + 16) == 13 && ((*(_WORD *)(v33 + 18) >> 3) & 0x1FF) == 0x1E9 )
            return 0;
        }
        goto LABEL_29;
      }
      *a4 = (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v26 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 11) + 40;
LABEL_12:
      if ( (unsigned int)sub_BFE6E0((__int64)v9, *(_QWORD *)(a1 + 248), 1, a7) )
        *a4 = 13;
      return 0;
    }
  }
  v13 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v13 + 16) != 42 )
  {
    v56 = a6;
    v52 = v12;
    v13 = sub_1BC7590(*(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL), (__int64)a2, v12, (__int64)a4);
    v12 = v52;
    a6 = v56;
    if ( !v13 )
      goto LABEL_12;
  }
  v14 = *(_QWORD *)(v12 + 32);
  v15 = *(_QWORD *)(v13 + 32) & 0xFFFFFFFFFFFFFFF0LL;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v15 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 48 )
  {
LABEL_6:
    if ( v11 )
    {
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v15 + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
         - 25 <= 1 )
      {
        v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v16 + 16) == 13 && ((*(_WORD *)(v16 + 18) >> 3) & 0x1FF) == 0x1B3 )
        {
          v17 = sub_C00A40((unsigned __int64)v9, (__int64)a2, v12, (__int64)a4, a5);
          sub_168B9F0((__int64)&v64, (__int64 *)(a1 + 8), v17, 0x15F4u, 0);
          v62 = sub_EEC8C0((unsigned __int64)v9, a1 + 8, a7);
          sub_1587DB0((__int64)&v64, &v62);
          sub_15F7200(&v64);
        }
      }
    }
    goto LABEL_12;
  }
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 48 )
    goto LABEL_12;
  v39 = *(_QWORD *)(v12 + 32);
  v58 = a6;
  v59 = *(_QWORD *)(v13 + 32) & 0xFFFFFFFFFFFFFFF0LL;
  v55 = *(_QWORD *)(v13 + 32);
  if ( sub_1BC70C0(v55, v39) )
    goto LABEL_12;
  v60 = sub_EEC8C0((unsigned __int64)v9, v39, a7);
  v43 = sub_C00A40((unsigned __int64)v9, v39, v40, v41, v42);
  a2 = (__int64 *)v55;
  result = sub_184FA20(a1, v55, v14, a8 != 0 ? 0x1507 : 0, a8 != 0 ? 0xBAC : 0, v43, v60, 0, a5, v58);
  if ( !(_BYTE)result )
  {
    *a4 = 7;
    v15 = v59;
    goto LABEL_6;
  }
  return result;
}
