/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001CA90
// Address: 0x000000014001CA90

//----- (000000014001CA90) ----------------------------------------------------
bool __fastcall sub_14001CA90(_QWORD *a1, char a2, __int64 a3)
{
  int v6; // r14d
  __int64 v7; // r10
  int v8; // edx
  int v9; // eax
  int v10; // r8d
  int v11; // r8d
  int v12; // ecx
  const CONTEXT *v13; // r9
  _OWORD *v14; // rax
  char *v15; // rcx
  __int64 v16; // rdx
  char v17; // bl
  int v19; // [rsp+20h] [rbp-E0h] BYREF
  void *Block[2]; // [rsp+28h] [rbp-D8h] BYREF
  CONTEXT *lpContext[2]; // [rsp+38h] [rbp-C8h]
  _DWORD v22[14]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+88h] [rbp-78h]
  __int16 v24; // [rsp+90h] [rbp-70h]
  __int64 v25; // [rsp+92h] [rbp-6Eh]
  __int16 v26; // [rsp+9Ah] [rbp-66h]
  __int64 v27; // [rsp+9Ch] [rbp-64h]
  __int16 v28; // [rsp+A4h] [rbp-5Ch]
  __int64 v29; // [rsp+A6h] [rbp-5Ah]
  __int16 v30; // [rsp+AEh] [rbp-52h]
  __int64 v31; // [rsp+B0h] [rbp-50h]
  __int16 v32; // [rsp+B8h] [rbp-48h]
  __int64 v33; // [rsp+BAh] [rbp-46h]
  __int16 v34; // [rsp+C2h] [rbp-3Eh]
  __int64 v35; // [rsp+C4h] [rbp-3Ch]
  __int16 v36; // [rsp+CCh] [rbp-34h]
  __int64 v37; // [rsp+CEh] [rbp-32h]
  __int16 v38; // [rsp+D6h] [rbp-2Ah]
  int v39; // [rsp+DCh] [rbp-24h]
  int v40; // [rsp+E0h] [rbp-20h]
  int v41; // [rsp+E4h] [rbp-1Ch]
  int v42; // [rsp+E8h] [rbp-18h]
  int v43; // [rsp+ECh] [rbp-14h]
  int v44; // [rsp+F0h] [rbp-10h]
  int v45; // [rsp+F4h] [rbp-Ch]
  int v46; // [rsp+F8h] [rbp-8h]
  int v47; // [rsp+FCh] [rbp-4h]
  int v48; // [rsp+100h] [rbp+0h]
  int v49; // [rsp+104h] [rbp+4h]
  int v50; // [rsp+108h] [rbp+8h]
  int v51; // [rsp+10Ch] [rbp+Ch]
  int v52; // [rsp+110h] [rbp+10h]
  int v53; // [rsp+114h] [rbp+14h]
  int v54; // [rsp+118h] [rbp+18h]
  char v55; // [rsp+11Ch] [rbp+1Ch] BYREF

  if ( (a1[6] & 2) == 0 || !qword_1400CAE88 )
    return SetThreadContext((HANDLE)*a1, (const CONTEXT *)a3);
  *(_OWORD *)Block = 0;
  *(_OWORD *)lpContext = 0;
  v6 = a2 & 0x20;
  if ( (a2 & 0x20) != 0 )
  {
    v19 = 1048640;
    if ( !sub_14000E880(a1[3] + 1256LL, (__int64)Block, &v19) )
      goto LABEL_21;
  }
  v7 = a1[3];
  v8 = (2 * (a2 & 2)) | 0x10000B;
  if ( (a2 & 0xC) == 0 )
    v8 = (2 * (a2 & 2)) | 0x100003;
  v9 = v8 | 0x100008;
  if ( (a2 & 0x10) == 0 )
    v9 = v8;
  v10 = v9 | 0x100048;
  if ( !v6 )
    v10 = v9;
  v11 = v10 | 0x10020;
  v12 = v11 | 0x10008;
  if ( (v11 & 0x100040) != 0x100040 )
    v12 = v11;
  v22[0] = v12 & 0xFFEFFFBF;
  v13 = lpContext[1];
  if ( lpContext[1] && *(int *)(v7 + 1304) > 0 )
  {
    (*(void (__fastcall **)(CONTEXT *, __int64, __int64))(v7 + 1296))(lpContext[1], 1048640, a3);
    v13 = lpContext[1];
  }
  v22[1] = *(_DWORD *)(a3 + 72);
  v22[2] = *(_DWORD *)(a3 + 80);
  v22[3] = *(_DWORD *)(a3 + 88);
  v22[4] = *(_DWORD *)(a3 + 96);
  v22[5] = *(_DWORD *)(a3 + 104);
  v22[6] = *(_DWORD *)(a3 + 112);
  v39 = *(unsigned __int16 *)(a3 + 64);
  v40 = *(unsigned __int16 *)(a3 + 62);
  v41 = *(unsigned __int16 *)(a3 + 60);
  v42 = *(unsigned __int16 *)(a3 + 58);
  v43 = *(_DWORD *)(a3 + 176);
  v44 = *(_DWORD *)(a3 + 168);
  v45 = *(_DWORD *)(a3 + 144);
  v46 = *(_DWORD *)(a3 + 136);
  v47 = *(_DWORD *)(a3 + 128);
  v48 = *(_DWORD *)(a3 + 120);
  v49 = *(_DWORD *)(a3 + 160);
  v51 = *(unsigned __int16 *)(a3 + 56);
  v52 = *(_DWORD *)(a3 + 68);
  v54 = *(unsigned __int16 *)(a3 + 66);
  v50 = *(_DWORD *)(a3 + 248);
  v53 = *(_DWORD *)(a3 + 152);
  v14 = (_OWORD *)(a3 + 256);
  v22[7] = *(unsigned __int16 *)(a3 + 256);
  v22[8] = *(unsigned __int16 *)(a3 + 258);
  v22[9] = *(unsigned __int8 *)(a3 + 260);
  v22[10] = *(_DWORD *)(a3 + 264);
  v22[11] = *(unsigned __int16 *)(a3 + 268);
  v22[12] = *(_DWORD *)(a3 + 272);
  v22[13] = *(unsigned __int16 *)(a3 + 276);
  v23 = *(_QWORD *)(a3 + 288);
  v24 = *(_WORD *)(a3 + 296);
  v25 = *(_QWORD *)(a3 + 304);
  v26 = *(_WORD *)(a3 + 312);
  v27 = *(_QWORD *)(a3 + 320);
  v28 = *(_WORD *)(a3 + 328);
  v29 = *(_QWORD *)(a3 + 336);
  v30 = *(_WORD *)(a3 + 344);
  v31 = *(_QWORD *)(a3 + 352);
  v32 = *(_WORD *)(a3 + 360);
  v33 = *(_QWORD *)(a3 + 368);
  v34 = *(_WORD *)(a3 + 376);
  v35 = *(_QWORD *)(a3 + 384);
  v36 = *(_WORD *)(a3 + 392);
  v37 = *(_QWORD *)(a3 + 400);
  v38 = *(_WORD *)(a3 + 408);
  v15 = &v55;
  v16 = 4;
  do
  {
    *(_OWORD *)v15 = *v14;
    *((_OWORD *)v15 + 1) = v14[1];
    *((_OWORD *)v15 + 2) = v14[2];
    *((_OWORD *)v15 + 3) = v14[3];
    *((_OWORD *)v15 + 4) = v14[4];
    *((_OWORD *)v15 + 5) = v14[5];
    *((_OWORD *)v15 + 6) = v14[6];
    v15 += 128;
    *((_OWORD *)v15 - 1) = v14[7];
    v14 += 8;
    --v16;
  }
  while ( v16 );
  if ( v13 && !SetThreadContext((HANDLE)*a1, v13) )
    goto LABEL_21;
  if ( (unsigned int)qword_1400CAE88(*a1, v22) )
    v17 = 1;
  else
LABEL_21:
    v17 = 0;
  if ( Block[0] )
  {
    Block[1] = nullptr;
    j_free(Block[0]);
  }
  return v17;
}
// 1400CAE88: using guessed type __int64 (__fastcall *qword_1400CAE88)(_QWORD, _QWORD);
