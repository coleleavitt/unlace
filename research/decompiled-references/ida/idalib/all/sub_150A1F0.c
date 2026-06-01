__int64 __fastcall sub_150A1F0(__int64 a1, char a2)
{
  __int64 v3; // rbx
  unsigned int v4; // r13d
  char v5; // al
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  char *v11; // rbx
  _BYTE *v12; // rsi
  char *v13; // r12
  unsigned __int8 *v14; // rax
  unsigned __int8 *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r14
  __int16 v18; // ax
  unsigned int v19; // eax
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  __int64 v25; // rdx
  unsigned __int64 v27; // rcx
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  void *v34; // rdi
  unsigned __int8 *v35; // [rsp+10h] [rbp-178h]
  __int64 v36; // [rsp+10h] [rbp-178h]
  __int64 v37; // [rsp+18h] [rbp-170h]
  __int64 v38; // [rsp+20h] [rbp-168h]
  _BYTE *v39; // [rsp+30h] [rbp-158h] BYREF
  char v40; // [rsp+38h] [rbp-150h]
  __int64 v41; // [rsp+40h] [rbp-148h]
  int v42; // [rsp+48h] [rbp-140h]
  __int16 v43; // [rsp+4Ch] [rbp-13Ch]
  __int64 (__fastcall *v44)(__int64); // [rsp+50h] [rbp-138h]
  __int64 v45; // [rsp+58h] [rbp-130h]
  __int64 v46; // [rsp+60h] [rbp-128h]
  void *ptr; // [rsp+70h] [rbp-118h] BYREF
  __int64 v48; // [rsp+78h] [rbp-110h]
  _BYTE v49[48]; // [rsp+80h] [rbp-108h] BYREF
  unsigned __int8 *v50; // [rsp+B0h] [rbp-D8h] BYREF
  __int64 v51; // [rsp+B8h] [rbp-D0h]
  __int64 v52; // [rsp+100h] [rbp-88h] BYREF
  void *v53; // [rsp+108h] [rbp-80h]
  __int64 v54; // [rsp+110h] [rbp-78h]
  _BYTE v55[16]; // [rsp+118h] [rbp-70h] BYREF
  __int64 v56; // [rsp+128h] [rbp-60h] BYREF
  void *v57; // [rsp+130h] [rbp-58h]
  __int64 v58; // [rsp+138h] [rbp-50h]
  _BYTE v59[72]; // [rsp+140h] [rbp-48h] BYREF

  v3 = 0;
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  v4 = *(_DWORD *)(a1 + 40);
  v41 = a1;
  v39 = (_BYTE *)(a1 + 1952);
  v5 = *(_BYTE *)(a1 + 1952);
  *(_BYTE *)(a1 + 1952) = 1;
  v40 = v5;
  v43 = 449;
  v42 = 1507350;
  v44 = sub_146A990;
  v45 = 0;
  v46 = 0;
  v6 = sub_20EB760(73, 0);
  if ( (unsigned __int8)sub_156A040(&v39, 1625, v6, 0) )
    goto LABEL_29;
  v56 = a1 + 504;
  v53 = v55;
  v57 = v59;
  v52 = 0;
  v54 = 0x200000000LL;
  v58 = 0x200000000LL;
  sub_1485110(a1, 5, (__int64)&v52, 0);
  if ( (unsigned __int8)sub_14808E0((__int64)&v39, (__int64 *)&byte_5, v7, v8, v9, v10) || a2 )
  {
    v3 = 0;
    goto LABEL_25;
  }
  v11 = (char *)v53;
  v12 = v49;
  v13 = (char *)v53 + 8 * (unsigned int)v54;
  ptr = v49;
  v48 = 0x600000000LL;
  if ( v53 == v13 )
  {
    v25 = 0;
    goto LABEL_22;
  }
  do
  {
    while ( 1 )
    {
      v17 = *(_QWORD *)v11;
      v18 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)v11 + 72LL) + 8LL);
      if ( v18 == 6 )
      {
        if ( !(unsigned __int8)sub_15EAA10(*(_QWORD *)v11, *(_QWORD *)(a1 + 96), 1)
          || !(unsigned __int8)sub_15EB980(v17, *(_QWORD *)(a1 + 96), 2) )
        {
          goto LABEL_9;
        }
        v27 = 0;
        if ( *(_WORD *)(v17 + 56) > 1u )
          v27 = *(_QWORD *)(v17 + 88) & 0xFFFFFFFFFFFFFFFCLL;
        v22 = sub_1626710(
                *(_QWORD *)(*(_QWORD *)(a1 + 96) + 624LL),
                v17,
                *(_QWORD *)(v17 + 80) & 0xFFFFFFFFFFFFFFFCLL,
                v27);
        if ( !v22 )
          goto LABEL_9;
        break;
      }
      if ( v18 == 77 )
      {
        if ( !(unsigned __int8)sub_15EAA10(*(_QWORD *)v11, *(_QWORD *)(a1 + 96), 1)
          || !(unsigned __int8)sub_15EB980(v17, *(_QWORD *)(a1 + 96), 2) )
        {
          goto LABEL_9;
        }
        v19 = *(unsigned __int16 *)(v17 + 56);
        if ( v19 <= 2 )
        {
          v20 = 0;
          v21 = 0;
          if ( v19 != 2 )
          {
LABEL_17:
            v22 = sub_1825BB0(*(_QWORD *)(a1 + 96), v17, *(_QWORD *)(v17 + 80) & 0xFFFFFFFFFFFFFFFCLL, v21, v20);
            if ( v22 )
              break;
            goto LABEL_9;
          }
        }
        else
        {
          v20 = *(_QWORD *)(v17 + 96) & 0xFFFFFFFFFFFFFFFCLL;
        }
        v21 = *(_QWORD *)(v17 + 88) & 0xFFFFFFFFFFFFFFFCLL;
        goto LABEL_17;
      }
      if ( v18 != 2 )
      {
        sub_1564820(&v50, a1, v4, 2174);
        v14 = v50;
        if ( !v50 )
        {
          v28 = v51;
          v29 = *(_DWORD *)(v51 + 14976);
          if ( v29 )
          {
            v30 = (unsigned int)(v29 - 1);
            *(_DWORD *)(v51 + 14976) = v30;
            v14 = *(unsigned __int8 **)(v28 + 8 * v30 + 14848);
            v31 = *((unsigned int *)v14 + 134);
            *v14 = 0;
            v32 = *((_QWORD *)v14 + 66);
            *((_DWORD *)v14 + 106) = 0;
            v33 = v32 + (v31 << 6);
            while ( v32 != v33 )
            {
              while ( 1 )
              {
                v33 -= 64;
                v34 = *(void **)(v33 + 24);
                if ( v34 == (void *)(v33 + 40) )
                  break;
                v38 = v33;
                v37 = v32;
                v35 = v14;
                operator delete(v34);
                v32 = v37;
                v33 = v38;
                v14 = v35;
                if ( v37 == v38 )
                  goto LABEL_48;
              }
            }
LABEL_48:
            *((_DWORD *)v14 + 134) = 0;
          }
          else
          {
            v14 = (unsigned __int8 *)operator new(0x3A0u);
            *v14 = 0;
            *((_QWORD *)v14 + 12) = v14 + 112;
            *((_QWORD *)v14 + 16) = v14 + 144;
            *((_QWORD *)v14 + 20) = v14 + 176;
            *((_QWORD *)v14 + 24) = v14 + 208;
            *((_QWORD *)v14 + 28) = v14 + 240;
            *((_QWORD *)v14 + 32) = v14 + 272;
            *((_QWORD *)v14 + 36) = v14 + 304;
            *((_QWORD *)v14 + 40) = v14 + 336;
            *((_QWORD *)v14 + 44) = v14 + 368;
            *((_QWORD *)v14 + 48) = v14 + 400;
            *((_QWORD *)v14 + 52) = v14 + 432;
            *((_QWORD *)v14 + 13) = 0;
            v14[112] = 0;
            *((_QWORD *)v14 + 17) = 0;
            v14[144] = 0;
            *((_QWORD *)v14 + 21) = 0;
            v14[176] = 0;
            *((_QWORD *)v14 + 25) = 0;
            v14[208] = 0;
            *((_QWORD *)v14 + 29) = 0;
            v14[240] = 0;
            *((_QWORD *)v14 + 33) = 0;
            v14[272] = 0;
            *((_QWORD *)v14 + 37) = 0;
            v14[304] = 0;
            *((_QWORD *)v14 + 41) = 0;
            v14[336] = 0;
            *((_QWORD *)v14 + 45) = 0;
            v14[368] = 0;
            *((_QWORD *)v14 + 49) = 0;
            v14[400] = 0;
            *((_QWORD *)v14 + 53) = 0x800000000LL;
            *((_QWORD *)v14 + 66) = v14 + 544;
            *((_QWORD *)v14 + 67) = 0x600000000LL;
          }
          v50 = v14;
        }
        v14[*v14 + 1] = 16;
        v15 = v50;
        v16 = *v50;
        *v50 = v16 + 1;
        *(_QWORD *)&v15[8 * v16 + 16] = v17;
        sub_AEA040((__int64)&v50);
        goto LABEL_9;
      }
      if ( (unsigned __int8)sub_15EB880(*(_QWORD *)v11, *(_QWORD *)(a1 + 96), 2) )
      {
        v22 = sub_1625800(
                *(_QWORD *)(*(_QWORD *)(a1 + 96) + 624LL),
                v17,
                *(_QWORD *)(v17 + 80) & 0xFFFFFFFFFFFFFFFCLL,
                *(_QWORD *)(v17 + 88) & 0xFFFFFFFFFFFFFFFCLL);
        if ( v22 )
          break;
      }
LABEL_9:
      v11 += 8;
      if ( v13 == v11 )
        goto LABEL_21;
    }
    v23 = (unsigned int)v48;
    v24 = (unsigned int)v48 + 1LL;
    if ( v24 > HIDWORD(v48) )
    {
      v36 = v22;
      sub_2237220(&ptr, v49, v24, 8);
      v23 = (unsigned int)v48;
      v22 = v36;
    }
    v11 += 8;
    *((_QWORD *)ptr + v23) = v22;
    LODWORD(v48) = v48 + 1;
  }
  while ( v13 != v11 );
LABEL_21:
  v12 = ptr;
  v25 = (unsigned int)v48;
LABEL_22:
  v3 = sub_1AF87E0(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 760LL), v12, v25, v4, (unsigned int)v46, HIDWORD(v46));
  if ( ptr != v49 )
    free(ptr);
LABEL_25:
  sub_15DCED0(v56, &v56);
  if ( v57 != v59 )
    free(v57);
  if ( v53 != v55 )
    free(v53);
LABEL_29:
  *v39 = v40;
  return v3;
}
