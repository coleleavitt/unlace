unsigned __int64 __fastcall sub_17DF910(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        double a8)
{
  void *v13; // rdi
  __int64 v14; // rax
  _BYTE *v15; // rdx
  unsigned int v16; // ecx
  unsigned int v17; // edx
  int v18; // eax
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // r15
  __int64 v23; // rdx
  int v24; // eax
  unsigned __int64 v25; // rcx
  unsigned __int8 v26; // cl
  __int64 v27; // rax
  __int64 *v28; // rsi
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // rax
  int v32; // esi
  __int64 v33; // rax
  __int64 v34; // r9
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rax
  _QWORD *v38; // rax
  __int64 v40; // [rsp+10h] [rbp-128h]
  __int64 v41; // [rsp+10h] [rbp-128h]
  __int64 v42; // [rsp+10h] [rbp-128h]
  __int64 v43; // [rsp+18h] [rbp-120h]
  int v44; // [rsp+24h] [rbp-114h] BYREF
  __int64 v45; // [rsp+28h] [rbp-110h] BYREF
  __int64 v46; // [rsp+30h] [rbp-108h] BYREF
  char v47; // [rsp+38h] [rbp-100h]
  __int64 v48; // [rsp+3Ch] [rbp-FCh]
  char v49; // [rsp+44h] [rbp-F4h]
  void *v50; // [rsp+48h] [rbp-F0h]
  __int64 v51; // [rsp+50h] [rbp-E8h]
  _BYTE v52[24]; // [rsp+58h] [rbp-E0h] BYREF
  _BYTE v53[32]; // [rsp+70h] [rbp-C8h] BYREF
  unsigned __int8 *v54; // [rsp+90h] [rbp-A8h] BYREF
  char v55; // [rsp+E8h] [rbp-50h]
  char v56; // [rsp+F4h] [rbp-44h]

  if ( *(_QWORD *)(a3 + 16) )
  {
    sub_168B9F0((__int64)v53, a1 + 1, *(_DWORD *)(a3 + 80), 0x131Cu, 0);
    v46 = *(_QWORD *)(a3 + 8);
    sub_1587DB0((__int64)v53, &v46);
    sub_15F7200(v53);
    *(_BYTE *)(a3 + 720) |= 1u;
    v13 = *(void **)(a6 + 88);
    a4 = a1[68];
    *(_DWORD *)a6 = 0;
    *(_DWORD *)(a6 + 16) = 0;
    if ( v13 )
      sub_1A39780(v13);
    *(_BYTE *)(a6 + 166) = 0;
    a7 = 0;
    *(_OWORD *)(a6 + 88) = 0;
  }
  sub_17A3FF0((__int64)a1, *(_QWORD *)a3);
  v14 = *(_QWORD *)a3;
  if ( (*(_BYTE *)(*(_QWORD *)a3 + 3LL) >> 7) | *(_BYTE *)(*(_QWORD *)a3 + 4LL) & 1 )
  {
    v15 = (_BYTE *)a1[29];
    v16 = 4003;
    if ( (*v15 & 0x20) != 0 )
    {
      v16 = (v15[1] & 8) == 0 ? 7117 : 4003;
      if ( *(char *)(v14 + 3) >= 0 )
        goto LABEL_8;
    }
    else if ( *(char *)(v14 + 3) >= 0 )
    {
LABEL_8:
      v17 = *(_DWORD *)(v14 + 260);
LABEL_9:
      sub_168B9F0((__int64)v53, a1 + 1, v17, v16, 0);
      LODWORD(v46) = (*(_BYTE *)(a1[29] + 1) & 0x40) != 0;
      sub_1588370((__int64)v53, (unsigned int *)&v46);
      sub_15F7200(v53);
      v14 = *(_QWORD *)a3;
      goto LABEL_10;
    }
    v17 = *(_DWORD *)(v14 + 240);
    goto LABEL_9;
  }
LABEL_10:
  if ( (*(_BYTE *)(v14 + 4) & 0x30) != 0 )
  {
    sub_168B9F0((__int64)v53, a1 + 1, *(_DWORD *)(v14 + 272), 0xFB4u, 0);
    LODWORD(v45) = 1;
    v27 = sub_1587D10((__int64)v53, (int *)&v45);
    LODWORD(v46) = (*(_BYTE *)(*(_QWORD *)a3 + 4LL) >> 4) & 3;
    sub_1587D10(v27, (int *)&v46);
    sub_15F7200(v53);
    v18 = *(_DWORD *)(a3 + 56);
    if ( !v18 )
      goto LABEL_12;
LABEL_28:
    v28 = a1 + 1;
    if ( v18 == 9 )
    {
      sub_168B9F0((__int64)v53, v28, *(_DWORD *)(a3 + 80), 0xE21u, 0);
      if ( v55 )
      {
        sub_AE9DF0(&v54, (__int64)"typedef", 1u);
      }
      else if ( v56 )
      {
        sub_17B29E0((__int64)v53, (__int64)"typedef");
      }
      v21 = 0;
      sub_15F7200(v53);
    }
    else
    {
      v21 = 0;
      sub_168B9F0((__int64)v53, v28, *(_DWORD *)(a3 + 80), 0x14CFu, 0);
      v46 = *(_QWORD *)(a3 + 80);
      sub_1587DB0((__int64)v53, &v46);
      sub_15F7200(v53);
    }
    return v21;
  }
  v18 = *(_DWORD *)(a3 + 56);
  if ( v18 )
    goto LABEL_28;
LABEL_12:
  v21 = sub_B7A510(a1[31], a1[68], *(_DWORD *)(a3 + 88), *(_DWORD *)(a3 + 80), *(_QWORD *)(a3 + 64), a5);
  if ( (*(_BYTE *)(a3 + 720) & 1) != 0
    || (v23 = *(_QWORD *)a3, v24 = (**(_DWORD **)a3 >> 12) & 0x7F, ((**(_DWORD **)a3 >> 12) & 0x7F) == 0x45) )
  {
    sub_B88650(v21, 1);
    goto LABEL_14;
  }
  v25 = *(unsigned int *)(v23 + 268);
  if ( (_DWORD)v25 )
  {
    v26 = *(_BYTE *)(a1[68] + 8) & 0x7F;
    if ( v26 > 0x12u )
    {
      if ( ((v26 + 94) & 0x7Fu) > 5 )
      {
LABEL_21:
        v25 = *(_QWORD *)(v21 + 8);
        if ( (v25 & 7) != 0 )
        {
          v25 = v25 & 0xFFFFFFFFFFFFFFF8LL | 4;
          *(_QWORD *)(v21 + 8) = v25;
          v23 = *(_QWORD *)a3;
          v24 = (**(_DWORD **)a3 >> 12) & 0x7F;
        }
        goto LABEL_23;
      }
    }
    else if ( ((1LL << v26) & 0x40182) == 0 )
    {
      goto LABEL_21;
    }
    sub_168B9F0((__int64)v53, a1 + 1, *(_DWORD *)(v21 + 24), 0x1070u, 0);
    v44 = 2;
    v29 = sub_1587D10((__int64)v53, &v44);
    v30 = v29;
    if ( *(_BYTE *)(v29 + 120) )
    {
      v40 = v29;
      sub_AE9DF0((unsigned __int8 **)(v29 + 32), v21, 0xAu);
      v30 = v40;
    }
    else if ( *(_BYTE *)(v29 + 132) )
    {
      v41 = v29;
      v33 = sub_168B9E0((_QWORD *)v29);
      v35 = v41;
      v36 = v33;
      v37 = *(_QWORD *)(v41 + 16);
      if ( v37 )
      {
        v43 = v36;
        v37 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v37 + 32LL))(v37);
        v36 = v43;
        v35 = v41;
      }
      v42 = v35;
      v46 = v37;
      v38 = sub_1587BC0(v36, &v46, v36, (__int64)&v46, v35, v34);
      sub_AE9DF0((unsigned __int8 **)(*v38 + 32LL * *(unsigned int *)(v42 + 128) + 8), v21, 0xAu);
      v30 = v42;
    }
    LODWORD(v45) = *(_DWORD *)(*(_QWORD *)a3 + 268LL);
    HIDWORD(v45) = v45;
    v31 = sub_1587DB0(v30, &v45);
    v32 = *(_DWORD *)(*(_QWORD *)a3 + 268LL);
    v49 = 0;
    v50 = v52;
    LODWORD(v46) = v32;
    HIDWORD(v46) = v32;
    v48 = 0;
    v51 = 0;
    v52[0] = 0;
    v52[16] = 0;
    v47 = 1;
    sub_1589170(v31, &v46);
    if ( v50 != v52 )
      operator delete(v50);
    sub_15F7200(v53);
    v23 = *(_QWORD *)a3;
    v24 = (**(_DWORD **)a3 >> 12) & 0x7F;
LABEL_23:
    if ( (unsigned int)(unsigned __int8)v24 - 23 > 4 )
      goto LABEL_15;
    goto LABEL_24;
  }
  if ( ((**(_DWORD **)a3 >> 12) & 0x7Fu) - 23 <= 4 )
LABEL_24:
    sub_17B3900(a1, *(_QWORD *)(v23 + 8), v21, v25, v19, v20, a7, a8);
LABEL_14:
  if ( v21 )
  {
LABEL_15:
    sub_1836CB0(a1, a2, v21, a3);
    sub_17AF4B0((__int64)a1, (__int64)a2, v21);
    v53[0] = (*(_BYTE *)(a3 + 720) & 0x10) != 0;
    v21 = sub_17DF540(a1, a2, a4, v21, (int *)a6, v53);
    *(_BYTE *)(a3 + 720) = (16 * (v53[0] & 1)) | *(_BYTE *)(a3 + 720) & 0xEF;
  }
  return v21;
}
