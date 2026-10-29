__int64 __fastcall sub_22A2D30(int a1, __int64 a2)
{
  __int64 result; // rax
  char *v4; // rax
  char *v5; // rsi
  char *v6; // rax
  char *v7; // rax
  const char *v8; // rdx
  char *v9; // rax
  char *v10; // rax
  char *v11; // rsi
  char *v12; // rax
  char *v13; // rax
  char *v14; // rax
  _QWORD *v15; // rax
  char *v16; // rax
  char *v17; // rsi
  char *v18; // rax
  char *v19; // rsi
  char *v20; // rax
  char *v21; // rax
  char *v22; // rax
  const char *v23; // [rsp+0h] [rbp-18h] BYREF
  __int64 v24; // [rsp+8h] [rbp-10h]

  if ( a1 > 8 || !a1 )
    return 0;
  switch ( a1 )
  {
    case 1:
      v12 = *(char **)(a2 + 8);
      v11 = *(char **)(a2 + 16);
      v24 = 9;
      v23 = "+fpuv2_sf";
      if ( v12 == v11 )
      {
        sub_1075D80(a2, v11, &v23);
        v11 = *(char **)(a2 + 16);
        v13 = *(char **)(a2 + 8);
      }
      else
      {
        *(_QWORD *)v12 = "+fpuv2_sf";
        v13 = v12 + 16;
        *((_QWORD *)v13 - 1) = 9;
        *(_QWORD *)(a2 + 8) = v13;
      }
      v24 = 9;
      v23 = "+fpuv2_df";
      if ( v13 == v11 )
        goto LABEL_29;
      goto LABEL_19;
    case 2:
      v16 = *(char **)(a2 + 8);
      v17 = *(char **)(a2 + 16);
      v24 = 9;
      v23 = "+fpuv2_sf";
      if ( v16 == v17 )
      {
        sub_1075D80(a2, v17, &v23);
        v17 = *(char **)(a2 + 16);
        v7 = *(char **)(a2 + 8);
      }
      else
      {
        *(_QWORD *)v16 = "+fpuv2_sf";
        v7 = v16 + 16;
        *((_QWORD *)v7 - 1) = 9;
        *(_QWORD *)(a2 + 8) = v7;
      }
      v24 = 9;
      v8 = "+fpuv2_df";
      v23 = "+fpuv2_df";
      if ( v7 == v17 )
        goto LABEL_25;
      goto LABEL_10;
    case 3:
      v18 = *(char **)(a2 + 8);
      v11 = *(char **)(a2 + 16);
      v24 = 9;
      v23 = "+fpuv2_sf";
      if ( v18 == v11 )
      {
        sub_1075D80(a2, v11, &v23);
        v11 = *(char **)(a2 + 16);
        v13 = *(char **)(a2 + 8);
      }
      else
      {
        *(_QWORD *)v18 = "+fpuv2_sf";
        v13 = v18 + 16;
        *((_QWORD *)v13 - 1) = 9;
        *(_QWORD *)(a2 + 8) = v13;
      }
      v24 = 9;
      v23 = "+fpuv2_df";
      if ( v11 == v13 )
      {
LABEL_29:
        sub_1075D80(a2, v11, &v23);
        v11 = *(char **)(a2 + 16);
        v14 = *(char **)(a2 + 8);
      }
      else
      {
LABEL_19:
        *(_QWORD *)v13 = "+fpuv2_df";
        v14 = v13 + 16;
        *((_QWORD *)v14 - 1) = 9;
        *(_QWORD *)(a2 + 8) = v14;
      }
      v24 = 7;
      v23 = "+fdivdu";
      if ( v11 == v14 )
        goto LABEL_15;
      *(_QWORD *)v14 = "+fdivdu";
      v15 = v14 + 16;
      *(v15 - 1) = 7;
      *(_QWORD *)(a2 + 8) = v15;
      return 1;
    case 4:
      v11 = *(char **)(a2 + 8);
      v24 = 9;
      v23 = "+fpuv2_sf";
      if ( v11 == *(char **)(a2 + 16) )
        goto LABEL_15;
      *(_QWORD *)v11 = "+fpuv2_sf";
      v19 = v11 + 16;
      *((_QWORD *)v19 - 1) = 9;
      *(_QWORD *)(a2 + 8) = v19;
      goto LABEL_11;
    case 5:
      v20 = *(char **)(a2 + 8);
      v11 = *(char **)(a2 + 16);
      v24 = 9;
      v23 = "+fpuv3_hf";
      if ( v20 == v11 )
      {
        sub_1075D80(a2, v11, &v23);
        v11 = *(char **)(a2 + 16);
        v21 = *(char **)(a2 + 8);
      }
      else
      {
        *(_QWORD *)v20 = "+fpuv3_hf";
        v21 = v20 + 16;
        *((_QWORD *)v21 - 1) = 9;
        *(_QWORD *)(a2 + 8) = v21;
      }
      v24 = 9;
      v23 = "+fpuv3_hi";
      if ( v21 == v11 )
      {
        sub_1075D80(a2, v11, &v23);
        v11 = *(char **)(a2 + 16);
        v10 = *(char **)(a2 + 8);
      }
      else
      {
        *(_QWORD *)v21 = "+fpuv3_hi";
        v10 = v21 + 16;
        *((_QWORD *)v10 - 1) = 9;
        *(_QWORD *)(a2 + 8) = v10;
      }
      v24 = 9;
      v23 = "+fpuv3_sf";
      if ( v10 == v11 )
        goto LABEL_37;
      goto LABEL_13;
    case 6:
      v22 = *(char **)(a2 + 8);
      v11 = *(char **)(a2 + 16);
      v24 = 9;
      v23 = "+fpuv3_hf";
      if ( v22 == v11 )
      {
        sub_1075D80(a2, v11, &v23);
        v11 = *(char **)(a2 + 16);
        v7 = *(char **)(a2 + 8);
      }
      else
      {
        *(_QWORD *)v22 = "+fpuv3_hf";
        v7 = v22 + 16;
        *((_QWORD *)v7 - 1) = 9;
        *(_QWORD *)(a2 + 8) = v7;
      }
      v24 = 9;
      v8 = "+fpuv3_hi";
      v23 = "+fpuv3_hi";
      if ( v11 == v7 )
        goto LABEL_15;
      goto LABEL_10;
    case 7:
      v4 = *(char **)(a2 + 8);
      v5 = *(char **)(a2 + 16);
      v24 = 9;
      v23 = "+fpuv3_hf";
      if ( v4 == v5 )
      {
        sub_1075D80(a2, v5, &v23);
        v5 = *(char **)(a2 + 16);
        v6 = *(char **)(a2 + 8);
      }
      else
      {
        *(_QWORD *)v4 = "+fpuv3_hf";
        v6 = v4 + 16;
        *((_QWORD *)v6 - 1) = 9;
        *(_QWORD *)(a2 + 8) = v6;
      }
      v24 = 9;
      v23 = "+fpuv3_hi";
      if ( v6 == v5 )
      {
        sub_1075D80(a2, v5, &v23);
        v5 = *(char **)(a2 + 16);
        v7 = *(char **)(a2 + 8);
      }
      else
      {
        *(_QWORD *)v6 = "+fpuv3_hi";
        v7 = v6 + 16;
        *((_QWORD *)v7 - 1) = 9;
        *(_QWORD *)(a2 + 8) = v7;
      }
      v24 = 9;
      v8 = "+fpuv3_sf";
      v23 = "+fpuv3_sf";
      if ( v7 != v5 )
        goto LABEL_10;
LABEL_25:
      sub_1075D80(a2, v7, &v23);
      goto LABEL_11;
    case 8:
      v10 = *(char **)(a2 + 8);
      v11 = *(char **)(a2 + 16);
      v24 = 9;
      v23 = "+fpuv3_sf";
      if ( v10 == v11 )
      {
LABEL_37:
        sub_1075D80(a2, v11, &v23);
        v11 = *(char **)(a2 + 16);
        v7 = *(char **)(a2 + 8);
      }
      else
      {
LABEL_13:
        *(_QWORD *)v10 = "+fpuv3_sf";
        v7 = v10 + 16;
        *((_QWORD *)v7 - 1) = 9;
        *(_QWORD *)(a2 + 8) = v7;
      }
      v24 = 9;
      v8 = "+fpuv3_df";
      v23 = "+fpuv3_df";
      if ( v11 == v7 )
      {
LABEL_15:
        sub_1075D80(a2, v11, &v23);
      }
      else
      {
LABEL_10:
        *(_QWORD *)v7 = v8;
        v9 = v7 + 16;
        *((_QWORD *)v9 - 1) = 9;
        *(_QWORD *)(a2 + 8) = v9;
      }
LABEL_11:
      result = 1;
      break;
  }
  return result;
}
