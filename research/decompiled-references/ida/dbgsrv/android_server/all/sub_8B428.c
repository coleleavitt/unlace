/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8B428
// Address: 0x000000000008B428

//----- (000000000008B428) ----------------------------------------------------
__int64 __fastcall sub_8B428(__int64 a1, __int64 a2, char a3, char a4)
{
  bool v8; // zf
  __int64 result; // x0
  int v10; // w8
  int v11; // w9
  int v12; // w8
  int v13; // w8
  int v14; // w9
  __int64 v15; // x1
  int *v16; // x23
  bool v17; // cc
  int v18; // w8
  __int64 v19; // x8
  int v20; // w11
  int v21; // w12
  int v22; // w13
  unsigned __int64 v23; // x10
  __int128 v24; // q0
  __int64 v25; // x8
  unsigned int v26; // [xsp+Ch] [xbp-54h] BYREF
  _QWORD v27[2]; // [xsp+10h] [xbp-50h] BYREF

  v27[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v26 = 0;
  *(_BYTE *)(a1 + 600) = 0;
  qlseek(a2, 0, 0);
  v8 = qlread(a2, (void *)(a1 + 32), 0x1Cu) == 28;
  result = 0;
  if ( !v8 )
    return result;
  v10 = *(unsigned __int16 *)(a1 + 32);
  if ( v10 != 19802 && v10 != 23117 )
  {
    if ( v10 == 23126 )
    {
      qlseek(a2, 0, 0);
      v8 = qlread(a2, (void *)(a1 + 32), 0x28u) == 40;
      result = 0;
      if ( !v8 )
        return result;
      *(_OWORD *)(a1 + 296) = 0u;
      *(_OWORD *)(a1 + 280) = 0u;
      *(_OWORD *)(a1 + 264) = 0u;
      v11 = *(unsigned __int16 *)(a1 + 32);
      v12 = *(unsigned __int16 *)(a1 + 34);
      *(_OWORD *)(a1 + 72) = 0u;
      *(_QWORD *)(a1 + 312) = 0;
      *(_DWORD *)(a1 + 72) = v11;
      LOWORD(v11) = *(unsigned __int8 *)(a1 + 36);
      *(_OWORD *)(a1 + 248) = 0u;
      *(_OWORD *)(a1 + 232) = 0u;
      *(_OWORD *)(a1 + 216) = 0u;
      *(_OWORD *)(a1 + 200) = 0u;
      *(_OWORD *)(a1 + 184) = 0u;
      *(_OWORD *)(a1 + 168) = 0u;
      *(_OWORD *)(a1 + 152) = 0u;
      *(_OWORD *)(a1 + 136) = 0u;
      *(_OWORD *)(a1 + 120) = 0u;
      *(_OWORD *)(a1 + 104) = 0u;
      *(_OWORD *)(a1 + 88) = 0u;
      *(_WORD *)(a1 + 76) = v12;
      *(_WORD *)(a1 + 78) = v11;
      if ( v12 == 512 || v12 == 43620 || v12 == 34404 )
      {
        v13 = 523;
        v14 = 1;
      }
      else
      {
        v14 = 0;
        v13 = 267;
      }
      v20 = *(_DWORD *)(a1 + 40);
      v21 = *(_DWORD *)(a1 + 44);
      v22 = *(unsigned __int16 *)(a1 + 38);
      v23 = *(_QWORD *)(a1 + 48);
      *(_WORD *)(a1 + 96) = v13;
      *(_DWORD *)(a1 + 112) = v20;
      *(_DWORD *)(a1 + 116) = v21;
      *(_DWORD *)(a1 + 156) = v21 + 40 - v22;
      if ( v14 )
      {
        *(_QWORD *)(a1 + 120) = v23;
        v23 >>= 32;
      }
      else
      {
        *(_DWORD *)(a1 + 124) = v23;
      }
      v24 = *(_OWORD *)(a1 + 56);
      *(_WORD *)(a1 + 164) = *(unsigned __int8 *)(a1 + 37);
      *(_OWORD *)(a1 + 232) = v24;
      *(_QWORD *)(a1 + 128) = 0x100000001LL;
      if ( v13 == 523 )
        v25 = *(_QWORD *)(a1 + 120);
      else
        v25 = (unsigned int)v23;
      *(_QWORD *)(a1 + 584) = v25;
      *(_QWORD *)(a1 + 592) = 0;
      return 1;
    }
    v15 = 0;
LABEL_19:
    *(_QWORD *)(a1 + 592) = v15;
    qlseek(a2, v15, 0);
    v16 = (int *)(a1 + 320);
    memset((void *)(a1 + 320), 0, 0x108u);
    qlseek(a2, *(_QWORD *)(a1 + 592), 0);
    v17 = qlread(a2, (void *)(a1 + 320), 0x108u) - 93 > 0xAB;
    result = 0;
    if ( v17 )
      return result;
    v18 = *v16;
    if ( *v16 != 17744 && v18 != 4542530 && v18 != 19536
      || (sub_96244(a1 + 72, (__int128 *)(a1 + 320), a3 & 1, a4 & 1) & 1) == 0 )
    {
      return 0;
    }
    if ( *(_WORD *)(a1 + 96) == 523 )
      v19 = *(_QWORD *)(a1 + 120);
    else
      v19 = *(unsigned int *)(a1 + 124);
    *(_QWORD *)(a1 + 584) = v19;
    return 1;
  }
  if ( qlread(a2, v27, 8u) == 8 && v27[0] == 0x6B6E694C696E55LL )
    *(_BYTE *)(a1 + 600) = 1;
  qlseek(a2, 60, 0);
  v8 = qlread(a2, &v26, 4u) == 4;
  result = 0;
  if ( v8 )
  {
    v15 = v26;
    goto LABEL_19;
  }
  return result;
}
