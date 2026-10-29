/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100049D1C
// Address: 0x0000000100049D1C

//----- (0000000100049D1C) ----------------------------------------------------
__int64 __fastcall sub_100049D1C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v8; // w8
  off_t v10; // x1
  int v11; // w8
  __int16 v12; // w9
  int v13; // w8
  int *v14; // x23
  __int64 v15; // x4
  __int64 v16; // x5
  __int64 v17; // x6
  __int64 v18; // x7
  int v19; // w8
  __int64 result; // x0
  __int64 v21; // x8
  __int64 v22; // x9
  int v23; // w10
  unsigned __int64 v24; // x9
  unsigned int v25; // [xsp+Ch] [xbp-44h] BYREF
  __int64 v26; // [xsp+10h] [xbp-40h] BYREF

  v25 = 0;
  *(_BYTE *)(a1 + 600) = 0;
  qlseek(a2, 0, 0);
  if ( qlread(a2, (void *)(a1 + 32), 0x1Cu) != 28 )
    return 0;
  v8 = *(unsigned __int16 *)(a1 + 32);
  if ( v8 == 19802 || v8 == 23117 )
  {
    if ( qlread(a2, &v26, 8u) == 8 && v26 == 0x6B6E694C696E55LL )
      *(_BYTE *)(a1 + 600) = 1;
    qlseek(a2, 60, 0);
    if ( qlread(a2, &v25, 4u) != 4 )
      return 0;
    v10 = v25;
  }
  else
  {
    if ( v8 == 23126 )
    {
      qlseek(a2, 0, 0);
      if ( qlread(a2, (void *)(a1 + 32), 0x28u) == 40 )
      {
        *(_OWORD *)(a1 + 288) = 0u;
        *(_OWORD *)(a1 + 304) = 0u;
        *(_OWORD *)(a1 + 256) = 0u;
        *(_OWORD *)(a1 + 272) = 0u;
        *(_OWORD *)(a1 + 224) = 0u;
        *(_OWORD *)(a1 + 240) = 0u;
        *(_OWORD *)(a1 + 192) = 0u;
        *(_OWORD *)(a1 + 208) = 0u;
        *(_OWORD *)(a1 + 160) = 0u;
        *(_OWORD *)(a1 + 176) = 0u;
        *(_OWORD *)(a1 + 128) = 0u;
        *(_OWORD *)(a1 + 144) = 0u;
        *(_OWORD *)(a1 + 96) = 0u;
        *(_OWORD *)(a1 + 112) = 0u;
        *(_OWORD *)(a1 + 80) = 0u;
        *(_DWORD *)(a1 + 72) = *(unsigned __int16 *)(a1 + 32);
        v11 = *(unsigned __int16 *)(a1 + 34);
        *(_WORD *)(a1 + 76) = v11;
        *(_WORD *)(a1 + 78) = *(unsigned __int8 *)(a1 + 36);
        if ( v11 == 512 || v11 == 43620 || v11 == 34404 )
        {
          v12 = 523;
          v13 = 1;
        }
        else
        {
          v13 = 0;
          v12 = 267;
        }
        *(_WORD *)(a1 + 96) = v12;
        v23 = *(_DWORD *)(a1 + 44);
        *(_DWORD *)(a1 + 112) = *(_DWORD *)(a1 + 40);
        *(_DWORD *)(a1 + 116) = v23;
        *(_DWORD *)(a1 + 156) = v23 - *(unsigned __int16 *)(a1 + 38) + 40;
        v24 = *(_QWORD *)(a1 + 48);
        if ( v13 )
        {
          *(_QWORD *)(a1 + 120) = v24;
          v24 >>= 32;
        }
        else
        {
          *(_DWORD *)(a1 + 124) = v24;
          v24 = (unsigned int)v24;
        }
        *(_WORD *)(a1 + 164) = *(unsigned __int8 *)(a1 + 37);
        *(_OWORD *)(a1 + 232) = *(_OWORD *)(a1 + 56);
        *(_QWORD *)(a1 + 128) = 0x100000001LL;
        if ( v13 )
          v24 = *(_QWORD *)(a1 + 120);
        v21 = 0;
        *(_QWORD *)(a1 + 584) = v24;
        v22 = 592;
        goto LABEL_37;
      }
      return 0;
    }
    v10 = 0;
  }
  *(_QWORD *)(a1 + 592) = v10;
  qlseek(a2, v10, 0);
  v14 = (int *)(a1 + 320);
  *(_OWORD *)(a1 + 320) = 0u;
  *(_OWORD *)(a1 + 336) = 0u;
  *(_OWORD *)(a1 + 352) = 0u;
  *(_OWORD *)(a1 + 368) = 0u;
  *(_OWORD *)(a1 + 384) = 0u;
  *(_OWORD *)(a1 + 400) = 0u;
  *(_OWORD *)(a1 + 416) = 0u;
  *(_OWORD *)(a1 + 432) = 0u;
  *(_OWORD *)(a1 + 448) = 0u;
  *(_OWORD *)(a1 + 464) = 0u;
  *(_OWORD *)(a1 + 480) = 0u;
  *(_OWORD *)(a1 + 496) = 0u;
  *(_OWORD *)(a1 + 512) = 0u;
  *(_OWORD *)(a1 + 528) = 0u;
  *(_OWORD *)(a1 + 544) = 0u;
  *(_OWORD *)(a1 + 560) = 0u;
  *(_QWORD *)(a1 + 576) = 0;
  qlseek(a2, *(_QWORD *)(a1 + 592), 0);
  if ( qlread(a2, (void *)(a1 + 320), 0x108u) - 93 > 0xAB )
    return 0;
  v19 = *v14;
  if ( *v14 != 17744 && v19 != 4542530 && v19 != 19536 )
    return 0;
  result = sub_1000527DC(a1 + 72, a1 + 320, a3, a4, v15, v16, v17, v18);
  if ( (_DWORD)result )
  {
    if ( *(_WORD *)(a1 + 96) == 523 )
      v21 = *(_QWORD *)(a1 + 120);
    else
      v21 = *(unsigned int *)(a1 + 124);
    v22 = 584;
LABEL_37:
    *(_QWORD *)(a1 + v22) = v21;
    return 1;
  }
  return result;
}
// 100049F4C: variable 'v15' is possibly undefined
// 100049F4C: variable 'v16' is possibly undefined
// 100049F4C: variable 'v17' is possibly undefined
// 100049F4C: variable 'v18' is possibly undefined
