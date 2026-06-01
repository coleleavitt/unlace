void __fastcall sub_14F3B40(__int64 a1, __int64 a2, char a3, unsigned int a4)
{
  __int16 v5; // bx
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int8 *v11; // rbx
  int v12; // r13d
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // r12
  __int64 v24; // r14
  __int64 v25; // r12
  void *v26; // rdi
  __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // r12
  __int64 v31; // r14
  __int64 v32; // r12
  void *v33; // rdi
  __int64 v34; // rax
  __int64 v35; // [rsp+4h] [rbp-84h]
  int v36; // [rsp+Ch] [rbp-7Ch]
  unsigned __int8 *v37; // [rsp+10h] [rbp-78h] BYREF
  __int64 v38; // [rsp+18h] [rbp-70h]

  v5 = (*(_WORD *)(a2 + 2) >> 7) & 3;
  if ( ((*(_WORD *)(a2 + 2) >> 7) & 3) == a3 )
  {
    sub_1564820(&v37, a1, a4, 145);
    v17 = 256;
    LOBYTE(v17) = v5;
    sub_FC65C0(&v37, v17, v18, v19);
    v11 = v37;
    v12 = *(_DWORD *)(a2 + 4);
    if ( v37 )
      goto LABEL_3;
    v20 = v38;
    v21 = *(_DWORD *)(v38 + 14976);
    if ( v21 )
    {
      v22 = (unsigned int)(v21 - 1);
      *(_DWORD *)(v38 + 14976) = v22;
      v11 = *(unsigned __int8 **)(v20 + 8 * v22 + 14848);
      v23 = *((unsigned int *)v11 + 134);
      *v11 = 0;
      v24 = *((_QWORD *)v11 + 66);
      *((_DWORD *)v11 + 106) = 0;
      v25 = v24 + (v23 << 6);
      if ( v24 != v25 )
      {
        do
        {
          while ( 1 )
          {
            v25 -= 64;
            v26 = *(void **)(v25 + 24);
            if ( v26 == (void *)(v25 + 40) )
              break;
            operator delete(v26);
            if ( v24 == v25 )
              goto LABEL_12;
          }
        }
        while ( v24 != v25 );
        goto LABEL_12;
      }
LABEL_25:
      v15 = 1;
      v13 = 0;
      goto LABEL_13;
    }
LABEL_22:
    v34 = operator new(0x3A0u);
    v14 = 8;
    v15 = 1;
    v11 = (unsigned __int8 *)v34;
    *(_BYTE *)v34 = 0;
    *(_QWORD *)(v34 + 96) = v34 + 112;
    *(_QWORD *)(v34 + 128) = v34 + 144;
    *(_QWORD *)(v34 + 160) = v34 + 176;
    *(_QWORD *)(v34 + 192) = v34 + 208;
    *(_QWORD *)(v34 + 224) = v34 + 240;
    *(_QWORD *)(v34 + 256) = v34 + 272;
    *(_QWORD *)(v34 + 288) = v34 + 304;
    *(_QWORD *)(v34 + 320) = v34 + 336;
    *(_QWORD *)(v34 + 352) = v34 + 368;
    *(_QWORD *)(v34 + 384) = v34 + 400;
    *(_QWORD *)(v34 + 416) = v34 + 432;
    *(_QWORD *)(v34 + 104) = 0;
    *(_BYTE *)(v34 + 112) = 0;
    *(_QWORD *)(v34 + 136) = 0;
    *(_BYTE *)(v34 + 144) = 0;
    *(_QWORD *)(v34 + 168) = 0;
    *(_BYTE *)(v34 + 176) = 0;
    *(_QWORD *)(v34 + 200) = 0;
    *(_BYTE *)(v34 + 208) = 0;
    *(_QWORD *)(v34 + 232) = 0;
    *(_BYTE *)(v34 + 240) = 0;
    *(_QWORD *)(v34 + 264) = 0;
    *(_BYTE *)(v34 + 272) = 0;
    *(_QWORD *)(v34 + 296) = 0;
    *(_BYTE *)(v34 + 304) = 0;
    *(_QWORD *)(v34 + 328) = 0;
    *(_BYTE *)(v34 + 336) = 0;
    *(_QWORD *)(v34 + 360) = 0;
    *(_BYTE *)(v34 + 368) = 0;
    *(_QWORD *)(v34 + 392) = 0;
    *(_BYTE *)(v34 + 400) = 0;
    *(_QWORD *)(v34 + 424) = 0x800000000LL;
    *(_QWORD *)(v34 + 528) = v34 + 544;
    *(_QWORD *)(v34 + 536) = 0x600000000LL;
    v13 = 0;
    goto LABEL_14;
  }
  sub_1564820(&v37, a1, a4, 44);
  v6 = 256;
  LOBYTE(v6) = a3;
  sub_FC65C0(&v37, v6, v7, v8);
  v9 = (*(_WORD *)(a2 + 2) >> 7) & 3;
  BYTE1(v9) = 1;
  sub_FC65C0(&v37, v9, v9, v10);
  v11 = v37;
  v12 = *(_DWORD *)(a2 + 4);
  if ( v37 )
  {
LABEL_3:
    v13 = *((unsigned int *)v11 + 106);
    v14 = *((unsigned int *)v11 + 107);
    v15 = v13 + 1;
    goto LABEL_4;
  }
  v27 = v38;
  v28 = *(_DWORD *)(v38 + 14976);
  if ( !v28 )
    goto LABEL_22;
  v29 = (unsigned int)(v28 - 1);
  *(_DWORD *)(v38 + 14976) = v29;
  v11 = *(unsigned __int8 **)(v27 + 8 * v29 + 14848);
  v30 = *((unsigned int *)v11 + 134);
  *v11 = 0;
  v31 = *((_QWORD *)v11 + 66);
  *((_DWORD *)v11 + 106) = 0;
  v32 = v31 + (v30 << 6);
  if ( v31 == v32 )
    goto LABEL_25;
  do
  {
    while ( 1 )
    {
      v32 -= 64;
      v33 = *(void **)(v32 + 24);
      if ( v33 == (void *)(v32 + 40) )
        break;
      operator delete(v33);
      if ( v31 == v32 )
        goto LABEL_12;
    }
  }
  while ( v31 != v32 );
LABEL_12:
  v13 = *((unsigned int *)v11 + 106);
  v15 = v13 + 1;
LABEL_13:
  *((_DWORD *)v11 + 134) = 0;
  v14 = *((unsigned int *)v11 + 107);
LABEL_14:
  v37 = v11;
LABEL_4:
  LODWORD(v35) = v12;
  HIDWORD(v35) = v12;
  LOBYTE(v36) = 1;
  if ( v15 > v14 )
  {
    sub_2237220(v11 + 416, v11 + 432, v15, 12);
    v13 = *((unsigned int *)v11 + 106);
  }
  v16 = *((_QWORD *)v11 + 52) + 12 * v13;
  *(_QWORD *)v16 = v35;
  *(_DWORD *)(v16 + 8) = v36;
  ++*((_DWORD *)v11 + 106);
  sub_AEA040((__int64)&v37);
}
