void __fastcall sub_19D8A40(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, double a5)
{
  __int64 *v5; // rsi
  __int64 *v7; // rax
  __int64 v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r14
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rsi
  char v17; // r14
  unsigned __int64 v18; // rax
  unsigned int v19; // r15d
  unsigned __int64 v20; // r13
  unsigned __int8 *v21; // rbp
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  char v26; // al
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rbp
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // rdx
  int v35; // eax
  __int64 v36; // rax
  __int64 v37; // r14
  __int64 v38; // rdx
  __int64 v39; // r14
  void *v40; // rdi
  __int64 v41; // rax
  __int64 v42; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v43; // [rsp+18h] [rbp-E0h] BYREF
  unsigned __int64 v44; // [rsp+20h] [rbp-D8h] BYREF
  int v45; // [rsp+28h] [rbp-D0h]
  _QWORD v46[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v47; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v48; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v49; // [rsp+58h] [rbp-A0h]
  char v50; // [rsp+A8h] [rbp-50h]
  unsigned int v51; // [rsp+B0h] [rbp-48h]
  char v52; // [rsp+B4h] [rbp-44h]

  v5 = (__int64 *)(a2 + 8);
  sub_168B9F0((__int64)v46, v5, a3, *(_DWORD *)(a1 + 8), 0);
  v7 = *(__int64 **)(a1 + 24);
  v8 = *v7;
  if ( v50 )
  {
    v16 = *v7;
    sub_AE9DF0(&v48, *v7, 9u);
    v17 = v50;
  }
  else
  {
    if ( !v52 )
    {
      v43 = sub_EEC8C0(**(_QWORD **)(a1 + 16), (__int64)v5, a5);
      goto LABEL_4;
    }
    v13 = sub_168B9E0(v46);
    v14 = v47;
    if ( v47 )
      v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v47 + 32LL))(v47);
    v44 = v14;
    v15 = sub_1587BC0(v13, (__int64 *)&v44, v9, v10, v11, v12);
    v16 = v8;
    sub_AE9DF0((unsigned __int8 **)(*v15 + 32LL * v51 + 8), v8, 9u);
    v17 = v50;
  }
  v18 = sub_EEC8C0(**(_QWORD **)(a1 + 16), v16, a5);
  v19 = v18;
  v43 = v18;
  v20 = HIDWORD(v18);
  if ( v17 )
  {
    v21 = v48;
    if ( v48 )
    {
      v22 = *((unsigned int *)v48 + 106);
      v23 = *((unsigned int *)v48 + 107);
      v24 = v22 + 1;
    }
    else
    {
      v34 = v49;
      v35 = *(_DWORD *)(v49 + 14976);
      if ( v35 )
      {
        v36 = (unsigned int)(v35 - 1);
        *(_DWORD *)(v49 + 14976) = v36;
        v21 = *(unsigned __int8 **)(v34 + 8 * v36 + 14848);
        v37 = *((unsigned int *)v21 + 134);
        *v21 = 0;
        v38 = *((_QWORD *)v21 + 66);
        *((_DWORD *)v21 + 106) = 0;
        v39 = v38 + (v37 << 6);
        if ( v38 == v39 )
        {
          v24 = 1;
          v22 = 0;
        }
        else
        {
          do
          {
            while ( 1 )
            {
              v39 -= 64;
              v40 = *(void **)(v39 + 24);
              if ( v40 == (void *)(v39 + 40) )
                break;
              v42 = v38;
              operator delete(v40);
              v38 = v42;
              if ( v42 == v39 )
                goto LABEL_27;
            }
          }
          while ( v38 != v39 );
LABEL_27:
          v22 = *((unsigned int *)v21 + 106);
          v24 = v22 + 1;
        }
        *((_DWORD *)v21 + 134) = 0;
        v23 = *((unsigned int *)v21 + 107);
      }
      else
      {
        v41 = operator new(0x3A0u);
        v23 = 8;
        v24 = 1;
        v21 = (unsigned __int8 *)v41;
        *(_BYTE *)v41 = 0;
        *(_QWORD *)(v41 + 96) = v41 + 112;
        *(_QWORD *)(v41 + 128) = v41 + 144;
        *(_QWORD *)(v41 + 160) = v41 + 176;
        *(_QWORD *)(v41 + 192) = v41 + 208;
        *(_QWORD *)(v41 + 224) = v41 + 240;
        *(_QWORD *)(v41 + 256) = v41 + 272;
        *(_QWORD *)(v41 + 288) = v41 + 304;
        *(_QWORD *)(v41 + 320) = v41 + 336;
        *(_QWORD *)(v41 + 352) = v41 + 368;
        *(_QWORD *)(v41 + 384) = v41 + 400;
        *(_QWORD *)(v41 + 416) = v41 + 432;
        *(_QWORD *)(v41 + 104) = 0;
        *(_BYTE *)(v41 + 112) = 0;
        *(_QWORD *)(v41 + 136) = 0;
        *(_BYTE *)(v41 + 144) = 0;
        *(_QWORD *)(v41 + 168) = 0;
        *(_BYTE *)(v41 + 176) = 0;
        *(_QWORD *)(v41 + 200) = 0;
        *(_BYTE *)(v41 + 208) = 0;
        *(_QWORD *)(v41 + 232) = 0;
        *(_BYTE *)(v41 + 240) = 0;
        *(_QWORD *)(v41 + 264) = 0;
        *(_BYTE *)(v41 + 272) = 0;
        *(_QWORD *)(v41 + 296) = 0;
        *(_BYTE *)(v41 + 304) = 0;
        *(_QWORD *)(v41 + 328) = 0;
        *(_BYTE *)(v41 + 336) = 0;
        *(_QWORD *)(v41 + 360) = 0;
        *(_BYTE *)(v41 + 368) = 0;
        *(_QWORD *)(v41 + 392) = 0;
        *(_BYTE *)(v41 + 400) = 0;
        *(_QWORD *)(v41 + 424) = 0x800000000LL;
        *(_QWORD *)(v41 + 528) = v41 + 544;
        *(_QWORD *)(v41 + 536) = 0x600000000LL;
        v22 = 0;
      }
      v48 = v21;
    }
    v44 = __PAIR64__(v20, v19);
    LOBYTE(v45) = 1;
    if ( v24 > v23 )
    {
      sub_2237220(v21 + 416, v21 + 432, v24, 12);
      v22 = *((unsigned int *)v21 + 106);
    }
    v25 = *((_QWORD *)v21 + 52) + 12 * v22;
    *(_QWORD *)v25 = v44;
    *(_DWORD *)(v25 + 8) = v45;
    v26 = v50;
    ++*((_DWORD *)v21 + 106);
    goto LABEL_16;
  }
LABEL_4:
  if ( !v52 )
    goto LABEL_5;
  sub_19D2A80((__int64)v46, (__int64 *)&v43);
  v26 = v50;
LABEL_16:
  if ( v26 )
  {
    sub_AE9DF0(&v48, a4, 8u);
    goto LABEL_6;
  }
LABEL_5:
  if ( v52 )
  {
    v29 = sub_168B9E0(v46);
    v32 = v47;
    if ( v47 )
      v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v47 + 32LL))(v47);
    v44 = v32;
    v33 = sub_1587BC0(v29, (__int64 *)&v44, v27, v28, v30, v31);
    sub_AE9DF0((unsigned __int8 **)(*v33 + 32LL * v51 + 8), a4, 8u);
  }
LABEL_6:
  sub_15F7200(v46);
}
