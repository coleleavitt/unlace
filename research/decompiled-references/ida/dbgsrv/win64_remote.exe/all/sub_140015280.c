/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140015280
// Address: 0x0000000140015280

//----- (0000000140015280) ----------------------------------------------------
char __fastcall sub_140015280(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4, unsigned int a5, char a6)
{
  __int64 *v6; // r11
  __int64 *v11; // r10
  __int64 *i; // rax
  _QWORD *v13; // rcx
  char v14; // si
  __int64 v15; // rbx
  void (__fastcall *v16)(__int64, __int64, unsigned int *); // rax
  const void *v17; // rax
  __int64 v18; // r8

  v6 = *(__int64 **)(a1 + 1088);
  v11 = v6;
  for ( i = (__int64 *)v6[1]; !*((_BYTE *)i + 25); i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 8) >= a5 )
      v11 = i;
    else
      i += 2;
  }
  if ( *((_BYTE *)v11 + 25) || a5 < *((_DWORD *)v11 + 8) )
    v11 = *(__int64 **)(a1 + 1088);
  v13 = nullptr;
  if ( v11 != v6 )
    v13 = v11 + 5;
  if ( !v13 )
    return 0;
  v14 = a6;
  if ( !sub_140019680(v13, a2, a6) )
    return 0;
  v15 = *(_QWORD *)(a2 + 24);
  memset(a3, 0, 0xC0u);
  memset(a4, 0, 0x290u);
  *a3 = *(_QWORD *)(v15 + 120);
  a3[1] = *(_QWORD *)(v15 + 144);
  a3[2] = *(_QWORD *)(v15 + 128);
  a3[3] = *(_QWORD *)(v15 + 136);
  a3[4] = *(_QWORD *)(v15 + 176);
  a3[5] = *(_QWORD *)(v15 + 168);
  a3[6] = *(_QWORD *)(v15 + 160);
  a3[7] = *(_QWORD *)(v15 + 152);
  a3[8] = *(_QWORD *)(v15 + 248);
  a3[9] = *(_QWORD *)(v15 + 184);
  a3[10] = *(_QWORD *)(v15 + 192);
  a3[11] = *(_QWORD *)(v15 + 200);
  a3[12] = *(_QWORD *)(v15 + 208);
  a3[13] = *(_QWORD *)(v15 + 216);
  a3[14] = *(_QWORD *)(v15 + 224);
  a3[15] = *(_QWORD *)(v15 + 232);
  a3[16] = *(_QWORD *)(v15 + 240);
  a3[17] = *(unsigned int *)(v15 + 68);
  a3[19] = *(unsigned __int16 *)(v15 + 56);
  a3[22] = *(unsigned __int16 *)(v15 + 62);
  a3[23] = *(unsigned __int16 *)(v15 + 64);
  a3[18] = *(unsigned __int16 *)(v15 + 66);
  a3[20] = *(unsigned __int16 *)(v15 + 58);
  a3[21] = *(unsigned __int16 *)(v15 + 60);
  if ( (v14 & 0xC) != 0 )
  {
    if ( (v14 & 4) != 0 )
    {
      *((_DWORD *)a4 + 161) = *(unsigned __int16 *)(v15 + 256);
      *((_DWORD *)a4 + 162) = *(unsigned __int16 *)(v15 + 258);
      *((_DWORD *)a4 + 163) = *(unsigned __int8 *)(v15 + 260);
    }
    *a4 = *(_QWORD *)(v15 + 288);
    *((_WORD *)a4 + 4) = *(_WORD *)(v15 + 296);
    a4[2] = *(_QWORD *)(v15 + 304);
    *((_WORD *)a4 + 12) = *(_WORD *)(v15 + 312);
    a4[4] = *(_QWORD *)(v15 + 320);
    *((_WORD *)a4 + 20) = *(_WORD *)(v15 + 328);
    a4[6] = *(_QWORD *)(v15 + 336);
    *((_WORD *)a4 + 28) = *(_WORD *)(v15 + 344);
    a4[8] = *(_QWORD *)(v15 + 352);
    *((_WORD *)a4 + 36) = *(_WORD *)(v15 + 360);
    a4[10] = *(_QWORD *)(v15 + 368);
    *((_WORD *)a4 + 44) = *(_WORD *)(v15 + 376);
    a4[12] = *(_QWORD *)(v15 + 384);
    *((_WORD *)a4 + 52) = *(_WORD *)(v15 + 392);
    a4[14] = *(_QWORD *)(v15 + 400);
    *((_WORD *)a4 + 60) = *(_WORD *)(v15 + 408);
  }
  if ( (v14 & 0x30) != 0 )
  {
    memcpy(a4 + 16, (const void *)(v15 + 416), 16LL * *(_QWORD *)(a1 + 1312));
    *((_DWORD *)a4 + 160) = *(_DWORD *)(v15 + 280);
  }
  if ( (v14 & 0x20) != 0
    && *(int *)(a1 + 1304) > 0
    && (*(unsigned int (__fastcall **)(__int64, __int64))(a1 + 1288))(v15, 4) )
  {
    v16 = *(void (__fastcall **)(__int64, __int64, unsigned int *))(a1 + 1280);
    a5 = 0;
    v16(v15, 1, &a5);
    v17 = (const void *)(*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(a1 + 1280))(v15, 2, 0);
    v18 = 16;
    if ( a5 >> 4 < 0x10 )
      v18 = a5 >> 4;
    memcpy(a4 + 48, v17, 16 * v18);
  }
  return 1;
}
