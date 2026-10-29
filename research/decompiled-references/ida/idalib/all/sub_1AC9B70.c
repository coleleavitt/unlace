__int64 __fastcall sub_1AC9B70(__int64 a1, char *a2, char a3)
{
  __int64 v3; // rcx
  char v4; // al
  unsigned __int8 v5; // dl
  __int64 v6; // rcx
  unsigned int v7; // ebp
  unsigned __int8 v9; // dl
  __int64 *v10; // [rsp+0h] [rbp-D8h] BYREF
  char v11; // [rsp+Ch] [rbp-CCh]
  __m128 v12; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v13; // [rsp+20h] [rbp-B8h] BYREF
  unsigned __int8 v14; // [rsp+28h] [rbp-B0h]
  char v15; // [rsp+29h] [rbp-AFh]
  __int64 v16; // [rsp+2Ch] [rbp-ACh]
  int v17; // [rsp+34h] [rbp-A4h]
  unsigned __int8 v18; // [rsp+B8h] [rbp-20h]

  v3 = *(_QWORD *)(a2 + 4);
  v4 = a2[1];
  v11 = a3;
  v5 = *a2;
  v16 = v3;
  LODWORD(v3) = *((_DWORD *)a2 + 3);
  v13 = a1;
  v17 = v3;
  v6 = (unsigned __int8)a2[144];
  v14 = v5;
  v15 = v4;
  v18 = -1;
  if ( (_BYTE)v6 != 0xFF )
  {
    funcs_1AC9BD1[v6]();
    v5 = *a2;
    v18 = a2[144];
    v4 = a2[1];
  }
  v10 = &v13;
  v12 = _mm_loadh_ps((const double *)&v10);
  if ( v5 <= 3u )
  {
    switch ( v4 )
    {
      case 5:
      case 6:
      case 7:
        goto LABEL_5;
      case 8:
      case 9:
      case 10:
        goto LABEL_13;
      case 11:
      case 12:
      case 13:
        goto LABEL_9;
      case 14:
      case 15:
      case 16:
        goto LABEL_15;
      default:
        goto LABEL_19;
    }
  }
  if ( (unsigned __int8)(v5 - 9) <= 2u )
  {
    switch ( v4 )
    {
      case 5:
      case 6:
      case 7:
        goto LABEL_5;
      case 8:
      case 9:
      case 10:
LABEL_13:
        v9 = 54;
        goto LABEL_10;
      case 11:
      case 12:
      case 13:
LABEL_9:
        v9 = 57;
        goto LABEL_10;
      case 14:
      case 15:
      case 16:
LABEL_15:
        v9 = 17;
        goto LABEL_10;
      default:
        goto LABEL_19;
    }
  }
  switch ( v4 )
  {
    case 5:
    case 6:
    case 7:
LABEL_5:
      v7 = sub_1AC9380((unsigned __int8 **)&v12, (__int64 ****)&v12.m128_u64[1], 0x3Cu);
      goto LABEL_6;
    case 8:
    case 9:
    case 10:
      v9 = 38;
      goto LABEL_10;
    case 11:
    case 12:
    case 13:
      v9 = 41;
      goto LABEL_10;
    case 14:
    case 15:
    case 16:
      v9 = 1;
LABEL_10:
      v7 = sub_1AC9380((unsigned __int8 **)&v12, (__int64 ****)&v12.m128_u64[1], v9);
LABEL_6:
      if ( v18 != 0xFF )
        funcs_1576A39[v18]();
      return v7;
    default:
LABEL_19:
      abort();
  }
}
