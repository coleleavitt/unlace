/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D9450
// Address: 0x000D9450

//----- (000D9450) --------------------------------------------------------
unsigned __int8 *__usercall sub_D9450@<eax>(unsigned __int8 *result@<eax>, unsigned int a2@<edx>, _DWORD *a3, int a4)
{
  unsigned int v4; // esi
  int v5; // edx
  char v6; // cl
  _BYTE *v7; // eax
  int v8; // edi
  unsigned int v9; // edx
  int v10; // eax
  unsigned __int8 v11; // dl
  char v12; // si
  _BYTE *v13; // eax
  int v14; // edx
  int v15; // ecx
  _BYTE *v16; // eax
  int v17; // ecx
  _BYTE *v18; // eax
  int *v19; // edx
  _BYTE *v20; // eax
  int v21; // edx
  _DWORD *v22; // eax
  _DWORD *v23; // eax
  _DWORD *v24; // eax
  _DWORD *v25; // ecx
  _BYTE *v26; // eax
  int v27; // eax
  int v28; // esi
  int v29; // eax
  unsigned int v30; // edi
  _BYTE *v31; // eax
  _DWORD *v32; // edx
  _BYTE *v33; // eax
  _BYTE *v34; // eax
  _BYTE *v35; // eax
  _BYTE *v36; // eax
  _BYTE *v37; // eax
  _BYTE *v38; // eax
  _BYTE *v39; // eax
  _DWORD v40[48]; // [esp-C0h] [ebp-F8h] BYREF
  unsigned int v41; // [esp+0h] [ebp-38h]
  _DWORD *v42; // [esp+4h] [ebp-34h]
  unsigned int *v43; // [esp+8h] [ebp-30h]
  unsigned int v44; // [esp+Ch] [ebp-2Ch]
  unsigned int v45; // [esp+14h] [ebp-24h] BYREF
  int v46; // [esp+18h] [ebp-20h] BYREF
  _DWORD v47[7]; // [esp+1Ch] [ebp-1Ch] BYREF

  v41 = a2;
  v42 = nullptr;
  *(_DWORD *)(a4 + 144) = 0;
  v43 = &v45;
  while ( (unsigned int)result < v41 )
  {
    v4 = *(_DWORD *)(a4 + 164);
    v44 = a3[24];
    if ( v4 >= a3[19] + (v44 >> 31) )
      break;
    v5 = *result;
    v44 = (unsigned int)(result + 1);
    v6 = v5 & 0xC0;
    if ( (v5 & 0xC0) == 0x40 )
    {
      *(_DWORD *)(a4 + 164) = v4 + *(_DWORD *)(a4 + 176) * (v5 & 0x3F);
    }
    else if ( v6 == (char)0x80 )
    {
      v45 = v5 & 0x3F;
      v7 = sub_D9016((_BYTE *)v44, &v46);
      v8 = a4;
      v9 = v45;
      v44 = (unsigned int)v7;
      v10 = *(_DWORD *)(a4 + 172) * v46;
      if ( v45 <= 0x11 )
      {
LABEL_46:
        v19 = (int *)(v8 + 8 * v9);
LABEL_20:
        v19[1] = 1;
LABEL_21:
        *v19 = v10;
      }
    }
    else
    {
      if ( v6 != -64 )
      {
        switch ( v5 )
        {
          case 0:
          case 45:
            goto LABEL_61;
          case 1:
            v12 = *(_BYTE *)(a4 + 184);
            v13 = (_BYTE *)sub_D93ED(v12, (int)a3);
            v40[47] = v14;
            v40[46] = v14;
            v44 = (unsigned int)sub_D9080(v12, v13, (_BYTE *)v44, v47);
            *(_DWORD *)(a4 + 164) = v47[0];
            goto LABEL_61;
          case 2:
            v15 = result[1];
            v16 = result + 2;
            *(_DWORD *)(a4 + 164) = *(_DWORD *)(a4 + 176) * v15 + v4;
            goto LABEL_16;
          case 3:
            v17 = *(unsigned __int16 *)(result + 1);
            v16 = result + 3;
            *(_DWORD *)(a4 + 164) = *(_DWORD *)(a4 + 176) * v17 + v4;
            goto LABEL_16;
          case 4:
            v16 = result + 5;
            *(_DWORD *)(a4 + 164) = *((_DWORD *)v16 - 1) * *(_DWORD *)(a4 + 176) + v4;
            goto LABEL_16;
          case 5:
            v18 = sub_D9016((_BYTE *)v44, v43);
            v44 = (unsigned int)sub_D9016(v18, &v46);
            v10 = *(_DWORD *)(a4 + 172) * v46;
            if ( v45 > 0x11 )
              goto LABEL_61;
            v19 = (int *)(a4 + 8 * v45);
            goto LABEL_20;
          case 6:
            v44 = (unsigned int)sub_D9016((_BYTE *)v44, v43);
            if ( v45 <= 0x11 )
              *(_DWORD *)(a4 + 8 * v45 + 4) = 0;
            goto LABEL_61;
          case 7:
            v44 = (unsigned int)sub_D9016((_BYTE *)v44, v43);
            if ( v45 <= 0x11 )
              *(_DWORD *)(a4 + 8 * v45 + 4) = 6;
            goto LABEL_61;
          case 8:
            v44 = (unsigned int)sub_D9016((_BYTE *)v44, v43);
            if ( v45 <= 0x11 )
              *(_DWORD *)(a4 + 8 * v45 + 4) = 0;
            goto LABEL_61;
          case 9:
            v20 = sub_D9016((_BYTE *)v44, v43);
            v44 = (unsigned int)sub_D9016(v20, v47);
            if ( v45 <= 0x11 )
            {
              v21 = v47[0];
              v22 = (_DWORD *)(a4 + 8 * v45);
              v22[1] = 2;
              *v22 = v21;
            }
            goto LABEL_61;
          case 10:
            if ( v42 )
            {
              v23 = v42;
              v42 = (_DWORD *)v42[36];
            }
            else
            {
              v23 = v40;
            }
            qmemcpy(v23, (const void *)a4, 0xA4u);
            *(_DWORD *)(a4 + 144) = v23;
            goto LABEL_61;
          case 11:
            v24 = *(_DWORD **)(a4 + 144);
            qmemcpy((void *)a4, v24, 0xA4u);
            v25 = v42;
            v42 = v24;
            v24[36] = v25;
            goto LABEL_61;
          case 12:
            v26 = sub_D9016((_BYTE *)v44, &v46);
            *(_DWORD *)(a4 + 152) = v46;
            v44 = (unsigned int)sub_D9016(v26, &v46);
            *(_DWORD *)(a4 + 148) = v46;
            v27 = a4;
            goto LABEL_37;
          case 13:
            v44 = (unsigned int)sub_D9016((_BYTE *)v44, &v46);
            *(_DWORD *)(a4 + 152) = v46;
            v27 = a4;
LABEL_37:
            *(_DWORD *)(v27 + 160) = 1;
            goto LABEL_61;
          case 14:
            v28 = a4;
            v44 = (unsigned int)sub_D9016((_BYTE *)v44, &v46);
            v29 = v46;
            goto LABEL_49;
          case 15:
            v30 = v44;
            *(_DWORD *)(a4 + 160) = 2;
            *(_DWORD *)(a4 + 156) = v30;
            v31 = (_BYTE *)v30;
            goto LABEL_43;
          case 16:
            v31 = sub_D9016((_BYTE *)v44, v43);
            if ( v45 > 0x11 )
              goto LABEL_43;
            v32 = (_DWORD *)(a4 + 8 * v45);
            v32[1] = 3;
            goto LABEL_42;
          case 17:
            v34 = sub_D9016((_BYTE *)v44, v43);
            v35 = sub_D9041(v34, v47);
            v9 = v45;
            v44 = (unsigned int)v35;
            v10 = *(_DWORD *)(a4 + 172) * v47[0];
            if ( v45 > 0x11 )
              goto LABEL_61;
            v8 = a4;
            goto LABEL_46;
          case 18:
            v36 = sub_D9016((_BYTE *)v44, &v46);
            *(_DWORD *)(a4 + 152) = v46;
            v44 = (unsigned int)sub_D9041(v36, v47);
            *(_DWORD *)(a4 + 160) = 1;
            *(_DWORD *)(a4 + 148) = *(_DWORD *)(a4 + 172) * v47[0];
            goto LABEL_61;
          case 19:
            v44 = (unsigned int)sub_D9041((_BYTE *)v44, v47);
            v28 = a4;
            v29 = *(_DWORD *)(a4 + 172) * v47[0];
LABEL_49:
            *(_DWORD *)(v28 + 148) = v29;
            goto LABEL_61;
          case 20:
            v37 = sub_D9016((_BYTE *)v44, v43);
            v44 = (unsigned int)sub_D9016(v37, &v46);
            v10 = *(_DWORD *)(a4 + 172) * v46;
            if ( v45 > 0x11 )
              goto LABEL_61;
            v19 = (int *)(a4 + 8 * v45);
            goto LABEL_54;
          case 21:
            v38 = sub_D9016((_BYTE *)v44, v43);
            v44 = (unsigned int)sub_D9041(v38, v47);
            v10 = *(_DWORD *)(a4 + 172) * v47[0];
            if ( v45 > 0x11 )
              goto LABEL_61;
            v19 = (int *)(a4 + 8 * v45);
LABEL_54:
            v19[1] = 4;
            goto LABEL_21;
          case 22:
            v31 = sub_D9016((_BYTE *)v44, v43);
            if ( v45 > 0x11 )
              goto LABEL_43;
            v32 = (_DWORD *)(a4 + 8 * v45);
            v32[1] = 5;
LABEL_42:
            *v32 = v31;
LABEL_43:
            v33 = sub_D9016(v31, &v46);
            v16 = &v33[v46];
LABEL_16:
            v44 = (unsigned int)v16;
            goto LABEL_61;
          case 46:
            v44 = (unsigned int)sub_D9016((_BYTE *)v44, &v46);
            a3[26] = v46;
            goto LABEL_61;
          case 47:
            v39 = sub_D9016((_BYTE *)v44, v43);
            v44 = (unsigned int)sub_D9016(v39, &v46);
            if ( v45 > 0x11 )
              goto LABEL_61;
            v10 = -(v46 * *(_DWORD *)(a4 + 172));
            v19 = (int *)(a4 + 8 * v45);
            v19[1] = 1;
            goto LABEL_21;
          default:
            abort();
            return result;
        }
      }
      v11 = v5 & 0x3F;
      v45 = v11;
      if ( v11 <= 0x11u )
        *(_DWORD *)(a4 + 8 * v11 + 4) = 0;
    }
LABEL_61:
    result = (unsigned __int8 *)v44;
  }
  return result;
}
// D9561: variable 'v14' is possibly undefined
