void __fastcall sub_1811DC0(__int64 a1, __int64 a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r15
  int v9; // eax
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  int v13; // edx
  __int64 v14; // r15
  __int64 v15; // rax
  unsigned int *v16; // rax
  __int64 v17; // rdx
  size_t v18; // rbx
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 (*v25)(); // rcx
  __int64 v26; // rax
  __int64 *v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  _QWORD *v32; // rax
  _QWORD *v33; // rdx
  unsigned __int64 v34; // rax
  _QWORD *v35; // rcx
  __int64 v36; // r12
  __int64 *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 **v43; // rax
  __int64 *v44; // rdx
  unsigned __int64 v45; // rax
  __int64 *v46; // rcx
  __int64 *v47; // rax
  __int64 *v48; // rbx
  __int64 v49; // r13
  __int64 v50; // rdi
  __int64 v51; // rax
  __int64 v52; // r13
  __int64 v53; // r14
  char v54; // r13
  __int64 v55; // r14
  char v56; // r13
  __int64 v57; // r14
  char v58; // r13
  __int64 v59; // r14
  char v60; // r13
  __int64 v61; // rbx
  __int64 v62; // rax
  unsigned __int64 v63; // rdx
  __int8 v64; // al
  unsigned int v65; // edx
  __int64 *v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rax
  void *v69; // rbx
  unsigned __int32 v70; // r13d
  __int64 *v71; // rdi
  __m128i *v72; // r14
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 *v77; // [rsp+18h] [rbp-160h]
  unsigned __int64 v78; // [rsp+20h] [rbp-158h]
  __int64 *v79; // [rsp+30h] [rbp-148h]
  __int64 v80; // [rsp+40h] [rbp-138h] BYREF
  __int64 v81; // [rsp+48h] [rbp-130h]
  _QWORD v82[2]; // [rsp+50h] [rbp-128h] BYREF
  void *ptr; // [rsp+60h] [rbp-118h] BYREF
  __int64 v84; // [rsp+68h] [rbp-110h]
  _BYTE v85[64]; // [rsp+70h] [rbp-108h] BYREF
  unsigned __int64 v86; // [rsp+B0h] [rbp-C8h] BYREF
  __int64 v87; // [rsp+B8h] [rbp-C0h]
  __int64 v88; // [rsp+C0h] [rbp-B8h]

  v6 = a2;
  v9 = a3[2].m128i_u16[0];
  if ( v9 == 67 )
  {
    v27 = (__int64 *)(a1 + 8);
    if ( (unsigned __int8)sub_18119C0((__int64 *)(a1 + 8), a2, (__int64)a3, a4, a5, a6) )
      return;
    if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
      goto LABEL_3;
    v32 = sub_B8C3D0(a2, a2, v28, v29, v30, v31);
    v33 = (_QWORD *)*v32;
    v34 = *v32 + 8LL * *((unsigned int *)v32 + 2);
    if ( (unsigned __int64)v33 >= v34 )
    {
      if ( v33 == (_QWORD *)v34 )
        goto LABEL_3;
      while ( *(_WORD *)(*(_QWORD *)v34 + 36LL) != 157 )
      {
        v34 += 8LL;
        if ( v33 == (_QWORD *)v34 )
          goto LABEL_3;
      }
    }
    else
    {
      v35 = v33;
      while ( *(_WORD *)(*v35 + 36LL) != 157 )
      {
        if ( (_QWORD *)v34 == ++v35 )
          goto LABEL_3;
      }
      if ( (_QWORD *)v34 == v35 )
        goto LABEL_3;
    }
    v36 = *v33;
    if ( *(_WORD *)(*v33 + 36LL) != 157 )
    {
      v37 = v33 + 1;
      do
        v36 = *v37++;
      while ( *(_WORD *)(v36 + 36) != 157 );
    }
    goto LABEL_29;
  }
  if ( v9 == 68 )
  {
    v27 = (__int64 *)(a1 + 8);
    if ( (unsigned __int8)sub_1811BC0((__int64 *)(a1 + 8), a2, (__int64)a3, a4, a5, a6) )
      return;
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
    {
      v43 = (__int64 **)sub_B8C3D0(a2, a2, v39, v40, v41, v42);
      v44 = *v43;
      v45 = (unsigned __int64)&(*v43)[*((unsigned int *)v43 + 2)];
      if ( (unsigned __int64)v44 >= v45 )
      {
        if ( v44 != (__int64 *)v45 )
        {
          if ( *(_WORD *)(*(_QWORD *)v45 + 36LL) == 158 )
          {
LABEL_40:
            v36 = *v44;
            if ( *(_WORD *)(*v44 + 36) != 158 )
            {
              v47 = v44 + 1;
              do
                v36 = *v47++;
              while ( *(_WORD *)(v36 + 36) != 158 );
            }
LABEL_29:
            sub_168B9F0((__int64)&v86, v27, a3[1].m128i_u32[2], 0xE77u, 0);
            sub_15DD120((__int64)&v86, (__int64)a3);
            sub_15F7200(&v86);
            sub_168B9F0((__int64)&v86, v27, *(_DWORD *)(v36 + 24), 0x16CFu, 0);
            sub_15F7200(&v86);
            return;
          }
          v66 = (__int64 *)(v45 + 8);
          while ( v44 != v66 )
          {
            v67 = *v66++;
            if ( *(_WORD *)(v67 + 36) == 158 )
              goto LABEL_40;
          }
        }
      }
      else
      {
        v46 = v44;
        while ( *(_WORD *)(*v46 + 36) != 158 )
        {
          if ( (__int64 *)v45 == ++v46 )
            goto LABEL_3;
        }
        if ( (__int64 *)v45 != v46 )
          goto LABEL_40;
      }
    }
  }
LABEL_3:
  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 35 <= 3 )
  {
    v10 = *(_QWORD *)(sub_B8C1B0(a2 + 72) + 16);
    if ( (v10 & 4) != 0 )
      v11 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF8LL);
    else
      v11 = v10 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v11 )
      BUG();
    v12 = *(_QWORD *)(v11 + 64);
    if ( v12 )
    {
      if ( (*(_BYTE *)(v12 + 10) & 0x20) != 0 )
      {
        sub_168B9F0((__int64)&v86, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0xC66u, 0);
        sub_15DD120((__int64)&v86, (__int64)a3);
        sub_15F7200(&v86);
        return;
      }
    }
  }
  if ( (unsigned __int8)sub_15EAA10((__int64)a3, a1, 1u) )
  {
    v13 = a3[3].m128i_u16[4];
    ptr = v85;
    v84 = 0x800000000LL;
    if ( v13 + ((a3[3].m128i_i8[10] & 0x20) != 0) )
    {
      if ( v13 )
      {
        v14 = 0;
        while ( 1 )
        {
          v15 = a3[5].m128i_i64[v14];
          if ( (v15 & 2) == 0 )
            goto LABEL_30;
          v78 = v15 & 0xFFFFFFFFFFFFFFFCLL;
          v16 = *(unsigned int **)(*(_QWORD *)((v15 & 0xFFFFFFFFFFFFFFFCLL) + 8) + 16LL);
          v17 = *v16;
          v82[0] = v16 + 4;
          v82[1] = v17;
          v18 = j__strlen(asc_22E1692);
          v19 = sub_9EC6C0(v82, (__int64)asc_22E1692, v18);
          v87 = v20;
          v86 = v19;
          v21 = sub_9EC6F0((__int64)&v86, (__int64)asc_22E1692, v18);
          v22 = *(_QWORD *)(a1 + 248);
          v80 = v21;
          v23 = *(_QWORD *)(v22 + 17448);
          v81 = v24;
          v25 = *(__int64 (**)())(*(_QWORD *)v23 + 640LL);
          if ( v25 == sub_102BAD0 || !((unsigned __int8 (__fastcall *)(__int64, __int64))v25)(v23, v21) )
          {
            sub_168B9F0((__int64)&v86, (__int64 *)(a1 + 8), *(_DWORD *)v78, 0xFBEu, 0);
            v26 = sub_1682BA0((__int64)&v86, (__int64)&v80);
            LOBYTE(v82[0]) = *(_WORD *)(a3[4].m128i_i64[1] + 8) == 67;
            sub_1588420(v26, (unsigned __int8 *)v82);
            sub_15F7200(&v86);
            goto LABEL_31;
          }
          v48 = (__int64 *)ptr;
          v49 = 8LL * (unsigned int)v84;
          v50 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL);
          v79 = (__int64 *)((char *)ptr + v49);
          v88 = v50;
          v86 = v80;
          v87 = v81;
          v51 = v49 >> 3;
          v52 = v49 >> 5;
          if ( v52 )
          {
            v77 = (__int64 *)((char *)ptr + 32 * v52);
            while ( 1 )
            {
              v59 = *v48;
              v60 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64))(*(_QWORD *)v50 + 648LL))(
                      v50,
                      v86,
                      v87);
              if ( v60 == (*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v88 + 648LL))(
                            v88,
                            *(_QWORD *)(v59 + 16) + 16LL,
                            **(unsigned int **)(v59 + 16)) )
                goto LABEL_53;
              v53 = v48[1];
              v54 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64))(*(_QWORD *)v88 + 648LL))(
                      v88,
                      v86,
                      v87);
              if ( v54 == (*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v88 + 648LL))(
                            v88,
                            *(_QWORD *)(v53 + 16) + 16LL,
                            **(unsigned int **)(v53 + 16)) )
              {
                ++v48;
                goto LABEL_53;
              }
              v55 = v48[2];
              v56 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64))(*(_QWORD *)v88 + 648LL))(
                      v88,
                      v86,
                      v87);
              if ( v56 == (*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v88 + 648LL))(
                            v88,
                            *(_QWORD *)(v55 + 16) + 16LL,
                            **(unsigned int **)(v55 + 16)) )
              {
                v48 += 2;
                goto LABEL_53;
              }
              v57 = v48[3];
              v58 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64))(*(_QWORD *)v88 + 648LL))(
                      v88,
                      v86,
                      v87);
              if ( v58 == (*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v88 + 648LL))(
                            v88,
                            *(_QWORD *)(v57 + 16) + 16LL,
                            **(unsigned int **)(v57 + 16)) )
              {
                v48 += 3;
                goto LABEL_53;
              }
              v48 += 4;
              if ( v77 == v48 )
              {
                v51 = v79 - v48;
                break;
              }
              v50 = v88;
            }
          }
          if ( v51 == 2 )
            goto LABEL_75;
          if ( v51 != 3 )
          {
            if ( v51 != 1 )
              goto LABEL_54;
LABEL_63:
            if ( !sub_1803A80((__int64)&v86, *v48) )
              goto LABEL_54;
            goto LABEL_53;
          }
          if ( !sub_1803A80((__int64)&v86, *v48) )
            break;
LABEL_53:
          if ( v79 != v48 )
          {
            sub_168B9F0((__int64)&v86, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0x1BD0u, 0);
            sub_15F7200(&v86);
            goto LABEL_31;
          }
LABEL_54:
          v61 = *(_QWORD *)(v78 + 8);
          v62 = (unsigned int)v84;
          v63 = (unsigned int)v84 + 1LL;
          if ( v63 > HIDWORD(v84) )
          {
            sub_2237220(&ptr, v85, v63, 8);
            v62 = (unsigned int)v84;
          }
          *((_QWORD *)ptr + v62) = v61;
          v64 = a3[3].m128i_i8[10];
          v65 = a3[3].m128i_u16[4];
          LODWORD(v84) = v84 + 1;
          if ( v65 + ((v64 & 0x20) != 0) <= (int)v14 + 1 )
          {
            v6 = a2;
            goto LABEL_84;
          }
          if ( v65 <= (unsigned int)++v14 )
            goto LABEL_30;
        }
        ++v48;
LABEL_75:
        if ( !sub_1803A80((__int64)&v86, *v48) )
        {
          ++v48;
          goto LABEL_63;
        }
        goto LABEL_53;
      }
LABEL_30:
      sub_168B9F0((__int64)&v86, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0xC57u, 0);
      v38 = sub_15DD120((__int64)&v86, (__int64)a3);
      LODWORD(v82[0]) = 3;
      sub_180A710(v38, (int *)v82);
      sub_15F7200(&v86);
    }
    else
    {
LABEL_84:
      v68 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6);
      *(_BYTE *)(v68 + 84) |= 0x80u;
      v69 = ptr;
      v70 = v84;
      v71 = (__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL);
      if ( *(_WORD *)(a3[4].m128i_i64[1] + 8) == 68 )
      {
        v72 = (__m128i *)sub_1806F50(v71, 56, 3u);
        sub_B2E080(v72, *(_QWORD *)(a1 + 248), a3, v69, v70);
      }
      else
      {
        v72 = (__m128i *)sub_1806F50(v71, 56, 3u);
        sub_B2E000(v72, *(_QWORD *)(a1 + 248), a3, v69, v70);
      }
      sub_B8CC60(v6, (__int64)v72, v73, v74, v75, v76);
    }
LABEL_31:
    if ( ptr != v85 )
      free(ptr);
  }
}
