__int64 *__fastcall sub_13F8D90(__int64 a1, __int64 **a2, __int64 *a3, char a4)
{
  __int64 v4; // r14
  __int64 v6; // r12
  __int64 v7; // rbp
  __int64 *v8; // r15
  int v9; // r12d
  unsigned int v10; // r13d
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // r9
  unsigned __int8 *v15; // rbx
  __int64 v16; // r9
  unsigned int v17; // r15d
  unsigned int v18; // r14d
  __int64 v19; // rax
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // r13
  __int64 v28; // rax
  __int64 v29; // r13
  void *v30; // rdi
  __int64 v31; // [rsp+0h] [rbp-C8h]
  __int64 v32; // [rsp+0h] [rbp-C8h]
  __int64 v33; // [rsp+0h] [rbp-C8h]
  __int64 v34; // [rsp+0h] [rbp-C8h]
  __int64 v36; // [rsp+8h] [rbp-C0h]
  int v37; // [rsp+1Ch] [rbp-ACh]
  void *v38; // [rsp+20h] [rbp-A8h] BYREF
  signed __int64 v39; // [rsp+28h] [rbp-A0h]
  _BYTE v40[16]; // [rsp+30h] [rbp-98h] BYREF
  unsigned __int8 *v41; // [rsp+40h] [rbp-88h] BYREF
  __int64 v42; // [rsp+48h] [rbp-80h]

  v4 = (__int64)a3;
  v6 = **a2;
  v7 = (*a2)[1];
  if ( a3 )
  {
    while ( 1 )
    {
      v8 = (__int64 *)sub_FF2620(v4, v6, v7);
      if ( v8 )
        break;
      v4 = *(_QWORD *)(v4 + 40);
      if ( !v4 )
        goto LABEL_12;
    }
  }
  else
  {
LABEL_12:
    v8 = (__int64 *)sub_13F8CB0(a1, v6, v7);
    if ( !v8 )
    {
      if ( a4 )
      {
        sub_FC70B0((__int64)&v41, *(_QWORD *)(a1 + 8), *((_DWORD *)*a2 + 8), 1086);
        sub_AEC220(&v41, (_BYTE *)**a2, (*a2)[1]);
        sub_FEEE60((__int64)&v38, a3, 0);
        sub_AEC220(&v41, v38, v39);
        if ( v38 != v40 )
          operator delete(v38);
        sub_AEA040((__int64)&v41);
      }
      return nullptr;
    }
  }
  v9 = *((_DWORD *)a2 + 2);
  if ( v9 == 1 )
    return v8;
  v10 = 1;
  while ( 1 )
  {
    v11 = 5LL * v10;
    v12 = sub_FF2620((__int64)v8, (*a2)[v11], (*a2)[v11 + 1]);
    v13 = v12;
    if ( !v12 )
      break;
    ++v10;
    v8 = (__int64 *)v12;
    if ( v10 == v9 )
      return (__int64 *)v13;
  }
  if ( !a4 )
    return nullptr;
  sub_FC70B0((__int64)&v41, *(_QWORD *)(a1 + 8), (*a2)[v11 + 4], 1085);
  sub_AEC220(&v41, (_BYTE *)(*a2)[5 * v10], (*a2)[5 * v10 + 1]);
  sub_FEEE60((__int64)&v38, v8, 0);
  sub_AEC220(&v41, v38, v39);
  v15 = v41;
  v16 = 0;
  v17 = *((_DWORD *)*a2 + 8);
  v18 = (*a2)[5 * v10 - 1];
  if ( v41 )
  {
    v19 = *((unsigned int *)v41 + 106);
    v20 = *((unsigned int *)v41 + 107);
    v21 = v19 + 1;
  }
  else
  {
    v23 = v42;
    v24 = *(_DWORD *)(v42 + 14976);
    if ( v24 )
    {
      v26 = (unsigned int)(v24 - 1);
      *(_DWORD *)(v42 + 14976) = v26;
      v15 = *(unsigned __int8 **)(v23 + 8 * v26 + 14848);
      v27 = *((unsigned int *)v15 + 134);
      *v15 = 0;
      v28 = *((_QWORD *)v15 + 66);
      *((_DWORD *)v15 + 106) = 0;
      v29 = v28 + (v27 << 6);
      v34 = v28;
      if ( v28 == v29 )
      {
        v21 = 1;
        v19 = 0;
      }
      else
      {
        do
        {
          while ( 1 )
          {
            v29 -= 64;
            v30 = *(void **)(v29 + 24);
            if ( v30 == (void *)(v29 + 40) )
              break;
            v36 = v16;
            operator delete(v30);
            v16 = v36;
            if ( v34 == v29 )
              goto LABEL_31;
          }
        }
        while ( v34 != v29 );
LABEL_31:
        v19 = *((unsigned int *)v15 + 106);
        v21 = v19 + 1;
      }
      *((_DWORD *)v15 + 134) = 0;
      v20 = *((unsigned int *)v15 + 107);
    }
    else
    {
      v25 = operator new(0x3A0u);
      v20 = 8;
      v21 = 1;
      v15 = (unsigned __int8 *)v25;
      *(_BYTE *)v25 = 0;
      *(_QWORD *)(v25 + 96) = v25 + 112;
      *(_QWORD *)(v25 + 128) = v25 + 144;
      *(_QWORD *)(v25 + 160) = v25 + 176;
      *(_QWORD *)(v25 + 192) = v25 + 208;
      *(_QWORD *)(v25 + 224) = v25 + 240;
      *(_QWORD *)(v25 + 256) = v25 + 272;
      *(_QWORD *)(v25 + 288) = v25 + 304;
      *(_QWORD *)(v25 + 320) = v25 + 336;
      *(_QWORD *)(v25 + 352) = v25 + 368;
      *(_QWORD *)(v25 + 384) = v25 + 400;
      *(_QWORD *)(v25 + 416) = v25 + 432;
      *(_QWORD *)(v25 + 104) = 0;
      *(_BYTE *)(v25 + 112) = 0;
      *(_QWORD *)(v25 + 136) = 0;
      *(_BYTE *)(v25 + 144) = 0;
      *(_QWORD *)(v25 + 168) = 0;
      *(_BYTE *)(v25 + 176) = 0;
      *(_QWORD *)(v25 + 200) = 0;
      *(_BYTE *)(v25 + 208) = 0;
      *(_QWORD *)(v25 + 232) = 0;
      *(_BYTE *)(v25 + 240) = 0;
      *(_QWORD *)(v25 + 264) = 0;
      *(_BYTE *)(v25 + 272) = 0;
      *(_QWORD *)(v25 + 296) = 0;
      *(_BYTE *)(v25 + 304) = 0;
      *(_QWORD *)(v25 + 328) = 0;
      *(_BYTE *)(v25 + 336) = 0;
      *(_QWORD *)(v25 + 360) = 0;
      *(_BYTE *)(v25 + 368) = 0;
      *(_QWORD *)(v25 + 392) = 0;
      *(_BYTE *)(v25 + 400) = 0;
      *(_QWORD *)(v25 + 424) = 0x800000000LL;
      v16 = 0;
      *(_QWORD *)(v25 + 528) = v25 + 544;
      *(_QWORD *)(v25 + 536) = 0x600000000LL;
      v19 = 0;
    }
    v41 = v15;
  }
  LOBYTE(v37) = 1;
  if ( v21 > v20 )
  {
    v33 = v16;
    sub_2237220(v15 + 416, v15 + 432, v21, 12);
    v19 = *((unsigned int *)v15 + 106);
    v16 = v33;
  }
  v22 = *((_QWORD *)v15 + 52) + 12 * v19;
  *(_QWORD *)v22 = __PAIR64__(v18, v17);
  *(_DWORD *)(v22 + 8) = v37;
  ++*((_DWORD *)v15 + 106);
  if ( v38 != v40 )
  {
    v31 = v16;
    operator delete(v38);
    v16 = v31;
  }
  v32 = v16;
  sub_AEA040((__int64)&v41);
  return (__int64 *)v32;
}
