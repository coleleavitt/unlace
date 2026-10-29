__int64 __fastcall sub_13D3140(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // r14
  unsigned int v5; // ebp
  unsigned int v9; // eax
  int v10; // eax
  __int64 v11; // r14
  unsigned int v12; // r12d
  unsigned int v13; // eax
  __int64 v14; // rbx
  unsigned int v15; // ecx
  __int64 v16; // rax
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // r14
  __int64 v25; // rdx
  __int64 v26; // r14
  void *v27; // rdi
  unsigned int v28; // [rsp+4h] [rbp-A4h]
  unsigned int v29; // [rsp+4h] [rbp-A4h]
  __int64 v30; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v31; // [rsp+14h] [rbp-94h]
  int v32; // [rsp+1Ch] [rbp-8Ch]
  __int64 v33; // [rsp+20h] [rbp-88h] BYREF
  __int64 v34; // [rsp+28h] [rbp-80h]

  if ( *(_BYTE *)(a1 + 26) )
    return 0;
  v4 = *(_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)(v4 + 545) & 2) != 0 )
    return 0;
  LODWORD(v33) = a3;
  LOBYTE(v9) = sub_13D2FE0(&byte_2611808[-72], byte_2611808, &v33);
  v5 = v9;
  if ( !(_BYTE)v9 )
  {
    return 0;
  }
  else
  {
    v10 = sub_13D1500(a1, *(_QWORD *)(a1 + 152), 1);
    sub_FC70B0((__int64)&v33, *(_QWORD *)(v4 + 48), v10, 1257);
    v11 = *(_QWORD *)(a1 + 152);
    v12 = sub_13D1500(a1, a4, 1);
    v13 = sub_13D1500(a1, v11, 1);
    v14 = v33;
    v15 = v13;
    if ( v33 )
    {
      v16 = *(unsigned int *)(v33 + 424);
      v17 = *(unsigned int *)(v33 + 428);
      v18 = v16 + 1;
    }
    else
    {
      v20 = v34;
      v21 = *(_DWORD *)(v34 + 14976);
      if ( v21 )
      {
        v23 = (unsigned int)(v21 - 1);
        *(_DWORD *)(v34 + 14976) = v23;
        v14 = *(_QWORD *)(v20 + 8 * v23 + 14848);
        v24 = *(unsigned int *)(v14 + 536);
        *(_BYTE *)v14 = 0;
        v25 = *(_QWORD *)(v14 + 528);
        *(_DWORD *)(v14 + 424) = 0;
        v26 = v25 + (v24 << 6);
        while ( v25 != v26 )
        {
          while ( 1 )
          {
            v26 -= 64;
            v27 = *(void **)(v26 + 24);
            if ( v27 == (void *)(v26 + 40) )
              break;
            v30 = v25;
            v29 = v15;
            operator delete(v27);
            v25 = v30;
            v15 = v29;
            if ( v30 == v26 )
              goto LABEL_18;
          }
        }
LABEL_18:
        v16 = *(unsigned int *)(v14 + 424);
        v17 = *(unsigned int *)(v14 + 428);
        *(_DWORD *)(v14 + 536) = 0;
        v18 = v16 + 1;
      }
      else
      {
        v28 = v15;
        v22 = operator new(0x3A0u);
        v17 = 8;
        v18 = 1;
        v14 = v22;
        *(_BYTE *)v22 = 0;
        *(_QWORD *)(v22 + 96) = v22 + 112;
        *(_QWORD *)(v22 + 128) = v22 + 144;
        *(_QWORD *)(v22 + 160) = v22 + 176;
        *(_QWORD *)(v22 + 192) = v22 + 208;
        *(_QWORD *)(v22 + 224) = v22 + 240;
        *(_QWORD *)(v22 + 256) = v22 + 272;
        *(_QWORD *)(v22 + 288) = v22 + 304;
        *(_QWORD *)(v22 + 320) = v22 + 336;
        *(_QWORD *)(v22 + 352) = v22 + 368;
        *(_QWORD *)(v22 + 384) = v22 + 400;
        *(_QWORD *)(v22 + 416) = v22 + 432;
        *(_QWORD *)(v22 + 104) = 0;
        *(_BYTE *)(v22 + 112) = 0;
        *(_QWORD *)(v22 + 136) = 0;
        *(_BYTE *)(v22 + 144) = 0;
        *(_QWORD *)(v22 + 168) = 0;
        *(_BYTE *)(v22 + 176) = 0;
        *(_QWORD *)(v22 + 200) = 0;
        *(_BYTE *)(v22 + 208) = 0;
        *(_QWORD *)(v22 + 232) = 0;
        *(_BYTE *)(v22 + 240) = 0;
        *(_QWORD *)(v22 + 264) = 0;
        *(_BYTE *)(v22 + 272) = 0;
        *(_QWORD *)(v22 + 296) = 0;
        *(_BYTE *)(v22 + 304) = 0;
        *(_QWORD *)(v22 + 328) = 0;
        *(_BYTE *)(v22 + 336) = 0;
        *(_QWORD *)(v22 + 360) = 0;
        *(_BYTE *)(v22 + 368) = 0;
        *(_QWORD *)(v22 + 392) = 0;
        *(_BYTE *)(v22 + 400) = 0;
        *(_QWORD *)(v22 + 424) = 0x800000000LL;
        v15 = v28;
        *(_QWORD *)(v22 + 528) = v22 + 544;
        *(_QWORD *)(v22 + 536) = 0x600000000LL;
        v16 = 0;
      }
      v33 = v14;
    }
    v31 = __PAIR64__(v12, v15);
    LOBYTE(v32) = 0;
    if ( v18 > v17 )
    {
      sub_2237220(v14 + 416, v14 + 432, v18, 12);
      v16 = *(unsigned int *)(v14 + 424);
    }
    v19 = *(_QWORD *)(v14 + 416) + 12 * v16;
    *(_QWORD *)v19 = v31;
    *(_DWORD *)(v19 + 8) = v32;
    ++*(_DWORD *)(v14 + 424);
    sub_AEA040((__int64)&v33);
    *(_WORD *)(a2 + 18) |= 2u;
  }
  return v5;
}
