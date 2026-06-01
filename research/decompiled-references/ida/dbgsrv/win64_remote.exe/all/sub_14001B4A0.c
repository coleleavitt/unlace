/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001B4A0
// Address: 0x000000014001B4A0

//----- (000000014001B4A0) ----------------------------------------------------
bool __fastcall sub_14001B4A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, char a6)
{
  __int64 *v8; // rcx
  __int64 *v9; // r10
  __int64 *i; // rax
  _QWORD *v11; // r14
  __int64 v13; // rbx
  char v14; // bp
  void (__fastcall *v15)(__int64, __int64, unsigned int *); // rax
  void *v16; // rax
  __int64 v17; // r8

  v8 = *(__int64 **)(a1 + 1088);
  v9 = v8;
  for ( i = (__int64 *)v8[1]; !*((_BYTE *)i + 25); i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 8) >= a5 )
      v9 = i;
    else
      i += 2;
  }
  if ( *((_BYTE *)v9 + 25) || a5 < *((_DWORD *)v9 + 8) )
    v9 = v8;
  v11 = nullptr;
  if ( v9 != v8 )
    v11 = v9 + 5;
  if ( !v11 )
    return 0;
  v13 = *(_QWORD *)(a4 + 24);
  v14 = a6;
  *(_QWORD *)(v13 + 120) = *(_QWORD *)a2;
  *(_QWORD *)(v13 + 144) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(v13 + 128) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(v13 + 136) = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(v13 + 176) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(v13 + 168) = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(v13 + 160) = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(v13 + 152) = *(_QWORD *)(a2 + 56);
  *(_QWORD *)(v13 + 248) = *(_QWORD *)(a2 + 64);
  *(_QWORD *)(v13 + 184) = *(_QWORD *)(a2 + 72);
  *(_QWORD *)(v13 + 192) = *(_QWORD *)(a2 + 80);
  *(_QWORD *)(v13 + 200) = *(_QWORD *)(a2 + 88);
  *(_QWORD *)(v13 + 208) = *(_QWORD *)(a2 + 96);
  *(_QWORD *)(v13 + 216) = *(_QWORD *)(a2 + 104);
  *(_QWORD *)(v13 + 224) = *(_QWORD *)(a2 + 112);
  *(_QWORD *)(v13 + 232) = *(_QWORD *)(a2 + 120);
  *(_QWORD *)(v13 + 240) = *(_QWORD *)(a2 + 128);
  *(_DWORD *)(v13 + 68) = *(_DWORD *)(a2 + 136);
  *(_WORD *)(v13 + 56) = *(_WORD *)(a2 + 152);
  *(_WORD *)(v13 + 62) = *(_WORD *)(a2 + 176);
  *(_WORD *)(v13 + 64) = *(_WORD *)(a2 + 184);
  *(_WORD *)(v13 + 66) = *(_WORD *)(a2 + 144);
  *(_WORD *)(v13 + 58) = *(_WORD *)(a2 + 160);
  *(_WORD *)(v13 + 60) = *(_WORD *)(a2 + 168);
  if ( (v14 & 0xC) != 0 )
  {
    if ( (v14 & 4) != 0 )
    {
      *(_WORD *)(v13 + 256) = *(_WORD *)(a3 + 644);
      *(_WORD *)(v13 + 258) = *(_WORD *)(a3 + 648);
      *(_BYTE *)(v13 + 260) = *(_BYTE *)(a3 + 652);
    }
    *(_QWORD *)(v13 + 288) = *(_QWORD *)a3;
    *(_WORD *)(v13 + 296) = *(_WORD *)(a3 + 8);
    *(_QWORD *)(v13 + 304) = *(_QWORD *)(a3 + 16);
    *(_WORD *)(v13 + 312) = *(_WORD *)(a3 + 24);
    *(_QWORD *)(v13 + 320) = *(_QWORD *)(a3 + 32);
    *(_WORD *)(v13 + 328) = *(_WORD *)(a3 + 40);
    *(_QWORD *)(v13 + 336) = *(_QWORD *)(a3 + 48);
    *(_WORD *)(v13 + 344) = *(_WORD *)(a3 + 56);
    *(_QWORD *)(v13 + 352) = *(_QWORD *)(a3 + 64);
    *(_WORD *)(v13 + 360) = *(_WORD *)(a3 + 72);
    *(_QWORD *)(v13 + 368) = *(_QWORD *)(a3 + 80);
    *(_WORD *)(v13 + 376) = *(_WORD *)(a3 + 88);
    *(_QWORD *)(v13 + 384) = *(_QWORD *)(a3 + 96);
    *(_WORD *)(v13 + 392) = *(_WORD *)(a3 + 104);
    *(_QWORD *)(v13 + 400) = *(_QWORD *)(a3 + 112);
    *(_WORD *)(v13 + 408) = *(_WORD *)(a3 + 120);
  }
  if ( (v14 & 0x30) != 0 )
  {
    memcpy((void *)(v13 + 416), (const void *)(a3 + 128), 16LL * *(_QWORD *)(a1 + 1312));
    *(_DWORD *)(v13 + 280) = *(_DWORD *)(a3 + 640);
  }
  if ( (v14 & 0x20) != 0
    && *(int *)(a1 + 1304) > 0
    && (*(unsigned int (__fastcall **)(__int64, __int64))(a1 + 1288))(v13, 4) )
  {
    v15 = *(void (__fastcall **)(__int64, __int64, unsigned int *))(a1 + 1280);
    a5 = 0;
    v15(v13, 1, &a5);
    v16 = (void *)(*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(a1 + 1280))(v13, 2, 0);
    v17 = 16;
    if ( a5 >> 4 < 0x10 )
      v17 = a5 >> 4;
    memcpy(v16, (const void *)(a3 + 384), 16 * v17);
  }
  return sub_14001CA90(v11, v14, v13);
}
