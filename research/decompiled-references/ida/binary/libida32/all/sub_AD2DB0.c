__int64 __fastcall sub_AD2DB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v8; // rdi
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rsi
  bool v14; // cl
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdi
  unsigned int *v17; // rsi
  _DWORD *v18; // rdi
  size_t v19; // rdx
  unsigned int v20; // r15d
  char v21; // cl
  char v22; // al
  char v23; // dl
  __int64 v24; // rdx
  char v25; // al
  __int64 v26; // rsi
  int v27; // r15d
  unsigned __int8 *v29; // r15
  unsigned __int8 *v30; // rdx
  __int64 v31; // rax
  unsigned __int8 *v32; // r14
  _BOOL8 v33; // rcx
  unsigned __int8 *v34; // rdx
  __int64 v35; // rax
  unsigned __int8 *v36; // rbx
  __int64 v37; // r12
  unsigned __int8 *v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r12
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rax
  unsigned int v48; // edx
  unsigned int v49; // eax
  unsigned int v50; // edx
  unsigned int v51; // eax
  __int64 v52; // rdx
  int v53; // eax
  __int64 v54; // rdx
  int v55; // eax
  __int64 v56; // rdx
  int v57; // eax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rax
  void *v62; // rdi
  __int64 v63; // rax
  __int64 v64; // rbp
  __int64 v65; // r14
  __int64 v66; // rbp
  void *v67; // rdi
  __int64 v68; // rax
  __int64 v69; // r15
  __int64 v70; // rdx
  __int64 v71; // r15
  void *v72; // rdi
  _BOOL8 v73; // [rsp+0h] [rbp-98h]
  __int64 v74; // [rsp+0h] [rbp-98h]
  _BOOL8 v75; // [rsp+0h] [rbp-98h]
  __int64 v76; // [rsp+8h] [rbp-90h]
  __int64 v77; // [rsp+8h] [rbp-90h]
  unsigned __int8 *v78; // [rsp+10h] [rbp-88h] BYREF
  __int64 v79; // [rsp+18h] [rbp-80h]

  v8 = (_QWORD *)(*(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a3 + 16) & 4) != 0 )
    v8 = (_QWORD *)*v8;
  v9 = sub_B68470(v8);
  if ( (**(_BYTE **)a1 & 8) != 0 && !(unsigned __int8)sub_AC8BB0(a1, a2, a3, v9) )
    return 0;
  if ( (unsigned __int8)sub_B54320(a2) && (unsigned __int8)sub_B54320(a3) )
  {
    v43 = sub_F3D1D0(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                      & 0xFFFFFFFFFFFFFFF0LL),
            a2,
            v40,
            v41,
            v42);
    v47 = sub_F3D1D0(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                      & 0xFFFFFFFFFFFFFFF0LL),
            a2,
            v44,
            v45,
            v46);
    return (unsigned int)sub_AC9FE0(a1, v43, v47);
  }
  v10 = *(_QWORD *)(a2 + 40);
  if ( (v10 & 7) == 0 )
  {
    v11 = *(_QWORD *)(a3 + 40);
    v12 = v10 & 0xFFFFFFFFFFFFFFF8LL;
    v13 = v12;
    v14 = v12 == 0;
    if ( (v11 & 7) != 0 )
      goto LABEL_13;
    v15 = v11 & 0xFFFFFFFFFFFFFFF8LL;
    v16 = v15;
    if ( v15 && v12 )
    {
      v17 = *(unsigned int **)(v15 + 16);
      v18 = *(_DWORD **)(v12 + 16);
      v19 = *v17;
      if ( v19 != *v18 )
        goto LABEL_32;
      if ( !*v17 )
        goto LABEL_14;
      v14 = memcmp(v18 + 4, v17 + 4, v19) == 0;
LABEL_13:
      if ( v14 )
        goto LABEL_14;
LABEL_32:
      if ( *(_BYTE *)(a1 + 142) )
      {
        sub_AC7530((__int64)&v78, a1, *(_DWORD *)(v9 + 24), *(_BYTE *)(a1 + 141) == 0 ? 2579 : 2359);
        v29 = v78;
        if ( !v78 )
        {
          v56 = v79;
          v57 = *(_DWORD *)(v79 + 14976);
          if ( v57 )
          {
            v58 = (unsigned int)(v57 - 1);
            *(_DWORD *)(v79 + 14976) = v58;
            v29 = *(unsigned __int8 **)(v56 + 8 * v58 + 14848);
            v59 = *((unsigned int *)v29 + 134);
            *v29 = 0;
            v60 = *((_QWORD *)v29 + 66);
            *((_DWORD *)v29 + 106) = 0;
            v61 = v60 + (v59 << 6);
            while ( v60 != v61 )
            {
              while ( 1 )
              {
                v61 -= 64;
                v62 = *(void **)(v61 + 24);
                if ( v62 == (void *)(v61 + 40) )
                  break;
                v76 = v61;
                v74 = v60;
                operator delete(v62);
                v60 = v74;
                v61 = v76;
                if ( v74 == v76 )
                  goto LABEL_74;
              }
            }
LABEL_74:
            *((_DWORD *)v29 + 134) = 0;
          }
          else
          {
            v29 = (unsigned __int8 *)operator new(0x3A0u);
            *v29 = 0;
            *((_QWORD *)v29 + 12) = v29 + 112;
            *((_QWORD *)v29 + 16) = v29 + 144;
            *((_QWORD *)v29 + 20) = v29 + 176;
            *((_QWORD *)v29 + 24) = v29 + 208;
            *((_QWORD *)v29 + 28) = v29 + 240;
            *((_QWORD *)v29 + 32) = v29 + 272;
            *((_QWORD *)v29 + 36) = v29 + 304;
            *((_QWORD *)v29 + 40) = v29 + 336;
            *((_QWORD *)v29 + 44) = v29 + 368;
            *((_QWORD *)v29 + 48) = v29 + 400;
            *((_QWORD *)v29 + 52) = v29 + 432;
            *((_QWORD *)v29 + 13) = 0;
            v29[112] = 0;
            *((_QWORD *)v29 + 17) = 0;
            v29[144] = 0;
            *((_QWORD *)v29 + 21) = 0;
            v29[176] = 0;
            *((_QWORD *)v29 + 25) = 0;
            v29[208] = 0;
            *((_QWORD *)v29 + 29) = 0;
            v29[240] = 0;
            *((_QWORD *)v29 + 33) = 0;
            v29[272] = 0;
            *((_QWORD *)v29 + 37) = 0;
            v29[304] = 0;
            *((_QWORD *)v29 + 41) = 0;
            v29[336] = 0;
            *((_QWORD *)v29 + 45) = 0;
            v29[368] = 0;
            *((_QWORD *)v29 + 49) = 0;
            v29[400] = 0;
            *((_QWORD *)v29 + 53) = 0x800000000LL;
            *((_QWORD *)v29 + 66) = v29 + 544;
            *((_QWORD *)v29 + 67) = 0x600000000LL;
          }
          v78 = v29;
        }
        v29[*v29 + 1] = 8;
        v30 = v78;
        v31 = *v78;
        *v78 = v31 + 1;
        *(_QWORD *)&v30[8 * v31 + 16] = a4;
        v32 = v78;
        v33 = *(_QWORD *)(a1 + 8) != *(_QWORD *)(a1 + 16);
        if ( !v78 )
        {
          v54 = v79;
          v55 = *(_DWORD *)(v79 + 14976);
          if ( v55 )
          {
            v68 = (unsigned int)(v55 - 1);
            *(_DWORD *)(v79 + 14976) = v68;
            v32 = *(unsigned __int8 **)(v54 + 8 * v68 + 14848);
            v69 = *((unsigned int *)v32 + 134);
            *v32 = 0;
            v70 = *((_QWORD *)v32 + 66);
            *((_DWORD *)v32 + 106) = 0;
            v71 = v70 + (v69 << 6);
            while ( v70 != v71 )
            {
              while ( 1 )
              {
                v71 -= 64;
                v72 = *(void **)(v71 + 24);
                if ( v72 == (void *)(v71 + 40) )
                  break;
                v77 = v70;
                v75 = v33;
                operator delete(v72);
                v70 = v77;
                v33 = v75;
                if ( v77 == v71 )
                  goto LABEL_84;
              }
            }
LABEL_84:
            *((_DWORD *)v32 + 134) = 0;
          }
          else
          {
            v73 = *(_QWORD *)(a1 + 8) != *(_QWORD *)(a1 + 16);
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
            v33 = v73;
            *((_QWORD *)v32 + 66) = v32 + 544;
            *((_QWORD *)v32 + 67) = 0x600000000LL;
          }
          v78 = v32;
        }
        v32[*v32 + 1] = 2;
        v34 = v78;
        v35 = *v78;
        *v78 = v35 + 1;
        *(_QWORD *)&v34[8 * v35 + 16] = v33;
        sub_AC6300((__int64)&v78);
        sub_AC7530((__int64)&v78, a1, *(_DWORD *)(a3 + 24), 0x9E4u);
        sub_AC60B0(&v78, *(_QWORD *)(a3 + 40), 9u);
        sub_AC6300((__int64)&v78);
        sub_AC74B0((__int64)&v78, a1, *(_DWORD *)(a2 + 24), 0x9E4u);
        v36 = v78;
        v37 = *(_QWORD *)(a2 + 40);
        if ( !v78 )
        {
          v52 = v79;
          v53 = *(_DWORD *)(v79 + 14976);
          if ( v53 )
          {
            v63 = (unsigned int)(v53 - 1);
            *(_DWORD *)(v79 + 14976) = v63;
            v36 = *(unsigned __int8 **)(v52 + 8 * v63 + 14848);
            v64 = *((unsigned int *)v36 + 134);
            *v36 = 0;
            v65 = *((_QWORD *)v36 + 66);
            *((_DWORD *)v36 + 106) = 0;
            v66 = v65 + (v64 << 6);
            while ( v65 != v66 )
            {
              while ( 1 )
              {
                v66 -= 64;
                v67 = *(void **)(v66 + 24);
                if ( v67 == (void *)(v66 + 40) )
                  break;
                operator delete(v67);
                if ( v65 == v66 )
                  goto LABEL_79;
              }
            }
LABEL_79:
            *((_DWORD *)v36 + 134) = 0;
          }
          else
          {
            v36 = (unsigned __int8 *)operator new(0x3A0u);
            *v36 = 0;
            *((_QWORD *)v36 + 12) = v36 + 112;
            *((_QWORD *)v36 + 16) = v36 + 144;
            *((_QWORD *)v36 + 20) = v36 + 176;
            *((_QWORD *)v36 + 24) = v36 + 208;
            *((_QWORD *)v36 + 28) = v36 + 240;
            *((_QWORD *)v36 + 32) = v36 + 272;
            *((_QWORD *)v36 + 36) = v36 + 304;
            *((_QWORD *)v36 + 40) = v36 + 336;
            *((_QWORD *)v36 + 44) = v36 + 368;
            *((_QWORD *)v36 + 48) = v36 + 400;
            *((_QWORD *)v36 + 52) = v36 + 432;
            *((_QWORD *)v36 + 13) = 0;
            v36[112] = 0;
            *((_QWORD *)v36 + 17) = 0;
            v36[144] = 0;
            *((_QWORD *)v36 + 21) = 0;
            v36[176] = 0;
            *((_QWORD *)v36 + 25) = 0;
            v36[208] = 0;
            *((_QWORD *)v36 + 29) = 0;
            v36[240] = 0;
            *((_QWORD *)v36 + 33) = 0;
            v36[272] = 0;
            *((_QWORD *)v36 + 37) = 0;
            v36[304] = 0;
            *((_QWORD *)v36 + 41) = 0;
            v36[336] = 0;
            *((_QWORD *)v36 + 45) = 0;
            v36[368] = 0;
            *((_QWORD *)v36 + 49) = 0;
            v36[400] = 0;
            *((_QWORD *)v36 + 53) = 0x800000000LL;
            *((_QWORD *)v36 + 66) = v36 + 544;
            *((_QWORD *)v36 + 67) = 0x600000000LL;
          }
          v78 = v36;
        }
        v36[*v36 + 1] = 9;
        v38 = v78;
        v39 = *v78;
        *v78 = v39 + 1;
        *(_QWORD *)&v38[8 * v39 + 16] = v37;
        sub_AC6300((__int64)&v78);
      }
      return 0;
    }
LABEL_40:
    v14 = v16 == v13;
    goto LABEL_13;
  }
  v13 = 0;
  v16 = *(_QWORD *)(a3 + 40) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a3 + 40) & 7) == 0 )
    goto LABEL_40;
LABEL_14:
  v20 = sub_ACDF50(a1, *(_QWORD *)(a2 + 48), *(_QWORD *)(a3 + 48));
  if ( !(_BYTE)v20 )
  {
    if ( *(_BYTE *)(a1 + 142) )
    {
      sub_AC7530((__int64)&v78, a1, *(_DWORD *)(v9 + 24), *(_BYTE *)(a1 + 141) == 0 ? 2579 : 2359);
      sub_AC60B0(&v78, a4, 8u);
      sub_AC60B0(&v78, *(_QWORD *)(a1 + 8) != *(_QWORD *)(a1 + 16), 2u);
      sub_AC6300((__int64)&v78);
      sub_AC7530((__int64)&v78, a1, *(_DWORD *)(a3 + 24), 0x9E2u);
      sub_AC60B0(&v78, *(_QWORD *)(a3 + 40), 9u);
      sub_AC60B0(&v78, *(_QWORD *)(a3 + 48), 8u);
      sub_AC6300((__int64)&v78);
      sub_AC74B0((__int64)&v78, a1, *(_DWORD *)(a2 + 24), 0x9E2u);
      sub_AC60B0(&v78, *(_QWORD *)(a2 + 40), 9u);
      sub_AC60B0(&v78, *(_QWORD *)(a2 + 48), 8u);
      sub_AC6300((__int64)&v78);
      return v20;
    }
    return 0;
  }
  v21 = *(_BYTE *)(a2 + 68);
  v22 = *(_BYTE *)(a3 + 68);
  v23 = v22 & 1;
  if ( (v21 & 1) != 0 )
  {
    if ( !v23 )
    {
      v26 = *(_QWORD *)(a2 + 72);
      if ( (v21 & 0xC) == 0xC || (*(_BYTE *)(a2 + 68) & 0xC) == 0 )
      {
        v24 = 0;
LABEL_69:
        v25 = v26 == v24;
        goto LABEL_25;
      }
      v25 = v20;
      v24 = 0;
      goto LABEL_57;
    }
    v24 = *(_QWORD *)(a3 + 72);
    if ( (v22 & 0xC) == 0xC || (v22 & 0xC) == 0 )
    {
      v25 = v24 == 0;
LABEL_20:
      v26 = *(_QWORD *)(a2 + 72);
      if ( (v21 & 0xC) == 0xC || (*(_BYTE *)(a2 + 68) & 0xC) == 0 )
      {
LABEL_22:
        if ( v26 && !v25 )
        {
          v25 = sub_ACD3E0(a1, v26, v24);
          goto LABEL_25;
        }
        goto LABEL_69;
      }
LABEL_57:
      v26 = *(_QWORD *)(v26 + 8);
      goto LABEL_22;
    }
  }
  else
  {
    if ( !v23 )
      return v20;
    v24 = *(_QWORD *)(a3 + 72);
    if ( (v22 & 0xC) == 0xC || (v22 & 0xC) == 0 )
    {
      v25 = v24 == 0;
      goto LABEL_25;
    }
  }
  v24 = *(_QWORD *)(v24 + 8);
  v25 = v24 == 0;
  if ( (*(_BYTE *)(a2 + 68) & 1) != 0 )
    goto LABEL_20;
LABEL_25:
  if ( !v25 )
  {
    if ( (**(_BYTE **)a1 & 8) == 0
      || (*(_BYTE *)(a2 + 68) & 1) == 0
      || (*(_BYTE *)(a3 + 68) & 1) == 0
      || (v27 = sub_B54430(a2), v27 != (unsigned int)sub_B54430(a3)) )
    {
      if ( *(_BYTE *)(a1 + 142) )
      {
        sub_AC7530((__int64)&v78, a1, *(_DWORD *)(v9 + 24), *(_BYTE *)(a1 + 141) == 0 ? 2579 : 2359);
        sub_AC60B0(&v78, a4, 8u);
        sub_AC60B0(&v78, *(_QWORD *)(a1 + 8) != *(_QWORD *)(a1 + 16), 2u);
        sub_AC6300((__int64)&v78);
        v48 = *(_DWORD *)(a3 + 24);
        if ( (*(_BYTE *)(a3 + 68) & 1) != 0 )
        {
          sub_AC7530((__int64)&v78, a1, v48, 0x9E3u);
          sub_AC60B0(&v78, *(_QWORD *)(a3 + 40), 9u);
          v49 = sub_B54430(a3);
          sub_AC60B0(&v78, v49, 3u);
        }
        else
        {
          sub_AC7530((__int64)&v78, a1, v48, 0x9E5u);
          sub_AC60B0(&v78, *(_QWORD *)(a3 + 40), 9u);
        }
        sub_AC6300((__int64)&v78);
        v50 = *(_DWORD *)(a2 + 24);
        if ( (*(_BYTE *)(a2 + 68) & 1) != 0 )
        {
          sub_AC74B0((__int64)&v78, a1, v50, 0x9E3u);
          sub_AC60B0(&v78, *(_QWORD *)(a2 + 40), 9u);
          v51 = sub_B54430(a2);
          sub_AC60B0(&v78, v51, 3u);
        }
        else
        {
          sub_AC74B0((__int64)&v78, a1, v50, 0x9E5u);
          sub_AC60B0(&v78, *(_QWORD *)(a2 + 40), 9u);
        }
        sub_AC6300((__int64)&v78);
      }
    }
    return 0;
  }
  return v20;
}

