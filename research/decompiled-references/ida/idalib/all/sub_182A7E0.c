__int64 __fastcall sub_182A7E0(__int64 *a1, __int64 a2, _DWORD *a3, __int64 a4, unsigned int a5, __m128i a6, double a7)
{
  __int64 v9; // r13
  int v12; // eax
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // r9
  __int64 v16; // rdx
  unsigned __int16 v17; // ax
  __int64 v18; // rax
  _DWORD *v19; // rcx
  __int64 v20; // r8
  _BYTE *v21; // rax
  unsigned __int8 v22; // bp
  unsigned int v23; // eax
  __int64 v24; // rsi
  char v25; // al
  char v26; // dl
  char v27; // r13
  char v28; // al
  _DWORD *v29; // rdx
  _BOOL8 (__fastcall *v30)(__int64, int); // rax
  _BOOL8 (__fastcall *v31)(__int64, int); // rdx
  __int16 v32; // bp
  __int64 v34; // rsi
  _BOOL8 (__fastcall *v35)(__int64, int); // rdx
  __int64 v36; // rax
  char v37; // bp
  __int64 v38; // rdx
  __int64 v39; // rcx
  char v40; // al
  char v41; // dl
  unsigned __int8 v42; // si
  int v43; // eax
  bool v44; // zf
  unsigned __int64 v45; // rax
  int v46; // eax
  __int64 v47; // rax
  _BOOL8 (__fastcall *v48)(__int64, int); // rax
  size_t v49; // rax
  size_t v50; // rbp
  __int64 v51; // rax
  __int64 v52; // rax
  _DWORD *v53; // [rsp+0h] [rbp-F8h]
  const void *v54; // [rsp+0h] [rbp-F8h]
  void *v55; // [rsp+0h] [rbp-F8h]
  void *v56; // [rsp+0h] [rbp-F8h]
  __int64 v57; // [rsp+8h] [rbp-F0h]
  unsigned int v58; // [rsp+18h] [rbp-E0h] BYREF
  int v59; // [rsp+1Ch] [rbp-DCh] BYREF
  void *s1; // [rsp+20h] [rbp-D8h] BYREF
  size_t n; // [rsp+28h] [rbp-D0h]
  _BYTE v62[200]; // [rsp+30h] [rbp-C8h] BYREF

  v9 = a5;
  v12 = *(unsigned __int16 *)(*(_QWORD *)(a2 + 72) + 8LL);
  if ( v12 != 320 )
  {
    v13 = (__int64)a1;
    v14 = a2;
    if ( (unsigned __int8)sub_15EB880(a2, v13, v12 == 301) )
      goto LABEL_3;
LABEL_63:
    *(_BYTE *)(a2 + 58) |= 1u;
    return 1;
  }
  if ( !(unsigned __int8)sub_15EAA10(a2, (__int64)a1, 0) )
    goto LABEL_63;
  v13 = (__int64)a1;
  v14 = a2;
  if ( !(unsigned __int8)sub_15EB980(a2, (__int64)a1, 1u) )
    goto LABEL_63;
LABEL_3:
  v16 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1[31] + 17448) + 260LL) - 14);
  v17 = *(_WORD *)(*(_QWORD *)(a2 + 72) + 8LL);
  if ( v17 == 311 )
  {
    *a3 = 17;
    goto LABEL_12;
  }
  if ( v17 > 0x137u )
  {
    if ( v17 == 350 )
    {
      *a3 = 1;
      goto LABEL_12;
    }
    if ( v17 > 0x15Eu )
    {
      if ( v17 == 371 )
      {
        *a3 = (unsigned int)v16 < 2 ? 7 : 0;
        goto LABEL_12;
      }
      if ( v17 > 0x173u )
      {
        if ( v17 == 377 )
        {
          *a3 = 3;
          goto LABEL_12;
        }
        if ( v17 == 401 )
        {
          *a3 = 4;
          goto LABEL_12;
        }
      }
      else
      {
        if ( v17 == 355 )
        {
          *a3 = 15;
          goto LABEL_12;
        }
        if ( v17 == 362 )
        {
          *a3 = 14;
          goto LABEL_12;
        }
      }
      return sub_182B0C0(v14, v13, v16);
    }
    if ( v17 != 320 )
    {
      if ( v17 <= 0x140u )
      {
        if ( v17 != 312 )
        {
          if ( v17 == 313 )
          {
            *a3 = 21;
            goto LABEL_12;
          }
          return sub_182B0C0(v14, v13, v16);
        }
        *a3 = 16;
LABEL_12:
        v18 = a1[31];
        v19 = *(_DWORD **)(v18 + 17448);
        v20 = *(_QWORD *)(v18 + 17456);
        v21 = (_BYTE *)a1[29];
        v22 = v21[60] & 0x10;
        if ( v22 )
        {
          if ( a4 )
          {
            v53 = v19;
            v57 = v20;
            v23 = sub_178EA20(a1[83], a4, nullptr, (__int64)v19, v20, v15);
            v20 = v57;
            v19 = v53;
            v9 = v23;
            v21 = (_BYTE *)a1[29];
          }
          v24 = (unsigned int)*a3;
          v25 = v21[89] & 4;
          if ( (unsigned int)v9 > 3 )
            goto LABEL_64;
          v26 = byte_2642548[v9];
          v27 = byte_2642544[v9];
          if ( v25 )
          {
            v28 = v26 & (v20 != 0);
            v29 = (_DWORD *)v20;
            v20 = (__int64)v19;
            v19 = v29;
          }
          else
          {
            v28 = v26 & (v19 != nullptr);
          }
          if ( v28 )
          {
            v30 = *(_BOOL8 (__fastcall **)(__int64, int))(*(_QWORD *)v19 + 760LL);
            if ( v30 == sub_102BB30 )
            {
              if ( (_DWORD)v24 )
                goto LABEL_59;
              v22 = 0;
              if ( !v27 )
              {
LABEL_25:
                v32 = (v22 << 7) | *(_WORD *)(a2 + 58) & 0x807F;
                *(_WORD *)(a2 + 58) = v32;
                *(_BYTE *)(a2 + 58) = v32 | 0x40;
                return 0;
              }
              if ( v20 )
              {
                v31 = *(_BOOL8 (__fastcall **)(__int64, int))(*(_QWORD *)v20 + 760LL);
                if ( v31 == v30 )
                {
                  v22 = 0;
                  goto LABEL_25;
                }
LABEL_97:
                v46 = ((__int64 (__fastcall *)(__int64))v31)(v20);
                goto LABEL_83;
              }
              goto LABEL_64;
            }
            v55 = (void *)v20;
            v46 = v30((__int64)v19, v24);
            if ( v46 || !v27 )
              goto LABEL_83;
            LODWORD(v24) = *a3;
            v20 = (__int64)v55;
          }
          else if ( !v27 )
          {
            goto LABEL_64;
          }
          if ( v20 )
          {
            v31 = *(_BOOL8 (__fastcall **)(__int64, int))(*(_QWORD *)v20 + 760LL);
            if ( v31 == sub_102BB30 )
            {
              if ( !(_DWORD)v24 )
              {
                v22 = 0;
                goto LABEL_25;
              }
              goto LABEL_59;
            }
            goto LABEL_97;
          }
LABEL_64:
          v22 = v24;
          goto LABEL_25;
        }
        v34 = (unsigned int)*a3;
        v35 = *(_BOOL8 (__fastcall **)(__int64, int))(*(_QWORD *)v19 + 760LL);
        if ( (v21[96] & 0x10) != 0 && (unsigned int)(v19[62] - 25) <= 1 && (_DWORD)v34 == 4 )
        {
          if ( v35 == sub_102BB30 )
          {
            if ( !v20 )
              goto LABEL_59;
            v48 = *(_BOOL8 (__fastcall **)(__int64, int))(*(_QWORD *)v20 + 760LL);
            if ( v48 == v35 )
              goto LABEL_59;
          }
          else
          {
            v56 = (void *)v20;
            v46 = v35((__int64)v19, 4);
            v20 = (__int64)v56;
            if ( !v56 || !v46 )
              goto LABEL_83;
            LODWORD(v34) = *a3;
            v48 = *(_BOOL8 (__fastcall **)(__int64, int))(*(_QWORD *)v56 + 760LL);
            if ( v48 == sub_102BB30 )
            {
LABEL_58:
              if ( !(_DWORD)v34 )
                goto LABEL_25;
              goto LABEL_59;
            }
          }
          v46 = ((__int64 (__fastcall *)(__int64))v48)(v20);
        }
        else
        {
          if ( v35 == sub_102BB30 )
            goto LABEL_58;
          v46 = v35((__int64)v19, v34);
        }
LABEL_83:
        if ( v46 == 2 )
        {
          *a3 = 0;
          v22 = 0;
          goto LABEL_25;
        }
        if ( v46 == 3 )
        {
          sub_168B9F0((__int64)v62, a1 + 1, *(_DWORD *)(a2 + 24), 0x156Cu, 0);
          v47 = sub_15DD120((__int64)v62, a2);
          LODWORD(s1) = 0;
          sub_1587D10(v47, (int *)&s1);
          sub_15F7200(v62);
LABEL_86:
          v22 = *(_BYTE *)a3;
          goto LABEL_25;
        }
        if ( v46 != 1 )
          goto LABEL_86;
LABEL_59:
        sub_168B9F0((__int64)v62, a1 + 1, *(_DWORD *)(a2 + 24), 0x1A09u, 0);
        v36 = sub_15DD120((__int64)v62, a2);
        LODWORD(s1) = 0;
        sub_1587D10(v36, (int *)&s1);
        sub_15F7200(v62);
        if ( a4 )
        {
          v37 = sub_B72F20(a4);
          v40 = sub_B748A0(a4, (__int64)&s1, v38, v39);
          v41 = v37;
          v42 = v40;
        }
        else
        {
          v42 = 0;
          v41 = 0;
        }
        v43 = sub_A64670(a1[31], v42, v41, 0);
        *a3 = v43;
        v22 = v43;
        goto LABEL_25;
      }
      if ( v17 == 321 )
      {
        *a3 = 22;
        goto LABEL_12;
      }
      if ( v17 == 325 )
      {
        *a3 = 8;
        goto LABEL_12;
      }
      return sub_182B0C0(v14, v13, v16);
    }
    v44 = *(_WORD *)(a2 + 56) == 0;
    v58 = 128;
    v45 = 128;
    if ( v44 )
    {
LABEL_81:
      _BitScanReverse64(&v45, v45);
      *a3 = 81 - (v45 ^ 0x3F);
      goto LABEL_12;
    }
    if ( (unsigned __int8)sub_16211A0(a1, a2, *(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFFCLL, &v58, 0xFFFFFFFFLL, 0) )
    {
      v45 = v58;
      if ( *(_WORD *)(a2 + 56) )
      {
        if ( v58 - 32 > 0xFFE0 )
        {
          *(_BYTE *)(a2 + 58) |= 1u;
          sub_168B9F0((__int64)v62, a1 + 1, *(_DWORD *)(a2 + 24), 0xBEEu, 0);
          v51 = sub_1588370((__int64)v62, &v58);
          LODWORD(s1) = 32;
          v52 = sub_1587D10(v51, (int *)&s1);
          v59 = (int)&stru_10000;
          sub_1587D10(v52, &v59);
          sub_15F7200(v62);
          return 1;
        }
      }
      else if ( !v58 )
      {
LABEL_116:
        *(_BYTE *)(a2 + 58) |= 1u;
        sub_168B9F0((__int64)v62, a1 + 1, *(_DWORD *)(a2 + 24), 0xBF1u, 0);
        sub_15F7200(v62);
        return 1;
      }
      if ( (v58 & (v58 - 1LL)) == 0 )
        goto LABEL_81;
      goto LABEL_116;
    }
LABEL_47:
    *(_BYTE *)(a2 + 58) |= 1u;
    return 1;
  }
  if ( v17 == 133 )
  {
    *a3 = 2;
    goto LABEL_12;
  }
  if ( v17 <= 0x85u )
  {
    switch ( v17 )
    {
      case 1u:
        *a3 = 18;
        goto LABEL_12;
      case 0u:
        *a3 = 19;
        goto LABEL_12;
      case 0x3Au:
        *a3 = 0;
        goto LABEL_12;
      case 0x75u:
        *a3 = 13;
        goto LABEL_12;
    }
    return sub_182B0C0(v14, v13, v16);
  }
  if ( v17 == 186 )
  {
    *a3 = (unsigned int)v16 >= 2 ? 6 : 0;
    goto LABEL_12;
  }
  if ( v17 <= 0xBAu )
  {
    if ( v17 == 171 )
    {
      *a3 = 11;
      goto LABEL_12;
    }
    if ( v17 == 184 )
    {
      *a3 = 20;
      goto LABEL_12;
    }
    return sub_182B0C0(v14, v13, v16);
  }
  if ( v17 == 298 )
  {
    *a3 = 5;
    goto LABEL_12;
  }
  if ( v17 == 301 )
  {
    s1 = nullptr;
    n = 0;
    if ( !(unsigned __int8)sub_181F2D0((__int64)a1, a2, &s1, nullptr, a6, a7) )
      goto LABEL_47;
    v49 = j__strlen("aapcs");
    v50 = n;
    v54 = s1;
    if ( v49 == n )
    {
      if ( !n || !memcmp(s1, "aapcs", n) )
      {
        *a3 = 9;
        goto LABEL_12;
      }
      if ( v50 != j__strlen("aapcs-vfp") )
        goto LABEL_120;
    }
    else
    {
      if ( v50 != j__strlen("aapcs-vfp") )
        goto LABEL_120;
      if ( !v50 )
        goto LABEL_96;
    }
    if ( !memcmp(v54, "aapcs-vfp", v50) )
    {
LABEL_96:
      *a3 = 10;
      goto LABEL_12;
    }
LABEL_120:
    *(_BYTE *)(a2 + 58) |= 1u;
    sub_168B9F0((__int64)v62, a1 + 1, *(_DWORD *)(a2 + 24), 0xFD2u, 0);
    sub_15F7200(v62);
    return 1;
  }
  return sub_182B0C0(v14, v13, v16);
}
