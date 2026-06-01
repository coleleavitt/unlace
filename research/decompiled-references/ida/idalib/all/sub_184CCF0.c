void __fastcall sub_184CCF0(__int64 *a1, __int64 a2, unsigned __int64 *a3, _DWORD *a4, __m128 a5, double a6)
{
  __int64 v8; // rdi
  __int64 *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int8 *v13; // r14
  __int64 v14; // r13
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // r12
  __int32 v18; // r10d
  __int64 v19; // r11
  __int64 v20; // rax
  unsigned int *v21; // r13
  unsigned int *v22; // rdx
  unsigned __int64 v23; // rax
  char v24; // si
  char v25; // r10
  unsigned __int64 v26; // kr00_8
  unsigned int v27; // edi
  unsigned int v28; // edx
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // eax
  unsigned int v32; // edx
  __int64 *v33; // rsi
  unsigned int v34; // ecx
  unsigned __int64 v35; // rax
  char v36; // al
  int v37; // edx
  unsigned int v38; // edi
  unsigned int v39; // eax
  unsigned __int64 v40; // rsi
  __int64 v41; // r15
  __int64 v42; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  unsigned __int64 *v46; // rdx
  int v47; // eax
  int v48; // r13d
  size_t v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int32 v53; // [rsp+8h] [rbp-1C0h]
  unsigned __int32 v54; // [rsp+8h] [rbp-1C0h]
  char v55; // [rsp+10h] [rbp-1B8h]
  char v56; // [rsp+10h] [rbp-1B8h]
  __int64 v57; // [rsp+10h] [rbp-1B8h]
  __int64 v58; // [rsp+10h] [rbp-1B8h]
  unsigned int *v59; // [rsp+18h] [rbp-1B0h]
  unsigned __int64 **v60; // [rsp+28h] [rbp-1A0h] BYREF
  _QWORD *v61; // [rsp+30h] [rbp-198h] BYREF
  __int64 v62; // [rsp+38h] [rbp-190h] BYREF
  _DWORD v63[6]; // [rsp+40h] [rbp-188h] BYREF
  void *v64; // [rsp+58h] [rbp-170h]
  __int64 v65; // [rsp+68h] [rbp-160h] BYREF
  __int64 v66; // [rsp+80h] [rbp-148h] BYREF
  char v67; // [rsp+88h] [rbp-140h]
  _QWORD *v68; // [rsp+8Ch] [rbp-13Ch]
  char v69; // [rsp+94h] [rbp-134h]
  void *v70; // [rsp+98h] [rbp-130h]
  __int64 v71; // [rsp+A0h] [rbp-128h]
  _BYTE v72[24]; // [rsp+A8h] [rbp-120h] BYREF
  unsigned __int64 *v73; // [rsp+C0h] [rbp-108h] BYREF
  _BYTE v74[12]; // [rsp+C8h] [rbp-100h]
  char v75; // [rsp+D4h] [rbp-F4h]
  void *v76; // [rsp+D8h] [rbp-F0h]
  __int64 v77; // [rsp+E0h] [rbp-E8h]
  _BYTE v78[24]; // [rsp+E8h] [rbp-E0h] BYREF
  __m128 v79[12]; // [rsp+100h] [rbp-C8h] BYREF

  if ( *a4 == 2 )
  {
    if ( (*(_BYTE *)(a2 + 720) & 1) == 0 && ((**(_DWORD **)a2 >> 12) & 0x7F) != 0x45 )
    {
      sub_168B9F0((__int64)v79, a1 + 1, *(_DWORD *)(a2 + 80), 0xDB3u, 0);
      LODWORD(v66) = *(_DWORD *)(*(_QWORD *)a2 + 168LL);
      HIDWORD(v66) = v66;
      v44 = sub_1587DB0((__int64)v79, &v66);
      v73 = *(unsigned __int64 **)(a2 + 80);
      sub_1587DB0(v44, (__int64 *)&v73);
      sub_15F7200(v79);
    }
    *(_BYTE *)(a2 + 720) |= 1u;
    *a4 = 0;
  }
  v8 = *(_QWORD *)(a2 + 64);
  v9 = (__int64 *)&v60;
  v60 = nullptr;
  v10 = sub_1E5F010(v8, &v60);
  v13 = *(unsigned __int8 **)a2;
  v14 = v10;
  v15 = (**(_DWORD **)a2 >> 12) & 0x7F;
  if ( v15
    || (v11 = *v13, LOBYTE(v11) = (unsigned __int8)v11 >> 6, (_BYTE)v11)
    || (v11 = v13[1], (v11 & 3) != 0)
    || (v11 &= 0xCu, (_DWORD)v11) )
  {
    if ( (_BYTE)v15 != 69 && (*(_BYTE *)(a2 + 720) & 1) == 0 )
    {
      sub_168B9F0((__int64)v79, a1 + 1, *(_DWORD *)(a2 + 80), 0xDB5u, 0);
      LODWORD(v66) = *((_DWORD *)v13 + 48);
      HIDWORD(v66) = v66;
      v16 = sub_1587DB0((__int64)v79, &v66);
      v9 = (__int64 *)&v73;
      LODWORD(v73) = *(_DWORD *)(a2 + 80);
      HIDWORD(v73) = (_DWORD)v73;
      sub_1587DB0(v16, (__int64 *)&v73);
      sub_15F7200(v79);
      *(_BYTE *)(a2 + 720) |= 1u;
    }
  }
  else if ( (v13[3] & 0x7C) != 0 && (*(_BYTE *)(a2 + 720) & 1) == 0 )
  {
    sub_168B9F0((__int64)v79, a1 + 1, *(_DWORD *)(a2 + 80), 0xDB9u, 0);
    LODWORD(v73) = *(_DWORD *)(a2 + 80);
    HIDWORD(v73) = (_DWORD)v73;
    v42 = sub_1587DB0((__int64)v79, (__int64 *)&v73);
    v9 = &v66;
    LODWORD(v66) = 0;
    sub_1587D10(v42, (int *)&v66);
    sub_15F7200(v79);
    *(_BYTE *)(a2 + 720) |= 1u;
  }
  v17 = *(_QWORD *)(*a3 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v17 + 16) != 26 )
    v17 = sub_F63050(*(_QWORD *)(*a3 & 0xFFFFFFFFFFFFFFF0LL), v9, v11, v12);
  v79[0].m128_i32[0] = 0;
  sub_147B3A0(a2, v79);
  v18 = v79[0].m128_i32[0];
  v19 = *(_QWORD *)(a2 + 128);
  if ( *(_WORD *)(v17 + 22) != 1 )
  {
    if ( !*(_WORD *)(v17 + 22) )
      goto LABEL_11;
LABEL_79:
    v58 = v19;
    v54 = v18;
    sub_168B9F0((__int64)v79, a1 + 1, *(_DWORD *)(a2 + 80), 0xDBAu, 0);
    sub_15F7200(v79);
    sub_183A990(v58 + 144LL * v54 + 56);
    *(_BYTE *)(a2 + 720) |= 1u;
    goto LABEL_13;
  }
  v57 = *(_QWORD *)(a2 + 128);
  v53 = v79[0].m128_i32[0];
  v79[0].m128_i32[0] = 0;
  sub_147B3A0(a2, v79);
  v18 = v53;
  v19 = v57;
  v45 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 128) + 144LL * v79[0].m128_u32[0] + 96) + 16LL);
  if ( !v45 || (*(_BYTE *)(v45 + 28) & 0x7F) != 0x2B || !*(_DWORD *)(v45 + 100) )
    goto LABEL_79;
LABEL_11:
  if ( *(char *)(v17 + 19) < 0 )
  {
    sub_168B9F0((__int64)v79, a1 + 1, *(_DWORD *)(a2 + 80), 0xDB8u, 0);
    sub_15F7200(v79);
    *(_BYTE *)(a2 + 720) |= 1u;
  }
LABEL_13:
  if ( *(_QWORD *)(v17 + 24) == v14 )
    goto LABEL_28;
  v20 = *(unsigned int *)(a2 + 136);
  v21 = *(unsigned int **)(a2 + 128);
  v61 = nullptr;
  v62 = 0;
  v22 = &v21[36 * v20];
  if ( v21 != v22 )
  {
    v23 = (unsigned __int64)&v73;
    v24 = 0;
    v25 = 0;
    while ( 2 )
    {
      v26 = v23;
      v23 = *v21;
      switch ( *v21 )
      {
        case 0u:
        case 1u:
        case 4u:
        case 5u:
        case 7u:
          v38 = v21[2];
          v23 = v21[1];
          if ( v38 )
          {
            if ( (_DWORD)v23 )
            {
              LODWORD(v61) = v21[1];
              if ( !HIDWORD(v61) )
LABEL_42:
                HIDWORD(v61) = v38;
            }
          }
          else if ( (_DWORD)v23 )
          {
            v38 = v21[1];
            LODWORD(v61) = v38;
            if ( !HIDWORD(v61) )
              goto LABEL_42;
          }
LABEL_20:
          v21 += 36;
          if ( v22 != v21 )
            continue;
          v28 = (unsigned int)v61;
          if ( !(_DWORD)v61 || !HIDWORD(v61) )
          {
            v28 = v62;
            if ( !(_DWORD)v62 || !HIDWORD(v62) )
              goto LABEL_66;
          }
          goto LABEL_23;
        case 2u:
          goto LABEL_17;
        case 3u:
          if ( v24 )
          {
LABEL_17:
            v23 = v21[2];
            v27 = v21[1];
            if ( !(_DWORD)v23 )
            {
              if ( v27 )
              {
                v23 = v27;
LABEL_58:
                if ( !(_DWORD)v62 )
                  LODWORD(v62) = v21[1];
                HIDWORD(v62) = v23;
              }
              v25 = 1;
              goto LABEL_20;
            }
            v25 = 1;
            if ( v27 )
              goto LABEL_58;
          }
          else
          {
            v24 = 1;
            if ( (*((_BYTE *)v21 + 57) & 2) != 0 )
            {
              v59 = v22;
              v73 = nullptr;
              v56 = v25;
              sub_1E5F010(*((_QWORD *)v21 + 16), &v73);
              v25 = v56;
              v23 = (unsigned __int64)v73;
              v22 = v59;
              if ( v73 )
              {
                v40 = *v73;
                v79[0].m128_u64[1] = (unsigned __int64)(v73 + 1);
                v79[0].m128_u64[0] = v40;
                v23 = sub_183A8D0((__int64 *)v79, a5);
                v25 = v56;
                v22 = v59;
                if ( (_DWORD)v23 )
                {
                  if ( HIDWORD(v23) )
                  {
                    if ( !(_DWORD)v62 )
                      LODWORD(v62) = v23;
                    HIDWORD(v62) = HIDWORD(v23);
                  }
                }
              }
              v24 = 1;
            }
          }
          goto LABEL_20;
        case 6u:
          v39 = v21[1];
          if ( v39 )
          {
            LODWORD(v61) = v21[1];
            if ( !HIDWORD(v61) )
              HIDWORD(v61) = v39;
          }
          v23 = v21[2];
          if ( (_DWORD)v23 )
          {
            if ( !(_DWORD)v62 )
              LODWORD(v62) = v21[2];
            HIDWORD(v62) = v23;
          }
          goto LABEL_20;
        default:
          v23 = v26;
          goto LABEL_20;
      }
    }
  }
  v25 = 0;
LABEL_66:
  v28 = *(_DWORD *)(a2 + 80);
LABEL_23:
  v55 = v25;
  sub_168B9F0((__int64)v79, a1 + 1, v28, 0xDB9u, 0);
  v29 = sub_15884C0((__int64)v79, (__int64 *)&v61);
  sub_15884C0(v29, &v62);
  if ( v55 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v17 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 )
    {
      LODWORD(v66) = 1;
      goto LABEL_27;
    }
    if ( (*(_BYTE *)(a1[29] + 1) & 0x10) != 0 )
    {
      LODWORD(v66) = 2;
LABEL_27:
      v30 = sub_1587D10((__int64)v79, (int *)&v66);
      v73 = *(unsigned __int64 **)(v17 + 24);
      sub_162B6D0(v30, (__int64 *)&v73);
      v14 = *(_QWORD *)(v17 + 24);
      sub_15F7200(v79);
      goto LABEL_28;
    }
    LODWORD(v73) = 3;
    sub_1587D10((__int64)v79, (int *)&v73);
  }
  else
  {
    LODWORD(v73) = 0;
    sub_1587D10((__int64)v79, (int *)&v73);
    if ( (!(_DWORD)v62 || !HIDWORD(v62)) && v60 )
    {
      v46 = *v60;
      *(_QWORD *)v74 = v60 + 1;
      v73 = v46;
      v47 = sub_F6CE20((__int64 *)&v73);
      v48 = sub_15F0EF0((__int64)a1, v47, 0, (__m128i)a5, a6);
      v49 = j__strlen(" ");
      sub_9EC740((__int64)v63, v48, " ", v49, 0);
      v50 = sub_1589170((__int64)v79, v63);
      LODWORD(v66) = v48;
      v70 = v72;
      HIDWORD(v66) = v48;
      v68 = v61;
      v71 = 0;
      v72[0] = 0;
      v67 = 0;
      v69 = 1;
      v72[16] = 0;
      v51 = sub_1589170(v50, &v66);
      *(_QWORD *)&v74[4] = 0;
      v75 = 0;
      v78[0] = 0;
      v76 = v78;
      v77 = 0;
      v78[16] = 0;
      v73 = v61;
      v74[0] = 1;
      sub_1589170(v51, &v73);
      if ( v76 != v78 )
        operator delete(v76);
      if ( v70 != v72 )
        operator delete(v70);
      if ( v64 != &v65 )
        operator delete(v64);
    }
  }
  v14 = *(_QWORD *)(v17 + 24);
  sub_15F7200(v79);
LABEL_28:
  v31 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                       & 0xFFFFFFFFFFFFFFF0LL)
                           + 16LL);
  if ( (unsigned __int8)(v31 - 2) > 4u )
  {
    if ( (unsigned int)(v31 - 25) > 1 )
      goto LABEL_31;
    v32 = *(_DWORD *)(a2 + 80);
    v33 = a1 + 1;
    v34 = 3511;
  }
  else
  {
    v32 = *(_DWORD *)(a2 + 80);
    v33 = a1 + 1;
    v34 = 3510;
  }
  sub_168B9F0((__int64)v79, v33, v32, v34, 0);
  sub_15F7200(v79);
  v35 = sub_A70010(a1[31], v14);
  *(_BYTE *)(a2 + 720) |= 1u;
  v14 = v35;
LABEL_31:
  if ( (*(_BYTE *)(a2 + 720) & 1) != 0 || ((**(_DWORD **)a2 >> 12) & 0x7F) == 0x45 )
  {
    v41 = a1[31];
    sub_A5E110(v79, v17);
    *a3 = sub_A73610(v41, v14, nullptr, 0, (const __m128i *)v79, 0);
  }
  if ( *((_QWORD *)v13 + 3) )
  {
    v36 = *(_BYTE *)(a1[29] + 1);
    if ( v36 >= 0 )
    {
      sub_168B9F0((__int64)v79, a1 + 1, *((_DWORD *)v13 + 62), (v36 & 0x10) == 0 ? 5549 : 6767, 0);
      if ( (*((_QWORD *)v13 + 3) & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        v37 = *((_DWORD *)v13 + 64);
      else
        v37 = *((_DWORD *)v13 + 62);
      LODWORD(v73) = *((_DWORD *)v13 + 62);
      HIDWORD(v73) = v37;
      sub_1587DB0((__int64)v79, (__int64 *)&v73);
      sub_15F7200(v79);
    }
  }
}
