/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: eadd
// Address: 0x00000000000B8390

//----- (00000000000B8390) ----------------------------------------------------
__int64 __fastcall eadd(_WORD *a1, _WORD *a2, _WORD *a3, char a4, double a5, __m128 a6)
{
  __int16 v8; // si
  int v9; // esi
  __int16 v10; // dx
  __int16 v11; // di
  int v12; // edx
  bool v13; // cc
  int v14; // esi
  unsigned int v15; // ebp
  char v16; // al
  unsigned __int16 v17; // ax
  unsigned __int16 v18; // cx
  unsigned int v19; // edx
  unsigned int v20; // edx
  unsigned int v21; // edx
  unsigned int v22; // esi
  unsigned int v23; // edx
  unsigned int v24; // esi
  unsigned int v25; // edx
  unsigned int v26; // esi
  int v27; // ecx
  unsigned int v28; // ecx
  char v29; // dl
  unsigned int v30; // ecx
  unsigned int v31; // edx
  unsigned int v32; // ecx
  unsigned int v33; // edx
  unsigned int v34; // ecx
  unsigned int v35; // edx
  int v36; // edx
  __int16 v37; // ax
  __m128 v39; // [rsp+0h] [rbp-78h]
  __m128 v40; // [rsp+0h] [rbp-78h]
  int v41; // [rsp+10h] [rbp-68h]
  int v42; // [rsp+10h] [rbp-68h]
  __m128 v43; // [rsp+20h] [rbp-58h] BYREF
  int v44; // [rsp+30h] [rbp-48h]
  unsigned __int16 v45; // [rsp+34h] [rbp-44h]
  __m128 v46; // [rsp+40h] [rbp-38h] BYREF
  int v47; // [rsp+50h] [rbp-28h]
  unsigned __int16 v48; // [rsp+54h] [rbp-24h]
  unsigned __int64 v49; // [rsp+60h] [rbp-18h]

  v49 = __readfsqword(0x28u);
  v8 = a1[7];
  v46.m128_i16[0] = v8 >> 15;
  v9 = v8 & 0x7FFF;
  *(__int32 *)((char *)v46.m128_i32 + 2) = (unsigned __int16)v9;
  v46.m128_i16[3] = a1[6];
  v46.m128_i16[4] = a1[5];
  v46.m128_i16[5] = a1[4];
  v46.m128_i16[6] = a1[3];
  v46.m128_i16[7] = a1[2];
  LOWORD(v47) = a1[1];
  HIWORD(v47) = *a1;
  v48 = 0;
  v10 = a2[7];
  v11 = v10 >> 15;
  v43.m128_i16[0] = v10 >> 15;
  v12 = v10 & 0x7FFF;
  *(__int32 *)((char *)v43.m128_i32 + 2) = (unsigned __int16)v12;
  v43.m128_i16[3] = a2[6];
  v43.m128_i16[4] = a2[5];
  v43.m128_i16[5] = a2[4];
  v43.m128_i16[6] = a2[3];
  v43.m128_i16[7] = a2[2];
  LOWORD(v44) = a2[1];
  HIWORD(v44) = *a2;
  v45 = 0;
  if ( a4 )
    v43.m128_i16[0] = ~v11;
  v13 = v9 <= v12;
  v14 = v9 - v12;
  if ( v13 )
  {
    v15 = v12;
    if ( v14 )
    {
LABEL_5:
      if ( v14 >= -113 )
      {
        v16 = (unsigned int)eshift((__int64)&v46, v14, a5, a6) != 1;
        goto LABEL_23;
      }
LABEL_28:
      v37 = v12 | 0x8000;
      if ( !v43.m128_i16[0] )
        v37 = v12;
      a3[7] = v37;
      a3[6] = v43.m128_i16[3];
      a3[5] = v43.m128_i16[4];
      a3[4] = v43.m128_i16[5];
      a3[3] = v43.m128_i16[6];
      a3[2] = v43.m128_i16[7];
      a3[1] = v44;
      *a3 = HIWORD(v44);
      return 1;
    }
  }
  else
  {
    v41 = v44;
    a5 = *(double *)v43.m128_u64;
    v39 = v43;
    a6 = v46;
    v43 = v46;
    v44 = v47;
    v45 = 0;
    v46 = v39;
    v47 = v41;
    v48 = 0;
    LOWORD(v12) = v43.m128_i16[1];
    v15 = v43.m128_u16[1];
    v14 = -v14;
    if ( v14 )
      goto LABEL_5;
  }
  v17 = v46.m128_u16[2];
  v18 = v43.m128_u16[2];
  if ( v46.m128_i16[2] == v43.m128_i16[2] )
  {
    v17 = v46.m128_u16[3];
    v18 = v43.m128_u16[3];
    if ( v46.m128_i16[3] == v43.m128_i16[3] )
    {
      v17 = v46.m128_u16[4];
      v18 = v43.m128_u16[4];
      if ( v46.m128_i16[4] == v43.m128_i16[4] )
      {
        v17 = v46.m128_u16[5];
        v18 = v43.m128_u16[5];
        if ( v46.m128_i16[5] == v43.m128_i16[5] )
        {
          v17 = v46.m128_u16[6];
          v18 = v43.m128_u16[6];
          if ( v46.m128_i16[6] == v43.m128_i16[6] )
          {
            v17 = v46.m128_u16[7];
            v18 = v43.m128_u16[7];
            if ( v46.m128_i16[7] == v43.m128_i16[7] )
            {
              v17 = v47;
              v18 = v44;
              if ( (_WORD)v47 == (_WORD)v44 )
              {
                v17 = HIWORD(v47);
                v18 = HIWORD(v44);
                if ( HIWORD(v47) == HIWORD(v44) )
                {
                  if ( v46.m128_i16[0] != v43.m128_i16[0] || !(_WORD)v12 )
                  {
                    *(_OWORD *)a3 = 0;
                    return 1;
                  }
                  if ( v15 >= 0x7FFE )
                    goto LABEL_32;
                  LOWORD(v12) = v15 + 1;
                  goto LABEL_28;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v17 > v18 )
  {
    v42 = v44;
    a5 = *(double *)v43.m128_u64;
    v40 = v43;
    a6 = v46;
    v43 = v46;
    v44 = v47;
    v45 = 0;
    v46 = v40;
    v47 = v42;
    v48 = 0;
  }
  v16 = 0;
LABEL_23:
  if ( v46.m128_i16[0] == v43.m128_i16[0] )
  {
    v19 = v48 + v45;
    v45 += v48;
    v20 = HIWORD(v19) + HIWORD(v47) + HIWORD(v44);
    HIWORD(v44) = v20;
    v21 = (HIWORD(v20) & 1) + (unsigned __int16)v47 + (unsigned __int16)v44;
    LOWORD(v44) = v21;
    v22 = (HIWORD(v21) & 1) + v46.m128_u16[7] + v43.m128_u16[7];
    v43.m128_i16[7] += (BYTE2(v21) & 1) + v46.m128_i16[7];
    v23 = (HIWORD(v22) & 1) + v46.m128_u16[6] + v43.m128_u16[6];
    v43.m128_i16[6] += (BYTE2(v22) & 1) + v46.m128_i16[6];
    v24 = (HIWORD(v23) & 1) + v46.m128_u16[5] + v43.m128_u16[5];
    v43.m128_i16[5] += (BYTE2(v23) & 1) + v46.m128_i16[5];
    v25 = (HIWORD(v24) & 1) + v46.m128_u16[4] + v43.m128_u16[4];
    v43.m128_i16[4] += (BYTE2(v24) & 1) + v46.m128_i16[4];
    v26 = (HIWORD(v25) & 1) + v46.m128_u16[3] + v43.m128_u16[3];
    v43.m128_i16[3] += (BYTE2(v25) & 1) + v46.m128_i16[3];
    v27 = v43.m128_u16[2];
    LOWORD(v27) = v46.m128_i16[2] + v43.m128_i16[2];
    v28 = (HIWORD(v26) & 1) + v27;
    v29 = 0;
  }
  else
  {
    v30 = v45 - v48;
    v45 -= v48;
    v31 = HIWORD(v44) - HIWORD(v47) - (HIWORD(v30) & 1);
    HIWORD(v44) = HIWORD(v44) - HIWORD(v47) - (BYTE2(v30) & 1);
    v32 = (unsigned __int16)v44 - (unsigned __int16)v47 - (HIWORD(v31) & 1);
    LOWORD(v44) = v44 - v47 - (BYTE2(v31) & 1);
    v33 = v43.m128_u16[7] - v46.m128_u16[7] - (HIWORD(v32) & 1);
    v43.m128_i16[7] = v43.m128_i16[7] - v46.m128_i16[7] - (BYTE2(v32) & 1);
    v34 = v43.m128_u16[6] - v46.m128_u16[6] - (HIWORD(v33) & 1);
    v43.m128_i16[6] = v43.m128_i16[6] - v46.m128_i16[6] - (BYTE2(v33) & 1);
    v35 = v43.m128_u16[5] - v46.m128_u16[5] - (HIWORD(v34) & 1);
    v43.m128_i16[5] = v43.m128_i16[5] - v46.m128_i16[5] - (BYTE2(v34) & 1);
    v28 = v43.m128_u16[4] - v46.m128_u16[4] - (HIWORD(v35) & 1);
    v43.m128_i16[4] = v43.m128_i16[4] - v46.m128_i16[4] - (BYTE2(v35) & 1);
    v36 = v43.m128_u16[3] - v46.m128_u16[3] - (HIWORD(v28) & 1);
    v43.m128_i16[3] = v43.m128_i16[3] - v46.m128_i16[3] - (BYTE2(v28) & 1);
    LOWORD(v28) = v43.m128_i16[2] - v46.m128_i16[2] - (BYTE2(v36) & 1);
    v29 = 1;
  }
  v43.m128_i16[2] = v28;
  if ( emdnorm((__int64)&v43, v16, v29, v15, 112, a5, a6) )
  {
    LOWORD(v12) = v43.m128_i16[1];
    goto LABEL_28;
  }
LABEL_32:
  *(_OWORD *)a3 = 0;
  return 2;
}
