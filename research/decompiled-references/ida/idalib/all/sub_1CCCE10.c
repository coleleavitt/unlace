__int64 __fastcall sub_1CCCE10(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        char a8,
        _BYTE *a9)
{
  __int64 v11; // rsi
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  int v14; // eax
  unsigned int v15; // edx
  __int64 *v16; // rbp
  __int64 v17; // rax
  __int64 v18; // r12
  __int64 v19; // rsi
  unsigned __int64 v20; // r14
  unsigned int v21; // edx
  unsigned int v22; // ecx
  __int64 v23; // rax
  __int64 result; // rax
  char v25; // dl
  unsigned __int8 v26; // dl
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r12
  __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rdx
  unsigned __int8 *v37; // r12
  __int64 v38; // r15
  _BYTE *v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // r15
  __int64 v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rdx
  int v49; // eax
  __int64 v50; // rax
  __int64 v51; // r14
  __int64 v52; // rdx
  __int64 v53; // r14
  void *v54; // rdi
  unsigned __int8 v55; // [rsp+8h] [rbp-100h]
  char v56; // [rsp+8h] [rbp-100h]
  __int64 v57; // [rsp+8h] [rbp-100h]
  __int64 v58; // [rsp+10h] [rbp-F8h]
  __int64 v59; // [rsp+18h] [rbp-F0h] BYREF
  int v60; // [rsp+24h] [rbp-E4h] BYREF
  unsigned __int64 v61; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v62; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v63; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v64; // [rsp+40h] [rbp-C8h] BYREF
  int v65; // [rsp+48h] [rbp-C0h]
  __int64 v66; // [rsp+50h] [rbp-B8h]
  unsigned __int8 *v67; // [rsp+60h] [rbp-A8h] BYREF
  char v68; // [rsp+B8h] [rbp-50h]
  unsigned int v69; // [rsp+C0h] [rbp-48h]
  char v70; // [rsp+C4h] [rbp-44h]

  v59 = a3;
  if ( !a6 )
  {
    if ( !a8 )
      return 1;
    v61 = 0;
    v11 = a3;
    v14 = *(_BYTE *)(a3 + 28) & 0x7F;
    a3 = (unsigned int)(v14 - 58);
    if ( (unsigned int)a3 > 4 )
    {
LABEL_11:
      v15 = v14 - 34;
      v16 = (__int64 *)(a1 + 8);
      if ( (_BYTE)a4 )
      {
        if ( v15 > 5 )
        {
          sub_168B9F0((__int64)&v64, v16, a2, 0xF69u, 0);
          sub_1605D30((__int64)&v64, (__int64 *)&v61);
          sub_15F7200(&v64);
          v21 = *(_DWORD *)(a5 + 24);
          v22 = 6080;
          goto LABEL_39;
        }
        sub_168B9F0((__int64)&v64, v16, a2, 0xEBAu, 0);
        v60 = 1;
      }
      else
      {
        if ( v15 <= 5 )
        {
          sub_168B9F0((__int64)&v64, v16, a2, 0xEB9u, 0);
          if ( v68 )
          {
            sub_AE9DF0(&v67, a5, 0xAu);
          }
          else if ( v70 )
          {
            v33 = sub_168B9E0(&v64);
            v34 = v66;
            if ( v66 )
              v34 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v66 + 32LL))(v66);
            v63 = v34;
            v35 = sub_1587BC0(v33, &v63, v29, v30, v31, v32);
            v36 = *v35 + 32LL * v69;
            v37 = *(unsigned __int8 **)(v36 + 8);
            v38 = v36;
            if ( !v37 )
            {
              v48 = *(_QWORD *)(v36 + 16);
              v49 = *(_DWORD *)(v48 + 14976);
              if ( v49 )
              {
                v50 = (unsigned int)(v49 - 1);
                *(_DWORD *)(v48 + 14976) = v50;
                v37 = *(unsigned __int8 **)(v48 + 8 * v50 + 14848);
                v51 = *((unsigned int *)v37 + 134);
                v52 = *((_QWORD *)v37 + 66);
                *v37 = 0;
                *((_DWORD *)v37 + 106) = 0;
                v53 = v52 + (v51 << 6);
                while ( v52 != v53 )
                {
                  while ( 1 )
                  {
                    v53 -= 64;
                    v54 = *(void **)(v53 + 24);
                    if ( v54 == (void *)(v53 + 40) )
                      break;
                    v57 = v52;
                    operator delete(v54);
                    v52 = v57;
                    if ( v57 == v53 )
                      goto LABEL_61;
                  }
                }
LABEL_61:
                *((_DWORD *)v37 + 134) = 0;
              }
              else
              {
                v37 = (unsigned __int8 *)operator new(0x3A0u);
                *v37 = 0;
                *((_QWORD *)v37 + 12) = v37 + 112;
                *((_QWORD *)v37 + 16) = v37 + 144;
                *((_QWORD *)v37 + 20) = v37 + 176;
                *((_QWORD *)v37 + 24) = v37 + 208;
                *((_QWORD *)v37 + 28) = v37 + 240;
                *((_QWORD *)v37 + 32) = v37 + 272;
                *((_QWORD *)v37 + 36) = v37 + 304;
                *((_QWORD *)v37 + 40) = v37 + 336;
                *((_QWORD *)v37 + 44) = v37 + 368;
                *((_QWORD *)v37 + 48) = v37 + 400;
                *((_QWORD *)v37 + 52) = v37 + 432;
                *((_QWORD *)v37 + 13) = 0;
                v37[112] = 0;
                *((_QWORD *)v37 + 17) = 0;
                v37[144] = 0;
                *((_QWORD *)v37 + 21) = 0;
                v37[176] = 0;
                *((_QWORD *)v37 + 25) = 0;
                v37[208] = 0;
                *((_QWORD *)v37 + 29) = 0;
                v37[240] = 0;
                *((_QWORD *)v37 + 33) = 0;
                v37[272] = 0;
                *((_QWORD *)v37 + 37) = 0;
                v37[304] = 0;
                *((_QWORD *)v37 + 41) = 0;
                v37[336] = 0;
                *((_QWORD *)v37 + 45) = 0;
                v37[368] = 0;
                *((_QWORD *)v37 + 49) = 0;
                v37[400] = 0;
                *((_QWORD *)v37 + 53) = 0x800000000LL;
                *((_QWORD *)v37 + 66) = v37 + 544;
                *((_QWORD *)v37 + 67) = 0x600000000LL;
              }
              *(_QWORD *)(v38 + 8) = v37;
            }
            v37[*v37 + 1] = 10;
            v39 = *(_BYTE **)(v38 + 8);
            v40 = (unsigned __int8)*v39;
            *v39 = v40 + 1;
            *(_QWORD *)&v39[8 * v40 + 16] = a5;
          }
          goto LABEL_18;
        }
        if ( (unsigned int)(v14 - 58) <= 4 )
        {
          sub_168B9F0((__int64)&v64, (__int64 *)(a1 + 8), a2, 0x1401u, 0);
          LOBYTE(v63) = a7 != 1;
          v28 = sub_1588420((__int64)&v64, (unsigned __int8 *)&v63);
          sub_1605D30(v28, (__int64 *)&v61);
          sub_15F7200(&v64);
          v65 = 0;
          sub_1CCCAD0(a1, a5, v64, 0);
LABEL_21:
          if ( a7 == 3 )
            sub_B88650(v59, 1);
          return 1;
        }
        if ( (unsigned int)(v14 - 41) <= 1 )
        {
          sub_168B9F0((__int64)&v64, v16, a2, 0xEBBu, 0);
          sub_17BA610((__int64)&v64, &v59);
          sub_15F7200(&v64);
          sub_B88650(v59, 1);
          goto LABEL_19;
        }
        sub_168B9F0((__int64)&v64, v16, a2, 0xEBAu, 0);
        v60 = 2;
      }
      v17 = sub_1587D10((__int64)&v64, &v60);
      v62 = *(_QWORD *)(v59 + 40);
      v18 = sub_15894B0(v17, &v62);
      v19 = *(_QWORD *)(v59 + 16);
      if ( (v19 & 4) != 0 )
        v20 = *(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF8LL);
      else
        v20 = v19 & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_BYTE *)(v18 + 120) )
      {
        sub_AE9DF0((unsigned __int8 **)(v18 + 32), v20, 0xCu);
      }
      else if ( *(_BYTE *)(v18 + 132) )
      {
        v45 = sub_168B9E0((_QWORD *)v18);
        v46 = *(_QWORD *)(v18 + 16);
        if ( v46 )
          v46 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v46 + 32LL))(*(_QWORD *)(v18 + 16));
        v63 = v46;
        v47 = sub_1587BC0(v45, &v63, v41, v42, v43, v44);
        sub_AE9DF0((unsigned __int8 **)(*v47 + 32LL * *(unsigned int *)(v18 + 128) + 8), v20, 0xCu);
      }
LABEL_18:
      sub_15F7200(&v64);
LABEL_19:
      v21 = *(_DWORD *)(a5 + 24);
      v22 = 5966;
LABEL_39:
      sub_168B9F0((__int64)&v64, v16, v21, v22, 0);
      sub_15F7200(&v64);
      goto LABEL_21;
    }
LABEL_7:
    v12 = *(_QWORD *)(v11 + 48);
    if ( v12 )
    {
      v13 = v12 & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v58 = a6;
      v56 = a4;
      v13 = sub_A7AA70(*(_QWORD *)(a1 + 248), v11, a3, a4, a5, a6);
      a6 = v58;
      LOBYTE(a4) = v56;
    }
    v61 = v13;
    if ( !a6 )
    {
      v14 = *(_BYTE *)(v59 + 28) & 0x7F;
      goto LABEL_11;
    }
LABEL_20:
    sub_168B9F0((__int64)&v64, (__int64 *)(a1 + 8), a2, 0x1402u, 0);
    LOBYTE(v63) = a7 != 1;
    v23 = sub_1588420((__int64)&v64, (unsigned __int8 *)&v63);
    sub_1605D30(v23, (__int64 *)&v61);
    sub_15F7200(&v64);
    sub_B88650(v59, 1);
    goto LABEL_21;
  }
  if ( (*(_BYTE *)(a6 + 28) & 0x7Fu) - 58 <= 4 && (*(_BYTE *)(a6 + 74) & 2) != 0 )
  {
    if ( !a8 || *(char *)(a6 + 28) < 0 )
      return 1;
    v61 = 0;
    v11 = a3;
    if ( (*(_BYTE *)(a3 + 28) & 0x7Fu) - 58 > 4 )
      goto LABEL_20;
    goto LABEL_7;
  }
  v64 = 0;
  v25 = sub_1E61510(a1, a6, &v64, 0);
  result = 0;
  if ( !v25 )
  {
    if ( a9 )
      *a9 = 1;
    result = 1;
    if ( a8 )
    {
      sub_1DBADC0(a1);
      v55 = v26;
      sub_1A5FAE0(a1, a2, v64, 1, v26 ^ 1u, v27);
      return v55;
    }
  }
  return result;
}
