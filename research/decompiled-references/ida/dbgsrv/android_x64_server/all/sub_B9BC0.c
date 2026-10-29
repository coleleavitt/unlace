/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B9BC0
// Address: 0x00000000000B9BC0

//----- (00000000000B9BC0) ----------------------------------------------------
__int64 __fastcall sub_B9BC0(unsigned __int64 *a1, __int128 *a2, int a3, char a4, double a5, __m128 a6)
{
  __int128 *v7; // rbx
  __int16 v8; // bp
  __int16 v9; // ax
  unsigned __int16 v10; // ax
  unsigned int v11; // r12d
  int v12; // esi
  signed int v13; // ebp
  unsigned __int64 v14; // rax
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  int v17; // edx
  int v18; // eax
  int v19; // edx
  __int64 v20; // rcx
  _WORD v22[2]; // [rsp+0h] [rbp-68h] BYREF
  _BYTE v23[18]; // [rsp+4h] [rbp-64h]
  __int128 v24; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v25; // [rsp+38h] [rbp-30h]

  v7 = a2;
  v25 = __readfsqword(0x28u);
  if ( a4 )
  {
    v24 = *a2;
    a5 = *(double *)&v24;
    v8 = HIWORD(v24);
    v7 = &v24;
    eadd(&qword_116330, &v24, &v24, v24 < 0, *(double *)&v24, a6);
    v9 = HIWORD(v24);
    if ( v8 < 0 )
    {
      if ( HIWORD(v24) )
      {
        v9 = HIWORD(v24) ^ 0x8000;
        HIWORD(v24) ^= 0x8000u;
      }
      else
      {
        v9 = 0;
      }
    }
  }
  else
  {
    v9 = *((_WORD *)a2 + 7);
  }
  v22[0] = v9 >> 15;
  v10 = v9 & 0x7FFF;
  v22[1] = v10;
  *(_WORD *)v23 = 0;
  *(_WORD *)&v23[2] = *((_WORD *)v7 + 6);
  *(_WORD *)&v23[4] = *((_WORD *)v7 + 5);
  *(_WORD *)&v23[6] = *((_WORD *)v7 + 4);
  *(_WORD *)&v23[8] = *((_WORD *)v7 + 3);
  *(_WORD *)&v23[10] = *((_WORD *)v7 + 2);
  *(_WORD *)&v23[12] = *((_WORD *)v7 + 1);
  *(_WORD *)&v23[14] = *(_WORD *)v7;
  *(_WORD *)&v23[16] = 0;
  *a1 = 0;
  v11 = 1;
  if ( v10 < 0x3FFFu )
    return v11;
  v12 = v10 - 16382;
  v11 = 5;
  if ( v12 > a3 )
    return v11;
  if ( v10 < 0x400Fu )
  {
    eshift((__int64)v22, v12, a5, a6);
    v14 = *(unsigned __int16 *)v23;
    if ( !v22[0] )
      goto LABEL_24;
  }
  else
  {
    v13 = v12 & 0xFFFFFFF0;
    eshift((__int64)v22, v12 - (v12 & 0xFFFFFFF0), a5, a6);
    v14 = 15 - (v12 & 0xFFFFFFF0);
    v15 = -1;
    if ( (int)v14 > -2 )
      v15 = 15 - (v12 & 0xFFFFFFF0);
    v16 = v13 + v15;
    if ( (((unsigned __int8)(v16 >> 4) + 1) & 3) != 0 )
    {
      v14 = *(unsigned __int16 *)v23;
      v17 = -(((unsigned __int8)(v16 >> 4) + 1) & 3);
      do
      {
        *(_OWORD *)v23 = *(_OWORD *)&v23[2];
        *(_WORD *)&v23[16] = 0;
        v14 = *(unsigned __int16 *)v23 | (v14 << 16);
        v13 -= 16;
        ++v17;
      }
      while ( v17 );
      if ( v16 < 0x30 )
      {
LABEL_15:
        if ( !v22[0] )
        {
LABEL_24:
          *a1 = v14;
          return 1;
        }
        goto LABEL_16;
      }
    }
    else if ( v16 < 0x30 )
    {
      goto LABEL_15;
    }
    do
    {
      *(_OWORD *)v23 = *(_OWORD *)&v23[2];
      *(_WORD *)&v23[16] = 0;
      v18 = *(_DWORD *)v23;
      *(_OWORD *)v23 = *(_OWORD *)&v23[2];
      *(_WORD *)&v23[16] = 0;
      v19 = *(unsigned __int16 *)v23;
      *(_OWORD *)v23 = *(_OWORD *)&v23[2];
      *(_WORD *)&v23[16] = 0;
      v20 = *(unsigned __int16 *)v23;
      *(_OWORD *)v23 = *(_OWORD *)&v23[2];
      *(_WORD *)&v23[16] = 0;
      v13 -= 64;
    }
    while ( v13 > 0 );
    v14 = ((((unsigned __int64)(v19 | (unsigned int)(v18 << 16)) << 16) | v20) << 16) | *(unsigned __int16 *)v23;
    if ( !v22[0] )
      goto LABEL_24;
  }
LABEL_16:
  if ( a3 != 64 )
  {
    v14 = -(__int64)v14;
    goto LABEL_24;
  }
  return v11;
}
// 116330: using guessed type __int64 qword_116330;
