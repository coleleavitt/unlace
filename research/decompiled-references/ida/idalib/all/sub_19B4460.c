__int64 __fastcall sub_19B4460(__int64 a1, const __m128i *a2, char a3, unsigned __int8 a4, int *a5, char a6)
{
  unsigned int v7; // eax
  int v8; // r14d
  __int64 v10; // rdx
  __int64 v11; // r13
  char v12; // al
  int v13; // ecx
  int v14; // r12d
  int v15; // edi
  __int64 v16; // r15
  __int64 v17; // r14
  __int64 v18; // rbx
  int v19; // r13d
  int v20; // ebp
  __int64 v21; // r8
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdi
  bool v25; // al
  __int64 v26; // r10
  bool v27; // al
  unsigned int v29; // r8d
  char v30; // al
  int v31; // ecx
  __int64 v32; // rdx
  char v33; // r12
  __int64 v34; // rbx
  __int64 v35; // r15
  int v36; // ebp
  unsigned __int64 v37; // rax
  __m128i *v38; // rcx
  __int64 v39; // r8
  int v40; // r11d
  __int64 v41; // rbp
  __int64 v42; // rdx
  unsigned int v43; // ebx
  __int64 v44; // rcx
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rdx
  int v47; // eax
  __int64 v48; // r13
  __int64 v49; // rax
  __int64 v50; // rdi
  __int64 v51; // rsi
  __int64 v52; // rdx
  __int64 v53; // rax
  unsigned int v55; // [rsp+8h] [rbp-120h]
  bool v56; // [rsp+8h] [rbp-120h]
  __int64 v57; // [rsp+8h] [rbp-120h]
  unsigned __int64 v59; // [rsp+10h] [rbp-118h]
  __int64 v60; // [rsp+18h] [rbp-110h]
  __int64 v61; // [rsp+18h] [rbp-110h]
  int v62; // [rsp+18h] [rbp-110h]
  char v63; // [rsp+24h] [rbp-104h]
  int v64; // [rsp+24h] [rbp-104h]
  int v65; // [rsp+24h] [rbp-104h]
  __int64 *v67; // [rsp+28h] [rbp-100h]
  __int64 v68; // [rsp+30h] [rbp-F8h]
  __int64 v69; // [rsp+38h] [rbp-F0h]
  __int64 v70; // [rsp+40h] [rbp-E8h]
  int v72; // [rsp+4Ch] [rbp-DCh]
  unsigned __int8 v73; // [rsp+5Fh] [rbp-C9h] BYREF
  _BYTE v74[8]; // [rsp+60h] [rbp-C8h] BYREF
  int v75; // [rsp+68h] [rbp-C0h]
  int v76; // [rsp+6Ch] [rbp-BCh]
  __int64 v77; // [rsp+70h] [rbp-B8h]
  char v78; // [rsp+78h] [rbp-B0h]

  v7 = *(_DWORD *)(*(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 640);
  if ( (v7 == 3 || v7 <= 1) && !a3 )
    return 1;
  if ( a5 )
    v8 = *a5;
  else
    v8 = *(_DWORD *)(a1 + 40) - 1;
  if ( v8 < 0
    || (v10 = 8LL * v8,
        v11 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + v10),
        v12 = *(_BYTE *)(v11 + 8) & 7,
        (unsigned __int8)(v12 - 1) > 2u) )
  {
    if ( a4 )
    {
      sub_19A27D0(a1);
      return 0;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v13 = *(_DWORD *)(v11 + 1312);
    if ( !v13 )
    {
      v14 = v8;
      v15 = v8 + 1;
      v16 = v10 - 8;
      v17 = a1;
      v18 = v11;
      v19 = 0;
      v72 = v15;
      v20 = v14;
      v69 = v10;
      v63 = a3;
      v70 = v10 - 8;
      if ( v12 != 2 )
        goto LABEL_34;
LABEL_10:
      v21 = *(_QWORD *)(v18 + 1592);
      if ( !v21 )
        goto LABEL_26;
      v68 = *(_QWORD *)(v18 + 1592);
      v22 = *(_QWORD *)(sub_B8C1B0(v21 + 72) + 16);
      v23 = (v22 & 4) != 0 ? *(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF8LL) : v22 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v23 )
        goto LABEL_26;
      v24 = v23 - 64;
      if ( !v24 )
        goto LABEL_26;
      v25 = sub_B96EF0(v24);
      v26 = v18;
      if ( v25 )
      {
        v27 = sub_C1DDA0(v68);
        v26 = v18;
        if ( v27 )
        {
          if ( (unsigned __int8)sub_B77A80(v68) )
          {
            if ( a4 )
            {
              sub_B88650(*(_QWORD *)(v18 + 1592), 1);
              sub_168B9F0((__int64)v74, (__int64 *)(v17 + 8), (unsigned int)a2, 0x1433u, 0);
              v73 = a3 & (v14 == v20);
              sub_1588420((__int64)v74, &v73);
              sub_15F7200(v74);
              if ( !a3 )
              {
                sub_19B39E0(v17, (_DWORD *)v18);
                return a4;
              }
            }
            return 1;
          }
LABEL_26:
          v26 = v18;
        }
      }
      while ( (unsigned int)(*(_DWORD *)(v18 + 1280) - 1) <= 3 || v14 == v20 && v63 )
      {
        v29 = v19 + 1;
        if ( v19 == v14 )
        {
          v32 = v69;
          v33 = a6;
          v34 = v17;
          v35 = v70;
          v36 = (int)a2;
          v29 = v72;
          goto LABEL_41;
        }
        v18 = *(_QWORD *)(*(_QWORD *)(v17 + 32) + v16);
        v30 = *(_BYTE *)(v18 + 8) & 7;
        if ( (unsigned __int8)(v30 - 1) > 2u )
        {
          v32 = v69;
          v33 = a6;
          v34 = v17;
          v35 = v70;
          v36 = (int)a2;
LABEL_41:
          if ( !a4 )
            return 0;
          v60 = v32;
          v55 = v29;
LABEL_43:
          v37 = sub_19A27D0(v34);
          v39 = v55;
          v40 = v36;
          v59 = v37;
          v41 = v34;
          v42 = v60;
          v56 = a6 == 0;
          v43 = v39;
          v67 = (__int64 *)(v37 & 0xFFFFFFFFFFFFFFF0LL);
          while ( 1 )
          {
            v48 = *(_QWORD *)(*(_QWORD *)(v41 + 32) + v42);
            LOBYTE(v42) = v43 > 1;
            if ( v33 )
            {
              v64 = v40;
              v49 = sub_F68450(*v67, (__int64)a2, v42, (__int64)v38, v39);
              v40 = v64;
              LOBYTE(v42) = v43 > 1;
              v76 = 0;
              v77 = v49;
              v75 = v64;
            }
            else
            {
              v75 = v40;
              v76 = 0;
              v77 = v59;
            }
            a2 = (const __m128i *)v74;
            v78 = (4 * v42) & 0x87 | v56 & 0x87 | v78 & 0x80 | 8;
            v44 = *(unsigned int *)(v48 + 1328);
            v45 = *(_QWORD *)(v48 + 1320);
            v46 = v44 + 1;
            v38 = (__m128i *)(v45 + 32 * v44);
            if ( v46 > *(unsigned int *)(v48 + 1332) )
            {
              v50 = v48 + 1320;
              v61 = *(_QWORD *)(v48 + 1320);
              v51 = v48 + 1336;
              if ( v45 > (unsigned __int64)v74 || v38 <= (__m128i *)v74 )
              {
                v62 = v40;
                sub_2237220(v50, v51, v46, 32);
                a2 = (const __m128i *)v74;
                v40 = v62;
                v38 = (__m128i *)(*(_QWORD *)(v48 + 1320) + 32LL * *(unsigned int *)(v48 + 1328));
              }
              else
              {
                v65 = v40;
                sub_2237220(v50, v51, v46, 32);
                v40 = v65;
                v52 = *(_QWORD *)(v48 + 1320);
                a2 = (const __m128i *)&v74[v52 - v61];
                v38 = (__m128i *)(v52 + 32LL * *(unsigned int *)(v48 + 1328));
              }
            }
            v42 = v35;
            *v38 = _mm_loadu_si128(a2);
            v38[1] = _mm_loadu_si128(a2 + 1);
            v47 = *(_DWORD *)(v48 + 1328) + 1;
            *(_DWORD *)(v48 + 1328) = v47;
            *(_DWORD *)(v48 + 1312) = v47;
            if ( !--v43 )
              break;
            v35 -= 8;
          }
          return 0;
        }
        v31 = *(_DWORD *)(v18 + 1312);
        v16 -= 8;
        if ( v31 )
        {
          v35 = v70;
          v53 = *(_QWORD *)(v18 + 1320) + 32LL * (unsigned int)(v31 - 1);
          v34 = v17;
          v33 = a6;
          v36 = (int)a2;
          if ( !a4 )
            goto LABEL_56;
          v60 = v69;
          v55 = v19 + 1;
          *(_BYTE *)(v53 + 24) |= 0x10u;
          goto LABEL_43;
        }
        ++v19;
        v20 = v14 - v29;
        if ( v30 == 2 )
          goto LABEL_10;
LABEL_34:
        v26 = 0;
      }
      if ( a4 )
      {
        v57 = v26;
        sub_B88650(*(_QWORD *)(v26 + 1592), 1);
        sub_168B9F0((__int64)v74, (__int64 *)(v17 + 8), (unsigned int)a2, 0x1433u, 0);
        v73 = 0;
        sub_1588420((__int64)v74, &v73);
        sub_15F7200(v74);
        v26 = v57;
      }
      if ( !a3 )
        sub_19B39E0(v17, (_DWORD *)v26);
      return 1;
    }
    v53 = *(_QWORD *)(v11 + 1320) + 32LL * (unsigned int)(v13 - 1);
    if ( a4 )
    {
      *(_BYTE *)(v53 + 24) |= 0x10u;
      sub_19A27D0(a1);
      return 0;
    }
    else
    {
LABEL_56:
      *(_BYTE *)(v53 + 24) |= 0x20u;
      return 0;
    }
  }
}
