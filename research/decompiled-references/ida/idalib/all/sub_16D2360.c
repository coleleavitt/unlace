void __fastcall sub_16D2360(__int64 a1, unsigned int a2, unsigned __int64 a3, unsigned __int64 a4, int a5, double a6)
{
  __int64 v11; // r12
  __int16 v12; // r15
  __int64 v13; // rax
  unsigned __int16 v14; // dx
  unsigned __int64 v15; // rax
  __int64 v16; // r15
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r15
  _WORD *v19; // rax
  __int64 v20; // r12
  __int16 v21; // dx
  __int16 v22; // ax
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rdx
  unsigned __int64 v28; // r15
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // r13
  __int64 v32; // rbx
  __int64 v34; // [rsp+Ch] [rbp-110h]
  char v35; // [rsp+1Ah] [rbp-102h] BYREF
  bool v36; // [rsp+1Bh] [rbp-101h] BYREF
  unsigned __int64 v37; // [rsp+1Ch] [rbp-100h] BYREF
  __int64 v38; // [rsp+24h] [rbp-F8h] BYREF
  __int64 v39; // [rsp+2Ch] [rbp-F0h] BYREF
  __int64 v40[4]; // [rsp+34h] [rbp-E8h] BYREF
  void *v41; // [rsp+54h] [rbp-C8h] BYREF
  unsigned int v42; // [rsp+5Ch] [rbp-C0h]

  if ( (unsigned int)(a5 - 14) > 1 )
    return;
  v11 = sub_BFB9F0(a3);
  v12 = *(_WORD *)v11 & 0x1FF;
  if ( v12 == 62 )
  {
    v13 = sub_BFB9F0(a4);
    v14 = *(_WORD *)v13 & 0x1FF;
    if ( v14 > 0x4Eu )
    {
      if ( v14 > 0x58u )
        goto LABEL_8;
      goto LABEL_5;
    }
  }
  else
  {
    v13 = sub_BFB9F0(a4);
    v14 = *(_WORD *)v13 & 0x1FF;
    if ( v14 > 0x4Eu )
      goto LABEL_8;
  }
  if ( v14 != 62 || ((v12 + 433) & 0x1FFu) > 9 )
    goto LABEL_8;
  v24 = v11;
  v11 = v13;
  v13 = v24;
LABEL_5:
  v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
      & 0xFFFFFFFFFFFFFFF0LL;
  v16 = *(_QWORD *)v15;
  if ( *(_BYTE *)(*(_QWORD *)v15 + 16LL) == 13 )
  {
    v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
    if ( *(_BYTE *)(*(_QWORD *)v17 + 16LL) == 13
      && (((*(_WORD *)(v16 + 18) >> 3) + 32) & 0x1FFu) <= 7
      && (((*(_WORD *)(*(_QWORD *)v17 + 18LL) >> 3) + 32) & 0x1FFu) <= 7 )
    {
      v25 = sub_21F8CF0(*(_BYTE *)(v11 + 2) >> 3);
      v26 = *(_QWORD *)(v11 + 16);
      v34 = v25;
      sub_16B6640((__int64)&v41, v26, *(_DWORD *)(v11 + 24));
      if ( v34 == sub_21F90D0(&v41, v26, v27) )
        sub_21FFDA0(v40, v34, &v41);
      else
        sub_21FF7D0(v40, v34, &v41);
      if ( v42 > 0x40 && v41 )
        operator delete[](v41);
      v28 = v16 & 0xFFFFFFFFFFFFFFF0LL;
      v29 = sub_A62D20(*(_QWORD **)(a1 + 248), v28);
      sub_22028C0(v40, v29, 1, &v35);
      if ( v35 )
      {
        sub_168B9F0((__int64)&v41, (__int64 *)(a1 + 8), a2, 0x1AF0u, 0);
        v36 = a5 == 14;
        v30 = sub_1588420((__int64)&v41, (unsigned __int8 *)&v36);
        v37 = v28;
        v31 = sub_162B6D0(v30, (__int64 *)&v37);
        v38 = sub_EEC8C0(a3, (__int64)&v37, a6);
        v32 = sub_1587DB0(v31, &v38);
        v39 = sub_EEC8C0(a4, (__int64)&v38, a6);
        sub_1587DB0(v32, &v39);
        sub_15F7200(&v41);
        sub_9955A0(v40);
        return;
      }
      sub_9955A0(v40);
    }
  }
LABEL_8:
  v18 = sub_BFBAE0(a3);
  v19 = (_WORD *)sub_BFBAE0(a4);
  v20 = (__int64)v19;
  v21 = *(_WORD *)v18 & 0x1FF;
  if ( v21 != 71 )
  {
    if ( v21 == 62 )
    {
      if ( (*(_DWORD *)v18 & 0x1000000) != 0 )
        return;
    }
    else
    {
      v22 = *v19 & 0x1FF;
      if ( v22 == 62 )
      {
        if ( (*(_DWORD *)v20 & 0x1000000) != 0 )
          return;
        if ( ((v21 + 423) & 0x1FFu) > 4 )
        {
LABEL_11:
          sub_168B9F0((__int64)&v41, (__int64 *)(a1 + 8), a2, 0x1AF3u, 0);
          v39 = sub_EEC8C0(a3, a1 + 8, a6);
          v23 = sub_1587DB0((__int64)&v41, &v39);
          v40[0] = sub_EEC8C0(a4, (__int64)&v39, a6);
          sub_1587DB0(v23, v40);
          sub_15F7200(&v41);
          return;
        }
      }
      else if ( ((v21 + 423) & 0x1FFu) > 4 )
      {
        goto LABEL_20;
      }
      if ( (unsigned int)sub_BFBE70(v18) )
        return;
    }
    v22 = *(_WORD *)v20 & 0x1FF;
LABEL_20:
    if ( ((v22 + 423) & 0x1FFu) > 4 || !(unsigned int)sub_BFBE70(v20) )
      goto LABEL_11;
    return;
  }
  v22 = *v19 & 0x1FF;
  if ( v22 == 71 )
  {
    if ( *(_QWORD *)(v18 + 16) == *(_QWORD *)(v20 + 16) )
      return;
    goto LABEL_11;
  }
  if ( v22 != 62 )
    goto LABEL_20;
  if ( (*(_DWORD *)v20 & 0x1000000) == 0 )
    goto LABEL_11;
}
