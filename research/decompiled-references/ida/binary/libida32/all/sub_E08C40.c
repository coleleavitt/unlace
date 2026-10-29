__int64 __fastcall sub_E08C40(__int64 a1, __int64 *a2, unsigned __int64 a3, __int64 a4, char a5, char a6, __int64 a7)
{
  char v7; // r15
  char v9; // dl
  __int64 v10; // r8
  __int64 v11; // rax
  bool v12; // r14
  __int64 v13; // rdx
  __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // r9
  int v17; // r8d
  unsigned int v18; // r11d
  __int64 v19; // r10
  __int64 v20; // rax
  __int64 v21; // rbp
  __int64 v22; // r9
  __int64 result; // rax
  __int64 v24; // r8
  int v25; // r11d
  unsigned int v26; // eax
  __int64 v27; // r13
  bool v28; // zf
  __int64 v29; // rax
  __int64 v30; // rsi
  unsigned __int64 v31; // r10
  unsigned __int64 v32; // r12
  size_t v33; // rdx
  void (__fastcall *v34)(unsigned __int64, unsigned __int64, _QWORD, _QWORD, _QWORD, __int64, _QWORD, __int64); // rax
  __int64 v35; // rdx
  __int64 *v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rax
  unsigned int v39; // [rsp+4h] [rbp-64h]
  int v40; // [rsp+4h] [rbp-64h]
  unsigned int v43; // [rsp+10h] [rbp-58h]
  int v44; // [rsp+10h] [rbp-58h]
  bool v45; // [rsp+18h] [rbp-50h]
  unsigned __int64 v46[8]; // [rsp+28h] [rbp-40h] BYREF

  v7 = a4;
  v9 = a3 & 7;
  v10 = 1;
  if ( (v9 & 1) == 0 )
    v10 = *(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] & 1LL;
  v11 = *a2;
  v12 = 0;
  if ( *a2 && (v11 & 2) != 0 )
    v12 = (v11 & 0xFFFFFFFFFFFFFFFCLL) != 0;
  v13 = v9 & 4;
  LODWORD(v14) = 1;
  if ( !(_DWORD)v13 )
    v14 = (*(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] >> 2) & 1LL;
  v39 = v10;
  v15 = sub_CC2440(*(_QWORD *)a1, a3, v13, a4, v10);
  v17 = v39;
  v18 = v15;
  if ( BYTE4(v15) )
  {
    *(_QWORD *)(a1 + 208) += 88LL;
    v19 = qword_23D0378;
    v20 = *(_QWORD *)(a1 + 128);
    v21 = (v20 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    if ( *(_QWORD *)(a1 + 136) >= (unsigned __int64)(v21 + 88) && v20 )
    {
      *(_QWORD *)(a1 + 128) = v21 + 88;
    }
    else
    {
      v43 = v18;
      v37 = sub_962430(a1 + 128, 88, 88, 4, v39, v16);
      v19 = qword_23D0378;
      v18 = v43;
      v21 = v37;
      v17 = v39;
    }
    sub_CCAC30(v21, a2, 0, v18, v19, v17, v12, 0, v14);
  }
  else
  {
    v21 = (__int64)sub_E08460(
                     (__int64 *)a1,
                     (unsigned __int64 *)a2,
                     *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL),
                     qword_23D0378,
                     v39,
                     v12,
                     0,
                     v14);
  }
  result = 0;
  if ( v21 )
  {
    v24 = 0;
    v25 = *(_DWORD *)(*(_QWORD *)a1 + 32LL);
    v26 = *(_DWORD *)(a1 + 324);
    v27 = (__int64)(*(_QWORD *)(a1 + 232) - *(_QWORD *)(a1 + 224)) >> 3;
    v28 = v26 == -1;
    if ( v26 != -1 )
      v24 = v26;
    v29 = *(_QWORD *)(a1 + 128);
    LOBYTE(v22) = !v28;
    v30 = *(unsigned int *)(v21 + 28) + 40LL;
    *(_QWORD *)(a1 + 208) += v30;
    v31 = (v29 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_QWORD *)(a1 + 136) >= v30 + v31 && v29 )
    {
      *(_QWORD *)(a1 + 128) = v30 + v31;
      v32 = (v29 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    }
    else
    {
      v45 = !v28;
      v44 = v24;
      v40 = v25;
      v38 = sub_962430(a1 + 128, v30, v30, 3, v24, v22);
      LOBYTE(v22) = v45;
      LODWORD(v24) = v44;
      v32 = v38;
      v25 = v40;
    }
    *(_DWORD *)v32 = v25;
    *(_DWORD *)(v32 + 16) = v24;
    *(_BYTE *)(v32 + 25) = a5;
    *(_BYTE *)(v32 + 20) = v22;
    v33 = *(unsigned int *)(v21 + 28);
    *(_WORD *)(v32 + 26) = 0;
    *(_QWORD *)(v32 + 8) = 0;
    *(_BYTE *)(v32 + 24) = v7;
    *(_BYTE *)(v32 + 28) = 0;
    *(_BYTE *)(v32 + 29) = a6;
    *(_QWORD *)(v32 + 32) = v21;
    v46[0] = v32;
    memset((void *)(v32 + 40), 0, v33);
    v34 = *(void (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD, _QWORD, _QWORD, __int64, _QWORD, __int64))(v21 + 64);
    v35 = v32;
    if ( v34 )
    {
      v34(
        v32,
        v32 + *(unsigned int *)(v21 + 24) + 40,
        *(unsigned __int8 *)(v21 + 56),
        *(unsigned __int8 *)(v21 + 57),
        *(unsigned __int8 *)(v21 + 59),
        1,
        0,
        v21);
      v35 = v46[0];
    }
    *(_BYTE *)(v32 + 27) = 1;
    v36 = *(__int64 **)(a1 + 232);
    *(_DWORD *)(v35 + 40) = (a7 != 0) + 1;
    if ( v36 == *(__int64 **)(a1 + 240) )
    {
      sub_E055D0(a1 + 224, v36, (__int64 *)v46);
    }
    else
    {
      *v36 = v35;
      *(_QWORD *)(a1 + 232) = v36 + 1;
    }
    return (unsigned int)v27 | 0x100000000LL;
  }
  return result;
}

