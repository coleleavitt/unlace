__int64 __fastcall sub_18DF8C0(
        __int64 *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        double a6,
        double a7)
{
  __int64 v7; // r15
  char v10; // al
  __int64 v11; // rbp
  int v12; // eax
  __int64 v13; // rdx
  __int64 *v14; // r12
  __int64 v15; // rax
  __int64 result; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r13
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  unsigned int v24; // r12d
  bool v25; // dl
  __int64 v26; // rdi
  unsigned int v27; // esi
  bool v28; // cl
  unsigned __int64 v29; // r9
  __int64 v30; // rsi
  _QWORD *v31; // rax
  __int64 v32; // rax
  unsigned __int64 v33; // r10
  __int64 *v34; // rax
  __int64 *v35; // r13
  __int64 i; // rax
  unsigned int v37; // eax
  __int64 v38; // rsi
  __int64 v39; // rdi
  __int64 v40; // rdx
  char v41; // al
  char v42; // dl
  __int64 v43; // r12
  unsigned int v44; // eax
  unsigned int v45; // ecx
  __int64 *v46; // r12
  __int64 v47; // r12
  __int64 v48; // r12
  _QWORD *v49; // r12
  __int64 v50; // rax
  bool v51; // al
  __int64 v52; // rdx
  __int64 v53; // r12
  int v54; // esi
  __int64 v55; // [rsp+8h] [rbp-120h]
  __int64 v56; // [rsp+8h] [rbp-120h]
  unsigned __int64 v57; // [rsp+8h] [rbp-120h]
  __int64 v58; // [rsp+10h] [rbp-118h]
  char v59; // [rsp+20h] [rbp-108h]
  __int64 v60; // [rsp+20h] [rbp-108h]
  __int64 v61; // [rsp+20h] [rbp-108h]
  __int64 v62; // [rsp+28h] [rbp-100h]
  __int64 v63; // [rsp+28h] [rbp-100h]
  __int64 v64; // [rsp+30h] [rbp-F8h]
  char v65; // [rsp+3Ch] [rbp-ECh]
  __int64 v66; // [rsp+48h] [rbp-E0h] BYREF
  __int64 v67; // [rsp+50h] [rbp-D8h] BYREF
  int v68; // [rsp+58h] [rbp-D0h]
  void *ptr; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v70; // [rsp+68h] [rbp-C0h]
  _QWORD v71[23]; // [rsp+70h] [rbp-B8h] BYREF

  v7 = a3;
  v10 = *(_BYTE *)(a3 + 28);
  v11 = a1[1];
  v66 = a3;
  v12 = v10 & 0x7F;
  v13 = (unsigned int)(v12 - 34);
  if ( (unsigned int)v13 > 5 )
  {
    if ( (unsigned int)(v12 - 40) <= 6 )
    {
      v39 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
      v40 = (unsigned int)*(unsigned __int8 *)(v39 + 16) - 43;
      if ( (unsigned int)v40 <= 1 || (v39 = sub_18BBE30(v39, a2, v40, a4)) != 0 )
      {
        v11 = sub_9B4870(v39, a2, v40, a4, a5);
        v41 = 1;
      }
      else
      {
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 16LL)
           - 25 <= 1 )
        {
          v53 = *a1;
          v44 = sub_C00A40(a2, a2, v40, a4, a5);
          v45 = 5371;
          v46 = (__int64 *)(v53 + 8);
          goto LABEL_39;
        }
        v41 = 1;
      }
LABEL_36:
      *(_QWORD *)(v66 + 48) = a1[1];
      v42 = *(_BYTE *)(a2 + 1);
      *(_QWORD *)(a2 + 8) = v11;
      *(_BYTE *)(a2 + 1) = v42 & 0xF9 | (2 * (v41 & 3));
      return a2;
    }
    v48 = *a1;
    v44 = sub_C00A40(a2, a2, v13, a4, a5);
    v45 = 5381;
    v46 = (__int64 *)(v48 + 8);
LABEL_39:
    sub_168B9F0((__int64)&ptr, v46, v44, v45, 0);
    v47 = sub_15993D0((__int64)&ptr, &v66);
    v67 = sub_EEC8C0(a2, (__int64)&v66, a6);
    sub_1587DB0(v47, &v67);
    sub_15F7200(&ptr);
    return 1;
  }
  v14 = (__int64 *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
  v15 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v15 + 16) == 42 )
    goto LABEL_3;
  v15 = sub_18BBDD0(*(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL), a2, v13, a4);
  if ( !v15 )
  {
    v19 = *v14;
    v20 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*v14 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    if ( (unsigned int)(v20 - 25) <= 1 )
    {
      if ( *(_BYTE *)(v19 + 16) != 26 )
      {
        if ( (_BYTE)v20 != 26 )
          goto LABEL_44;
        v19 = sub_F63050(*v14, a2, v20, v17);
        if ( !v19 )
          goto LABEL_44;
      }
      v21 = *(_QWORD *)(*(_QWORD *)(v7 + 48) & 0xFFFFFFFFFFFFFFF0LL);
      v22 = *(unsigned __int8 *)(v21 + 16);
      v23 = (unsigned int)(v22 - 25);
      if ( (unsigned int)v23 > 1 )
      {
        v21 = sub_F63050(v21, a2, v23, v22);
        if ( !v21 )
          goto LABEL_44;
        LOBYTE(v22) = *(_BYTE *)(v21 + 16);
      }
      if ( (_BYTE)v22 != 26
        || (*(_WORD *)a2 & 0x1FF) != 0x47
        || 8LL * *(unsigned __int16 *)(v21 + 22)
        || *(char *)(v21 + 19) >= 0 )
      {
LABEL_44:
        if ( (*(_BYTE *)(v7 + 28) & 0x7Fu) - 35 > 3 )
        {
          v52 = *a1;
          v41 = 1;
        }
        else
        {
          v51 = sub_B979F0((_QWORD *)v7);
          v52 = *a1;
          if ( v51 )
          {
            v41 = 1;
          }
          else
          {
            v11 = *(_QWORD *)(*(_QWORD *)(v52 + 248) + 19088LL);
            v41 = 0;
          }
        }
        if ( (*(_BYTE *)(*(_QWORD *)(v52 + 232) + 1LL) & 8) == 0 )
          v41 = 0;
        goto LABEL_36;
      }
      v24 = *(_DWORD *)(v7 + 24);
      v68 = 0;
      v25 = 1;
      v67 = 0;
      if ( (*(_QWORD *)(v7 + 80) & 0x200000LL) == 0 )
        v25 = (*(_QWORD *)(v7 + 80) & 0x100000LL) != 0;
      v26 = *a1;
      v27 = *(_DWORD *)(*a1 + 224);
      if ( ((v27 >> 3) & 7) == 7 )
      {
        v28 = 1;
        if ( (v27 & 0x104) != 0 )
          goto LABEL_17;
      }
      else
      {
        v28 = 1;
        if ( ((v27 >> 3) & 7) != 1 )
        {
LABEL_17:
          v29 = *(_QWORD *)(v7 + 56) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(v7 + 56) & 4) != 0 )
            v29 = *(_QWORD *)(v29 + 32);
          v30 = *(_QWORD *)(v7 + 40);
          v31 = (_QWORD *)(*(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFF8LL);
          if ( (*(_QWORD *)(v7 + 16) & 4) != 0 )
            v31 = (_QWORD *)*v31;
          v62 = (__int64)v31;
          v55 = *(_QWORD *)(v26 + 248);
          v65 = v28;
          v64 = v29;
          v59 = v25;
          v58 = a1[1];
          ptr = *(void **)(v7 + 40);
          LODWORD(v70) = v24;
          sub_B85890(v71, v30);
          v63 = sub_B7CBC0(v55, v62, v24, (__int64 *)&ptr, v58, v64, 0, v65, 0, v59, 0, (__int64)&v67);
          v32 = *(_QWORD *)(v7 + 56);
          v33 = 0;
          if ( (v32 & 4) != 0 )
          {
            v34 = (__int64 *)(v32 & 0xFFFFFFFFFFFFFFF8LL);
            if ( *v34 )
            {
              sub_B7BD70(v63, *v34, v34[1]);
              v33 = 0;
            }
          }
          v70 = 0x1000000000LL;
          ptr = v71;
          v56 = v19 + 48 + 8LL * *(unsigned __int16 *)(v19 + 22);
          if ( v56 == v19 + 48 )
          {
            v49 = v71;
          }
          else
          {
            v35 = (__int64 *)(v19 + 48);
            for ( i = sub_17A5990(*a1, v7 + 72, v24, *v35); ; i = sub_17A5990(*a1, v7 + 72, v24, *v35) )
            {
              v38 = (unsigned int)v70;
              *(_DWORD *)(i + 96) &= 0xFFF01FFF;
              if ( (unsigned int)v38 <= 0xFE )
              {
                *(_WORD *)(i + 98) = (16 * (unsigned __int8)v38) | *(_WORD *)(i + 98) & 0xF00F;
              }
              else
              {
                v60 = i;
                sub_B74850(i, v38);
                v38 = (unsigned int)v70;
                i = v60;
              }
              if ( v38 + 1 > (unsigned __int64)HIDWORD(v70) )
              {
                v61 = i;
                sub_2237220(&ptr, v71, v38 + 1, 8);
                *((_QWORD *)ptr + (unsigned int)v70) = v61;
              }
              else
              {
                *((_QWORD *)ptr + v38) = i;
              }
              ++v35;
              v37 = v70 + 1;
              LODWORD(v70) = v70 + 1;
              if ( (__int64 *)v56 == v35 )
                break;
            }
            v49 = ptr;
            v33 = v37;
          }
          v57 = v33;
          v50 = sub_B8C330(v63);
          sub_B7C440(v63, v50, v49, v57);
          sub_BF7F60(a2, v63);
          v66 = *(_QWORD *)(a2 + 16);
          if ( ptr != v71 )
            free(ptr);
          goto LABEL_44;
        }
      }
      v28 = 1;
      if ( (unsigned __int8)v27 >> 6 == 3 )
      {
        v54 = v27 & 0x100;
        if ( v54 )
          goto LABEL_17;
      }
      else
      {
        if ( (unsigned __int8)v27 >> 6 )
          goto LABEL_17;
        v54 = v27 & 0x100;
      }
      v28 = v54 != 0;
      goto LABEL_17;
    }
    v43 = *a1;
    v44 = sub_C00A40(a2, a2, v20, v17, v18);
    v45 = 5370;
    v46 = (__int64 *)(v43 + 8);
    goto LABEL_39;
  }
  v7 = v66;
LABEL_3:
  a1[1] = *(_QWORD *)(v15 + 32);
  result = sub_18DF8C0(a1, a2, v7);
  if ( result != 1 )
    return sub_160A600(*a1, result & 0xFFFFFFFFFFFFFFFELL, v11, 0xCu, 0, 0, a6, a7, 0);
  return result;
}
