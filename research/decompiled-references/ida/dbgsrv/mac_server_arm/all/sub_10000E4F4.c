/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000E4F4
// Address: 0x000000010000E4F4

//----- (000000010000E4F4) ----------------------------------------------------
__int64 __fastcall sub_10000E4F4(__int64 a1)
{
  int v2; // w23
  unsigned int v3; // w8
  unsigned __int64 v4; // x0
  unsigned __int64 v5; // x22
  __int64 v6; // x21
  unsigned __int64 v7; // x20
  unsigned __int64 v8; // x8
  _QWORD *v9; // x1
  __int64 result; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x9
  __int64 v13; // x11
  int8x16_t *v14; // x12
  int8x16_t v15; // q0
  unsigned int v16; // w12
  unsigned __int64 v18; // x11
  unsigned __int64 v19; // x12
  _QWORD v21[2]; // [xsp+0h] [xbp-50h] BYREF
  int v22; // [xsp+10h] [xbp-40h]

  qlseek(*(_QWORD *)(a1 + 48), *(_QWORD *)(a1 + 96), 0);
  if ( qlread(*(_QWORD *)(a1 + 48), (void *)(a1 + 60), 8u) != 8 )
    return 0;
  v2 = *(_DWORD *)(a1 + 60);
  if ( v2 == -1095041334 )
  {
    v3 = bswap32(*(_DWORD *)(a1 + 64));
    *(_DWORD *)(a1 + 60) = -889275714;
    *(_DWORD *)(a1 + 64) = v3;
    if ( v3 > 0x10 )
      return 0;
  }
  else if ( v2 != -889275714 || *(_DWORD *)(a1 + 64) > 0x10u )
  {
    return 0;
  }
  v4 = qlsize(*(_QWORD *)(a1 + 48));
  v5 = *(unsigned int *)(a1 + 64);
  v6 = (unsigned int)(20 * v5);
  if ( v6 + 8 >= v4 )
    return 0;
  v7 = v4;
  v8 = *(_QWORD *)(a1 + 80);
  if ( v8 >= v5 )
  {
    if ( v8 != v5 )
    {
      v21[0] = 0;
      v21[1] = 0;
      v22 = 0;
      sub_10001A4E4((_QWORD **)(a1 + 72), v5, (unsigned __int64)v21);
    }
  }
  else
  {
    v9 = *(_QWORD **)(a1 + 72);
    if ( *(_QWORD *)(a1 + 88) < v5 )
    {
      v9 = qvector_reserve((_QWORD *)(a1 + 72), v9, *(unsigned int *)(a1 + 64), 0x14u);
      *(_QWORD *)(a1 + 72) = v9;
      v8 = *(_QWORD *)(a1 + 80);
    }
    bzero((char *)v9 + 20 * v8, 20 * (v5 - v8));
    *(_QWORD *)(a1 + 80) = v5;
  }
  if ( qlread(*(_QWORD *)(a1 + 48), *(void **)(a1 + 72), (unsigned int)(20 * v5)) == v6 )
  {
    if ( !*(_DWORD *)(a1 + 64) )
      return 1;
    v11 = 0;
    v12 = 0;
    result = 1;
    while ( 1 )
    {
      v13 = *(_QWORD *)(a1 + 72);
      v14 = (int8x16_t *)(v13 + v11);
      if ( v2 == -1095041334 )
      {
        v15 = vrev32q_s8(*v14);
        *v14 = v15;
        v14[1].i32[0] = bswap32(v14[1].u32[0]);
        v16 = v15.u32[3];
      }
      else
      {
        v16 = v14->u32[3];
      }
      if ( v16 < 0x1D || v7 <= v16 )
        break;
      v18 = *(unsigned int *)(v13 + v11 + 8);
      v19 = (unsigned int)v18 + v16;
      if ( v6 + 8 > v18 || v7 < v19 )
        break;
      ++v12;
      v11 += 20;
      if ( v12 >= *(unsigned int *)(a1 + 64) )
        return result;
    }
  }
  result = *(_QWORD *)(a1 + 72);
  if ( result )
  {
    *(_QWORD *)(a1 + 80) = 0;
    qfree((void *)result);
    *(_QWORD *)(a1 + 72) = 0;
    *(_QWORD *)(a1 + 88) = 0;
    return 0;
  }
  return result;
}
