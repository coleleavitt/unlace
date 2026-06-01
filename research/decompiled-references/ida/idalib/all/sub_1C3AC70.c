__int64 __fastcall sub_1C3AC70(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        double a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char a10)
{
  __int64 result; // rax
  int v11; // r12d
  __int64 v12; // r9
  int v13; // r13d
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r15
  unsigned int v17; // eax
  __int64 v18; // r8
  __int64 v19; // r9
  char v20; // al
  __int16 v21; // ax
  __int64 v22; // rax
  unsigned int v23; // eax
  int v24; // r15d
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int16 v28; // ax
  int v29; // [rsp+Ch] [rbp-DCh]
  unsigned int v30; // [rsp+Ch] [rbp-DCh]
  unsigned int v31; // [rsp+Ch] [rbp-DCh]
  int v32; // [rsp+1Ch] [rbp-CCh] BYREF
  _QWORD v33[25]; // [rsp+20h] [rbp-C8h] BYREF

  result = 1;
  if ( !a10 )
  {
    v11 = a2;
    v12 = (unsigned int)a3;
    v13 = a4;
    v14 = a5;
    v15 = a9 & 0xFFFFFFFFFFFFFFFELL;
    if ( (a9 & 0xFFFFFFFFFFFFFFFELL) == 0 )
      goto LABEL_6;
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) == 0 )
    {
      a2 = a9 & 0xFFFFFFFFFFFFFFFELL;
      v29 = a3;
      sub_1C39B10((__int64 *)a1, a9 & 0xFFFFFFFFFFFFFFFELL);
      LODWORD(v12) = v29;
    }
    v16 = *(_QWORD *)(a1 + 264);
    v30 = v12;
    v17 = sub_C00A40(v15, a2, a3, a4, a5);
    a2 = 6674;
    v20 = sub_FD3830(*(_QWORD *)(v16 + 32), 0x1A12u, v17, v16, v18, v19);
    v12 = v30;
    if ( v20 != 1 )
    {
      v22 = *(_QWORD *)(a1 + 248);
      a2 = a9 & 0xFFFFFFFFFFFFFFFELL;
      v33[1] = a1;
      v33[0] = v22;
      sub_1C31860((__int64)v33, v15);
      v12 = v30;
      v21 = *(_WORD *)v14 & 0x1FF;
      if ( v21 != 141 )
        goto LABEL_7;
    }
    else
    {
LABEL_6:
      v21 = *(_WORD *)v14 & 0x1FF;
      if ( v21 != 141 )
        goto LABEL_7;
    }
    v31 = v12;
    v23 = sub_EEB7E0(v14, a2, a6);
    sub_168B9F0((__int64)v33, (__int64 *)(a1 + 8), v23, 0xB7Bu, 0);
    v32 = 1;
    sub_1587D10((__int64)v33, &v32);
    sub_15F7200(v33);
    v24 = sub_EEB7E0(v14, (__int64)&v32, a6);
    v25 = sub_EEE9A0(8, *(_QWORD **)(a1 + 248), 8u);
    v12 = v31;
    v14 = v25;
    LOWORD(v25) = *(_WORD *)v25 & 0xFE00;
    LOBYTE(v25) = v25 | 0xEE;
    *(_WORD *)v14 = v25;
    if ( !unk_2CD7484 )
    {
      *(_BYTE *)(v14 + 1) &= ~2u;
      *(_DWORD *)(v14 + 4) = v24;
      goto LABEL_13;
    }
    sub_EE9B50(238);
    v28 = *(_WORD *)v14;
    *(_DWORD *)(v14 + 4) = v24;
    *(_BYTE *)(v14 + 1) &= ~2u;
    v12 = v31;
    v21 = v28 & 0x1FF;
LABEL_7:
    if ( v21 != 238 )
      return sub_EEFF60(*(_QWORD **)(a1 + 248), a8, v15, v14, v11, v12, v13);
LABEL_13:
    v26 = *(unsigned int *)(a1 + 40);
    if ( !(_DWORD)v26 )
      BUG();
    v27 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v26 - 8);
    *(_BYTE *)(*(_QWORD *)(v27 + 360) + 8LL * *(unsigned int *)(v27 + 368) - 8) = 1;
    return sub_EEFF60(*(_QWORD **)(a1 + 248), a8, v15, v14, v11, v12, v13);
  }
  return result;
}
