/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_EDF30
// Address: 0x00000000000EDF30

//----- (00000000000EDF30) ----------------------------------------------------
char *__fastcall sub_EDF30(char *result, unsigned __int64 a2, _QWORD *a3, char *dest)
{
  __int64 *v7; // x24
  unsigned __int64 v8; // x2
  char v9; // w1
  char *v10; // x20
  int v11; // w3
  char *v12; // x0
  char *v13; // x0
  __int64 v14; // x1
  unsigned __int64 v15; // x0
  char *v16; // x0
  __int64 v17; // x0
  unsigned __int64 v18; // x1
  __int64 *v19; // x3
  __int64 *v20; // x3
  char *v21; // x0
  unsigned __int64 v22; // x0
  char *v23; // x0
  __int64 v24; // x1
  int v25; // w3
  char *v26; // x2
  char *v27; // x0
  char *v28; // x0
  char *v29; // x0
  char *v30; // x0
  __int64 v31; // x1
  unsigned __int64 v32; // x0
  char *v33; // x0
  char *v34; // x0
  __int64 v35; // x0
  char *v36; // x2
  __int64 v37; // x1
  char *v38; // x0
  __int64 v39; // [xsp-660h] [xbp-660h] BYREF
  unsigned __int64 v40; // [xsp+68h] [xbp+68h]
  unsigned __int64 v41; // [xsp+78h] [xbp+78h] BYREF
  unsigned __int64 v42; // [xsp+80h] [xbp+80h] BYREF
  unsigned __int64 v43; // [xsp+88h] [xbp+88h] BYREF

  *((_QWORD *)dest + 196) = 0;
  v7 = nullptr;
  while ( (unsigned __int64)result < a2 )
  {
    v8 = *((_QWORD *)dest + 201);
    if ( v8 >= a3[99] + (a3[104] >> 63) )
      break;
    v9 = *result;
    v10 = result + 1;
    v11 = *result & 0xC0;
    if ( v11 == 64 )
    {
      *((_QWORD *)dest + 201) = v8 + (v9 & 0x3F) * *((_QWORD *)dest + 204);
      goto LABEL_58;
    }
    if ( v11 != 128 )
    {
      if ( v11 == 192 )
      {
        *(_DWORD *)&dest[16 * (v9 & 0x3F) + 8] = 0;
        goto LABEL_58;
      }
      switch ( *result )
      {
        case 0:
          goto LABEL_58;
        case 1:
          v40 = (unsigned __int8)dest[1648];
          v13 = (char *)sub_EDEB8(v40, (__int64)a3);
          v10 = sub_EDA48(v40, v13, v10, &v43);
          *((_QWORD *)dest + 201) = v43;
          goto LABEL_58;
        case 2:
          v10 = result + 2;
          *((_QWORD *)dest + 201) = v8 + (unsigned __int8)result[1] * *((_QWORD *)dest + 204);
          goto LABEL_58;
        case 3:
          v10 = result + 3;
          *((_QWORD *)dest + 201) = v8 + *(unsigned __int16 *)(result + 1) * *((_QWORD *)dest + 204);
          goto LABEL_58;
        case 4:
          v10 = result + 5;
          *((_QWORD *)dest + 201) = v8 + *(unsigned int *)(result + 1) * *((_QWORD *)dest + 204);
          goto LABEL_58;
        case 5:
          v12 = sub_ED9E0(result + 1, &v41);
          goto LABEL_16;
        case 6:
        case 8:
          v10 = sub_ED9E0(result + 1, &v41);
          if ( v41 <= 0x61 )
            *(_DWORD *)&dest[16 * v41 + 8] = 0;
          goto LABEL_58;
        case 7:
          v10 = sub_ED9E0(result + 1, &v41);
          if ( v41 <= 0x61 )
            *(_DWORD *)&dest[16 * v41 + 8] = 6;
          goto LABEL_58;
        case 9:
          v16 = sub_ED9E0(result + 1, &v41);
          v10 = sub_ED9E0(v16, &v43);
          if ( v41 > 0x61 )
            goto LABEL_58;
          v17 = 16 * v41;
          *(_DWORD *)&dest[16 * v41 + 8] = 2;
          v18 = v43;
          goto LABEL_56;
        case 10:
          if ( v7 )
          {
            v19 = v7;
            v7 = (__int64 *)v7[196];
          }
          else
          {
            v19 = &v39;
          }
          *((_QWORD *)dest + 196) = memcpy(v19, dest, 0x648u);
          goto LABEL_58;
        case 11:
          v40 = *((_QWORD *)dest + 196);
          memcpy(dest, (const void *)v40, 0x648u);
          v20 = (__int64 *)v40;
          *(_QWORD *)(v40 + 1568) = v7;
          v7 = v20;
          goto LABEL_58;
        case 12:
          v21 = sub_ED9E0(result + 1, &v42);
          *((_QWORD *)dest + 198) = v42;
          v10 = sub_ED9E0(v21, &v42);
          *((_QWORD *)dest + 197) = v42;
          goto LABEL_30;
        case 13:
          v10 = sub_ED9E0(result + 1, &v42);
          *((_QWORD *)dest + 198) = v42;
LABEL_30:
          *((_DWORD *)dest + 400) = 1;
          goto LABEL_58;
        case 14:
          v10 = sub_ED9E0(result + 1, &v42);
          v22 = v42;
          goto LABEL_40;
        case 15:
          *((_QWORD *)dest + 199) = v10;
          *((_DWORD *)dest + 400) = 2;
          v23 = result + 1;
          goto LABEL_49;
        case 16:
          v23 = sub_ED9E0(result + 1, &v41);
          if ( v41 > 0x61 )
            goto LABEL_49;
          v24 = 16 * v41;
          v25 = 3;
          v26 = &dest[16 * v41];
          goto LABEL_48;
        case 17:
          v27 = sub_ED9E0(result + 1, &v41);
          v10 = sub_EDA08(v27, &v43);
          v14 = *((_QWORD *)dest + 203);
          v15 = v43;
          goto LABEL_36;
        case 18:
          v28 = sub_ED9E0(result + 1, &v42);
          *((_QWORD *)dest + 198) = v42;
          v29 = sub_EDA08(v28, &v43);
          *((_DWORD *)dest + 400) = 1;
          v10 = v29;
          goto LABEL_39;
        case 19:
          v10 = sub_EDA08(result + 1, &v43);
LABEL_39:
          v22 = v43 * *((_QWORD *)dest + 203);
LABEL_40:
          *((_QWORD *)dest + 197) = v22;
          goto LABEL_58;
        case 20:
          v30 = sub_ED9E0(result + 1, &v41);
          v10 = sub_ED9E0(v30, &v42);
          v31 = *((_QWORD *)dest + 203);
          v32 = v42;
          goto LABEL_44;
        case 21:
          v33 = sub_ED9E0(result + 1, &v41);
          v10 = sub_EDA08(v33, &v43);
          v31 = *((_QWORD *)dest + 203);
          v32 = v43;
LABEL_44:
          v18 = v32 * v31;
          if ( v41 > 0x61 )
            goto LABEL_58;
          v17 = 16 * v41;
          *(_DWORD *)&dest[16 * v41 + 8] = 4;
          break;
        case 22:
          v23 = sub_ED9E0(result + 1, &v41);
          if ( v41 <= 0x61 )
          {
            v24 = 16 * v41;
            v25 = 5;
            v26 = &dest[16 * v41];
LABEL_48:
            *((_DWORD *)v26 + 2) = v25;
            *(_QWORD *)&dest[v24] = v23;
          }
LABEL_49:
          v34 = sub_ED9E0(v23, &v42);
          v10 = &v34[v42];
          goto LABEL_58;
        case 45:
          v35 = 16;
          v36 = dest + 256;
          v41 = 16;
          v37 = 0;
          do
          {
            *((_DWORD *)v36 + 2) = 1;
            ++v35;
            *(_QWORD *)v36 = v37;
            v36 += 16;
            v37 += 8;
          }
          while ( v35 != 32 );
          goto LABEL_58;
        case 46:
          v10 = sub_ED9E0(result + 1, &v42);
          a3[106] = v42;
          goto LABEL_58;
        case 47:
          v38 = sub_ED9E0(result + 1, &v41);
          v10 = sub_ED9E0(v38, &v42);
          if ( v41 > 0x61 )
            goto LABEL_58;
          v17 = 16 * v41;
          v18 = -(__int64)(*((_QWORD *)dest + 203) * v42);
          *(_DWORD *)&dest[16 * v41 + 8] = 1;
          break;
        default:
          abort();
      }
      goto LABEL_56;
    }
    v12 = result + 1;
    v41 = v9 & 0x3F;
LABEL_16:
    v10 = sub_ED9E0(v12, &v42);
    v14 = *((_QWORD *)dest + 203);
    v15 = v42;
LABEL_36:
    v18 = v15 * v14;
    if ( v41 <= 0x61 )
    {
      v17 = 16 * v41;
      *(_DWORD *)&dest[16 * v41 + 8] = 1;
LABEL_56:
      *(_QWORD *)&dest[v17] = v18;
    }
LABEL_58:
    result = v10;
  }
  return result;
}
