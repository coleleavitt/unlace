void __fastcall sub_14402C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        __int64 (__fastcall *a7)(__int64, __int64, unsigned __int8 **),
        __int64 a8)
{
  __int64 v9; // r13
  char v11; // bp
  int v12; // r12d
  char v13; // r14
  int v14; // ebp
  unsigned __int16 v15; // ax
  bool v16; // cc
  char v17; // al
  _BYTE *v18; // rax
  unsigned __int8 *v19; // r14
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  unsigned __int8 v24; // dl
  __int64 v25; // rsi
  __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  int v33; // r13d
  int v34; // r12d
  __int64 v35; // rbp
  __int64 v36; // rbx
  void *v37; // rdi
  bool v38; // [rsp+8h] [rbp-E0h]
  __int64 v39; // [rsp+8h] [rbp-E0h]
  int v42; // [rsp+38h] [rbp-B0h]
  int v43; // [rsp+3Ch] [rbp-ACh]
  __int64 v44; // [rsp+40h] [rbp-A8h]
  int v45; // [rsp+48h] [rbp-A0h]
  unsigned __int16 v46; // [rsp+4Ch] [rbp-9Ch]
  char v47; // [rsp+4Fh] [rbp-99h]
  __int64 v48; // [rsp+54h] [rbp-94h]
  int v49; // [rsp+5Ch] [rbp-8Ch]
  unsigned __int8 *v50; // [rsp+60h] [rbp-88h] BYREF
  __int64 v51; // [rsp+68h] [rbp-80h]

  v9 = a4;
  v11 = *(_BYTE *)(a4 + 544);
  *(_BYTE *)(a4 + 544) = v11 | 0x20;
  sub_14634E0(a4, a2);
  *(_BYTE *)(v9 + 544) = (32 * ((v11 & 0x20) != 0)) | *(_BYTE *)(v9 + 544) & 0xDF;
  if ( *(_WORD *)(a2 + 16) == 22 )
  {
    v12 = 0;
    v13 = 0;
    v14 = 1;
    v42 = 0;
    v43 = *(_DWORD *)a2;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
LABEL_3:
          if ( a5 )
          {
LABEL_4:
            sub_14634E0(v9, a2);
          }
          else
          {
LABEL_11:
            v17 = *(_BYTE *)(v9 + 544);
            *(_BYTE *)(v9 + 544) = v17 | 0x20;
            v38 = (v17 & 0x20) != 0;
            sub_14634E0(v9, a2);
            *(_BYTE *)(v9 + 544) = (32 * v38) | *(_BYTE *)(v9 + 544) & 0xDF;
          }
          v15 = *(_WORD *)(a2 + 16);
          v16 = v15 <= 0x16u;
          if ( v15 == 22 )
            break;
          while ( 1 )
          {
            if ( v16 )
            {
              if ( (unsigned __int16)(v15 - 1) <= 1u )
              {
                sub_FC70B0((__int64)&v50, *(_QWORD *)(v9 + 48), *(_DWORD *)a2, 1198);
                sub_AEA040((__int64)&v50);
                return;
              }
              goto LABEL_15;
            }
            if ( v15 == 23 )
              break;
            if ( v15 == 66 )
            {
              if ( v13 )
                goto LABEL_3;
              sub_FC70B0((__int64)&v50, *(_QWORD *)(v9 + 48), *(_DWORD *)a2, 1187);
              v13 = 1;
              sub_AEA040((__int64)&v50);
              if ( a5 )
                goto LABEL_4;
              goto LABEL_11;
            }
LABEL_15:
            if ( (_BYTE)v12 )
              goto LABEL_19;
            LOBYTE(v50) = 0;
            v12 = 1;
            v42 = a7(a8, a2, &v50);
            v45 = *(_DWORD *)a2;
            v44 = *(_QWORD *)(a2 + 8);
            v15 = *(_WORD *)(a2 + 16);
            v46 = v15;
            if ( !(_BYTE)v50 )
              goto LABEL_3;
            v16 = v15 <= 0x16u;
            if ( v15 == 22 )
              goto LABEL_18;
          }
          if ( !--v14 )
          {
            if ( (_BYTE)v12 )
            {
              sub_227B930(a1, v42);
              if ( v42 > 1 )
              {
                v18 = *(_BYTE **)(a1 + 32);
                if ( (unsigned __int64)v18 >= *(_QWORD *)(a1 + 24) )
                {
                  sub_227BA10(a1, 76);
                }
                else
                {
                  *(_QWORD *)(a1 + 32) = v18 + 1;
                  *v18 = 76;
                }
              }
            }
            else
            {
              sub_227B930(a1, 0);
              if ( !v13 )
              {
                sub_FC70B0((__int64)&v50, *(_QWORD *)(v9 + 48), *(_DWORD *)a2, 1186);
                sub_AEA040((__int64)&v50);
              }
            }
            *(_WORD *)(a2 + 16) = 7;
            return;
          }
        }
LABEL_18:
        ++v14;
        if ( !(_BYTE)v12 )
          break;
LABEL_19:
        if ( !v13 )
        {
          sub_FC70B0((__int64)&v50, *(_QWORD *)(v9 + 48), *(_DWORD *)a2, 1120);
          if ( ((unsigned __int8)sub_141A630(v46) | (v46 == 1)) == 1 || !v44 )
            sub_AE9DF0(&v50, v46, 4u);
          else
            sub_AE9DF0(&v50, v44, 5u);
          sub_AE9DF0(&v50, 23, 4u);
          v19 = v50;
          if ( v50 )
          {
            v20 = *((unsigned int *)v50 + 106);
            v21 = *((unsigned int *)v50 + 107);
            v22 = v20 + 1;
          }
          else
          {
            v26 = v51;
            v27 = *(_DWORD *)(v51 + 14976);
            if ( v27 )
            {
              v29 = (unsigned int)(v27 - 1);
              *(_DWORD *)(v51 + 14976) = v29;
              v19 = *(unsigned __int8 **)(v26 + 8 * v29 + 14848);
              v30 = *((unsigned int *)v19 + 134);
              *v19 = 0;
              v31 = *((_QWORD *)v19 + 66);
              *((_DWORD *)v19 + 106) = 0;
              v32 = v31 + (v30 << 6);
              if ( v31 != v32 )
              {
                v39 = v9;
                v33 = v12;
                v34 = v14;
                v35 = v31;
                v47 = a5;
                v36 = v32;
                do
                {
                  while ( 1 )
                  {
                    v36 -= 64;
                    v37 = *(void **)(v36 + 24);
                    if ( v37 == (void *)(v36 + 40) )
                      break;
                    operator delete(v37);
                    if ( v35 == v36 )
                      goto LABEL_50;
                  }
                }
                while ( v35 != v36 );
LABEL_50:
                v14 = v34;
                a5 = v47;
                v12 = v33;
                v9 = v39;
              }
              v20 = *((unsigned int *)v19 + 106);
              v21 = *((unsigned int *)v19 + 107);
              *((_DWORD *)v19 + 134) = 0;
              v22 = v20 + 1;
            }
            else
            {
              v28 = operator new(0x3A0u);
              v21 = 8;
              v22 = 1;
              v19 = (unsigned __int8 *)v28;
              *(_BYTE *)v28 = 0;
              *(_QWORD *)(v28 + 96) = v28 + 112;
              *(_QWORD *)(v28 + 128) = v28 + 144;
              *(_QWORD *)(v28 + 160) = v28 + 176;
              *(_QWORD *)(v28 + 192) = v28 + 208;
              *(_QWORD *)(v28 + 224) = v28 + 240;
              *(_QWORD *)(v28 + 256) = v28 + 272;
              *(_QWORD *)(v28 + 288) = v28 + 304;
              *(_QWORD *)(v28 + 320) = v28 + 336;
              *(_QWORD *)(v28 + 352) = v28 + 368;
              *(_QWORD *)(v28 + 384) = v28 + 400;
              *(_QWORD *)(v28 + 416) = v28 + 432;
              *(_QWORD *)(v28 + 104) = 0;
              *(_BYTE *)(v28 + 112) = 0;
              *(_QWORD *)(v28 + 136) = 0;
              *(_BYTE *)(v28 + 144) = 0;
              *(_QWORD *)(v28 + 168) = 0;
              *(_BYTE *)(v28 + 176) = 0;
              *(_QWORD *)(v28 + 200) = 0;
              *(_BYTE *)(v28 + 208) = 0;
              *(_QWORD *)(v28 + 232) = 0;
              *(_BYTE *)(v28 + 240) = 0;
              *(_QWORD *)(v28 + 264) = 0;
              *(_BYTE *)(v28 + 272) = 0;
              *(_QWORD *)(v28 + 296) = 0;
              *(_BYTE *)(v28 + 304) = 0;
              *(_QWORD *)(v28 + 328) = 0;
              *(_BYTE *)(v28 + 336) = 0;
              *(_QWORD *)(v28 + 360) = 0;
              *(_BYTE *)(v28 + 368) = 0;
              *(_QWORD *)(v28 + 392) = 0;
              *(_BYTE *)(v28 + 400) = 0;
              *(_QWORD *)(v28 + 424) = 0x800000000LL;
              *(_QWORD *)(v28 + 528) = v28 + 544;
              *(_QWORD *)(v28 + 536) = 0x600000000LL;
              v20 = 0;
            }
            v50 = v19;
          }
          LOBYTE(v49) = 1;
          LODWORD(v48) = v45;
          HIDWORD(v48) = v45;
          if ( v22 > v21 )
          {
            sub_2237220(v19 + 416, v19 + 432, v22, 12);
            v20 = *((unsigned int *)v19 + 106);
          }
          v23 = *((_QWORD *)v19 + 52) + 12 * v20;
          *(_QWORD *)v23 = v48;
          *(_DWORD *)(v23 + 8) = v49;
          ++*((_DWORD *)v19 + 106);
          sub_AEA040((__int64)&v50);
          sub_FC70B0((__int64)&v50, *(_QWORD *)(v9 + 48), v43, 109);
          v24 = 4;
          v25 = 22;
LABEL_39:
          sub_AE9DF0(&v50, v25, v24);
          v13 = 1;
          sub_AEA040((__int64)&v50);
        }
      }
      if ( !v13 )
      {
        sub_FC70B0((__int64)&v50, *(_QWORD *)(v9 + 48), *(_DWORD *)a2, 1164);
        v24 = 5;
        v25 = a3;
        goto LABEL_39;
      }
    }
  }
  sub_FC70B0((__int64)&v50, *(_QWORD *)(v9 + 48), *(_DWORD *)a2, 1120);
  sub_AE9DF0(&v50, a3, 5u);
  sub_AE9DF0(&v50, 22, 4u);
  sub_AEA040((__int64)&v50);
  if ( (unsigned __int16)(*(_WORD *)(a2 + 16) - 1) > 1u )
  {
    sub_227B930(a1, 0);
    *(_WORD *)(a2 + 16) = 7;
  }
}
